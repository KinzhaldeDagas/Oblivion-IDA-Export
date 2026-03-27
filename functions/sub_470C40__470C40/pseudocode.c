char *__thiscall sub_470C40(_DWORD *this, int a2)
{
  _DWORD *v2; // esi
  char *result; // eax
  char *v4; // ebx
  int v5; // edi
  char *v6; // eax

  v2 = *(_DWORD **)(*(this + 1) + 4);
  result = strrchr(*(const char **)(a2 + 8), 0x5C);
  v4 = result;
  if ( result )
  {
    if ( v2 )
    {
      while ( 1 )
      {
        v5 = v2[2];
        v6 = strrchr(*(const char **)(v5 + 8), 0x5C);
        if ( v6 )
        {
          if ( !_strcmp(v6, v4) )
            break;
        }
        v2 = (_DWORD *)*v2;
        if ( !v2 )
          return 0;
      }
      return (char *)v5;
    }
    else
    {
      return 0;
    }
  }
  return result;
}
