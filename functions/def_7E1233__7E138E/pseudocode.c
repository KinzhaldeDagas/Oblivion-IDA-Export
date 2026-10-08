// positive sp value has been detected, the output may be wrong!
int __userpurge def_7E1233@<eax>(
        NiD3DPass **a1@<edi>,
        int a2@<esi>,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9)
{
  volatile LONG *v9; // eax
  NiD3DPixelShader *PixelShader; // ebx
  NiD3DPixelShader **p_PixelShader; // ebp
  volatile LONG *v13; // [esp-10h] [ebp-10h]

  v9 = *(volatile LONG **)(a2 + 4 * *(_DWORD *)(a2 + 0xD0) + 0xB4); /*0x7e1396*/
  PixelShader = (*a1)->PixelShader; /*0x7e139d*/
  p_PixelShader = &(*a1)->PixelShader; /*0x7e13a0*/
  if ( PixelShader != (NiD3DPixelShader *)v9 ) /*0x7e13a9*/
  {
    if ( PixelShader ) /*0x7e13ad*/
    {
      if ( !InterlockedDecrement((volatile LONG *)PixelShader + 1) ) /*0x7e13b3*/
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))PixelShader)(PixelShader, 1); /*0x7e13c9*/
      v9 = v13; /*0x7e13cb*/
    }
    *p_PixelShader = (NiD3DPixelShader *)v9; /*0x7e13d1*/
    if ( v9 ) /*0x7e13d4*/
      InterlockedIncrement(v9 + 1); /*0x7e13da*/
  }
  NiTArray_NiD3DPass_SetAt((NiTArray_NiD3DPass *)(a2 + 0x40), *(_DWORD *)(a2 + 0x38), a1); /*0x7e13e8*/
  ++*(_DWORD *)(a2 + 0x38); /*0x7e13ed*/
  return 0; /*0x7e1406*/
}
