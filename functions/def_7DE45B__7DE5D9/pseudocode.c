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

  if ( LOBYTE(OB_ShaderConstantStorage_010201A0[0x4E]) ) /*0x7de5d9*/
  {
    v10 = **(NiD3DTextureStage ***)(*(_DWORD *)(a3 + 0xF8) + 0x24); /*0x7de5eb*/
    if ( v10 != a2 ) /*0x7de5f3*/
      ++v10[7].Unk08; /*0x7de5f5*/
    sub_8011E0((int)v10, 3); /*0x7de604*/
    if ( v10 != a2 ) /*0x7de612*/
    {
      v11 = a1 + v10[7].Unk08 == 0; /*0x7de614*/
      v10[7].Unk08 += a1; /*0x7de614*/
      if ( v11 ) /*0x7de617*/
        sub_772560(v10); /*0x7de61b*/
    }
  }
  v12 = *(_DWORD *)(a3 + 0xF8); /*0x7de620*/
  v13 = *(_DWORD *)(a3 + 4 * *(_DWORD *)(a3 + 0xF4) + 0xB4); /*0x7de62c*/
  v14 = *(_DWORD *)(v12 + 0x58); /*0x7de633*/
  v15 = (_DWORD *)(v12 + 0x58); /*0x7de636*/
  if ( v14 != v13 ) /*0x7de63b*/
  {
    if ( v14 ) /*0x7de63f*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v14 + 4)) ) /*0x7de645*/
        (**(void (__thiscall ***)(int, int))v14)(v14, 1); /*0x7de65c*/
    }
    *v15 = v13; /*0x7de660*/
    if ( v13 ) /*0x7de662*/
      InterlockedIncrement((volatile LONG *)(v13 + 4)); /*0x7de668*/
  }
  v16 = *(_DWORD *)(a3 + 0xF8); /*0x7de66e*/
  v17 = *(_DWORD *)(a3 + 4 * *(_DWORD *)(a3 + 0xF4) + 0xD4); /*0x7de67a*/
  v18 = *(_DWORD *)(v16 + 0x44); /*0x7de681*/
  v19 = (_DWORD *)(v16 + 0x44); /*0x7de684*/
  if ( v18 != v17 ) /*0x7de689*/
  {
    if ( v18 ) /*0x7de68d*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v18 + 4)) ) /*0x7de693*/
        (**(void (__thiscall ***)(int, int))v18)(v18, 1); /*0x7de6a9*/
    }
    *v19 = v17; /*0x7de6ad*/
    if ( v17 ) /*0x7de6b0*/
      InterlockedIncrement((volatile LONG *)(v17 + 4)); /*0x7de6b6*/
  }
  NiTArray_NiD3DPass_SetAt((NiTArray_NiD3DPass *)(a3 + 0x40), *(_DWORD *)(a3 + 0x38), (NiD3DPass **)(a3 + 0xF8)); /*0x7de6ca*/
  ++*(_DWORD *)(a3 + 0x38); /*0x7de6cf*/
  return 0; /*0x7de6e8*/
}
