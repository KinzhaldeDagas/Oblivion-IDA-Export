// positive sp value has been detected, the output may be wrong!
void __userpurge def_845AFF(int a1@<ebp>, int a2, int a3, int a4, _DWORD *a5)
{
  int v6; // edi
  NiD3DPass *v7; // ebx
  bool v8; // zf
  NiD3DPass *v9; // [esp-F4h] [ebp-F4h]
  NiD3DPass *v10; // [esp-D4h] [ebp-D4h] BYREF
  int v11; // [esp-CCh] [ebp-CCh]
  int v12; // [esp-C4h] [ebp-C4h]
  unsigned int v13; // [esp-4h] [ebp-4h]

  if ( dword_B42E8C )
    dword_B42E8C("Invalid sub texture in decal", 0);
  if ( ++v11 < Value )
    a1 = sub_7EE1F0(a5);
  v6 = v12;
  if ( a1 )
    JUMPOUT(0x8459BC);
  v7 = v10;
  flt_B4615C = (float)v11;
  ++v7->RefCount;
  v9 = *(NiD3DPass **)(v6 + 0x38);
  v13 = 0;
  sub_76CE40((NiTArray_NiD3DPass *)(v6 + 0x40), v9, &v10);
  v8 = v7->RefCount-- == 1;
  v13 = 0xFFFFFFFF;
  if ( v8 )
    sub_7604D0(v7);
  ++*(_DWORD *)(v6 + 0x38);
}
