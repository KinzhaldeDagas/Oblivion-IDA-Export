NiAVObject *__cdecl sub_47EEF0(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, _DWORD *a10)
{
  int v10; // ebx
  NiColorAlpha *v11; // eax
  NiColorAlpha *v12; // esi
  UInt16 *v13; // edi
  NiAVObject *v14; // eax

  v10 = FormHeapAlloc(0x24u); /*0x47ef22*/
  *(_DWORD *)v10 = a1; /*0x47ef28*/
  *(_DWORD *)(v10 + 4) = a2; /*0x47ef2e*/
  *(_DWORD *)(v10 + 8) = a3; /*0x47ef35*/
  *(_DWORD *)(v10 + 0xC) = a4; /*0x47ef3c*/
  *(_DWORD *)(v10 + 0x10) = a5; /*0x47ef43*/
  *(_DWORD *)(v10 + 0x14) = a6; /*0x47ef4a*/
  *(_DWORD *)(v10 + 0x18) = a7; /*0x47ef51*/
  *(_DWORD *)(v10 + 0x1C) = a8; /*0x47ef54*/
  *(_DWORD *)(v10 + 0x20) = a9; /*0x47ef59*/
  v11 = (NiColorAlpha *)FormHeapAlloc(0x30u); /*0x47ef5c*/
  v12 = v11; /*0x47ef61*/
  if ( v11 ) /*0x47ef74*/
    sub_401080(v11, 0x10, 3, (void *(__thiscall *)(void *))sub_47EA50); /*0x47ef80*/
  else
    v12 = 0; /*0x47ef87*/
  *(_DWORD *)v12 = *a10; /*0x47ef8f*/
  *((_DWORD *)v12 + 1) = a10[1]; /*0x47ef94*/
  *((_DWORD *)v12 + 2) = a10[2]; /*0x47ef9a*/
  *((_DWORD *)v12 + 3) = a10[3]; /*0x47efa0*/
  *((_DWORD *)v12 + 4) = *a10; /*0x47efa5*/
  *((_DWORD *)v12 + 5) = a10[1]; /*0x47efab*/
  *((_DWORD *)v12 + 6) = a10[2]; /*0x47efb1*/
  *((_DWORD *)v12 + 7) = a10[3]; /*0x47efb7*/
  *((_DWORD *)v12 + 8) = *a10; /*0x47efbc*/
  *((_DWORD *)v12 + 9) = a10[1]; /*0x47efc2*/
  *((_DWORD *)v12 + 0xA) = a10[2]; /*0x47efc8*/
  *((_DWORD *)v12 + 0xB) = a10[3]; /*0x47efd8*/
  v13 = (UInt16 *)FormHeapAlloc(0xCu); /*0x47efe0*/
  *v13 = 0; /*0x47efec*/
  v13[1] = 2; /*0x47eff1*/
  v13[2] = 1; /*0x47eff5*/
  v13[3] = 0; /*0x47effb*/
  v13[4] = 1; /*0x47f001*/
  v13[5] = 2; /*0x47f007*/
  v14 = (NiAVObject *)FormHeapAlloc(0xC0u); /*0x47f00b*/
  if ( v14 ) /*0x47f021*/
    return NiTriShape_ctorWithGeometryData(v14, 3u, (NiPoint3 *)v10, 0, v12, 0, 0, 0, 2u, v13); /*0x47f034*/
  else
    return 0; /*0x47f04c*/
}
