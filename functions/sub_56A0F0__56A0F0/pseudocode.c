void *__thiscall sub_56A0F0(unsigned __int8 *this)
{
  char v1; // al
  int v2; // ecx
  int v3; // ecx
  size_t v5; // [esp-4h] [ebp-10h] BYREF
  int v6; // [esp+4h] [ebp-8h]
  int v7; // [esp+8h] [ebp-4h]

  HIDWORD(v5) = 0;
  v7 = 0;
  v6 = 0;
  v7 = *((_DWORD *)this + 2);
  v1 = *this;
  BYTE4(v5) = *this;
  if ( BYTE4(v5) <= 1u )
  {
    v3 = *((_DWORD *)this + 1);
    if ( v3 )
    {
      v2 = *(_DWORD *)(v3 + 0xC);
      goto LABEL_6;
    }
  }
  else if ( v1 == 2 )
  {
    v2 = *((_DWORD *)this + 1);
LABEL_6:
    v6 = v2;
  }
  LODWORD(v5) = 0xC;
  return TESForm_PutFormRecordChunkData(0x54445450, (char *)&v5 + 4, v5);
}
