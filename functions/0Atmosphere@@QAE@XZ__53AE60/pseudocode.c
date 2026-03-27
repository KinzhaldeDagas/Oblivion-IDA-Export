Atmosphere *__thiscall Atmosphere::Atmosphere(Atmosphere *this)
{
  NiAVObject *Mesh; // edi
  LONG (__stdcall *v3)(volatile LONG *); // ebx
  NiNode *Quad; // edi
  UInt32 unk10; // edi
  BSFogProperty *fogProperty; // edi

  SkyObject::SkyObject((SkyObject *)this);
  this->__vftbl = (SkyObjectVtbl *)&Atmosphere::`vftable';
  this->Mesh = 0;
  this->fogProperty = 0;
  this->unk10 = 0;
  this->Quad = 0;
  Mesh = this->Mesh;
  v3 = InterlockedDecrement;
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
  fogProperty = this->fogProperty;
  if ( fogProperty )
  {
    if ( !v3((volatile LONG *)fogProperty + 1) )
      (**(void (__thiscall ***)(BSFogProperty *, int))fogProperty)(fogProperty, 1);
    this->fogProperty = 0;
  }
  this->unk18 = 1;
  return this;
}
