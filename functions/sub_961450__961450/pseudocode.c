_DWORD *__thiscall sub_961450(void *this)
{
  _DWORD *v2; // eax
  _DWORD *v3; // esi

  v2 = (_DWORD *)FormHeapAlloc(0x3Cu); /*0x961456*/
  v3 = v2; /*0x96145b*/
  if ( !v2 ) /*0x961462*/
    return 0; /*0x961478*/
  *v2 = &NiCapsuleBV::`vftable'; /*0x961467*/
  sub_960180((int)v2, (int)this); /*0x96146d*/
  return v3; /*0x961472*/
}
