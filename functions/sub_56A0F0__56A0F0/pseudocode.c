void *__thiscall sub_56A0F0(unsigned __int8 *this)
{
  char v1; // al
  int v2; // ecx
  int v3; // ecx
  size_t v5; // [esp-4h] [ebp-10h] BYREF
  int v6; // [esp+4h] [ebp-8h]
  int v7; // [esp+8h] [ebp-4h]

  HIDWORD(v5) = 0; /*0x56a0f5*/
  v7 = 0; /*0x56a0f8*/
  v6 = 0; /*0x56a0fc*/
  v7 = *((_DWORD *)this + 2); /*0x56a103*/
  v1 = *this; /*0x56a107*/
  BYTE4(v5) = *this; /*0x56a10b*/
  if ( BYTE4(v5) <= 1u ) /*0x56a10e*/
  {
    v3 = *((_DWORD *)this + 1); /*0x56a119*/
    if ( v3 ) /*0x56a11e*/
    {
      v2 = *(_DWORD *)(v3 + 0xC); /*0x56a120*/
      goto LABEL_6; /*0x56a120*/
    }
  }
  else if ( v1 == 2 ) /*0x56a112*/
  {
    v2 = *((_DWORD *)this + 1); /*0x56a114*/
LABEL_6:
    v6 = v2; /*0x56a123*/
  }
  LODWORD(v5) = 0xC; /*0x56a127*/
  return TESForm_PutFormRecordChunkData(0x54445450, (char *)&v5 + 4, v5); /*0x56a13b*/
}
