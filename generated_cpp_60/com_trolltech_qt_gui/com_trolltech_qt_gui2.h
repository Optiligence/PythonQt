#include <PythonQt.h>
#include <QObject>
#include <QVariant>
#include <qevent.h>
#include <qlayoutitem.h>
#include <qscrollerproperties.h>
#include <qstringlistmodel.h>
#include <qstylefactory.h>
#include <qstyleoption.h>
#include <qtransform.h>



class PythonQtShell_QResizeEvent : public QResizeEvent
{
public:
    PythonQtShell_QResizeEvent(QResizeEvent&  arg__1):QResizeEvent(arg__1),_wrapper(NULL) {};
    PythonQtShell_QResizeEvent(const QSize&  size, const QSize&  oldSize):QResizeEvent(size, oldSize),_wrapper(NULL) {};

   ~PythonQtShell_QResizeEvent();

virtual QResizeEvent*  clone() const;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QResizeEvent : public QResizeEvent
{ public:
inline QResizeEvent&  promoted_operator_assign(QResizeEvent&  arg__1) { return this->operator=(arg__1); }
inline QResizeEvent*  py_q_clone() const { return QResizeEvent::clone(); }
};

class PythonQtWrapper_QResizeEvent : public QObject
{ Q_OBJECT
public:
public slots:
QResizeEvent* new_QResizeEvent(const QSize&  size, const QSize&  oldSize);
void delete_QResizeEvent(QResizeEvent* obj) { delete obj; }
   QResizeEvent*  clone(QResizeEvent* theWrappedObject) const;
   QResizeEvent*  py_q_clone(QResizeEvent* theWrappedObject) const{  return (((PythonQtPublicPromoter_QResizeEvent*)theWrappedObject)->py_q_clone());}
   const QSize*  oldSize(QResizeEvent* theWrappedObject) const;
   QResizeEvent*  operator_assign(QResizeEvent* theWrappedObject, QResizeEvent&  arg__1);
   const QSize*  size(QResizeEvent* theWrappedObject) const;
};





class PythonQtShell_QScreenOrientationChangeEvent : public QScreenOrientationChangeEvent
{
public:
    PythonQtShell_QScreenOrientationChangeEvent(QScreen*  screen, Qt::ScreenOrientation  orientation):QScreenOrientationChangeEvent(screen, orientation),_wrapper(NULL) {};
    PythonQtShell_QScreenOrientationChangeEvent(QScreenOrientationChangeEvent&  arg__1):QScreenOrientationChangeEvent(arg__1),_wrapper(NULL) {};

   ~PythonQtShell_QScreenOrientationChangeEvent();

virtual QScreenOrientationChangeEvent*  clone() const;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QScreenOrientationChangeEvent : public QScreenOrientationChangeEvent
{ public:
inline QScreenOrientationChangeEvent&  promoted_operator_assign(QScreenOrientationChangeEvent&  arg__1) { return this->operator=(arg__1); }
inline QScreenOrientationChangeEvent*  py_q_clone() const { return QScreenOrientationChangeEvent::clone(); }
};

class PythonQtWrapper_QScreenOrientationChangeEvent : public QObject
{ Q_OBJECT
public:
public slots:
QScreenOrientationChangeEvent* new_QScreenOrientationChangeEvent(QScreen*  screen, Qt::ScreenOrientation  orientation);
void delete_QScreenOrientationChangeEvent(QScreenOrientationChangeEvent* obj) { delete obj; }
   QScreenOrientationChangeEvent*  clone(QScreenOrientationChangeEvent* theWrappedObject) const;
   QScreenOrientationChangeEvent*  py_q_clone(QScreenOrientationChangeEvent* theWrappedObject) const{  return (((PythonQtPublicPromoter_QScreenOrientationChangeEvent*)theWrappedObject)->py_q_clone());}
   QScreenOrientationChangeEvent*  operator_assign(QScreenOrientationChangeEvent* theWrappedObject, QScreenOrientationChangeEvent&  arg__1);
   Qt::ScreenOrientation  orientation(QScreenOrientationChangeEvent* theWrappedObject) const;
   QScreen*  screen(QScreenOrientationChangeEvent* theWrappedObject) const;
};





class PythonQtShell_QScrollEvent : public QScrollEvent
{
public:
    PythonQtShell_QScrollEvent(QScrollEvent&  arg__1):QScrollEvent(arg__1),_wrapper(NULL) {};
    PythonQtShell_QScrollEvent(const QPointF&  contentPos, const QPointF&  overshoot, QScrollEvent::ScrollState  scrollState):QScrollEvent(contentPos, overshoot, scrollState),_wrapper(NULL) {};

   ~PythonQtShell_QScrollEvent();

virtual QScrollEvent*  clone() const;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QScrollEvent : public QScrollEvent
{ public:
inline QScrollEvent&  promoted_operator_assign(QScrollEvent&  arg__1) { return this->operator=(arg__1); }
inline QScrollEvent*  py_q_clone() const { return QScrollEvent::clone(); }
};

class PythonQtWrapper_QScrollEvent : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ScrollState )
enum ScrollState{
  ScrollStarted = QScrollEvent::ScrollStarted,   ScrollUpdated = QScrollEvent::ScrollUpdated,   ScrollFinished = QScrollEvent::ScrollFinished};
public slots:
QScrollEvent* new_QScrollEvent(const QPointF&  contentPos, const QPointF&  overshoot, QScrollEvent::ScrollState  scrollState);
void delete_QScrollEvent(QScrollEvent* obj) { delete obj; }
   QScrollEvent*  clone(QScrollEvent* theWrappedObject) const;
   QScrollEvent*  py_q_clone(QScrollEvent* theWrappedObject) const{  return (((PythonQtPublicPromoter_QScrollEvent*)theWrappedObject)->py_q_clone());}
   QPointF  contentPos(QScrollEvent* theWrappedObject) const;
   QScrollEvent*  operator_assign(QScrollEvent* theWrappedObject, QScrollEvent&  arg__1);
   QPointF  overshootDistance(QScrollEvent* theWrappedObject) const;
   QScrollEvent::ScrollState  scrollState(QScrollEvent* theWrappedObject) const;
};





class PythonQtShell_QScrollPrepareEvent : public QScrollPrepareEvent
{
public:
    PythonQtShell_QScrollPrepareEvent(QScrollPrepareEvent&  arg__1):QScrollPrepareEvent(arg__1),_wrapper(NULL) {};
    PythonQtShell_QScrollPrepareEvent(const QPointF&  startPos):QScrollPrepareEvent(startPos),_wrapper(NULL) {};

   ~PythonQtShell_QScrollPrepareEvent();

virtual QScrollPrepareEvent*  clone() const;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QScrollPrepareEvent : public QScrollPrepareEvent
{ public:
inline QScrollPrepareEvent&  promoted_operator_assign(QScrollPrepareEvent&  arg__1) { return this->operator=(arg__1); }
inline QScrollPrepareEvent*  py_q_clone() const { return QScrollPrepareEvent::clone(); }
};

class PythonQtWrapper_QScrollPrepareEvent : public QObject
{ Q_OBJECT
public:
public slots:
QScrollPrepareEvent* new_QScrollPrepareEvent(const QPointF&  startPos);
void delete_QScrollPrepareEvent(QScrollPrepareEvent* obj) { delete obj; }
   QScrollPrepareEvent*  clone(QScrollPrepareEvent* theWrappedObject) const;
   QScrollPrepareEvent*  py_q_clone(QScrollPrepareEvent* theWrappedObject) const{  return (((PythonQtPublicPromoter_QScrollPrepareEvent*)theWrappedObject)->py_q_clone());}
   QPointF  contentPos(QScrollPrepareEvent* theWrappedObject) const;
   QRectF  contentPosRange(QScrollPrepareEvent* theWrappedObject) const;
   QScrollPrepareEvent*  operator_assign(QScrollPrepareEvent* theWrappedObject, QScrollPrepareEvent&  arg__1);
   void setContentPos(QScrollPrepareEvent* theWrappedObject, const QPointF&  pos);
   void setContentPosRange(QScrollPrepareEvent* theWrappedObject, const QRectF&  rect);
   void setViewportSize(QScrollPrepareEvent* theWrappedObject, const QSizeF&  size);
   QPointF  startPos(QScrollPrepareEvent* theWrappedObject) const;
   QSizeF  viewportSize(QScrollPrepareEvent* theWrappedObject) const;
};





class PythonQtShell_QScrollerProperties : public QScrollerProperties
{
public:
    PythonQtShell_QScrollerProperties():QScrollerProperties(),_wrapper(NULL) {};
    PythonQtShell_QScrollerProperties(const QScrollerProperties&  sp):QScrollerProperties(sp),_wrapper(NULL) {};

   ~PythonQtShell_QScrollerProperties();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QScrollerProperties : public QObject
{ Q_OBJECT
public:
Q_ENUMS(FrameRates OvershootPolicy ScrollMetric )
enum FrameRates{
  Standard = QScrollerProperties::Standard,   Fps60 = QScrollerProperties::Fps60,   Fps30 = QScrollerProperties::Fps30,   Fps20 = QScrollerProperties::Fps20};
enum OvershootPolicy{
  OvershootWhenScrollable = QScrollerProperties::OvershootWhenScrollable,   OvershootAlwaysOff = QScrollerProperties::OvershootAlwaysOff,   OvershootAlwaysOn = QScrollerProperties::OvershootAlwaysOn};
enum ScrollMetric{
  MousePressEventDelay = QScrollerProperties::MousePressEventDelay,   DragStartDistance = QScrollerProperties::DragStartDistance,   DragVelocitySmoothingFactor = QScrollerProperties::DragVelocitySmoothingFactor,   AxisLockThreshold = QScrollerProperties::AxisLockThreshold,   ScrollingCurve = QScrollerProperties::ScrollingCurve,   DecelerationFactor = QScrollerProperties::DecelerationFactor,   MinimumVelocity = QScrollerProperties::MinimumVelocity,   MaximumVelocity = QScrollerProperties::MaximumVelocity,   MaximumClickThroughVelocity = QScrollerProperties::MaximumClickThroughVelocity,   AcceleratingFlickMaximumTime = QScrollerProperties::AcceleratingFlickMaximumTime,   AcceleratingFlickSpeedupFactor = QScrollerProperties::AcceleratingFlickSpeedupFactor,   SnapPositionRatio = QScrollerProperties::SnapPositionRatio,   SnapTime = QScrollerProperties::SnapTime,   OvershootDragResistanceFactor = QScrollerProperties::OvershootDragResistanceFactor,   OvershootDragDistanceFactor = QScrollerProperties::OvershootDragDistanceFactor,   OvershootScrollDistanceFactor = QScrollerProperties::OvershootScrollDistanceFactor,   OvershootScrollTime = QScrollerProperties::OvershootScrollTime,   HorizontalOvershootPolicy = QScrollerProperties::HorizontalOvershootPolicy,   VerticalOvershootPolicy = QScrollerProperties::VerticalOvershootPolicy,   FrameRate = QScrollerProperties::FrameRate,   ScrollMetricCount = QScrollerProperties::ScrollMetricCount};
public slots:
QScrollerProperties* new_QScrollerProperties();
QScrollerProperties* new_QScrollerProperties(const QScrollerProperties&  sp);
void delete_QScrollerProperties(QScrollerProperties* obj) { delete obj; }
   bool  __ne__(QScrollerProperties* theWrappedObject, const QScrollerProperties&  sp) const;
   QScrollerProperties*  operator_assign(QScrollerProperties* theWrappedObject, const QScrollerProperties&  sp);
   bool  __eq__(QScrollerProperties* theWrappedObject, const QScrollerProperties&  sp) const;
   QVariant  scrollMetric(QScrollerProperties* theWrappedObject, QScrollerProperties::ScrollMetric  metric) const;
   void static_QScrollerProperties_setDefaultScrollerProperties(const QScrollerProperties&  sp);
   void setScrollMetric(QScrollerProperties* theWrappedObject, QScrollerProperties::ScrollMetric  metric, const QVariant&  value);
   void static_QScrollerProperties_unsetDefaultScrollerProperties();
};





class PythonQtShell_QShortcutEvent : public QShortcutEvent
{
public:
    PythonQtShell_QShortcutEvent(QShortcutEvent&  arg__1):QShortcutEvent(arg__1),_wrapper(NULL) {};
    PythonQtShell_QShortcutEvent(const QKeySequence&  key, int  id, bool  ambiguous = false):QShortcutEvent(key, id, ambiguous),_wrapper(NULL) {};

   ~PythonQtShell_QShortcutEvent();

virtual QShortcutEvent*  clone() const;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QShortcutEvent : public QShortcutEvent
{ public:
inline QShortcutEvent&  promoted_operator_assign(QShortcutEvent&  arg__1) { return this->operator=(arg__1); }
inline QShortcutEvent*  py_q_clone() const { return QShortcutEvent::clone(); }
};

class PythonQtWrapper_QShortcutEvent : public QObject
{ Q_OBJECT
public:
public slots:
QShortcutEvent* new_QShortcutEvent(const QKeySequence&  key, int  id, bool  ambiguous = false);
void delete_QShortcutEvent(QShortcutEvent* obj) { delete obj; }
   QShortcutEvent*  clone(QShortcutEvent* theWrappedObject) const;
   QShortcutEvent*  py_q_clone(QShortcutEvent* theWrappedObject) const{  return (((PythonQtPublicPromoter_QShortcutEvent*)theWrappedObject)->py_q_clone());}
   bool  isAmbiguous(QShortcutEvent* theWrappedObject) const;
   const QKeySequence*  key(QShortcutEvent* theWrappedObject) const;
   QShortcutEvent*  operator_assign(QShortcutEvent* theWrappedObject, QShortcutEvent&  arg__1);
   int  shortcutId(QShortcutEvent* theWrappedObject) const;
};





class PythonQtShell_QShowEvent : public QShowEvent
{
public:
    PythonQtShell_QShowEvent():QShowEvent(),_wrapper(NULL) {};
    PythonQtShell_QShowEvent(QShowEvent&  arg__1):QShowEvent(arg__1),_wrapper(NULL) {};

   ~PythonQtShell_QShowEvent();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QShowEvent : public QShowEvent
{ public:
inline QShowEvent&  promoted_operator_assign(QShowEvent&  arg__1) { return this->operator=(arg__1); }
};

class PythonQtWrapper_QShowEvent : public QObject
{ Q_OBJECT
public:
public slots:
QShowEvent* new_QShowEvent();
void delete_QShowEvent(QShowEvent* obj) { delete obj; }
   QShowEvent*  operator_assign(QShowEvent* theWrappedObject, QShowEvent&  arg__1);
};





class PythonQtShell_QSpacerItem : public QSpacerItem
{
public:
    PythonQtShell_QSpacerItem(int  w, int  h, QSizePolicy::Policy  hData = QSizePolicy::Minimum, QSizePolicy::Policy  vData = QSizePolicy::Minimum):QSpacerItem(w, h, hData, vData),_wrapper(NULL) {};

   ~PythonQtShell_QSpacerItem();

virtual QSizePolicy::ControlTypes  controlTypes() const;
virtual Qt::Orientations  expandingDirections() const;
virtual QRect  geometry() const;
virtual bool  hasHeightForWidth() const;
virtual int  heightForWidth(int  arg__1) const;
virtual void invalidate();
virtual bool  isEmpty() const;
virtual QLayout*  layout();
virtual QSize  maximumSize() const;
virtual int  minimumHeightForWidth(int  arg__1) const;
virtual QSize  minimumSize() const;
virtual void setGeometry(const QRect&  arg__1);
virtual QSize  sizeHint() const;
virtual QSpacerItem*  spacerItem();
virtual QWidget*  widget() const;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QSpacerItem : public QSpacerItem
{ public:
inline Qt::Orientations  py_q_expandingDirections() const { return QSpacerItem::expandingDirections(); }
inline QRect  py_q_geometry() const { return QSpacerItem::geometry(); }
inline bool  py_q_isEmpty() const { return QSpacerItem::isEmpty(); }
inline QSize  py_q_maximumSize() const { return QSpacerItem::maximumSize(); }
inline QSize  py_q_minimumSize() const { return QSpacerItem::minimumSize(); }
inline void py_q_setGeometry(const QRect&  arg__1) { QSpacerItem::setGeometry(arg__1); }
inline QSize  py_q_sizeHint() const { return QSpacerItem::sizeHint(); }
inline QSpacerItem*  py_q_spacerItem() { return QSpacerItem::spacerItem(); }
};

class PythonQtWrapper_QSpacerItem : public QObject
{ Q_OBJECT
public:
public slots:
QSpacerItem* new_QSpacerItem(int  w, int  h, QSizePolicy::Policy  hData = QSizePolicy::Minimum, QSizePolicy::Policy  vData = QSizePolicy::Minimum);
void delete_QSpacerItem(QSpacerItem* obj) { delete obj; }
   void changeSize(QSpacerItem* theWrappedObject, int  w, int  h, QSizePolicy::Policy  hData = QSizePolicy::Minimum, QSizePolicy::Policy  vData = QSizePolicy::Minimum);
   Qt::Orientations  py_q_expandingDirections(QSpacerItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QSpacerItem*)theWrappedObject)->py_q_expandingDirections());}
   QRect  py_q_geometry(QSpacerItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QSpacerItem*)theWrappedObject)->py_q_geometry());}
   bool  py_q_isEmpty(QSpacerItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QSpacerItem*)theWrappedObject)->py_q_isEmpty());}
   QSize  py_q_maximumSize(QSpacerItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QSpacerItem*)theWrappedObject)->py_q_maximumSize());}
   QSize  py_q_minimumSize(QSpacerItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QSpacerItem*)theWrappedObject)->py_q_minimumSize());}
   void py_q_setGeometry(QSpacerItem* theWrappedObject, const QRect&  arg__1){  (((PythonQtPublicPromoter_QSpacerItem*)theWrappedObject)->py_q_setGeometry(arg__1));}
   QSize  py_q_sizeHint(QSpacerItem* theWrappedObject) const{  return (((PythonQtPublicPromoter_QSpacerItem*)theWrappedObject)->py_q_sizeHint());}
   QSizePolicy  sizePolicy(QSpacerItem* theWrappedObject) const;
   QSpacerItem*  py_q_spacerItem(QSpacerItem* theWrappedObject){  return (((PythonQtPublicPromoter_QSpacerItem*)theWrappedObject)->py_q_spacerItem());}
    bool __nonzero__(QSpacerItem* obj) { return !obj->isEmpty(); }
};





class PythonQtShell_QStatusTipEvent : public QStatusTipEvent
{
public:
    PythonQtShell_QStatusTipEvent(QStatusTipEvent&  arg__1):QStatusTipEvent(arg__1),_wrapper(NULL) {};
    PythonQtShell_QStatusTipEvent(const QString&  tip):QStatusTipEvent(tip),_wrapper(NULL) {};

   ~PythonQtShell_QStatusTipEvent();

virtual QStatusTipEvent*  clone() const;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QStatusTipEvent : public QStatusTipEvent
{ public:
inline QStatusTipEvent&  promoted_operator_assign(QStatusTipEvent&  arg__1) { return this->operator=(arg__1); }
inline QStatusTipEvent*  py_q_clone() const { return QStatusTipEvent::clone(); }
};

class PythonQtWrapper_QStatusTipEvent : public QObject
{ Q_OBJECT
public:
public slots:
QStatusTipEvent* new_QStatusTipEvent(const QString&  tip);
void delete_QStatusTipEvent(QStatusTipEvent* obj) { delete obj; }
   QStatusTipEvent*  clone(QStatusTipEvent* theWrappedObject) const;
   QStatusTipEvent*  py_q_clone(QStatusTipEvent* theWrappedObject) const{  return (((PythonQtPublicPromoter_QStatusTipEvent*)theWrappedObject)->py_q_clone());}
   QStatusTipEvent*  operator_assign(QStatusTipEvent* theWrappedObject, QStatusTipEvent&  arg__1);
   QString  tip(QStatusTipEvent* theWrappedObject) const;
};





class PythonQtShell_QStringListModel : public QStringListModel
{
public:
    PythonQtShell_QStringListModel(QObject*  parent = nullptr):QStringListModel(parent),_wrapper(NULL) {};
    PythonQtShell_QStringListModel(const QStringList&  strings, QObject*  parent = nullptr):QStringListModel(strings, parent),_wrapper(NULL) {};

   ~PythonQtShell_QStringListModel();

virtual bool  clearItemData(const QModelIndex&  index);
virtual QVariant  data(const QModelIndex&  index, int  role = Qt::DisplayRole) const;
virtual bool  dropMimeData(const QMimeData*  data, Qt::DropAction  action, int  row, int  column, const QModelIndex&  parent);
virtual Qt::ItemFlags  flags(const QModelIndex&  index) const;
virtual QModelIndex  index(int  row, int  column = 0, const QModelIndex&  parent = QModelIndex()) const;
virtual bool  insertRows(int  row, int  count, const QModelIndex&  parent = QModelIndex());
virtual QMap<int , QVariant >  itemData(const QModelIndex&  index) const;
virtual const QMetaObject*  metaObject() const;
virtual bool  moveRows(const QModelIndex&  sourceParent, int  sourceRow, int  count, const QModelIndex&  destinationParent, int  destinationChild);
virtual void*  qt_metacast(const char*  arg__1);
virtual bool  removeRows(int  row, int  count, const QModelIndex&  parent = QModelIndex());
virtual int  rowCount(const QModelIndex&  parent = QModelIndex()) const;
virtual bool  setData(const QModelIndex&  index, const QVariant&  value, int  role = Qt::EditRole);
virtual bool  setItemData(const QModelIndex&  index, const QMap<int , QVariant >&  roles);
virtual QModelIndex  sibling(int  row, int  column, const QModelIndex&  idx) const;
virtual void sort(int  column, Qt::SortOrder  order = Qt::AscendingOrder);
virtual Qt::DropActions  supportedDropActions() const;

  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtPublicPromoter_QStringListModel : public QStringListModel
{ public:
inline bool  py_q_clearItemData(const QModelIndex&  index) { return QStringListModel::clearItemData(index); }
inline QVariant  py_q_data(const QModelIndex&  index, int  role = Qt::DisplayRole) const { return QStringListModel::data(index, role); }
inline Qt::ItemFlags  py_q_flags(const QModelIndex&  index) const { return QStringListModel::flags(index); }
inline bool  py_q_insertRows(int  row, int  count, const QModelIndex&  parent = QModelIndex()) { return QStringListModel::insertRows(row, count, parent); }
inline QMap<int , QVariant >  py_q_itemData(const QModelIndex&  index) const { return QStringListModel::itemData(index); }
inline const QMetaObject*  py_q_metaObject() const { return QStringListModel::metaObject(); }
inline bool  py_q_moveRows(const QModelIndex&  sourceParent, int  sourceRow, int  count, const QModelIndex&  destinationParent, int  destinationChild) { return QStringListModel::moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild); }
inline void*  py_q_qt_metacast(const char*  arg__1) { return QStringListModel::qt_metacast(arg__1); }
inline bool  py_q_removeRows(int  row, int  count, const QModelIndex&  parent = QModelIndex()) { return QStringListModel::removeRows(row, count, parent); }
inline int  py_q_rowCount(const QModelIndex&  parent = QModelIndex()) const { return QStringListModel::rowCount(parent); }
inline bool  py_q_setData(const QModelIndex&  index, const QVariant&  value, int  role = Qt::EditRole) { return QStringListModel::setData(index, value, role); }
inline bool  py_q_setItemData(const QModelIndex&  index, const QMap<int , QVariant >&  roles) { return QStringListModel::setItemData(index, roles); }
inline QModelIndex  py_q_sibling(int  row, int  column, const QModelIndex&  idx) const { return QStringListModel::sibling(row, column, idx); }
inline void py_q_sort(int  column, Qt::SortOrder  order = Qt::AscendingOrder) { QStringListModel::sort(column, order); }
inline Qt::DropActions  py_q_supportedDropActions() const { return QStringListModel::supportedDropActions(); }
};

class PythonQtWrapper_QStringListModel : public QObject
{ Q_OBJECT
public:
public slots:
QStringListModel* new_QStringListModel(QObject*  parent = nullptr);
QStringListModel* new_QStringListModel(const QStringList&  strings, QObject*  parent = nullptr);
void delete_QStringListModel(QStringListModel* obj) { delete obj; }
   bool  clearItemData(QStringListModel* theWrappedObject, const QModelIndex&  index);
   bool  py_q_clearItemData(QStringListModel* theWrappedObject, const QModelIndex&  index){  return (((PythonQtPublicPromoter_QStringListModel*)theWrappedObject)->py_q_clearItemData(index));}
   QVariant  data(QStringListModel* theWrappedObject, const QModelIndex&  index, int  role = Qt::DisplayRole) const;
   QVariant  py_q_data(QStringListModel* theWrappedObject, const QModelIndex&  index, int  role = Qt::DisplayRole) const{  return (((PythonQtPublicPromoter_QStringListModel*)theWrappedObject)->py_q_data(index, role));}
   Qt::ItemFlags  py_q_flags(QStringListModel* theWrappedObject, const QModelIndex&  index) const{  return (((PythonQtPublicPromoter_QStringListModel*)theWrappedObject)->py_q_flags(index));}
   bool  insertRows(QStringListModel* theWrappedObject, int  row, int  count, const QModelIndex&  parent = QModelIndex());
   bool  py_q_insertRows(QStringListModel* theWrappedObject, int  row, int  count, const QModelIndex&  parent = QModelIndex()){  return (((PythonQtPublicPromoter_QStringListModel*)theWrappedObject)->py_q_insertRows(row, count, parent));}
   QMap<int , QVariant >  itemData(QStringListModel* theWrappedObject, const QModelIndex&  index) const;
   QMap<int , QVariant >  py_q_itemData(QStringListModel* theWrappedObject, const QModelIndex&  index) const{  return (((PythonQtPublicPromoter_QStringListModel*)theWrappedObject)->py_q_itemData(index));}
   const QMetaObject*  py_q_metaObject(QStringListModel* theWrappedObject) const{  return (((PythonQtPublicPromoter_QStringListModel*)theWrappedObject)->py_q_metaObject());}
   bool  moveRows(QStringListModel* theWrappedObject, const QModelIndex&  sourceParent, int  sourceRow, int  count, const QModelIndex&  destinationParent, int  destinationChild);
   bool  py_q_moveRows(QStringListModel* theWrappedObject, const QModelIndex&  sourceParent, int  sourceRow, int  count, const QModelIndex&  destinationParent, int  destinationChild){  return (((PythonQtPublicPromoter_QStringListModel*)theWrappedObject)->py_q_moveRows(sourceParent, sourceRow, count, destinationParent, destinationChild));}
   void*  py_q_qt_metacast(QStringListModel* theWrappedObject, const char*  arg__1){  return (((PythonQtPublicPromoter_QStringListModel*)theWrappedObject)->py_q_qt_metacast(arg__1));}
   bool  removeRows(QStringListModel* theWrappedObject, int  row, int  count, const QModelIndex&  parent = QModelIndex());
   bool  py_q_removeRows(QStringListModel* theWrappedObject, int  row, int  count, const QModelIndex&  parent = QModelIndex()){  return (((PythonQtPublicPromoter_QStringListModel*)theWrappedObject)->py_q_removeRows(row, count, parent));}
   int  rowCount(QStringListModel* theWrappedObject, const QModelIndex&  parent = QModelIndex()) const;
   int  py_q_rowCount(QStringListModel* theWrappedObject, const QModelIndex&  parent = QModelIndex()) const{  return (((PythonQtPublicPromoter_QStringListModel*)theWrappedObject)->py_q_rowCount(parent));}
   bool  setData(QStringListModel* theWrappedObject, const QModelIndex&  index, const QVariant&  value, int  role = Qt::EditRole);
   bool  py_q_setData(QStringListModel* theWrappedObject, const QModelIndex&  index, const QVariant&  value, int  role = Qt::EditRole){  return (((PythonQtPublicPromoter_QStringListModel*)theWrappedObject)->py_q_setData(index, value, role));}
   bool  setItemData(QStringListModel* theWrappedObject, const QModelIndex&  index, const QMap<int , QVariant >&  roles);
   bool  py_q_setItemData(QStringListModel* theWrappedObject, const QModelIndex&  index, const QMap<int , QVariant >&  roles){  return (((PythonQtPublicPromoter_QStringListModel*)theWrappedObject)->py_q_setItemData(index, roles));}
   void setStringList(QStringListModel* theWrappedObject, const QStringList&  strings);
   QModelIndex  py_q_sibling(QStringListModel* theWrappedObject, int  row, int  column, const QModelIndex&  idx) const{  return (((PythonQtPublicPromoter_QStringListModel*)theWrappedObject)->py_q_sibling(row, column, idx));}
   void sort(QStringListModel* theWrappedObject, int  column, Qt::SortOrder  order = Qt::AscendingOrder);
   void py_q_sort(QStringListModel* theWrappedObject, int  column, Qt::SortOrder  order = Qt::AscendingOrder){  (((PythonQtPublicPromoter_QStringListModel*)theWrappedObject)->py_q_sort(column, order));}
   QStringList  stringList(QStringListModel* theWrappedObject) const;
   Qt::DropActions  supportedDropActions(QStringListModel* theWrappedObject) const;
   Qt::DropActions  py_q_supportedDropActions(QStringListModel* theWrappedObject) const{  return (((PythonQtPublicPromoter_QStringListModel*)theWrappedObject)->py_q_supportedDropActions());}
};





class PythonQtShell_QStyleFactory : public QStyleFactory
{
public:
    PythonQtShell_QStyleFactory():QStyleFactory(),_wrapper(NULL) {};

   ~PythonQtShell_QStyleFactory();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QStyleFactory : public QObject
{ Q_OBJECT
public:
public slots:
QStyleFactory* new_QStyleFactory();
void delete_QStyleFactory(QStyleFactory* obj) { delete obj; }
   QStyle*  static_QStyleFactory_create(const QString&  arg__1);
   QStringList  static_QStyleFactory_keys();
};





class PythonQtShell_QStyleHintReturn : public QStyleHintReturn
{
public:
    PythonQtShell_QStyleHintReturn(int  version = QStyleOption::Version, int  type = SH_Default):QStyleHintReturn(version, type),_wrapper(NULL) {};

   ~PythonQtShell_QStyleHintReturn();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QStyleHintReturn : public QObject
{ Q_OBJECT
public:
Q_ENUMS(HintReturnType StyleOptionType StyleOptionVersion )
enum HintReturnType{
  SH_Default = QStyleHintReturn::SH_Default,   SH_Mask = QStyleHintReturn::SH_Mask,   SH_Variant = QStyleHintReturn::SH_Variant};
enum StyleOptionType{
  Type = QStyleHintReturn::Type};
enum StyleOptionVersion{
  Version = QStyleHintReturn::Version};
public slots:
QStyleHintReturn* new_QStyleHintReturn(int  version = QStyleOption::Version, int  type = SH_Default);
void delete_QStyleHintReturn(QStyleHintReturn* obj) { delete obj; }
void py_set_type(QStyleHintReturn* theWrappedObject, int  type){ theWrappedObject->type = type; }
int  py_get_type(QStyleHintReturn* theWrappedObject){ return theWrappedObject->type; }
void py_set_version(QStyleHintReturn* theWrappedObject, int  version){ theWrappedObject->version = version; }
int  py_get_version(QStyleHintReturn* theWrappedObject){ return theWrappedObject->version; }
};





class PythonQtShell_QStyleHintReturnMask : public QStyleHintReturnMask
{
public:
    PythonQtShell_QStyleHintReturnMask():QStyleHintReturnMask(),_wrapper(NULL) {};

   ~PythonQtShell_QStyleHintReturnMask();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QStyleHintReturnMask : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StyleOptionType StyleOptionVersion )
enum StyleOptionType{
  Type = QStyleHintReturnMask::Type};
enum StyleOptionVersion{
  Version = QStyleHintReturnMask::Version};
public slots:
QStyleHintReturnMask* new_QStyleHintReturnMask();
void delete_QStyleHintReturnMask(QStyleHintReturnMask* obj) { delete obj; }
void py_set_region(QStyleHintReturnMask* theWrappedObject, QRegion  region){ theWrappedObject->region = region; }
QRegion  py_get_region(QStyleHintReturnMask* theWrappedObject){ return theWrappedObject->region; }
};





class PythonQtShell_QStyleHintReturnVariant : public QStyleHintReturnVariant
{
public:
    PythonQtShell_QStyleHintReturnVariant():QStyleHintReturnVariant(),_wrapper(NULL) {};

   ~PythonQtShell_QStyleHintReturnVariant();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QStyleHintReturnVariant : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StyleOptionType StyleOptionVersion )
enum StyleOptionType{
  Type = QStyleHintReturnVariant::Type};
enum StyleOptionVersion{
  Version = QStyleHintReturnVariant::Version};
public slots:
QStyleHintReturnVariant* new_QStyleHintReturnVariant();
void delete_QStyleHintReturnVariant(QStyleHintReturnVariant* obj) { delete obj; }
void py_set_variant(QStyleHintReturnVariant* theWrappedObject, QVariant  variant){ theWrappedObject->variant = variant; }
QVariant  py_get_variant(QStyleHintReturnVariant* theWrappedObject){ return theWrappedObject->variant; }
};





class PythonQtShell_QStyleOption : public QStyleOption
{
public:
    PythonQtShell_QStyleOption(const QStyleOption&  other):QStyleOption(other),_wrapper(NULL) {};
    PythonQtShell_QStyleOption(int  version = QStyleOption::Version, int  type = SO_Default):QStyleOption(version, type),_wrapper(NULL) {};

   ~PythonQtShell_QStyleOption();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QStyleOption : public QObject
{ Q_OBJECT
public:
Q_ENUMS(OptionType StyleOptionType StyleOptionVersion )
enum OptionType{
  SO_Default = QStyleOption::SO_Default,   SO_FocusRect = QStyleOption::SO_FocusRect,   SO_Button = QStyleOption::SO_Button,   SO_Tab = QStyleOption::SO_Tab,   SO_MenuItem = QStyleOption::SO_MenuItem,   SO_Frame = QStyleOption::SO_Frame,   SO_ProgressBar = QStyleOption::SO_ProgressBar,   SO_ToolBox = QStyleOption::SO_ToolBox,   SO_Header = QStyleOption::SO_Header,   SO_DockWidget = QStyleOption::SO_DockWidget,   SO_ViewItem = QStyleOption::SO_ViewItem,   SO_TabWidgetFrame = QStyleOption::SO_TabWidgetFrame,   SO_TabBarBase = QStyleOption::SO_TabBarBase,   SO_RubberBand = QStyleOption::SO_RubberBand,   SO_ToolBar = QStyleOption::SO_ToolBar,   SO_GraphicsItem = QStyleOption::SO_GraphicsItem,   SO_Complex = QStyleOption::SO_Complex,   SO_Slider = QStyleOption::SO_Slider,   SO_SpinBox = QStyleOption::SO_SpinBox,   SO_ToolButton = QStyleOption::SO_ToolButton,   SO_ComboBox = QStyleOption::SO_ComboBox,   SO_TitleBar = QStyleOption::SO_TitleBar,   SO_GroupBox = QStyleOption::SO_GroupBox,   SO_SizeGrip = QStyleOption::SO_SizeGrip,   SO_CustomBase = QStyleOption::SO_CustomBase,   SO_ComplexCustomBase = QStyleOption::SO_ComplexCustomBase};
enum StyleOptionType{
  Type = QStyleOption::Type};
enum StyleOptionVersion{
  Version = QStyleOption::Version};
public slots:
QStyleOption* new_QStyleOption(const QStyleOption&  other);
QStyleOption* new_QStyleOption(int  version = QStyleOption::Version, int  type = SO_Default);
void delete_QStyleOption(QStyleOption* obj) { delete obj; }
   void initFrom(QStyleOption* theWrappedObject, const QWidget*  w);
    QString py_toString(QStyleOption*);
void py_set_direction(QStyleOption* theWrappedObject, Qt::LayoutDirection  direction){ theWrappedObject->direction = direction; }
Qt::LayoutDirection  py_get_direction(QStyleOption* theWrappedObject){ return theWrappedObject->direction; }
void py_set_fontMetrics(QStyleOption* theWrappedObject, QFontMetrics  fontMetrics){ theWrappedObject->fontMetrics = fontMetrics; }
QFontMetrics  py_get_fontMetrics(QStyleOption* theWrappedObject){ return theWrappedObject->fontMetrics; }
void py_set_palette(QStyleOption* theWrappedObject, QPalette  palette){ theWrappedObject->palette = palette; }
QPalette  py_get_palette(QStyleOption* theWrappedObject){ return theWrappedObject->palette; }
void py_set_rect(QStyleOption* theWrappedObject, QRect  rect){ theWrappedObject->rect = rect; }
QRect  py_get_rect(QStyleOption* theWrappedObject){ return theWrappedObject->rect; }
void py_set_state(QStyleOption* theWrappedObject, QStyle::State  state){ theWrappedObject->state = state; }
QStyle::State  py_get_state(QStyleOption* theWrappedObject){ return theWrappedObject->state; }
void py_set_styleObject(QStyleOption* theWrappedObject, QObject*  styleObject){ theWrappedObject->styleObject = styleObject; }
QObject*  py_get_styleObject(QStyleOption* theWrappedObject){ return theWrappedObject->styleObject; }
void py_set_type(QStyleOption* theWrappedObject, int  type){ theWrappedObject->type = type; }
int  py_get_type(QStyleOption* theWrappedObject){ return theWrappedObject->type; }
void py_set_version(QStyleOption* theWrappedObject, int  version){ theWrappedObject->version = version; }
int  py_get_version(QStyleOption* theWrappedObject){ return theWrappedObject->version; }
};





class PythonQtShell_QStyleOptionButton : public QStyleOptionButton
{
public:
    PythonQtShell_QStyleOptionButton():QStyleOptionButton(),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionButton(const QStyleOptionButton&  other):QStyleOptionButton(other),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionButton(int  version):QStyleOptionButton(version),_wrapper(NULL) {};

   ~PythonQtShell_QStyleOptionButton();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QStyleOptionButton : public QObject
{ Q_OBJECT
public:
Q_ENUMS(ButtonFeature StyleOptionType StyleOptionVersion )
Q_FLAGS(ButtonFeatures )
enum ButtonFeature{
  None = QStyleOptionButton::None,   Flat = QStyleOptionButton::Flat,   HasMenu = QStyleOptionButton::HasMenu,   DefaultButton = QStyleOptionButton::DefaultButton,   AutoDefaultButton = QStyleOptionButton::AutoDefaultButton,   CommandLinkButton = QStyleOptionButton::CommandLinkButton};
enum StyleOptionType{
  Type = QStyleOptionButton::Type};
enum StyleOptionVersion{
  Version = QStyleOptionButton::Version};
Q_DECLARE_FLAGS(ButtonFeatures, ButtonFeature)
public slots:
QStyleOptionButton* new_QStyleOptionButton();
QStyleOptionButton* new_QStyleOptionButton(const QStyleOptionButton&  other);
QStyleOptionButton* new_QStyleOptionButton(int  version);
void delete_QStyleOptionButton(QStyleOptionButton* obj) { delete obj; }
void py_set_features(QStyleOptionButton* theWrappedObject, QStyleOptionButton::ButtonFeatures  features){ theWrappedObject->features = features; }
QStyleOptionButton::ButtonFeatures  py_get_features(QStyleOptionButton* theWrappedObject){ return theWrappedObject->features; }
void py_set_icon(QStyleOptionButton* theWrappedObject, QIcon  icon){ theWrappedObject->icon = icon; }
QIcon  py_get_icon(QStyleOptionButton* theWrappedObject){ return theWrappedObject->icon; }
void py_set_iconSize(QStyleOptionButton* theWrappedObject, QSize  iconSize){ theWrappedObject->iconSize = iconSize; }
QSize  py_get_iconSize(QStyleOptionButton* theWrappedObject){ return theWrappedObject->iconSize; }
void py_set_text(QStyleOptionButton* theWrappedObject, QString  text){ theWrappedObject->text = text; }
QString  py_get_text(QStyleOptionButton* theWrappedObject){ return theWrappedObject->text; }
};





class PythonQtShell_QStyleOptionComboBox : public QStyleOptionComboBox
{
public:
    PythonQtShell_QStyleOptionComboBox():QStyleOptionComboBox(),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionComboBox(const QStyleOptionComboBox&  other):QStyleOptionComboBox(other),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionComboBox(int  version):QStyleOptionComboBox(version),_wrapper(NULL) {};

   ~PythonQtShell_QStyleOptionComboBox();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QStyleOptionComboBox : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StyleOptionType StyleOptionVersion )
enum StyleOptionType{
  Type = QStyleOptionComboBox::Type};
enum StyleOptionVersion{
  Version = QStyleOptionComboBox::Version};
public slots:
QStyleOptionComboBox* new_QStyleOptionComboBox();
QStyleOptionComboBox* new_QStyleOptionComboBox(const QStyleOptionComboBox&  other);
QStyleOptionComboBox* new_QStyleOptionComboBox(int  version);
void delete_QStyleOptionComboBox(QStyleOptionComboBox* obj) { delete obj; }
void py_set_currentIcon(QStyleOptionComboBox* theWrappedObject, QIcon  currentIcon){ theWrappedObject->currentIcon = currentIcon; }
QIcon  py_get_currentIcon(QStyleOptionComboBox* theWrappedObject){ return theWrappedObject->currentIcon; }
void py_set_currentText(QStyleOptionComboBox* theWrappedObject, QString  currentText){ theWrappedObject->currentText = currentText; }
QString  py_get_currentText(QStyleOptionComboBox* theWrappedObject){ return theWrappedObject->currentText; }
void py_set_editable(QStyleOptionComboBox* theWrappedObject, bool  editable){ theWrappedObject->editable = editable; }
bool  py_get_editable(QStyleOptionComboBox* theWrappedObject){ return theWrappedObject->editable; }
void py_set_frame(QStyleOptionComboBox* theWrappedObject, bool  frame){ theWrappedObject->frame = frame; }
bool  py_get_frame(QStyleOptionComboBox* theWrappedObject){ return theWrappedObject->frame; }
void py_set_iconSize(QStyleOptionComboBox* theWrappedObject, QSize  iconSize){ theWrappedObject->iconSize = iconSize; }
QSize  py_get_iconSize(QStyleOptionComboBox* theWrappedObject){ return theWrappedObject->iconSize; }
void py_set_popupRect(QStyleOptionComboBox* theWrappedObject, QRect  popupRect){ theWrappedObject->popupRect = popupRect; }
QRect  py_get_popupRect(QStyleOptionComboBox* theWrappedObject){ return theWrappedObject->popupRect; }
void py_set_textAlignment(QStyleOptionComboBox* theWrappedObject, Qt::Alignment  textAlignment){ theWrappedObject->textAlignment = textAlignment; }
Qt::Alignment  py_get_textAlignment(QStyleOptionComboBox* theWrappedObject){ return theWrappedObject->textAlignment; }
};





class PythonQtShell_QStyleOptionDockWidget : public QStyleOptionDockWidget
{
public:
    PythonQtShell_QStyleOptionDockWidget():QStyleOptionDockWidget(),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionDockWidget(const QStyleOptionDockWidget&  other):QStyleOptionDockWidget(other),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionDockWidget(int  version):QStyleOptionDockWidget(version),_wrapper(NULL) {};

   ~PythonQtShell_QStyleOptionDockWidget();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QStyleOptionDockWidget : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StyleOptionType StyleOptionVersion )
enum StyleOptionType{
  Type = QStyleOptionDockWidget::Type};
enum StyleOptionVersion{
  Version = QStyleOptionDockWidget::Version};
public slots:
QStyleOptionDockWidget* new_QStyleOptionDockWidget();
QStyleOptionDockWidget* new_QStyleOptionDockWidget(const QStyleOptionDockWidget&  other);
QStyleOptionDockWidget* new_QStyleOptionDockWidget(int  version);
void delete_QStyleOptionDockWidget(QStyleOptionDockWidget* obj) { delete obj; }
void py_set_closable(QStyleOptionDockWidget* theWrappedObject, bool  closable){ theWrappedObject->closable = closable; }
bool  py_get_closable(QStyleOptionDockWidget* theWrappedObject){ return theWrappedObject->closable; }
void py_set_floatable(QStyleOptionDockWidget* theWrappedObject, bool  floatable){ theWrappedObject->floatable = floatable; }
bool  py_get_floatable(QStyleOptionDockWidget* theWrappedObject){ return theWrappedObject->floatable; }
void py_set_movable(QStyleOptionDockWidget* theWrappedObject, bool  movable){ theWrappedObject->movable = movable; }
bool  py_get_movable(QStyleOptionDockWidget* theWrappedObject){ return theWrappedObject->movable; }
void py_set_title(QStyleOptionDockWidget* theWrappedObject, QString  title){ theWrappedObject->title = title; }
QString  py_get_title(QStyleOptionDockWidget* theWrappedObject){ return theWrappedObject->title; }
void py_set_verticalTitleBar(QStyleOptionDockWidget* theWrappedObject, bool  verticalTitleBar){ theWrappedObject->verticalTitleBar = verticalTitleBar; }
bool  py_get_verticalTitleBar(QStyleOptionDockWidget* theWrappedObject){ return theWrappedObject->verticalTitleBar; }
};





class PythonQtShell_QStyleOptionFocusRect : public QStyleOptionFocusRect
{
public:
    PythonQtShell_QStyleOptionFocusRect():QStyleOptionFocusRect(),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionFocusRect(const QStyleOptionFocusRect&  other):QStyleOptionFocusRect(other),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionFocusRect(int  version):QStyleOptionFocusRect(version),_wrapper(NULL) {};

   ~PythonQtShell_QStyleOptionFocusRect();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QStyleOptionFocusRect : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StyleOptionType StyleOptionVersion )
enum StyleOptionType{
  Type = QStyleOptionFocusRect::Type};
enum StyleOptionVersion{
  Version = QStyleOptionFocusRect::Version};
public slots:
QStyleOptionFocusRect* new_QStyleOptionFocusRect();
QStyleOptionFocusRect* new_QStyleOptionFocusRect(const QStyleOptionFocusRect&  other);
QStyleOptionFocusRect* new_QStyleOptionFocusRect(int  version);
void delete_QStyleOptionFocusRect(QStyleOptionFocusRect* obj) { delete obj; }
void py_set_backgroundColor(QStyleOptionFocusRect* theWrappedObject, QColor  backgroundColor){ theWrappedObject->backgroundColor = backgroundColor; }
QColor  py_get_backgroundColor(QStyleOptionFocusRect* theWrappedObject){ return theWrappedObject->backgroundColor; }
};





class PythonQtShell_QStyleOptionFrame : public QStyleOptionFrame
{
public:
    PythonQtShell_QStyleOptionFrame():QStyleOptionFrame(),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionFrame(const QStyleOptionFrame&  other):QStyleOptionFrame(other),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionFrame(int  version):QStyleOptionFrame(version),_wrapper(NULL) {};

   ~PythonQtShell_QStyleOptionFrame();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QStyleOptionFrame : public QObject
{ Q_OBJECT
public:
Q_ENUMS(FrameFeature StyleOptionType StyleOptionVersion )
Q_FLAGS(FrameFeatures )
enum FrameFeature{
  None = QStyleOptionFrame::None,   Flat = QStyleOptionFrame::Flat,   Rounded = QStyleOptionFrame::Rounded};
enum StyleOptionType{
  Type = QStyleOptionFrame::Type};
enum StyleOptionVersion{
  Version = QStyleOptionFrame::Version};
Q_DECLARE_FLAGS(FrameFeatures, FrameFeature)
public slots:
QStyleOptionFrame* new_QStyleOptionFrame();
QStyleOptionFrame* new_QStyleOptionFrame(const QStyleOptionFrame&  other);
QStyleOptionFrame* new_QStyleOptionFrame(int  version);
void delete_QStyleOptionFrame(QStyleOptionFrame* obj) { delete obj; }
void py_set_features(QStyleOptionFrame* theWrappedObject, QStyleOptionFrame::FrameFeatures  features){ theWrappedObject->features = features; }
QStyleOptionFrame::FrameFeatures  py_get_features(QStyleOptionFrame* theWrappedObject){ return theWrappedObject->features; }
void py_set_frameShape(QStyleOptionFrame* theWrappedObject, QFrame::Shape  frameShape){ theWrappedObject->frameShape = frameShape; }
QFrame::Shape  py_get_frameShape(QStyleOptionFrame* theWrappedObject){ return theWrappedObject->frameShape; }
void py_set_lineWidth(QStyleOptionFrame* theWrappedObject, int  lineWidth){ theWrappedObject->lineWidth = lineWidth; }
int  py_get_lineWidth(QStyleOptionFrame* theWrappedObject){ return theWrappedObject->lineWidth; }
void py_set_midLineWidth(QStyleOptionFrame* theWrappedObject, int  midLineWidth){ theWrappedObject->midLineWidth = midLineWidth; }
int  py_get_midLineWidth(QStyleOptionFrame* theWrappedObject){ return theWrappedObject->midLineWidth; }
};





class PythonQtShell_QStyleOptionGraphicsItem : public QStyleOptionGraphicsItem
{
public:
    PythonQtShell_QStyleOptionGraphicsItem():QStyleOptionGraphicsItem(),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionGraphicsItem(const QStyleOptionGraphicsItem&  other):QStyleOptionGraphicsItem(other),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionGraphicsItem(int  version):QStyleOptionGraphicsItem(version),_wrapper(NULL) {};

   ~PythonQtShell_QStyleOptionGraphicsItem();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QStyleOptionGraphicsItem : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StyleOptionType StyleOptionVersion )
enum StyleOptionType{
  Type = QStyleOptionGraphicsItem::Type};
enum StyleOptionVersion{
  Version = QStyleOptionGraphicsItem::Version};
public slots:
QStyleOptionGraphicsItem* new_QStyleOptionGraphicsItem();
QStyleOptionGraphicsItem* new_QStyleOptionGraphicsItem(const QStyleOptionGraphicsItem&  other);
QStyleOptionGraphicsItem* new_QStyleOptionGraphicsItem(int  version);
void delete_QStyleOptionGraphicsItem(QStyleOptionGraphicsItem* obj) { delete obj; }
   qreal  static_QStyleOptionGraphicsItem_levelOfDetailFromTransform(const QTransform&  worldTransform);
void py_set_exposedRect(QStyleOptionGraphicsItem* theWrappedObject, QRectF  exposedRect){ theWrappedObject->exposedRect = exposedRect; }
QRectF  py_get_exposedRect(QStyleOptionGraphicsItem* theWrappedObject){ return theWrappedObject->exposedRect; }
};





class PythonQtShell_QStyleOptionGroupBox : public QStyleOptionGroupBox
{
public:
    PythonQtShell_QStyleOptionGroupBox():QStyleOptionGroupBox(),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionGroupBox(const QStyleOptionGroupBox&  other):QStyleOptionGroupBox(other),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionGroupBox(int  version):QStyleOptionGroupBox(version),_wrapper(NULL) {};

   ~PythonQtShell_QStyleOptionGroupBox();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QStyleOptionGroupBox : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StyleOptionType StyleOptionVersion )
enum StyleOptionType{
  Type = QStyleOptionGroupBox::Type};
enum StyleOptionVersion{
  Version = QStyleOptionGroupBox::Version};
public slots:
QStyleOptionGroupBox* new_QStyleOptionGroupBox();
QStyleOptionGroupBox* new_QStyleOptionGroupBox(const QStyleOptionGroupBox&  other);
QStyleOptionGroupBox* new_QStyleOptionGroupBox(int  version);
void delete_QStyleOptionGroupBox(QStyleOptionGroupBox* obj) { delete obj; }
void py_set_features(QStyleOptionGroupBox* theWrappedObject, QStyleOptionFrame::FrameFeatures  features){ theWrappedObject->features = features; }
QStyleOptionFrame::FrameFeatures  py_get_features(QStyleOptionGroupBox* theWrappedObject){ return theWrappedObject->features; }
void py_set_lineWidth(QStyleOptionGroupBox* theWrappedObject, int  lineWidth){ theWrappedObject->lineWidth = lineWidth; }
int  py_get_lineWidth(QStyleOptionGroupBox* theWrappedObject){ return theWrappedObject->lineWidth; }
void py_set_midLineWidth(QStyleOptionGroupBox* theWrappedObject, int  midLineWidth){ theWrappedObject->midLineWidth = midLineWidth; }
int  py_get_midLineWidth(QStyleOptionGroupBox* theWrappedObject){ return theWrappedObject->midLineWidth; }
void py_set_text(QStyleOptionGroupBox* theWrappedObject, QString  text){ theWrappedObject->text = text; }
QString  py_get_text(QStyleOptionGroupBox* theWrappedObject){ return theWrappedObject->text; }
void py_set_textAlignment(QStyleOptionGroupBox* theWrappedObject, Qt::Alignment  textAlignment){ theWrappedObject->textAlignment = textAlignment; }
Qt::Alignment  py_get_textAlignment(QStyleOptionGroupBox* theWrappedObject){ return theWrappedObject->textAlignment; }
void py_set_textColor(QStyleOptionGroupBox* theWrappedObject, QColor  textColor){ theWrappedObject->textColor = textColor; }
QColor  py_get_textColor(QStyleOptionGroupBox* theWrappedObject){ return theWrappedObject->textColor; }
};





class PythonQtShell_QStyleOptionHeader : public QStyleOptionHeader
{
public:
    PythonQtShell_QStyleOptionHeader():QStyleOptionHeader(),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionHeader(const QStyleOptionHeader&  other):QStyleOptionHeader(other),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionHeader(int  version):QStyleOptionHeader(version),_wrapper(NULL) {};

   ~PythonQtShell_QStyleOptionHeader();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QStyleOptionHeader : public QObject
{ Q_OBJECT
public:
Q_ENUMS(SectionPosition SelectedPosition SortIndicator StyleOptionType StyleOptionVersion )
enum SectionPosition{
  Beginning = QStyleOptionHeader::Beginning,   Middle = QStyleOptionHeader::Middle,   End = QStyleOptionHeader::End,   OnlyOneSection = QStyleOptionHeader::OnlyOneSection};
enum SelectedPosition{
  NotAdjacent = QStyleOptionHeader::NotAdjacent,   NextIsSelected = QStyleOptionHeader::NextIsSelected,   PreviousIsSelected = QStyleOptionHeader::PreviousIsSelected,   NextAndPreviousAreSelected = QStyleOptionHeader::NextAndPreviousAreSelected};
enum SortIndicator{
  None = QStyleOptionHeader::None,   SortUp = QStyleOptionHeader::SortUp,   SortDown = QStyleOptionHeader::SortDown};
enum StyleOptionType{
  Type = QStyleOptionHeader::Type};
enum StyleOptionVersion{
  Version = QStyleOptionHeader::Version};
public slots:
QStyleOptionHeader* new_QStyleOptionHeader();
QStyleOptionHeader* new_QStyleOptionHeader(const QStyleOptionHeader&  other);
QStyleOptionHeader* new_QStyleOptionHeader(int  version);
void delete_QStyleOptionHeader(QStyleOptionHeader* obj) { delete obj; }
void py_set_icon(QStyleOptionHeader* theWrappedObject, QIcon  icon){ theWrappedObject->icon = icon; }
QIcon  py_get_icon(QStyleOptionHeader* theWrappedObject){ return theWrappedObject->icon; }
void py_set_iconAlignment(QStyleOptionHeader* theWrappedObject, Qt::Alignment  iconAlignment){ theWrappedObject->iconAlignment = iconAlignment; }
Qt::Alignment  py_get_iconAlignment(QStyleOptionHeader* theWrappedObject){ return theWrappedObject->iconAlignment; }
void py_set_orientation(QStyleOptionHeader* theWrappedObject, Qt::Orientation  orientation){ theWrappedObject->orientation = orientation; }
Qt::Orientation  py_get_orientation(QStyleOptionHeader* theWrappedObject){ return theWrappedObject->orientation; }
void py_set_position(QStyleOptionHeader* theWrappedObject, QStyleOptionHeader::SectionPosition  position){ theWrappedObject->position = position; }
QStyleOptionHeader::SectionPosition  py_get_position(QStyleOptionHeader* theWrappedObject){ return theWrappedObject->position; }
void py_set_section(QStyleOptionHeader* theWrappedObject, int  section){ theWrappedObject->section = section; }
int  py_get_section(QStyleOptionHeader* theWrappedObject){ return theWrappedObject->section; }
void py_set_selectedPosition(QStyleOptionHeader* theWrappedObject, QStyleOptionHeader::SelectedPosition  selectedPosition){ theWrappedObject->selectedPosition = selectedPosition; }
QStyleOptionHeader::SelectedPosition  py_get_selectedPosition(QStyleOptionHeader* theWrappedObject){ return theWrappedObject->selectedPosition; }
QStyleOptionHeader::SortIndicator*  py_get_sortIndicator(QStyleOptionHeader* theWrappedObject){ return &theWrappedObject->sortIndicator; }
void py_set_text(QStyleOptionHeader* theWrappedObject, QString  text){ theWrappedObject->text = text; }
QString  py_get_text(QStyleOptionHeader* theWrappedObject){ return theWrappedObject->text; }
void py_set_textAlignment(QStyleOptionHeader* theWrappedObject, Qt::Alignment  textAlignment){ theWrappedObject->textAlignment = textAlignment; }
Qt::Alignment  py_get_textAlignment(QStyleOptionHeader* theWrappedObject){ return theWrappedObject->textAlignment; }
};





class PythonQtShell_QStyleOptionMenuItem : public QStyleOptionMenuItem
{
public:
    PythonQtShell_QStyleOptionMenuItem():QStyleOptionMenuItem(),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionMenuItem(const QStyleOptionMenuItem&  other):QStyleOptionMenuItem(other),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionMenuItem(int  version):QStyleOptionMenuItem(version),_wrapper(NULL) {};

   ~PythonQtShell_QStyleOptionMenuItem();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QStyleOptionMenuItem : public QObject
{ Q_OBJECT
public:
Q_ENUMS(CheckType MenuItemType StyleOptionType StyleOptionVersion )
enum CheckType{
  NotCheckable = QStyleOptionMenuItem::NotCheckable,   Exclusive = QStyleOptionMenuItem::Exclusive,   NonExclusive = QStyleOptionMenuItem::NonExclusive};
enum MenuItemType{
  Normal = QStyleOptionMenuItem::Normal,   DefaultItem = QStyleOptionMenuItem::DefaultItem,   Separator = QStyleOptionMenuItem::Separator,   SubMenu = QStyleOptionMenuItem::SubMenu,   Scroller = QStyleOptionMenuItem::Scroller,   TearOff = QStyleOptionMenuItem::TearOff,   Margin = QStyleOptionMenuItem::Margin,   EmptyArea = QStyleOptionMenuItem::EmptyArea};
enum StyleOptionType{
  Type = QStyleOptionMenuItem::Type};
enum StyleOptionVersion{
  Version = QStyleOptionMenuItem::Version};
public slots:
QStyleOptionMenuItem* new_QStyleOptionMenuItem();
QStyleOptionMenuItem* new_QStyleOptionMenuItem(const QStyleOptionMenuItem&  other);
QStyleOptionMenuItem* new_QStyleOptionMenuItem(int  version);
void delete_QStyleOptionMenuItem(QStyleOptionMenuItem* obj) { delete obj; }
void py_set_checkType(QStyleOptionMenuItem* theWrappedObject, QStyleOptionMenuItem::CheckType  checkType){ theWrappedObject->checkType = checkType; }
QStyleOptionMenuItem::CheckType  py_get_checkType(QStyleOptionMenuItem* theWrappedObject){ return theWrappedObject->checkType; }
void py_set_checked(QStyleOptionMenuItem* theWrappedObject, bool  checked){ theWrappedObject->checked = checked; }
bool  py_get_checked(QStyleOptionMenuItem* theWrappedObject){ return theWrappedObject->checked; }
void py_set_font(QStyleOptionMenuItem* theWrappedObject, QFont  font){ theWrappedObject->font = font; }
QFont  py_get_font(QStyleOptionMenuItem* theWrappedObject){ return theWrappedObject->font; }
void py_set_icon(QStyleOptionMenuItem* theWrappedObject, QIcon  icon){ theWrappedObject->icon = icon; }
QIcon  py_get_icon(QStyleOptionMenuItem* theWrappedObject){ return theWrappedObject->icon; }
void py_set_maxIconWidth(QStyleOptionMenuItem* theWrappedObject, int  maxIconWidth){ theWrappedObject->maxIconWidth = maxIconWidth; }
int  py_get_maxIconWidth(QStyleOptionMenuItem* theWrappedObject){ return theWrappedObject->maxIconWidth; }
void py_set_menuHasCheckableItems(QStyleOptionMenuItem* theWrappedObject, bool  menuHasCheckableItems){ theWrappedObject->menuHasCheckableItems = menuHasCheckableItems; }
bool  py_get_menuHasCheckableItems(QStyleOptionMenuItem* theWrappedObject){ return theWrappedObject->menuHasCheckableItems; }
void py_set_menuItemType(QStyleOptionMenuItem* theWrappedObject, QStyleOptionMenuItem::MenuItemType  menuItemType){ theWrappedObject->menuItemType = menuItemType; }
QStyleOptionMenuItem::MenuItemType  py_get_menuItemType(QStyleOptionMenuItem* theWrappedObject){ return theWrappedObject->menuItemType; }
void py_set_menuRect(QStyleOptionMenuItem* theWrappedObject, QRect  menuRect){ theWrappedObject->menuRect = menuRect; }
QRect  py_get_menuRect(QStyleOptionMenuItem* theWrappedObject){ return theWrappedObject->menuRect; }
void py_set_reservedShortcutWidth(QStyleOptionMenuItem* theWrappedObject, int  reservedShortcutWidth){ theWrappedObject->reservedShortcutWidth = reservedShortcutWidth; }
int  py_get_reservedShortcutWidth(QStyleOptionMenuItem* theWrappedObject){ return theWrappedObject->reservedShortcutWidth; }
void py_set_text(QStyleOptionMenuItem* theWrappedObject, QString  text){ theWrappedObject->text = text; }
QString  py_get_text(QStyleOptionMenuItem* theWrappedObject){ return theWrappedObject->text; }
};





class PythonQtShell_QStyleOptionProgressBar : public QStyleOptionProgressBar
{
public:
    PythonQtShell_QStyleOptionProgressBar():QStyleOptionProgressBar(),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionProgressBar(const QStyleOptionProgressBar&  other):QStyleOptionProgressBar(other),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionProgressBar(int  version):QStyleOptionProgressBar(version),_wrapper(NULL) {};

   ~PythonQtShell_QStyleOptionProgressBar();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QStyleOptionProgressBar : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StyleOptionType StyleOptionVersion )
enum StyleOptionType{
  Type = QStyleOptionProgressBar::Type};
enum StyleOptionVersion{
  Version = QStyleOptionProgressBar::Version};
public slots:
QStyleOptionProgressBar* new_QStyleOptionProgressBar();
QStyleOptionProgressBar* new_QStyleOptionProgressBar(const QStyleOptionProgressBar&  other);
QStyleOptionProgressBar* new_QStyleOptionProgressBar(int  version);
void delete_QStyleOptionProgressBar(QStyleOptionProgressBar* obj) { delete obj; }
void py_set_bottomToTop(QStyleOptionProgressBar* theWrappedObject, bool  bottomToTop){ theWrappedObject->bottomToTop = bottomToTop; }
bool  py_get_bottomToTop(QStyleOptionProgressBar* theWrappedObject){ return theWrappedObject->bottomToTop; }
void py_set_invertedAppearance(QStyleOptionProgressBar* theWrappedObject, bool  invertedAppearance){ theWrappedObject->invertedAppearance = invertedAppearance; }
bool  py_get_invertedAppearance(QStyleOptionProgressBar* theWrappedObject){ return theWrappedObject->invertedAppearance; }
void py_set_maximum(QStyleOptionProgressBar* theWrappedObject, int  maximum){ theWrappedObject->maximum = maximum; }
int  py_get_maximum(QStyleOptionProgressBar* theWrappedObject){ return theWrappedObject->maximum; }
void py_set_minimum(QStyleOptionProgressBar* theWrappedObject, int  minimum){ theWrappedObject->minimum = minimum; }
int  py_get_minimum(QStyleOptionProgressBar* theWrappedObject){ return theWrappedObject->minimum; }
void py_set_progress(QStyleOptionProgressBar* theWrappedObject, int  progress){ theWrappedObject->progress = progress; }
int  py_get_progress(QStyleOptionProgressBar* theWrappedObject){ return theWrappedObject->progress; }
void py_set_text(QStyleOptionProgressBar* theWrappedObject, QString  text){ theWrappedObject->text = text; }
QString  py_get_text(QStyleOptionProgressBar* theWrappedObject){ return theWrappedObject->text; }
void py_set_textAlignment(QStyleOptionProgressBar* theWrappedObject, Qt::Alignment  textAlignment){ theWrappedObject->textAlignment = textAlignment; }
Qt::Alignment  py_get_textAlignment(QStyleOptionProgressBar* theWrappedObject){ return theWrappedObject->textAlignment; }
void py_set_textVisible(QStyleOptionProgressBar* theWrappedObject, bool  textVisible){ theWrappedObject->textVisible = textVisible; }
bool  py_get_textVisible(QStyleOptionProgressBar* theWrappedObject){ return theWrappedObject->textVisible; }
};





class PythonQtShell_QStyleOptionRubberBand : public QStyleOptionRubberBand
{
public:
    PythonQtShell_QStyleOptionRubberBand():QStyleOptionRubberBand(),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionRubberBand(const QStyleOptionRubberBand&  other):QStyleOptionRubberBand(other),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionRubberBand(int  version):QStyleOptionRubberBand(version),_wrapper(NULL) {};

   ~PythonQtShell_QStyleOptionRubberBand();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QStyleOptionRubberBand : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StyleOptionType StyleOptionVersion )
enum StyleOptionType{
  Type = QStyleOptionRubberBand::Type};
enum StyleOptionVersion{
  Version = QStyleOptionRubberBand::Version};
public slots:
QStyleOptionRubberBand* new_QStyleOptionRubberBand();
QStyleOptionRubberBand* new_QStyleOptionRubberBand(const QStyleOptionRubberBand&  other);
QStyleOptionRubberBand* new_QStyleOptionRubberBand(int  version);
void delete_QStyleOptionRubberBand(QStyleOptionRubberBand* obj) { delete obj; }
void py_set_opaque(QStyleOptionRubberBand* theWrappedObject, bool  opaque){ theWrappedObject->opaque = opaque; }
bool  py_get_opaque(QStyleOptionRubberBand* theWrappedObject){ return theWrappedObject->opaque; }
void py_set_shape(QStyleOptionRubberBand* theWrappedObject, QRubberBand::Shape  shape){ theWrappedObject->shape = shape; }
QRubberBand::Shape  py_get_shape(QStyleOptionRubberBand* theWrappedObject){ return theWrappedObject->shape; }
};





class PythonQtShell_QStyleOptionSizeGrip : public QStyleOptionSizeGrip
{
public:
    PythonQtShell_QStyleOptionSizeGrip():QStyleOptionSizeGrip(),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionSizeGrip(const QStyleOptionSizeGrip&  other):QStyleOptionSizeGrip(other),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionSizeGrip(int  version):QStyleOptionSizeGrip(version),_wrapper(NULL) {};

   ~PythonQtShell_QStyleOptionSizeGrip();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QStyleOptionSizeGrip : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StyleOptionType StyleOptionVersion )
enum StyleOptionType{
  Type = QStyleOptionSizeGrip::Type};
enum StyleOptionVersion{
  Version = QStyleOptionSizeGrip::Version};
public slots:
QStyleOptionSizeGrip* new_QStyleOptionSizeGrip();
QStyleOptionSizeGrip* new_QStyleOptionSizeGrip(const QStyleOptionSizeGrip&  other);
QStyleOptionSizeGrip* new_QStyleOptionSizeGrip(int  version);
void delete_QStyleOptionSizeGrip(QStyleOptionSizeGrip* obj) { delete obj; }
void py_set_corner(QStyleOptionSizeGrip* theWrappedObject, Qt::Corner  corner){ theWrappedObject->corner = corner; }
Qt::Corner  py_get_corner(QStyleOptionSizeGrip* theWrappedObject){ return theWrappedObject->corner; }
};





class PythonQtShell_QStyleOptionSlider : public QStyleOptionSlider
{
public:
    PythonQtShell_QStyleOptionSlider():QStyleOptionSlider(),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionSlider(const QStyleOptionSlider&  other):QStyleOptionSlider(other),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionSlider(int  version):QStyleOptionSlider(version),_wrapper(NULL) {};

   ~PythonQtShell_QStyleOptionSlider();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QStyleOptionSlider : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StyleOptionType StyleOptionVersion )
enum StyleOptionType{
  Type = QStyleOptionSlider::Type};
enum StyleOptionVersion{
  Version = QStyleOptionSlider::Version};
public slots:
QStyleOptionSlider* new_QStyleOptionSlider();
QStyleOptionSlider* new_QStyleOptionSlider(const QStyleOptionSlider&  other);
QStyleOptionSlider* new_QStyleOptionSlider(int  version);
void delete_QStyleOptionSlider(QStyleOptionSlider* obj) { delete obj; }
void py_set_dialWrapping(QStyleOptionSlider* theWrappedObject, bool  dialWrapping){ theWrappedObject->dialWrapping = dialWrapping; }
bool  py_get_dialWrapping(QStyleOptionSlider* theWrappedObject){ return theWrappedObject->dialWrapping; }
void py_set_keyboardModifiers(QStyleOptionSlider* theWrappedObject, Qt::KeyboardModifiers  keyboardModifiers){ theWrappedObject->keyboardModifiers = keyboardModifiers; }
Qt::KeyboardModifiers  py_get_keyboardModifiers(QStyleOptionSlider* theWrappedObject){ return theWrappedObject->keyboardModifiers; }
void py_set_maximum(QStyleOptionSlider* theWrappedObject, int  maximum){ theWrappedObject->maximum = maximum; }
int  py_get_maximum(QStyleOptionSlider* theWrappedObject){ return theWrappedObject->maximum; }
void py_set_minimum(QStyleOptionSlider* theWrappedObject, int  minimum){ theWrappedObject->minimum = minimum; }
int  py_get_minimum(QStyleOptionSlider* theWrappedObject){ return theWrappedObject->minimum; }
void py_set_notchTarget(QStyleOptionSlider* theWrappedObject, qreal  notchTarget){ theWrappedObject->notchTarget = notchTarget; }
qreal  py_get_notchTarget(QStyleOptionSlider* theWrappedObject){ return theWrappedObject->notchTarget; }
void py_set_orientation(QStyleOptionSlider* theWrappedObject, Qt::Orientation  orientation){ theWrappedObject->orientation = orientation; }
Qt::Orientation  py_get_orientation(QStyleOptionSlider* theWrappedObject){ return theWrappedObject->orientation; }
void py_set_pageStep(QStyleOptionSlider* theWrappedObject, int  pageStep){ theWrappedObject->pageStep = pageStep; }
int  py_get_pageStep(QStyleOptionSlider* theWrappedObject){ return theWrappedObject->pageStep; }
void py_set_singleStep(QStyleOptionSlider* theWrappedObject, int  singleStep){ theWrappedObject->singleStep = singleStep; }
int  py_get_singleStep(QStyleOptionSlider* theWrappedObject){ return theWrappedObject->singleStep; }
void py_set_sliderPosition(QStyleOptionSlider* theWrappedObject, int  sliderPosition){ theWrappedObject->sliderPosition = sliderPosition; }
int  py_get_sliderPosition(QStyleOptionSlider* theWrappedObject){ return theWrappedObject->sliderPosition; }
void py_set_sliderValue(QStyleOptionSlider* theWrappedObject, int  sliderValue){ theWrappedObject->sliderValue = sliderValue; }
int  py_get_sliderValue(QStyleOptionSlider* theWrappedObject){ return theWrappedObject->sliderValue; }
void py_set_tickInterval(QStyleOptionSlider* theWrappedObject, int  tickInterval){ theWrappedObject->tickInterval = tickInterval; }
int  py_get_tickInterval(QStyleOptionSlider* theWrappedObject){ return theWrappedObject->tickInterval; }
void py_set_tickPosition(QStyleOptionSlider* theWrappedObject, QSlider::TickPosition  tickPosition){ theWrappedObject->tickPosition = tickPosition; }
QSlider::TickPosition  py_get_tickPosition(QStyleOptionSlider* theWrappedObject){ return theWrappedObject->tickPosition; }
void py_set_upsideDown(QStyleOptionSlider* theWrappedObject, bool  upsideDown){ theWrappedObject->upsideDown = upsideDown; }
bool  py_get_upsideDown(QStyleOptionSlider* theWrappedObject){ return theWrappedObject->upsideDown; }
};





class PythonQtShell_QStyleOptionSpinBox : public QStyleOptionSpinBox
{
public:
    PythonQtShell_QStyleOptionSpinBox():QStyleOptionSpinBox(),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionSpinBox(const QStyleOptionSpinBox&  other):QStyleOptionSpinBox(other),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionSpinBox(int  version):QStyleOptionSpinBox(version),_wrapper(NULL) {};

   ~PythonQtShell_QStyleOptionSpinBox();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QStyleOptionSpinBox : public QObject
{ Q_OBJECT
public:
Q_ENUMS(StyleOptionType StyleOptionVersion )
enum StyleOptionType{
  Type = QStyleOptionSpinBox::Type};
enum StyleOptionVersion{
  Version = QStyleOptionSpinBox::Version};
public slots:
QStyleOptionSpinBox* new_QStyleOptionSpinBox();
QStyleOptionSpinBox* new_QStyleOptionSpinBox(const QStyleOptionSpinBox&  other);
QStyleOptionSpinBox* new_QStyleOptionSpinBox(int  version);
void delete_QStyleOptionSpinBox(QStyleOptionSpinBox* obj) { delete obj; }
void py_set_buttonSymbols(QStyleOptionSpinBox* theWrappedObject, QAbstractSpinBox::ButtonSymbols  buttonSymbols){ theWrappedObject->buttonSymbols = buttonSymbols; }
QAbstractSpinBox::ButtonSymbols  py_get_buttonSymbols(QStyleOptionSpinBox* theWrappedObject){ return theWrappedObject->buttonSymbols; }
void py_set_frame(QStyleOptionSpinBox* theWrappedObject, bool  frame){ theWrappedObject->frame = frame; }
bool  py_get_frame(QStyleOptionSpinBox* theWrappedObject){ return theWrappedObject->frame; }
void py_set_stepEnabled(QStyleOptionSpinBox* theWrappedObject, QAbstractSpinBox::StepEnabled  stepEnabled){ theWrappedObject->stepEnabled = stepEnabled; }
QAbstractSpinBox::StepEnabled  py_get_stepEnabled(QStyleOptionSpinBox* theWrappedObject){ return theWrappedObject->stepEnabled; }
};





class PythonQtShell_QStyleOptionTab : public QStyleOptionTab
{
public:
    PythonQtShell_QStyleOptionTab():QStyleOptionTab(),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionTab(const QStyleOptionTab&  other):QStyleOptionTab(other),_wrapper(NULL) {};
    PythonQtShell_QStyleOptionTab(int  version):QStyleOptionTab(version),_wrapper(NULL) {};

   ~PythonQtShell_QStyleOptionTab();


  PythonQtInstanceWrapper* _wrapper;
};

class PythonQtWrapper_QStyleOptionTab : public QObject
{ Q_OBJECT
public:
Q_ENUMS(CornerWidget SelectedPosition StyleOptionType StyleOptionVersion TabFeature TabPosition )
Q_FLAGS(CornerWidgets TabFeatures )
enum CornerWidget{
  NoCornerWidgets = QStyleOptionTab::NoCornerWidgets,   LeftCornerWidget = QStyleOptionTab::LeftCornerWidget,   RightCornerWidget = QStyleOptionTab::RightCornerWidget};
enum SelectedPosition{
  NotAdjacent = QStyleOptionTab::NotAdjacent,   NextIsSelected = QStyleOptionTab::NextIsSelected,   PreviousIsSelected = QStyleOptionTab::PreviousIsSelected};
enum StyleOptionType{
  Type = QStyleOptionTab::Type};
enum StyleOptionVersion{
  Version = QStyleOptionTab::Version};
enum TabFeature{
  None = QStyleOptionTab::None,   HasFrame = QStyleOptionTab::HasFrame};
enum TabPosition{
  Beginning = QStyleOptionTab::Beginning,   Middle = QStyleOptionTab::Middle,   End = QStyleOptionTab::End,   OnlyOneTab = QStyleOptionTab::OnlyOneTab};
Q_DECLARE_FLAGS(CornerWidgets, CornerWidget)
Q_DECLARE_FLAGS(TabFeatures, TabFeature)
public slots:
QStyleOptionTab* new_QStyleOptionTab();
QStyleOptionTab* new_QStyleOptionTab(const QStyleOptionTab&  other);
QStyleOptionTab* new_QStyleOptionTab(int  version);
void delete_QStyleOptionTab(QStyleOptionTab* obj) { delete obj; }
void py_set_cornerWidgets(QStyleOptionTab* theWrappedObject, QStyleOptionTab::CornerWidgets  cornerWidgets){ theWrappedObject->cornerWidgets = cornerWidgets; }
QStyleOptionTab::CornerWidgets  py_get_cornerWidgets(QStyleOptionTab* theWrappedObject){ return theWrappedObject->cornerWidgets; }
void py_set_documentMode(QStyleOptionTab* theWrappedObject, bool  documentMode){ theWrappedObject->documentMode = documentMode; }
bool  py_get_documentMode(QStyleOptionTab* theWrappedObject){ return theWrappedObject->documentMode; }
void py_set_features(QStyleOptionTab* theWrappedObject, QStyleOptionTab::TabFeatures  features){ theWrappedObject->features = features; }
QStyleOptionTab::TabFeatures  py_get_features(QStyleOptionTab* theWrappedObject){ return theWrappedObject->features; }
void py_set_icon(QStyleOptionTab* theWrappedObject, QIcon  icon){ theWrappedObject->icon = icon; }
QIcon  py_get_icon(QStyleOptionTab* theWrappedObject){ return theWrappedObject->icon; }
void py_set_iconSize(QStyleOptionTab* theWrappedObject, QSize  iconSize){ theWrappedObject->iconSize = iconSize; }
QSize  py_get_iconSize(QStyleOptionTab* theWrappedObject){ return theWrappedObject->iconSize; }
void py_set_leftButtonSize(QStyleOptionTab* theWrappedObject, QSize  leftButtonSize){ theWrappedObject->leftButtonSize = leftButtonSize; }
QSize  py_get_leftButtonSize(QStyleOptionTab* theWrappedObject){ return theWrappedObject->leftButtonSize; }
void py_set_position(QStyleOptionTab* theWrappedObject, QStyleOptionTab::TabPosition  position){ theWrappedObject->position = position; }
QStyleOptionTab::TabPosition  py_get_position(QStyleOptionTab* theWrappedObject){ return theWrappedObject->position; }
void py_set_rightButtonSize(QStyleOptionTab* theWrappedObject, QSize  rightButtonSize){ theWrappedObject->rightButtonSize = rightButtonSize; }
QSize  py_get_rightButtonSize(QStyleOptionTab* theWrappedObject){ return theWrappedObject->rightButtonSize; }
void py_set_row(QStyleOptionTab* theWrappedObject, int  row){ theWrappedObject->row = row; }
int  py_get_row(QStyleOptionTab* theWrappedObject){ return theWrappedObject->row; }
void py_set_selectedPosition(QStyleOptionTab* theWrappedObject, QStyleOptionTab::SelectedPosition  selectedPosition){ theWrappedObject->selectedPosition = selectedPosition; }
QStyleOptionTab::SelectedPosition  py_get_selectedPosition(QStyleOptionTab* theWrappedObject){ return theWrappedObject->selectedPosition; }
void py_set_shape(QStyleOptionTab* theWrappedObject, QTabBar::Shape  shape){ theWrappedObject->shape = shape; }
QTabBar::Shape  py_get_shape(QStyleOptionTab* theWrappedObject){ return theWrappedObject->shape; }
void py_set_tabIndex(QStyleOptionTab* theWrappedObject, int  tabIndex){ theWrappedObject->tabIndex = tabIndex; }
int  py_get_tabIndex(QStyleOptionTab* theWrappedObject){ return theWrappedObject->tabIndex; }
void py_set_text(QStyleOptionTab* theWrappedObject, QString  text){ theWrappedObject->text = text; }
QString  py_get_text(QStyleOptionTab* theWrappedObject){ return theWrappedObject->text; }
};


