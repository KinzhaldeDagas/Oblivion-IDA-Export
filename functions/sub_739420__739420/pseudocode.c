// Pass227: NiScreenSpaceCamera object-map/reference traversal. Walks +0x124 polygons and +0x134 textures, calling child vtable +0x38; not rendering.
char __thiscall sub_739420(NiRenderTargetGroup *this, int a2)
{
  unsigned int v3; // eax
  unsigned int i; // edi
  int v5; // ecx
  unsigned int v6; // edi
  int v7; // ecx

  LOBYTE(v3) = sub_707AB0(this, a2); /*0x73942a*/
  for ( i = 0; i < *((unsigned __int16 *)this + 0x97); ++i ) /*0x739431*/
  {
    v3 = *((_DWORD *)this + 0x4A); /*0x739440*/
    v5 = *(_DWORD *)(v3 + 4 * i); /*0x739446*/
    if ( v5 ) /*0x73944b*/
      LOBYTE(v3) = (*(int (__thiscall **)(int, int))(*(_DWORD *)v5 + 0x38))(v5, a2); /*0x739453*/
  }
  v6 = 0; /*0x739463*/
  if ( *((_WORD *)this + 0x9F) ) /*0x739465*/
  {
    do /*0x739491*/
    {
      v7 = *(_DWORD *)(*((_DWORD *)this + 0x4E) + 4 * v6); /*0x739476*/
      if ( v7 ) /*0x73947b*/
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v7 + 0x38))(v7, a2); /*0x739483*/
      v3 = *((unsigned __int16 *)this + 0x9F); /*0x739485*/
      ++v6; /*0x73948c*/
    }
    while ( v6 < v3 ); /*0x739491*/
  }
  return v3; /*0x739493*/
}
