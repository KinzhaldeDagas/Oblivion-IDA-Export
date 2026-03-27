void __thiscall NiParticleMeshesData::~NiParticleMeshesData(NiGeometryData *this)
{
  int v2; // esi
  LONG (__stdcall *v3)(volatile LONG *); // ebp
  int v4; // esi

  this->__vftable = (NiGeometryDataVtbl *)&NiParticleMeshesData::`vftable';
  v2 = *((_DWORD *)this + 0x17);
  v3 = InterlockedDecrement;
  if ( v2 )
  {
    if ( !v3((volatile LONG *)(v2 + 4)) )
      (**(void (__thiscall ***)(int, int))v2)(v2, 1);
    *((_DWORD *)this + 0x17) = 0;
  }
  v4 = *((_DWORD *)this + 0x17);
  if ( v4 )
  {
    if ( !v3((volatile LONG *)(v4 + 4)) )
      (**(void (__thiscall ***)(int, int))v4)(v4, 1);
  }
  sub_73EEC0(this);
}
