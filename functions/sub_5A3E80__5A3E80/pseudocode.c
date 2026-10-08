_DWORD *__thiscall sub_5A3E80(_DWORD *this)
{
  _DWORD *v2; // eax
  _DWORD *v3; // eax
  _DWORD *v4; // eax
  _DWORD *v5; // eax

  *(this + 2) = 0; /*0x5a3ead*/
  *((_WORD *)this + 6) = 0; /*0x5a3eb0*/
  *((_WORD *)this + 7) = 0; /*0x5a3eb4*/
  *((float *)this + 1) = 0.0; /*0x5a3ebc*/
  *((_WORD *)this + 0xC) = 0xFAE; /*0x5a3ec3*/
  *this = 0; /*0x5a3ec9*/
  v2 = (_DWORD *)FormHeapAlloc(0x18u); /*0x5a3ecb*/
  if ( v2 ) /*0x5a3ede*/
    v3 = sub_5888C0(v2, (int)this); /*0x5a3ee3*/
  else
    v3 = 0; /*0x5a3eea*/
  *(this + 4) = v3; /*0x5a3ef2*/
  v4 = (_DWORD *)FormHeapAlloc(0x18u); /*0x5a3ef5*/
  if ( v4 ) /*0x5a3f08*/
    v5 = sub_5888C0(v4, (int)this); /*0x5a3f0d*/
  else
    v5 = 0; /*0x5a3f14*/
  *(this + 5) = v5; /*0x5a3f16*/
  *((_BYTE *)this + 0x1A) = 1; /*0x5a3f19*/
  return this; /*0x5a3f1f*/
}
