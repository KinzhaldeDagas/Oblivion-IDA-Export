Atmosphere *__thiscall Atmosphere::Atmosphere(Atmosphere *this)
{
  NiAVObject *Mesh; // edi
  LONG (__stdcall *v3)(volatile LONG *); // ebx
  NiNode *Quad; // edi
  UInt32 unk10; // edi
  BSFogProperty *fogProperty; // edi

  SkyObject::SkyObject((SkyObject *)this); /*0x53ae8b*/
  this->__vftbl = (SkyObjectVtbl *)&Atmosphere::`vftable'; /*0x53ae92*/
  this->Mesh = 0; /*0x53ae9c*/
  this->fogProperty = 0; /*0x53ae9f*/
  this->unk10 = 0; /*0x53aea2*/
  this->Quad = 0; /*0x53aea5*/
  Mesh = this->Mesh; /*0x53aea8*/
  v3 = InterlockedDecrement; /*0x53aead*/
  if ( Mesh ) /*0x53aeb8*/
  {
    if ( !v3((volatile LONG *)&Mesh->members) ) /*0x53aebe*/
      Mesh->vtbl->super.super.Destructor((NiRefObject *)Mesh, 1); /*0x53aed0*/
    this->Mesh = 0; /*0x53aed2*/
  }
  Quad = this->Quad; /*0x53aed5*/
  if ( Quad ) /*0x53aeda*/
  {
    if ( !v3((volatile LONG *)&Quad->members) ) /*0x53aee0*/
      Quad->vtbl->super.super.super.Destructor((NiRefObject *)Quad, 1); /*0x53aef2*/
    this->Quad = 0; /*0x53aef4*/
  }
  unk10 = this->unk10; /*0x53aef7*/
  if ( unk10 ) /*0x53aefc*/
  {
    if ( !v3((volatile LONG *)(unk10 + 4)) ) /*0x53af02*/
      (**(void (__thiscall ***)(UInt32, int))unk10)(unk10, 1); /*0x53af14*/
    this->unk10 = 0; /*0x53af16*/
  }
  fogProperty = this->fogProperty; /*0x53af19*/
  if ( fogProperty ) /*0x53af1e*/
  {
    if ( !v3((volatile LONG *)fogProperty + 1) ) /*0x53af24*/
      (**(void (__thiscall ***)(BSFogProperty *, int))fogProperty)(fogProperty, 1); /*0x53af36*/
    this->fogProperty = 0; /*0x53af38*/
  }
  this->unk18 = 1;                              // Fog property decode: Atmosphere constructor defaults unk18=1, enabling start/end property copies and camera far-plane synchronization in 0x53B0E0. /*0x53af3d*/
  return this; /*0x53af41*/
}
