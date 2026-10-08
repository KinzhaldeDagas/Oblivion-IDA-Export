unsigned int __thiscall sub_77C9C0(unsigned int **this)
{
  int v2; // ecx
  unsigned int result; // eax
  unsigned int v4; // esi
  _DWORD *v5; // edx
  unsigned int *v6; // eax
  void (__thiscall ***v7)(_DWORD, int); // esi
  unsigned int v8; // [esp+4h] [ebp-8h] BYREF
  int v9; // [esp+8h] [ebp-4h] BYREF

  v2 = (int)*(this + 8); /*0x77c9c6*/
  result = 0; /*0x77c9c9*/
  if ( v2 ) /*0x77c9cd*/
  {
    v4 = *(_DWORD *)(v2 + 4); /*0x77c9d0*/
    if ( v4 ) /*0x77c9d6*/
    {
      v5 = *(_DWORD **)(v2 + 8); /*0x77c9db*/
      while ( !*v5 ) /*0x77c9e3*/
      {
        ++result; /*0x77c9e5*/
        ++v5; /*0x77c9e8*/
        if ( result >= v4 ) /*0x77c9ed*/
          goto LABEL_6; /*0x77c9ed*/
      }
      v6 = *(unsigned int **)(*(_DWORD *)(v2 + 8) + 4 * result); /*0x77ca3b*/
    }
    else
    {
LABEL_6:
      v6 = 0; /*0x77c9ef*/
    }
    *(this + 7) = v6; /*0x77c9f6*/
    if ( v6 ) /*0x77c9f8*/
    {
      v8 = 0; /*0x77ca05*/
      sub_7B2600((unsigned int **)v2, this + 7, &v9, &v8); /*0x77ca0d*/
      v7 = (void (__thiscall ***)(_DWORD, int))v8; /*0x77ca12*/
      if ( v8 ) /*0x77ca18*/
      {
        if ( !InterlockedDecrement((volatile LONG *)(v8 + 4)) ) /*0x77ca1e*/
          (**v7)(v7, 1); /*0x77ca30*/
      }
      return (unsigned int)v7; /*0x77ca33*/
    }
    else
    {
      return 0; /*0x77ca41*/
    }
  }
  return result; /*0x77ca36*/
}
