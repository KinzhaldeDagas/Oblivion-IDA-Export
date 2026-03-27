int __userpurge sub_91AAB0@<eax>(int a1@<ecx>, int a2@<ebx>, int a3@<esi>, int a4)
{
  int result; // eax
  int v6; // ecx
  _DWORD **i; // edx
  int v8; // esi
  int v9; // ecx
  int v10; // eax
  _DWORD *v11; // edx
  int v12; // ecx
  int v13; // ecx
  _DWORD *j; // edx
  int v15; // ecx

  result = *(_DWORD *)(a4 + 0x14);
  if ( result )
  {
    v6 = *(_DWORD *)(a1 + 0xC);
    result = 0;
    if ( v6 > 0 )
    {
      for ( i = *(_DWORD ***)(a1 + 8); **i != *(_DWORD *)(a4 + 8); ++i )
      {
        if ( ++result >= v6 )
          return result;
      }
      if ( result >= 0 )
      {
        v8 = *(_DWORD *)(*(_DWORD *)(a1 + 8) + 4 * result);
        (*(void (__thiscall **)(_DWORD, int, int, int, int))(**(_DWORD **)(a1 - 0x10) + 0x10))(
          *(_DWORD *)(a1 - 0x10),
          a4 + 0x15,
          dword_BA8420,
          a2,
          a3);
        v9 = *(_DWORD *)(v8 + 8);
        v10 = 0;
        if ( v9 > 0 )
        {
          v11 = *(_DWORD **)(v8 + 4);
          while ( *v11 != a4 + 0x15 )
          {
            ++v10;
            ++v11;
            if ( v10 >= v9 )
              goto LABEL_15;
          }
          if ( v10 >= 0 )
          {
            v12 = *(_DWORD *)(v8 + 8) - 1;
            *(_DWORD *)(v8 + 8) = v12;
            *(_DWORD *)(*(_DWORD *)(v8 + 4) + 4 * v10) = *(_DWORD *)(*(_DWORD *)(v8 + 4) + 4 * v12);
          }
        }
LABEL_15:
        (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(a1 - 0x10) + 0x10))(
          *(_DWORD *)(a1 - 0x10),
          a4 + 0x16,
          dword_BA8420);
        v13 = *(_DWORD *)(v8 + 8);
        result = 0;
        if ( v13 > 0 )
        {
          for ( j = *(_DWORD **)(v8 + 4); *j != a4 + 0x16; ++j )
          {
            if ( ++result >= v13 )
              return result;
          }
          if ( result >= 0 )
          {
            v15 = *(_DWORD *)(v8 + 8) - 1;
            *(_DWORD *)(v8 + 8) = v15;
            *(_DWORD *)(*(_DWORD *)(v8 + 4) + 4 * result) = *(_DWORD *)(*(_DWORD *)(v8 + 4) + 4 * v15);
          }
        }
      }
    }
  }
  return result;
}
