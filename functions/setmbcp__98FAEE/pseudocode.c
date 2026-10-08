int __cdecl _setmbcp(int a1)
{
  int v1; // ebp
  DWORD *v2; // edi
  DWORD v3; // ebx
  volatile LONG *v4; // eax
  volatile LONG *v5; // ebx
  unsigned int v6; // eax
  int i; // eax
  int j; // eax
  int k; // eax
  UINT SystemCP; // [esp+3Ch] [ebp+8h]

  v2 = _getptd(v1); /*0x98fb03*/
  __updatetmbcinfo(); /*0x98fb08*/
  v3 = v2[0x1A]; /*0x98fb0d*/
  SystemCP = getSystemCP(a1); /*0x98fb18*/
  if ( SystemCP != *(_DWORD *)(v3 + 4) ) /*0x98fb1e*/
  {
    v4 = (volatile LONG *)unknown_libname_72(0x220); /*0x98fb29*/
    v5 = v4; /*0x98fb2f*/
    if ( v4 ) /*0x98fb33*/
    {
      qmemcpy((void *)v4, (const void *)v2[0x1A], 0x220u); /*0x98fb43*/
      *v4 = 0; /*0x98fb45*/
      v6 = _setmbcp_nolock(SystemCP, (int)v4); /*0x98fb4c*/
      if ( v6 ) /*0x98fb58*/
      {
        if ( v6 == 0xFFFFFFFF ) /*0x98fc5d*/
        {
          if ( v5 != &dword_B31390 ) /*0x98fc65*/
            free((void *)v5); /*0x98fc68*/
          *_errno() = 0x16; /*0x98fc73*/
        }
      }
      else
      {
        if ( !InterlockedDecrement((volatile LONG *)v2[0x1A]) && (volatile LONG *)v2[0x1A] != &dword_B31390 ) /*0x98fb76*/
          free((void *)v2[0x1A]); /*0x98fb79*/
        v2[0x1A] = (DWORD)v5; /*0x98fb7f*/
        InterlockedIncrement(v5); /*0x98fb89*/
        if ( (v2[0x1C] & 2) == 0 && (dword_B318B0 & 1) == 0 ) /*0x98fb9c*/
        {
          _lock(0xD); /*0x98fba4*/
          dword_BA9E10[0x201] = *((_DWORD *)v5 + 1); /*0x98fbb1*/
          dword_BA9E10[0x202] = *((_DWORD *)v5 + 2); /*0x98fbb9*/
          dword_BA9E10[0x203] = *((_DWORD *)v5 + 3); /*0x98fbc1*/
          for ( i = 0; i < 5; ++i ) /*0x98fbc6*/
            *((_WORD *)&dword_BA9E10[0x1FE] + i) = *((_WORD *)v5 + i + 8); /*0x98fbd5*/
          for ( j = 0; j < 0x101; ++j ) /*0x98fbe0*/
            byte_B315B0[j] = *((_BYTE *)v5 + j + 0x1C); /*0x98fbf0*/
          for ( k = 0; k < 0x100; ++k ) /*0x98fbf9*/
            byte_B316B8[k] = *((_BYTE *)v5 + k + 0x11D); /*0x98fc0c*/
          if ( !InterlockedDecrement(lpAddend) && lpAddend != &dword_B31390 ) /*0x98fc2f*/
            free((void *)lpAddend); /*0x98fc32*/
          lpAddend = v5; /*0x98fc38*/
          InterlockedIncrement(v5); /*0x98fc3f*/
          _unlock(0xD); /*0x98fc51*/
        }
      }
    }
  }
  return _setmbcp_::_LN28_2(v1);
}
