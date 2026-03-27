void __thiscall TallGrassShaderProperty::CachedGeometry::~CachedGeometry(TallGrassShaderProperty::CachedGeometry *this)
{
  int v2; // esi
  LONG (__stdcall *v3)(volatile LONG *); // ebx
  int v4; // esi
  int v5; // esi
  int v6; // esi
  int v7; // esi
  int v8; // esi

  v2 = *((_DWORD *)this + 9);
  v3 = InterlockedDecrement;
  if ( v2 )
  {
    if ( !v3((volatile LONG *)(v2 + 8)) )
      (**(void (__thiscall ***)(int, int))v2)(v2, 1);
  }
  v4 = *((_DWORD *)this + 8);
  if ( v4 )
  {
    if ( !v3((volatile LONG *)(v4 + 4)) )
      (**(void (__thiscall ***)(int, int))v4)(v4, 1);
  }
  v5 = *((_DWORD *)this + 7);
  if ( v5 )
  {
    if ( !v3((volatile LONG *)(v5 + 4)) )
      (**(void (__thiscall ***)(int, int))v5)(v5, 1);
  }
  v6 = *((_DWORD *)this + 6);
  if ( v6 )
  {
    if ( !v3((volatile LONG *)(v6 + 4)) )
      (**(void (__thiscall ***)(int, int))v6)(v6, 1);
  }
  v7 = *((_DWORD *)this + 5);
  if ( v7 )
  {
    if ( !v3((volatile LONG *)(v7 + 4)) )
      (**(void (__thiscall ***)(int, int))v7)(v7, 1);
  }
  v8 = *((_DWORD *)this + 2);
  if ( v8 )
  {
    if ( !v3((volatile LONG *)(v8 + 4)) )
      (**(void (__thiscall ***)(int, int))v8)(v8, 1);
  }
  *(_DWORD *)this = &NiRefObject::`vftable';
  v3(&NiRefObject_objcount);
}
