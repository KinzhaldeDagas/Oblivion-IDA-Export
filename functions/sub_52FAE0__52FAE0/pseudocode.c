char __cdecl sub_52FAE0(int a1)
{
  int v1; // edi
  char result; // al
  int *v3; // ecx
  int *v4; // edx
  _DWORD *v5; // esi

  v1 = TESDataHandler + 0x7C;
  result = 1;
  if ( TESDataHandler != 0xFFFFFF84 )
  {
    do
    {
      v3 = *(int **)v1;
      if ( !*(_DWORD *)v1 || !result )
        break;
      if ( a1 )
      {
        v4 = v3 + 0xA;
        if ( v3 != (int *)0xFFFFFFD8 )
        {
          do
          {
            v5 = (_DWORD *)*v4;
            if ( !*v4 )
              break;
            v4 = (int *)v4[1];
            if ( *v5 == a1 )
              goto LABEL_10;
          }
          while ( v4 );
        }
      }
      else
      {
LABEL_10:
        result = sub_52F330(v3);
      }
      v1 = *(_DWORD *)(v1 + 4);
    }
    while ( v1 );
  }
  return result;
}
