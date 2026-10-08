void *__thiscall sub_569AD0(unsigned __int8 *this)
{
  int v1; // edx
  int v2; // ecx
  size_t v4; // [esp-4h] [ebp-10h] BYREF
  int v5; // [esp+4h] [ebp-8h]
  int v6; // [esp+8h] [ebp-4h]

  v1 = *((_DWORD *)this + 2); /*0x569ad3*/
  HIDWORD(v4) = 0; /*0x569ad8*/
  v5 = 0; /*0x569adb*/
  v6 = 0; /*0x569adf*/
  BYTE4(v4) = *this; /*0x569ae7*/
  if ( BYTE4(v4) == 5 ) /*0x569aea*/
    goto LABEL_4; /*0x569aea*/
  if ( v1 ) /*0x569aee*/
  {
    v1 = *(_DWORD *)(v1 + 0xC); /*0x569af0*/
LABEL_4:
    v5 = v1; /*0x569af3*/
  }
  if ( BYTE4(v4) == 0xFF || BYTE4(v4) == 1 ) /*0x569afd*/
    v2 = 0; /*0x569b04*/
  else
    v2 = *((_DWORD *)this + 1); /*0x569aff*/
  LODWORD(v4) = 0xC; /*0x569b06*/
  v6 = v2; /*0x569b12*/
  return TESForm_PutFormRecordChunkData(0x54444C50, (char *)&v4 + 4, v4); /*0x569b1e*/
}
