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

  v2 = _getptd();
  __updatetmbcinfo();
  v3 = v2[0x1A];
  SystemCP = getSystemCP(a1);
  if ( SystemCP != *(_DWORD *)(v3 + 4) )
  {
    v4 = (volatile LONG *)unknown_libname_72();
    v5 = v4;
    if ( v4 )
    {
      qmemcpy((void *)v4, (const void *)v2[0x1A], 0x220u);
      *v4 = 0;
      v6 = _setmbcp_nolock(SystemCP, (int)v4);
      if ( v6 )
      {
        if ( v6 == 0xFFFFFFFF )
        {
          if ( v5 != &dword_B31390 )
            free((void *)v5);
          *_errno() = 0x16;
        }
      }
      else
      {
        if ( !InterlockedDecrement((volatile LONG *)v2[0x1A]) && (volatile LONG *)v2[0x1A] != &dword_B31390 )
          free((void *)v2[0x1A]);
        v2[0x1A] = (DWORD)v5;
        InterlockedIncrement(v5);
        if ( (v2[0x1C] & 2) == 0 && (dword_B318B0 & 1) == 0 )
        {
          _lock(0xD);
          dword_BAA614 = *((_DWORD *)v5 + 1);
          dword_BAA618 = *((_DWORD *)v5 + 2);
          dword_BAA61C = *((_DWORD *)v5 + 3);
          for ( i = 0; i < 5; ++i )
            word_BAA608[i] = *((_WORD *)v5 + i + 8);
          for ( j = 0; j < 0x101; ++j )
            byte_B315B0[j] = *((_BYTE *)v5 + j + 0x1C);
          for ( k = 0; k < 0x100; ++k )
            byte_B316B8[k] = *((_BYTE *)v5 + k + 0x11D);
          if ( !InterlockedDecrement(lpAddend) && lpAddend != &dword_B31390 )
            free((void *)lpAddend);
          lpAddend = v5;
          InterlockedIncrement(v5);
          _unlock(0xD);
        }
      }
    }
  }
  return _setmbcp_::_LN28_2(v1);
}
