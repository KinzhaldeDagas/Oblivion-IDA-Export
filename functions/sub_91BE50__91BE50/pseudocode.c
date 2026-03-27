int __thiscall sub_91BE50(int *this, int *a2)
{
  int result; // eax
  int v4; // ecx
  _DWORD **i; // edx
  int v6; // esi
  int *v7; // ebx
  int v8; // ecx
  int **j; // edx
  int v10; // ecx

  result = a2[5];
  if ( result )
  {
    v4 = *(this + 3);
    result = 0;
    if ( v4 > 0 )
    {
      for ( i = (_DWORD **)*(this + 2); **i != a2[2]; ++i )
      {
        if ( ++result >= v4 )
          return result;
      }
      if ( result >= 0 )
      {
        v6 = *(_DWORD *)(*(this + 2) + 4 * result);
        v7 = sub_91BA70(a2);
        (*(void (__thiscall **)(_DWORD, int *, int))(*(_DWORD *)*(this + 0xFFFFFFFC) + 0x10))(
          *(this + 0xFFFFFFFC),
          v7,
          dword_BA8438);
        v8 = *(_DWORD *)(v6 + 8);
        result = 0;
        if ( v8 > 0 )
        {
          for ( j = *(int ***)(v6 + 4); *j != v7; ++j )
          {
            if ( ++result >= v8 )
              return result;
          }
          if ( result >= 0 )
          {
            v10 = *(_DWORD *)(v6 + 8) - 1;
            *(_DWORD *)(v6 + 8) = v10;
            *(_DWORD *)(*(_DWORD *)(v6 + 4) + 4 * result) = *(_DWORD *)(*(_DWORD *)(v6 + 4) + 4 * v10);
          }
        }
      }
    }
  }
  return result;
}
