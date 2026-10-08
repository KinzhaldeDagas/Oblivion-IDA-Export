// Insert helper for collision metadata key/value map. If key absent, appends 0x10-byte entry {key, unknown, valueLow, valueHigh}.
_DWORD *__thiscall sub_8BC750(_DWORD *this, int a2, int a3, int a4)
{
  int v4; // edx
  _DWORD *result; // eax
  _DWORD *v6; // esi
  const void **v7; // esi

  v4 = *(this + 0x12); /*0x8bc750*/
  result = 0; /*0x8bc754*/
  if ( v4 <= 0 ) /*0x8bc75d*/
  {
LABEL_5:
    v7 = (const void **)(this + 0x11); /*0x8bc76e*/
    if ( *(this + 0x12) == (*(this + 0x13) & 0x3FFFFFFF) ) /*0x8bc77e*/
      sub_8A6EE0(v7, 0x10); /*0x8bc783*/
    result = (char *)*v7 + 0x10 * (_DWORD)v7[1]; /*0x8bc795*/
    v7[1] = (char *)v7[1] + 1; /*0x8bc79c*/
    result[2] = a3; /*0x8bc7a3*/
    result[3] = a4; /*0x8bc7a6*/
    *result = a2; /*0x8bc7a9*/
  }
  else
  {
    v6 = (_DWORD *)*(this + 0x11); /*0x8bc75f*/
    while ( *v6 != a2 ) /*0x8bc764*/
    {
      result = (_DWORD *)((char *)result + 1); /*0x8bc766*/
      v6 += 4; /*0x8bc767*/
      if ( (int)result >= v4 ) /*0x8bc76c*/
        goto LABEL_5; /*0x8bc76c*/
    }
  }
  return result; /*0x8bc7ab*/
}
