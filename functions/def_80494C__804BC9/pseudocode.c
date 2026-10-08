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
        char value)
{
  bool v9; // zf
  NiD3DTextureStage *v11; // [esp-1Ch] [ebp-1Ch]
  NiD3DPass *v12; // [esp-14h] [ebp-14h] BYREF
  unsigned int v13; // [esp-4h] [ebp-4h]

  (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 0xB8))(a1); /*0x804bd3*/
  NiTArray_NiD3DPass_SetAt((NiTArray_NiD3DPass *)(a1 + 0x40), *(_DWORD *)(a1 + 0x38), &v12); /*0x804be5*/
  ++*(_DWORD *)(a1 + 0x38); /*0x804bea*/
  LOBYTE(v13) = 0; /*0x804bf3*/
  if ( v11 ) /*0x804bf8*/
  {
    v9 = v11[7].Unk08-- == 1; /*0x804bfa*/
    if ( v9 ) /*0x804bfd*/
      sub_772560(v11); /*0x804c01*/
  }
  v13 = 0xFFFFFFFF; /*0x804c08*/
  if ( a2 ) /*0x804c0c*/
  {
    v9 = a2->RefCount-- == 1; /*0x804c0e*/
    if ( v9 ) /*0x804c11*/
      NiD3DPass_ReleaseToPool(a2); /*0x804c15*/
  }
  return 0; /*0x804c2f*/
}
