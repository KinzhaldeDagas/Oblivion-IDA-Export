// positive sp value has been detected, the output may be wrong!
int __userpurge def_7DE45B@<eax>(
        int a1@<ebx>,
        NiD3DTextureStage *a2@<ebp>,
        int a3@<esi>,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  NiD3DTextureStage *v10; // edi
  bool v11; // zf
  int v12; // edi
  int v13; // ebx
  int v14; // ebp
  _DWORD *v15; // edi
  int v16; // ebp
  int v17; // ebx
  int v18; // edi
  _DWORD *v19; // ebp

  if ( byte_B45F4C )
  {
    v10 = **(NiD3DTextureStage ***)(*(_DWORD *)(a3 + 0xF8) + 0x24);
    if ( v10 != a2 )
      ++v10[7].Unk08;
    sub_8011E0((int)v10, 3);
    if ( v10 != a2 )
    {
      v11 = a1 + v10[7].Unk08 == 0;
      v10[7].Unk08 += a1;
      if ( v11 )
        sub_772560(v10);
    }
  }
  v12 = *(_DWORD *)(a3 + 0xF8);
  v13 = *(_DWORD *)(a3 + 4 * *(_DWORD *)(a3 + 0xF4) + 0xB4);
  v14 = *(_DWORD *)(v12 + 0x58);
  v15 = (_DWORD *)(v12 + 0x58);
  if ( v14 != v13 )
  {
    if ( v14 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v14 + 4)) )
        (**(void (__thiscall ***)(int, int))v14)(v14, 1);
    }
    *v15 = v13;
    if ( v13 )
      InterlockedIncrement((volatile LONG *)(v13 + 4));
  }
  v16 = *(_DWORD *)(a3 + 0xF8);
  v17 = *(_DWORD *)(a3 + 4 * *(_DWORD *)(a3 + 0xF4) + 0xD4);
  v18 = *(_DWORD *)(v16 + 0x44);
  v19 = (_DWORD *)(v16 + 0x44);
  if ( v18 != v17 )
  {
    if ( v18 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v18 + 4)) )
        (**(void (__thiscall ***)(int, int))v18)(v18, 1);
    }
    *v19 = v17;
    if ( v17 )
      InterlockedIncrement((volatile LONG *)(v17 + 4));
  }
  sub_76CE40((NiTArray_NiD3DPass *)(a3 + 0x40), *(NiD3DPass **)(a3 + 0x38), (NiD3DPass **)(a3 + 0xF8));
  ++*(_DWORD *)(a3 + 0x38);
  return 0;
}
