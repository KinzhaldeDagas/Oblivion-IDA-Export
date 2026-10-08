void __thiscall Atmosphere::~Atmosphere(Atmosphere *this)
{
  BSFogProperty *fogProperty; // edi
  LONG (__stdcall *v3)(volatile LONG *); // ebp
  NiAVObject *Mesh; // edi
  NiNode *Quad; // edi
  UInt32 unk10; // edi
  NiNode *v7; // edi
  UInt32 v8; // edi
  BSFogProperty *v9; // edi
  NiAVObject *v10; // edi

  this->__vftbl = (SkyObjectVtbl *)&Atmosphere::`vftable'; /*0x53af8b*/
  fogProperty = this->fogProperty; /*0x53af91*/
  v3 = InterlockedDecrement; /*0x53af94*/
  if ( fogProperty ) /*0x53afa6*/
  {
    if ( !v3((volatile LONG *)fogProperty + 1) ) /*0x53afac*/
      (**(void (__thiscall ***)(BSFogProperty *, int))fogProperty)(fogProperty, 1); /*0x53afbe*/
    this->fogProperty = 0; /*0x53afc0*/
  }
  Mesh = this->Mesh; /*0x53afc3*/
  if ( Mesh ) /*0x53afc8*/
  {
    if ( !v3((volatile LONG *)&Mesh->members) ) /*0x53afce*/
      Mesh->vtbl->super.super.Destructor((NiRefObject *)Mesh, 1); /*0x53afe0*/
    this->Mesh = 0; /*0x53afe2*/
  }
  Quad = this->Quad; /*0x53afe5*/
  if ( Quad ) /*0x53afea*/
  {
    if ( !v3((volatile LONG *)&Quad->members) ) /*0x53aff0*/
      Quad->vtbl->super.super.super.Destructor((NiRefObject *)Quad, 1); /*0x53b002*/
    this->Quad = 0; /*0x53b004*/
  }
  unk10 = this->unk10; /*0x53b007*/
  if ( unk10 ) /*0x53b00c*/
  {
    if ( !v3((volatile LONG *)(unk10 + 4)) ) /*0x53b012*/
      (**(void (__thiscall ***)(UInt32, int))unk10)(unk10, 1); /*0x53b024*/
    this->unk10 = 0; /*0x53b026*/
  }
  v7 = this->Quad; /*0x53b029*/
  if ( v7 ) /*0x53b033*/
  {
    if ( !v3((volatile LONG *)&v7->members) ) /*0x53b039*/
      v7->vtbl->super.super.super.Destructor((NiRefObject *)v7, 1); /*0x53b04b*/
  }
  v8 = this->unk10; /*0x53b04d*/
  if ( v8 ) /*0x53b057*/
  {
    if ( !v3((volatile LONG *)(v8 + 4)) ) /*0x53b05d*/
      (**(void (__thiscall ***)(UInt32, int))v8)(v8, 1); /*0x53b06f*/
  }
  v9 = this->fogProperty; /*0x53b071*/
  if ( v9 ) /*0x53b07b*/
  {
    if ( !v3((volatile LONG *)v9 + 1) ) /*0x53b081*/
      (**(void (__thiscall ***)(BSFogProperty *, int))v9)(v9, 1); /*0x53b093*/
  }
  v10 = this->Mesh; /*0x53b095*/
  if ( v10 ) /*0x53b09e*/
  {
    if ( !v3((volatile LONG *)&v10->members) ) /*0x53b0a4*/
      v10->vtbl->super.super.Destructor((NiRefObject *)v10, 1); /*0x53b0b6*/
  }
  SkyObject::~SkyObject((SkyObject *)this); /*0x53b0c2*/
}
