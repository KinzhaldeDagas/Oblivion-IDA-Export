void __thiscall NiD3DGeometryGroupManager::~NiD3DGeometryGroupManager(NiD3DGeometryGroupManager *this)
{
  unsigned int v2; // ebx
  unsigned int v3; // esi
  int v4; // ecx
  int v5; // eax

  v2 = *((_DWORD *)this + 3); /*0x778c95*/
  v3 = 0; /*0x778c98*/
  for ( *(_DWORD *)this = &NiD3DGeometryGroupManager::`vftable'; v3 < v2; ++v3 ) /*0x778ca2*/
  {
    v4 = *(_DWORD *)(*((_DWORD *)this + 1) + 4 * v3); /*0x778ca7*/
    if ( v4 ) /*0x778cac*/
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 0x24))(v4, 1); /*0x778cb5*/
  }
  sub_77D450(); /*0x778cbe*/
  v5 = *((_DWORD *)this + 4); /*0x778cc3*/
  if ( v5 ) /*0x778cc8*/
    (*(void (__cdecl **)(_DWORD))(*(_DWORD *)v5 + 8))(*((_DWORD *)this + 4)); /*0x778cd0*/
  FormHeapFree(*((_DWORD *)this + 1)); /*0x778cd6*/
  *(_DWORD *)this = &NiGeometryGroupManager::`vftable'; /*0x725d80*/
  unk_B3FD8C = 0; /*0x725d86*/
}
