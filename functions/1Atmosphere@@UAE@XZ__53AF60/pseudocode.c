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

  this->__vftbl = (SkyObjectVtbl *)&Atmosphere::`vftable';
  fogProperty = this->fogProperty;
  v3 = InterlockedDecrement;
  if ( fogProperty )
  {
    if ( !v3((volatile LONG *)fogProperty + 1) )
      (**(void (__thiscall ***)(BSFogProperty *, int))fogProperty)(fogProperty, 1);
    this->fogProperty = 0;
  }
  Mesh = this->Mesh;
  if ( Mesh )
  {
    if ( !v3((volatile LONG *)&Mesh->members) )
      Mesh->vtbl->super.super.Destructor((NiRefObject *)Mesh, 1);
    this->Mesh = 0;
  }
  Quad = this->Quad;
  if ( Quad )
  {
    if ( !v3((volatile LONG *)&Quad->members) )
      Quad->vtbl->super.super.super.Destructor((NiRefObject *)Quad, 1);
    this->Quad = 0;
  }
  unk10 = this->unk10;
  if ( unk10 )
  {
    if ( !v3((volatile LONG *)(unk10 + 4)) )
      (**(void (__thiscall ***)(UInt32, int))unk10)(unk10, 1);
    this->unk10 = 0;
  }
  v7 = this->Quad;
  if ( v7 )
  {
    if ( !v3((volatile LONG *)&v7->members) )
      v7->vtbl->super.super.super.Destructor((NiRefObject *)v7, 1);
  }
  v8 = this->unk10;
  if ( v8 )
  {
    if ( !v3((volatile LONG *)(v8 + 4)) )
      (**(void (__thiscall ***)(UInt32, int))v8)(v8, 1);
  }
  v9 = this->fogProperty;
  if ( v9 )
  {
    if ( !v3((volatile LONG *)v9 + 1) )
      (**(void (__thiscall ***)(BSFogProperty *, int))v9)(v9, 1);
  }
  v10 = this->Mesh;
  if ( v10 )
  {
    if ( !v3((volatile LONG *)&v10->members) )
      v10->vtbl->super.super.Destructor((NiRefObject *)v10, 1);
  }
  SkyObject::~SkyObject((SkyObject *)this);
}
