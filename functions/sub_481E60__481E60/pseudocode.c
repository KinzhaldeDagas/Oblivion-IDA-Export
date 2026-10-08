unsigned int __userpurge sub_481E60@<eax>(_DWORD *a1@<ecx>, unsigned int a2@<ebp>, int a3, int a4)
{
  int v4; // ebx
  int v5; // edi
  unsigned int v7; // ecx
  unsigned int result; // eax
  unsigned int v9; // ebx
  int v10; // edi
  unsigned int v11; // edi
  bool v12; // sf
  unsigned int i; // ebx
  int v14; // edi
  int v15; // ebx
  unsigned int j; // ebx
  unsigned int v17; // edi

  v4 = a4; /*0x481e61*/
  v5 = a3; /*0x481e67*/
  v7 = a1[3]; /*0x481e70*/
  a1[1] += a3; /*0x481e73*/
  a1[2] += a4; /*0x481e76*/
  if ( abs32(a3) >= v7 ) /*0x481e7f*/
    return (*(unsigned int (__thiscall **)(_DWORD *))(*a1 + 8))(a1); /*0x481e7f*/
  result = abs32(a4); /*0x481e8a*/
  if ( result >= v7 ) /*0x481e8e*/
    return (*(unsigned int (__thiscall **)(_DWORD *))(*a1 + 8))(a1); /*0x482025*/
  if ( a3 ) /*0x481e97*/
  {
    do /*0x481f51*/
    {
      v9 = 0; /*0x481ea0*/
      if ( v5 >= 0 ) /*0x481ea4*/
      {
        if ( a1[3] ) /*0x481ef7*/
        {
          do /*0x481f42*/
          {
            v11 = 0; /*0x481f06*/
            (*(void (__thiscall **)(_DWORD *, _DWORD, unsigned int, unsigned int))(*a1 + 0x18))(a1, 0, v9, a2); /*0x481f0b*/
            if ( a1[3] != 1 ) /*0x481f13*/
            {
              do /*0x481f2f*/
              {
                (*(void (__thiscall **)(_DWORD *, unsigned int, unsigned int, unsigned int, unsigned int))(*a1 + 0x20))( /*0x481f23*/
                  a1,
                  v11 + 1,
                  v9,
                  v11,
                  v9);
                ++v11; /*0x481f28*/
              }
              while ( v11 < a1[3] - 1 ); /*0x481f2f*/
            }
            a2 = v9; /*0x481f36*/
            result = (*(int (__thiscall **)(_DWORD *, unsigned int))(*a1 + 0x1C))(a1, v11); /*0x481f3a*/
            ++v9; /*0x481f3c*/
          }
          while ( v9 < a1[3] ); /*0x481f42*/
          v5 = a3; /*0x481f44*/
        }
        --v5; /*0x481f48*/
      }
      else
      {
        if ( a1[3] ) /*0x481ea6*/
        {
          do /*0x481eec*/
          {
            v10 = a1[3] - 1; /*0x481eb9*/
            (*(void (__thiscall **)(_DWORD *, int, unsigned int, unsigned int))(*a1 + 0x18))(a1, v10, v9, a2); /*0x481ebf*/
            for ( ; v10; --v10 ) /*0x481ec3*/
              (*(void (__thiscall **)(_DWORD *, int, unsigned int, int, unsigned int))(*a1 + 0x20))( /*0x481ed3*/
                a1,
                v10 - 1,
                v9,
                v10,
                v9);
            a2 = v9; /*0x481ee0*/
            result = (*(int (__thiscall **)(_DWORD *, int))(*a1 + 0x1C))(a1, v10); /*0x481ee4*/
            ++v9; /*0x481ee6*/
          }
          while ( v9 < a1[3] ); /*0x481eec*/
          v5 = a3; /*0x481eee*/
        }
        ++v5; /*0x481ef2*/
      }
      a3 = v5; /*0x481f4d*/
    }
    while ( v5 ); /*0x481f51*/
    v4 = a4; /*0x481f57*/
  }
  v12 = v4 < 0; /*0x481f5b*/
  if ( v4 ) /*0x481f5d*/
  {
    do /*0x482011*/
    {
      if ( v12 ) /*0x481f63*/
      {
        for ( i = 0; i < a1[3]; ++i ) /*0x481f67*/
        {
          v14 = a1[3] - 1; /*0x481f78*/
          (*(void (__thiscall **)(_DWORD *, unsigned int, int, unsigned int))(*a1 + 0x18))(a1, i, v14, a2); /*0x481f7f*/
          for ( ; v14; --v14 ) /*0x481f83*/
            (*(void (__thiscall **)(_DWORD *, unsigned int, int, unsigned int, int))(*a1 + 0x20))( /*0x481f93*/
              a1,
              i,
              v14 - 1,
              i,
              v14);
          a2 = v14; /*0x481fa0*/
          result = (*(int (__thiscall **)(_DWORD *, unsigned int))(*a1 + 0x1C))(a1, i); /*0x481fa4*/
        }
        v15 = a4 + 1; /*0x481fb2*/
      }
      else
      {
        for ( j = 0; j < a1[3]; ++j ) /*0x481fb9*/
        {
          v17 = 0; /*0x481fc5*/
          (*(void (__thiscall **)(_DWORD *, unsigned int, _DWORD, unsigned int))(*a1 + 0x18))(a1, j, 0, a2); /*0x481fcb*/
          if ( a1[3] != 1 ) /*0x481fd3*/
          {
            do /*0x481fef*/
            {
              (*(void (__thiscall **)(_DWORD *, unsigned int, unsigned int, unsigned int, unsigned int))(*a1 + 0x20))( /*0x481fe3*/
                a1,
                j,
                v17 + 1,
                j,
                v17);
              ++v17; /*0x481fe8*/
            }
            while ( v17 < a1[3] - 1 ); /*0x481fef*/
          }
          a2 = v17; /*0x481ff6*/
          result = (*(int (__thiscall **)(_DWORD *, unsigned int))(*a1 + 0x1C))(a1, j); /*0x481ffa*/
        }
        v15 = a4 - 1; /*0x482008*/
      }
      v12 = v15 < 0; /*0x48200b*/
      a4 = v15; /*0x48200d*/
    }
    while ( v15 ); /*0x482011*/
  }
  return result; /*0x482018*/
}
