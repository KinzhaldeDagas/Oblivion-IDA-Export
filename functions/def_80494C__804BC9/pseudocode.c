// positive sp value has been detected, the output may be wrong!
int __userpurge def_80494C@<eax>(
        int a1@<ebx>,
        NiD3DPass *a2@<ebp>,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        char a9)
{
  bool v9; // zf
  NiD3DTextureStage *v11; // [esp-1Ch] [ebp-1Ch]
  NiD3DPass *v12; // [esp-14h] [ebp-14h] BYREF
  unsigned int v13; // [esp-4h] [ebp-4h]

  (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 0xB8))(a1);
  sub_76CE40((NiTArray_NiD3DPass *)(a1 + 0x40), *(NiD3DPass **)(a1 + 0x38), &v12);
  ++*(_DWORD *)(a1 + 0x38);
  LOBYTE(v13) = 0;
  if ( v11 )
  {
    v9 = v11[7].Unk08-- == 1;
    if ( v9 )
      sub_772560(v11);
  }
  v13 = 0xFFFFFFFF;
  if ( a2 )
  {
    v9 = a2->RefCount-- == 1;
    if ( v9 )
      sub_7604D0(a2);
  }
  return 0;
}
