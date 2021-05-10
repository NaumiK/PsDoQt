#ifndef CYLINDERVIEW_H
#define CYLINDERVIEW_H

#include "isdfmapvew.h"
#include "SDFs/cylinder.h"
#include <QObject>
#include <QGraphicsItem>

namespace PsDO::Views
{
    class CylinderView : public QObject, public QGraphicsItem, public ISDFMapVew
    {
        Q_OBJECT
    private:
        PsDO::SDF::Cylinder *m_sdf;

    public:
        CylinderView(PsDO::SDF::Cylinder *sdf = nullptr, QObject *parent = nullptr);

        PsDO::SDF::Cylinder *getSDF() override;
        void setSDF(PsDO::SDF::ISDF *SDF = nullptr) override;
        void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget = nullptr) override;
        QRectF boundingRect() const override;
    };

}    // namespace PsDO::Views
#endif    // CYLINDERVIEW_H
