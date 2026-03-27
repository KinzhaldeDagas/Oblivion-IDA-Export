void __thiscall Sun::~Sun(Sun *this)
{
  NiNode *rootNode; // edi
  LONG (__stdcall *v3)(volatile LONG *); // ebp
  volatile LONG *SunBillboard; // edi
  volatile LONG *SunGlareBillboard; // edi
  NiGeometry *SunGeometry; // edi
  NiGeometry *SunGlareGeometry; // edi
  NiDirectionalLight *SunDirLight; // edi
  NiTArray_void *SunPickList; // edi
  NiDirectionalLight *v10; // edi
  NiGeometry *v11; // edi
  NiGeometry *v12; // edi
  volatile LONG *v13; // edi
  volatile LONG *v14; // edi

  this->vtbl = (SkyObjectVtbl *)&Sun::`vftable';
  rootNode = this->membr.super.rootNode;
  v3 = InterlockedDecrement;
  if ( rootNode )
  {
    if ( !v3((volatile LONG *)&rootNode->members) )
      rootNode->vtbl->super.super.super.Destructor((NiRefObject *)rootNode, 1);
    this->membr.super.rootNode = 0;
  }
  SunBillboard = (volatile LONG *)this->membr.SunBillboard;
  if ( SunBillboard )
  {
    if ( !v3(SunBillboard + 1) )
      (**(void (__thiscall ***)(void *, int))SunBillboard)((void *)SunBillboard, 1);
    this->membr.SunBillboard = 0;
  }
  SunGlareBillboard = (volatile LONG *)this->membr.SunGlareBillboard;
  if ( SunGlareBillboard )
  {
    if ( !v3(SunGlareBillboard + 1) )
      (**(void (__thiscall ***)(void *, int))SunGlareBillboard)((void *)SunGlareBillboard, 1);
    this->membr.SunGlareBillboard = 0;
  }
  SunGeometry = this->membr.SunGeometry;
  if ( SunGeometry )
  {
    if ( !v3((volatile LONG *)&SunGeometry->member) )
      SunGeometry->__vftable->super.super.super.Destructor((NiRefObject *)SunGeometry, 1);
    this->membr.SunGeometry = 0;
  }
  SunGlareGeometry = this->membr.SunGlareGeometry;
  if ( SunGlareGeometry )
  {
    if ( !v3((volatile LONG *)&SunGlareGeometry->member) )
      SunGlareGeometry->__vftable->super.super.super.Destructor((NiRefObject *)SunGlareGeometry, 1);
    this->membr.SunGlareGeometry = 0;
  }
  SunDirLight = this->membr.SunDirLight;
  if ( SunDirLight )
  {
    if ( !v3((volatile LONG *)&SunDirLight->members) )
      SunDirLight->vtbl->super.super.Destructor((NiRefObject *)SunDirLight, 1);
    this->membr.SunDirLight = 0;
  }
  SunPickList = this->membr.SunPickList;
  if ( SunPickList )
  {
    sub_959EC0(this->membr.SunPickList);
    FormHeapFree((unsigned int)SunPickList);
  }
  v10 = this->membr.SunDirLight;
  if ( v10 )
  {
    if ( !v3((volatile LONG *)&v10->members) )
      v10->vtbl->super.super.Destructor((NiRefObject *)v10, 1);
  }
  v11 = this->membr.SunGlareGeometry;
  if ( v11 )
  {
    if ( !v3((volatile LONG *)&v11->member) )
      v11->__vftable->super.super.super.Destructor((NiRefObject *)v11, 1);
  }
  v12 = this->membr.SunGeometry;
  if ( v12 )
  {
    if ( !v3((volatile LONG *)&v12->member) )
      v12->__vftable->super.super.super.Destructor((NiRefObject *)v12, 1);
  }
  v13 = (volatile LONG *)this->membr.SunGlareBillboard;
  if ( v13 )
  {
    if ( !v3(v13 + 1) )
      (**(void (__thiscall ***)(void *, int))v13)((void *)v13, 1);
  }
  v14 = (volatile LONG *)this->membr.SunBillboard;
  if ( v14 )
  {
    if ( !v3(v14 + 1) )
      (**(void (__thiscall ***)(void *, int))v14)((void *)v14, 1);
  }
  SkyObject::~SkyObject((SkyObject *)this);
}
