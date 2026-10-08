Sun *__thiscall Sun::Sun(Sun *this)
{
  NiNode *rootNode; // edi
  LONG (__stdcall *v3)(volatile LONG *); // ebp
  volatile LONG *SunBillboard; // edi
  volatile LONG *SunGlareBillboard; // edi
  NiGeometry *SunGeometry; // edi
  NiGeometry *SunGlareGeometry; // edi
  NiDirectionalLight *SunDirLight; // edi

  SkyObject::SkyObject((SkyObject *)this); /*0x544b7b*/
  this->vtbl = (SkyObjectVtbl *)&Sun::`vftable'; /*0x544b82*/
  this->membr.SunBillboard = 0; /*0x544b8c*/
  this->membr.SunGlareBillboard = 0; /*0x544b8f*/
  this->membr.SunGeometry = 0; /*0x544b92*/
  this->membr.SunGlareGeometry = 0; /*0x544b95*/
  this->membr.SunDirLight = 0; /*0x544b98*/
  rootNode = this->membr.super.rootNode; /*0x544b9b*/
  v3 = InterlockedDecrement; /*0x544ba0*/
  if ( rootNode ) /*0x544bab*/
  {
    if ( !v3((volatile LONG *)&rootNode->members) ) /*0x544bb1*/
      rootNode->vtbl->super.super.super.Destructor((NiRefObject *)rootNode, 1); /*0x544bc3*/
    this->membr.super.rootNode = 0; /*0x544bc5*/
  }
  SunBillboard = (volatile LONG *)this->membr.SunBillboard; /*0x544bc8*/
  if ( SunBillboard ) /*0x544bcd*/
  {
    if ( !v3(SunBillboard + 1) ) /*0x544bd3*/
      (**(void (__thiscall ***)(void *, int))SunBillboard)((void *)SunBillboard, 1); /*0x544be5*/
    this->membr.SunBillboard = 0; /*0x544be7*/
  }
  SunGlareBillboard = (volatile LONG *)this->membr.SunGlareBillboard; /*0x544bea*/
  if ( SunGlareBillboard ) /*0x544bef*/
  {
    if ( !v3(SunGlareBillboard + 1) ) /*0x544bf5*/
      (**(void (__thiscall ***)(void *, int))SunGlareBillboard)((void *)SunGlareBillboard, 1); /*0x544c07*/
    this->membr.SunGlareBillboard = 0; /*0x544c09*/
  }
  SunGeometry = this->membr.SunGeometry; /*0x544c0c*/
  if ( SunGeometry ) /*0x544c11*/
  {
    if ( !v3((volatile LONG *)&SunGeometry->member) ) /*0x544c17*/
      SunGeometry->__vftable->super.super.super.Destructor((NiRefObject *)SunGeometry, 1); /*0x544c29*/
    this->membr.SunGeometry = 0; /*0x544c2b*/
  }
  SunGlareGeometry = this->membr.SunGlareGeometry; /*0x544c2e*/
  if ( SunGlareGeometry ) /*0x544c33*/
  {
    if ( !v3((volatile LONG *)&SunGlareGeometry->member) ) /*0x544c39*/
      SunGlareGeometry->__vftable->super.super.super.Destructor((NiRefObject *)SunGlareGeometry, 1); /*0x544c4b*/
    this->membr.SunGlareGeometry = 0; /*0x544c4d*/
  }
  SunDirLight = this->membr.SunDirLight; /*0x544c50*/
  if ( SunDirLight ) /*0x544c55*/
  {
    if ( !v3((volatile LONG *)&SunDirLight->members) ) /*0x544c5b*/
      SunDirLight->vtbl->super.super.Destructor((NiRefObject *)SunDirLight, 1); /*0x544c6d*/
    this->membr.SunDirLight = 0; /*0x544c6f*/
  }
  this->membr.SunPickList = 0; /*0x544c74*/
  this->membr.unk20 = 0.0; /*0x544c77*/
  this->membr.unk24 = 0; /*0x544c7a*/
  return this; /*0x544c7f*/
}
