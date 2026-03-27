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

  v9 = *(volatile LONG **)(a2 + 4 * *(_DWORD *)(a2 + 0xD0) + 0xB4);
  PixelShader = (*a1)->PixelShader;
  p_PixelShader = &(*a1)->PixelShader;
  if ( PixelShader != (NiD3DPixelShader *)v9 )
  {
    if ( PixelShader )
    {
      if ( !InterlockedDecrement((volatile LONG *)PixelShader + 1) )
        (**(void (__thiscall ***)(NiD3DPixelShader *, int))PixelShader)(PixelShader, 1);
      v9 = v13;
    }
    *p_PixelShader = (NiD3DPixelShader *)v9;
    if ( v9 )
      InterlockedIncrement(v9 + 1);
  }
  sub_76CE40((NiTArray_NiD3DPass *)(a2 + 0x40), *(NiD3DPass **)(a2 + 0x38), a1);
  ++*(_DWORD *)(a2 + 0x38);
  return 0;
}
