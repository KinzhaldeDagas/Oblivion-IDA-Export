Sun *__thiscall Sun::Sun(Sun *this)
{
  NiNode *rootNode; // edi
  LONG (__stdcall *v3)(volatile LONG *); // ebp
  volatile LONG *SunBillboard; // edi
  volatile LONG *SunGlareBillboard; // edi
  NiGeometry *SunGeometry; // edi
  NiGeometry *SunGlareGeometry; // edi
  NiDirectionalLight *SunDirLight; // edi

  SkyObject::SkyObject((SkyObject *)this);
  this->vtbl = (SkyObjectVtbl *)&Sun::`vftable';
  this->membr.SunBillboard = 0;
  this->membr.SunGlareBillboard = 0;
  this->membr.SunGeometry = 0;
  this->membr.SunGlareGeometry = 0;
  this->membr.SunDirLight = 0;
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
  this->membr.SunPickList = 0;
  this->membr.unk20 = 0.0;
  this->membr.unk24 = 0;
  return this;
}
