char __thiscall sub_56ABB0(_DWORD *this, _DWORD *a2)
{
  unsigned int i; // edx
  int v5; // esi
  unsigned int v6; // edx
  unsigned __int8 *v7; // eax
  unsigned __int8 *v8; // ecx
  unsigned int v9; // edx
  unsigned __int8 *v10; // eax
  unsigned __int8 *v11; // ecx
  unsigned __int8 *v12; // eax
  unsigned __int8 *v13; // ecx
  int v14; // eax

  for ( i = 0x18; i >= 4; i -= 4 ) /*0x56abb7*/
  {
    if ( *a2 != *this ) /*0x56abc4*/
      goto LABEL_5; /*0x56abc4*/
    ++this; /*0x56abc9*/
    ++a2; /*0x56abcc*/
  }
  if ( !i ) /*0x56abd6*/
  {
LABEL_14:
    v14 = 0; /*0x56ac3d*/
    return v14 != 0; /*0x56ac3d*/
  }
LABEL_5:
  v5 = *(unsigned __int8 *)a2 - *(unsigned __int8 *)this; /*0x56abd8*/
  if ( !v5 ) /*0x56abe0*/
  {
    v6 = i - 1; /*0x56abe2*/
    v7 = (unsigned __int8 *)this + 1; /*0x56abe5*/
    v8 = (unsigned __int8 *)a2 + 1; /*0x56abe8*/
    if ( !v6 ) /*0x56abed*/
      goto LABEL_14; /*0x56abed*/
    v5 = *v8 - *v7; /*0x56abf5*/
    if ( !v5 ) /*0x56abf7*/
    {
      v9 = v6 - 1; /*0x56abf9*/
      v10 = v7 + 1; /*0x56abfc*/
      v11 = v8 + 1; /*0x56abff*/
      if ( !v9 ) /*0x56ac04*/
        goto LABEL_14; /*0x56ac04*/
      v5 = *v11 - *v10; /*0x56ac0c*/
      if ( !v5 ) /*0x56ac0e*/
      {
        v12 = v10 + 1; /*0x56ac13*/
        v13 = v11 + 1; /*0x56ac16*/
        if ( v9 == 1 ) /*0x56ac1b*/
          goto LABEL_14; /*0x56ac1b*/
        v5 = *v13 - *v12; /*0x56ac23*/
        if ( !v5 ) /*0x56ac25*/
          goto LABEL_14; /*0x56ac25*/
      }
    }
  }
  v14 = 1; /*0x56ac29*/
  if ( v5 <= 0 ) /*0x56ac2e*/
    return 1; /*0x56ac3a*/
  return v14 != 0; /*0x56ac35*/
}
