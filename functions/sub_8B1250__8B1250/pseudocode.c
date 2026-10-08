int __thiscall sub_8B1250(int *this, unsigned __int64 a2)
{
  int v3; // ecx
  unsigned __int64 v4; // rax
  __int64 v5; // rdi
  int v7; // [esp+10h] [ebp-Ch]

  v7 = *(this + 2); /*0x8b125f*/
  v3 = *this; /*0x8b1286*/
  v4 = v7 & (0x9E3779B1 * (a2 >> 4)); /*0x8b1288*/
  HIDWORD(v5) = *(_DWORD *)(*this + 8 * v4); /*0x8b128a*/
  LODWORD(v5) = *(_DWORD *)(v3 + 8 * v4 + 4); /*0x8b128f*/
  if ( v5 ) /*0x8b1297*/
  {
    while ( __PAIR64__(v5, HIDWORD(v5)) != a2 ) /*0x8b12a4*/
    {
      v4 = v7 & (v4 + 1); /*0x8b12b6*/
      LODWORD(v5) = *(_DWORD *)(v3 + 8 * v4 + 4); /*0x8b12b8*/
      HIDWORD(v5) = *(_DWORD *)(v3 + 8 * v4); /*0x8b12be*/
      if ( !*(_QWORD *)(v3 + 8 * v4) ) /*0x8b12c1*/
        goto LABEL_4; /*0x8b12c5*/
    }
  }
  else
  {
LABEL_4:
    LODWORD(v4) = v7 + 1; /*0x8b12c7*/
  }
  return v4; /*0x8b12cc*/
}
