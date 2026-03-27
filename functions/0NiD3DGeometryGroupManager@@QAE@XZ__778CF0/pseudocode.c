NiD3DGeometryGroupManager *__cdecl NiD3DGeometryGroupManager::NiD3DGeometryGroupManager(int a1, int a2)
{
  _DWORD *v2; // eax
  _DWORD *v3; // esi

  v2 = (_DWORD *)FormHeapAlloc(0x1Cu);
  v3 = v2;
  if ( v2 )
  {
    NiGeometryGroupManager::NiGeometryGrouypManager(v2);
    *v3 = &NiD3DGeometryGroupManager::`vftable';
    v3[1] = 0;
    v3[2] = 0;
    v3[3] = 0;
    v3[4] = 0;
    v3[5] = 0;
    *((_BYTE *)v3 + 0x18) = 0;
  }
  else
  {
    v3 = 0;
  }
  v3[4] = a1;
  (*(void (__stdcall **)(int))(*(_DWORD *)a1 + 4))(a1);
  v3[5] = a2;
  return (NiD3DGeometryGroupManager *)v3;
}
