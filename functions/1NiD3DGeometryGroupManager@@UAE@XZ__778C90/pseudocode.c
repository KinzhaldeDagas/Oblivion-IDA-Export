void __thiscall NiD3DGeometryGroupManager::~NiD3DGeometryGroupManager(NiD3DGeometryGroupManager *this)
{
  unsigned int v2; // ebx
  unsigned int v3; // esi
  int v4; // ecx
  int v5; // eax

  v2 = *((_DWORD *)this + 3);
  v3 = 0;
  for ( *(_DWORD *)this = &NiD3DGeometryGroupManager::`vftable'; v3 < v2; ++v3 )
  {
    v4 = *(_DWORD *)(*((_DWORD *)this + 1) + 4 * v3);
    if ( v4 )
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 0x24))(v4, 1);
  }
  sub_77D450();
  v5 = *((_DWORD *)this + 4);
  if ( v5 )
    (*(void (__cdecl **)(_DWORD))(*(_DWORD *)v5 + 8))(*((_DWORD *)this + 4));
  FormHeapFree(*((_DWORD *)this + 1));
  *(_DWORD *)this = &NiGeometryGroupManager::`vftable';
  dword_B3FD8C = 0;
}
