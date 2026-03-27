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

  v4 = a4;
  v5 = a3;
  v7 = a1[3];
  a1[1] += a3;
  a1[2] += a4;
  if ( abs32(a3) >= v7 )
    return (*(unsigned int (__thiscall **)(_DWORD *))(*a1 + 8))(a1);
  result = abs32(a4);
  if ( result >= v7 )
    return (*(unsigned int (__thiscall **)(_DWORD *))(*a1 + 8))(a1);
  if ( a3 )
  {
    do
    {
      v9 = 0;
      if ( v5 >= 0 )
      {
        if ( a1[3] )
        {
          do
          {
            v11 = 0;
            (*(void (__thiscall **)(_DWORD *, _DWORD, unsigned int, unsigned int))(*a1 + 0x18))(a1, 0, v9, a2);
            if ( a1[3] != 1 )
            {
              do
              {
                (*(void (__thiscall **)(_DWORD *, unsigned int, unsigned int, unsigned int, unsigned int))(*a1 + 0x20))(
                  a1,
                  v11 + 1,
                  v9,
                  v11,
                  v9);
                ++v11;
              }
              while ( v11 < a1[3] - 1 );
            }
            a2 = v9;
            result = (*(int (__thiscall **)(_DWORD *, unsigned int))(*a1 + 0x1C))(a1, v11);
            ++v9;
          }
          while ( v9 < a1[3] );
          v5 = a3;
        }
        --v5;
      }
      else
      {
        if ( a1[3] )
        {
          do
          {
            v10 = a1[3] - 1;
            (*(void (__thiscall **)(_DWORD *, int, unsigned int, unsigned int))(*a1 + 0x18))(a1, v10, v9, a2);
            for ( ; v10; --v10 )
              (*(void (__thiscall **)(_DWORD *, int, unsigned int, int, unsigned int))(*a1 + 0x20))(
                a1,
                v10 - 1,
                v9,
                v10,
                v9);
            a2 = v9;
            result = (*(int (__thiscall **)(_DWORD *, int))(*a1 + 0x1C))(a1, v10);
            ++v9;
          }
          while ( v9 < a1[3] );
          v5 = a3;
        }
        ++v5;
      }
      a3 = v5;
    }
    while ( v5 );
    v4 = a4;
  }
  v12 = v4 < 0;
  if ( v4 )
  {
    do
    {
      if ( v12 )
      {
        for ( i = 0; i < a1[3]; ++i )
        {
          v14 = a1[3] - 1;
          (*(void (__thiscall **)(_DWORD *, unsigned int, int, unsigned int))(*a1 + 0x18))(a1, i, v14, a2);
          for ( ; v14; --v14 )
            (*(void (__thiscall **)(_DWORD *, unsigned int, int, unsigned int, int))(*a1 + 0x20))(
              a1,
              i,
              v14 - 1,
              i,
              v14);
          a2 = v14;
          result = (*(int (__thiscall **)(_DWORD *, unsigned int))(*a1 + 0x1C))(a1, i);
        }
        v15 = a4 + 1;
      }
      else
      {
        for ( j = 0; j < a1[3]; ++j )
        {
          v17 = 0;
          (*(void (__thiscall **)(_DWORD *, unsigned int, _DWORD, unsigned int))(*a1 + 0x18))(a1, j, 0, a2);
          if ( a1[3] != 1 )
          {
            do
            {
              (*(void (__thiscall **)(_DWORD *, unsigned int, unsigned int, unsigned int, unsigned int))(*a1 + 0x20))(
                a1,
                j,
                v17 + 1,
                j,
                v17);
              ++v17;
            }
            while ( v17 < a1[3] - 1 );
          }
          a2 = v17;
          result = (*(int (__thiscall **)(_DWORD *, unsigned int))(*a1 + 0x1C))(a1, j);
        }
        v15 = a4 - 1;
      }
      v12 = v15 < 0;
      a4 = v15;
    }
    while ( v15 );
  }
  return result;
}
