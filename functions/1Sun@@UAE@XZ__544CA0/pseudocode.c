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

  this->vtbl = (SkyObjectVtbl *)&Sun::`vftable'; /*0x544ccb*/
  rootNode = this->membr.super.rootNode; /*0x544cd1*/
  v3 = InterlockedDecrement; /*0x544cd4*/
  if ( rootNode ) /*0x544ce6*/
  {
    if ( !v3((volatile LONG *)&rootNode->members) ) /*0x544cec*/
      rootNode->vtbl->super.super.super.Destructor((NiRefObject *)rootNode, 1); /*0x544cfe*/
    this->membr.super.rootNode = 0; /*0x544d00*/
  }
  SunBillboard = (volatile LONG *)this->membr.SunBillboard; /*0x544d03*/
  if ( SunBillboard ) /*0x544d08*/
  {
    if ( !v3(SunBillboard + 1) ) /*0x544d0e*/
      (**(void (__thiscall ***)(void *, int))SunBillboard)((void *)SunBillboard, 1); /*0x544d20*/
    this->membr.SunBillboard = 0; /*0x544d22*/
  }
  SunGlareBillboard = (volatile LONG *)this->membr.SunGlareBillboard; /*0x544d25*/
  if ( SunGlareBillboard ) /*0x544d2a*/
  {
    if ( !v3(SunGlareBillboard + 1) ) /*0x544d30*/
      (**(void (__thiscall ***)(void *, int))SunGlareBillboard)((void *)SunGlareBillboard, 1); /*0x544d42*/
    this->membr.SunGlareBillboard = 0; /*0x544d44*/
  }
  SunGeometry = this->membr.SunGeometry; /*0x544d47*/
  if ( SunGeometry ) /*0x544d4c*/
  {
    if ( !v3((volatile LONG *)&SunGeometry->member) ) /*0x544d52*/
      SunGeometry->__vftable->super.super.super.Destructor((NiRefObject *)SunGeometry, 1); /*0x544d64*/
    this->membr.SunGeometry = 0; /*0x544d66*/
  }
  SunGlareGeometry = this->membr.SunGlareGeometry; /*0x544d69*/
  if ( SunGlareGeometry ) /*0x544d6e*/
  {
    if ( !v3((volatile LONG *)&SunGlareGeometry->member) ) /*0x544d74*/
      SunGlareGeometry->__vftable->super.super.super.Destructor((NiRefObject *)SunGlareGeometry, 1); /*0x544d86*/
    this->membr.SunGlareGeometry = 0; /*0x544d88*/
  }
  SunDirLight = this->membr.SunDirLight; /*0x544d8b*/
  if ( SunDirLight ) /*0x544d90*/
  {
    if ( !v3((volatile LONG *)&SunDirLight->members) ) /*0x544d96*/
      SunDirLight->vtbl->super.super.Destructor((NiRefObject *)SunDirLight, 1); /*0x544da8*/
    this->membr.SunDirLight = 0; /*0x544daa*/
  }
  SunPickList = this->membr.SunPickList; /*0x544dad*/
  if ( SunPickList ) /*0x544db2*/
  {
    NiPickContext_dtor(this->membr.SunPickList); /*0x544db6*/
    FormHeapFree((unsigned int)SunPickList); /*0x544dbc*/
  }
  v10 = this->membr.SunDirLight; /*0x544dc4*/
  if ( v10 ) /*0x544dce*/
  {
    if ( !v3((volatile LONG *)&v10->members) ) /*0x544dd4*/
      v10->vtbl->super.super.Destructor((NiRefObject *)v10, 1); /*0x544de6*/
  }
  v11 = this->membr.SunGlareGeometry; /*0x544de8*/
  if ( v11 ) /*0x544df2*/
  {
    if ( !v3((volatile LONG *)&v11->member) ) /*0x544df8*/
      v11->__vftable->super.super.super.Destructor((NiRefObject *)v11, 1); /*0x544e0a*/
  }
  v12 = this->membr.SunGeometry; /*0x544e0c*/
  if ( v12 ) /*0x544e16*/
  {
    if ( !v3((volatile LONG *)&v12->member) ) /*0x544e1c*/
      v12->__vftable->super.super.super.Destructor((NiRefObject *)v12, 1); /*0x544e2e*/
  }
  v13 = (volatile LONG *)this->membr.SunGlareBillboard; /*0x544e30*/
  if ( v13 ) /*0x544e3a*/
  {
    if ( !v3(v13 + 1) ) /*0x544e40*/
      (**(void (__thiscall ***)(void *, int))v13)((void *)v13, 1); /*0x544e52*/
  }
  v14 = (volatile LONG *)this->membr.SunBillboard; /*0x544e54*/
  if ( v14 ) /*0x544e5d*/
  {
    if ( !v3(v14 + 1) ) /*0x544e63*/
      (**(void (__thiscall ***)(void *, int))v14)((void *)v14, 1); /*0x544e75*/
  }
  SkyObject::~SkyObject((SkyObject *)this); /*0x544e81*/
}
