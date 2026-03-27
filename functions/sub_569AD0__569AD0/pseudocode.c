void *__thiscall sub_569AD0(unsigned __int8 *this)
{
  int v1; // edx
  int v2; // ecx
  size_t v4; // [esp-4h] [ebp-10h] BYREF
  int v5; // [esp+4h] [ebp-8h]
  int v6; // [esp+8h] [ebp-4h]

  v1 = *((_DWORD *)this + 2);
  HIDWORD(v4) = 0;
  v5 = 0;
  v6 = 0;
  BYTE4(v4) = *this;
  if ( BYTE4(v4) == 5 )
    goto LABEL_4;
  if ( v1 )
  {
    v1 = *(_DWORD *)(v1 + 0xC);
LABEL_4:
    v5 = v1;
  }
  if ( BYTE4(v4) == 0xFF || BYTE4(v4) == 1 )
    v2 = 0;
  else
    v2 = *((_DWORD *)this + 1);
  LODWORD(v4) = 0xC;
  v6 = v2;
  return TESForm_PutFormRecordChunkData(0x54444C50, (char *)&v4 + 4, v4);
}
