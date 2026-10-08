signed int __thiscall sub_8ACAC0(int *this, int a2)
{
  int v2; // esi
  signed int result; // eax
  _DWORD *v4; // edx
  int v5; // edx

  v2 = *(this + 0x21); /*0x8acac1*/
  result = 0; /*0x8acac7*/
  if ( v2 <= 0 ) /*0x8acacc*/
  {
LABEL_5:
    result = 0xFFFFFFFF; /*0x8acae4*/
  }
  else
  {
    v4 = (_DWORD *)*(this + 0x20); /*0x8acace*/
    while ( *v4 != a2 ) /*0x8acada*/
    {
      ++result; /*0x8acadc*/
      ++v4; /*0x8acadd*/
      if ( result >= v2 ) /*0x8acae2*/
        goto LABEL_5; /*0x8acae2*/
    }
  }
  v5 = *(this + 0x21) - 1; /*0x8acaed*/
  *(this + 0x21) = v5; /*0x8acaee*/
  *(_DWORD *)(*(this + 0x20) + 4 * result) = *(_DWORD *)(*(this + 0x20) + 4 * v5); /*0x8acaff*/
  return result; /*0x8acafd*/
}
