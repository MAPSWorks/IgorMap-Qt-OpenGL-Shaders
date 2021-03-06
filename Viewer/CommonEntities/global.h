#ifndef GLOBAL_H
#define GLOBAL_H

#include <QDebug>
#include <QColor>

static constexpr quint8 maxNumberOfSectors = 10;

static constexpr quint8 currentScreenIndex = 0;

struct OpenGLRectF {
public:
    Q_DECL_CONSTEXPR OpenGLRectF() noexcept : xp(0.), yp(0.), w(0.), h(0.) {}
    Q_DECL_CONSTEXPR OpenGLRectF(qreal left, qreal bottom, qreal width, qreal height) noexcept :
        xp(left), yp(bottom), w(width), h(height) {}
    Q_DECL_CONSTEXPR inline bool isNull() const noexcept {
        return w == 0. && h == 0.;
    }
    Q_DECL_CONSTEXPR inline qreal left() const noexcept { return xp; }
    Q_DECL_CONSTEXPR inline qreal top() const noexcept { return yp + h; }
    Q_DECL_CONSTEXPR inline qreal right() const noexcept { return xp + w; }
    Q_DECL_CONSTEXPR inline qreal bottom() const noexcept { return yp; }

    Q_DECL_RELAXED_CONSTEXPR inline void setWidth(qreal aw) noexcept { w = aw; }
    Q_DECL_RELAXED_CONSTEXPR inline void setHeight(qreal ah) noexcept { h = ah; }
    Q_DECL_RELAXED_CONSTEXPR inline void setX(qreal pos) noexcept { xp = pos; }
    Q_DECL_RELAXED_CONSTEXPR inline void setY(qreal pos) noexcept { yp = pos; }

    Q_DECL_CONSTEXPR inline qreal x() const noexcept { return xp; }
    Q_DECL_CONSTEXPR inline qreal y() const noexcept { return yp; }
    Q_DECL_CONSTEXPR inline qreal width() const noexcept { return w; }
    Q_DECL_CONSTEXPR inline qreal height() const noexcept { return h; }

    Q_DECL_RELAXED_CONSTEXPR inline void moveLeft(qreal pos) noexcept { xp -= pos; }
    Q_DECL_RELAXED_CONSTEXPR inline void moveTop(qreal pos) noexcept { yp += pos; }
    Q_DECL_RELAXED_CONSTEXPR inline void moveRight(qreal pos) noexcept { xp += pos; }
    Q_DECL_RELAXED_CONSTEXPR inline void moveBottom(qreal pos) noexcept { yp -= pos; }
    /*Q_DECL_RELAXED_CONSTEXPR inline void moveTopLeft(const QPointF &p) noexcept { moveLeft(p.x()); moveTop(p.y()); }
    Q_DECL_RELAXED_CONSTEXPR inline void moveBottomRight(const QPointF &p) noexcept { moveRight(p.x()); moveBottom(p.y()); }
    Q_DECL_RELAXED_CONSTEXPR inline void moveTopRight(const QPointF &p) noexcept { moveRight(p.x()); moveTop(p.y()); }
    Q_DECL_RELAXED_CONSTEXPR inline void moveBottomLeft(const QPointF &p) noexcept { moveLeft(p.x()); moveBottom(p.y()); }*/

private:
    qreal xp;
    qreal yp;
    qreal w;
    qreal h;
};

enum WidgetTypes {
    //VisualControl,
    FunctionalControl,
    Targeting,
    KTAInfo,
    Customizing,
    Replay,
    Plotter,
    PlotterColorScheme,
    DSPControl,
    IT,
    Track,
    SignalNoiseRatio,
    MapDebug,
    StateMachine,
    BioDefense,
    Training
};

enum ItemState {
    Active,
    Excluded,
    Empty
};

struct RayInfo {
    RayInfo() : az(0), ugm(0)/*, id(0), mode(0)*/ {}
    RayInfo(float _az, float _ugm/*, int _id, quint8 _mode*/) :
        az(_az), ugm(_ugm)/*, id(_id), mode(_mode)*/ {}
    float az;
    float ugm;
    /*int id;
    quint8 mode;*/
};

using RaySet = QMap< int, QVector<RayInfo> >;

struct SceneCustomDataInit {
    SceneCustomDataInit() {}
    QColor backgroundColor;
    QColor grideColor;
    QColor grideTextColor;
    float grideTextSize;
    bool grideDistMark;
    bool grideAzMark;

    QColor ktaPOIColor;
    float ktaPOISize;
    QColor ktaVOIColor;
    float ktaVOISize;

    QColor sectorsColor;

    QColor rayColor;
    float rayDistMax;

    QColor traceColor;
    QColor traceLBColor;
    QColor traceLBTextColor;
    float traceLBTextSize;
};

enum TextSizeAction {
    Increas,
    Decreas,
    Reset
};

enum ThemeEnum {
    Light,
    Dark,
    Custom
};

struct Vertex {
    Vertex() : x(0), y(0) {}
    Vertex(float tx, float ty) : x(tx), y(ty) {}
    friend bool operator<(const Vertex &l, const Vertex &r)
    {
        if (l.x < r.x)
            return true;
        else if (qFuzzyCompare(l.x, r.x)) {
            if (l.y < r.y)
                return true;
            else
                return false;
        }
        else
            return false;
    }
    friend bool operator==(const Vertex &l, const Vertex &r)
    {
        if (qFuzzyCompare(l.x, r.x) && qFuzzyCompare(l.y, r.y))
            return true;
        else
            return false;
    }
    friend bool operator!=(const Vertex &l, const Vertex &r)
    {
        if (!qFuzzyCompare(l.x, r.x) || !qFuzzyCompare(l.y, r.y))
            return true;
        else
            return false;
    }

    float x;
    float y;
};

/*float deg360TransitionCheck(float ang) {
    if (ang > 360) {
        ang -= 360;
    }
    else if (ang < 0) {
        ang += 360;
    }
    return ang;
}*/

enum DSPType {
    None,
    DSP2,
    DSP20
};

namespace TableAttributes {

    const QString offStr("????????"), onStr("??????"),
                    normalPriorityStr("????????????????????"),
                    hightPriorityStr("??????????????"),
                    dsp2Str("2 ????"), dsp20Str("20 ????"),
                    reflSignal("???? ?????????????????????? ????????."),
                    respSignal("???? ?????????????????? ????????."),
                    dsp("??????"),
                    reflDSP("?????? + ??????"),respDSP("?????? + ??????"),
                    reflRespSignal("???? ??????. ?? ??????. ????????."),
                    threeSets("3 ??????????."),
                    fourSets("4 ??????????."),
                    threeSetsPlusExtra("3 ??????????. + 1 ??????."),
                    autoSets("??????????????????"),
                    setOfLFM("?????? ??????"), setOfRI("?????? ????"),
                    respSignalLFM("???? ??????????????????(??????)"),
                    respSignalRI("???? ??????????????????(????)");

    enum ColumnName {
        TrackID = 0,
        Priority = 1,
        WorkMode = 2,
        Letter = 3,
        DSP = 4,
        CT = 5,
        Plotting = 6,
        Trace = 7
    };
}

namespace ProgramWorkMode {
    enum Mode {
        RegularWork,
        Training,
        ReplayRegistration
    };
}

const QString dspDataPath("./DSP/Data/");


#endif // GLOBAL_H
