char __thiscall sub_52F330(int *this)
{
  int *v1; // ebp
  _DWORD *v2; // eax
  int v3; // edx
  int *i; // eax
  int v5; // edi
  int *v6; // esi
  int v7; // edx
  signed int v8; // ebx
  signed int v9; // ecx
  int v11; // [esp+4h] [ebp-4h]

  v1 = this + 0xA;
  v2 = this + 0xA;
  v3 = 0;
  if ( this != (int *)0xFFFFFFD8 )
  {
    do
    {
      if ( *v2 )
        ++v3;
      v2 = (_DWORD *)v2[1];
    }
    while ( v2 );
  }
  if ( v3 - 1 > 0 )
  {
    v11 = v3 - 1;
    do
    {
      for ( i = v1; i; i = (int *)i[1] )
      {
        v5 = *i;
        if ( !*i )
          break;
        v6 = (int *)i[1];
        if ( v6 )
        {
          v7 = *v6;
          if ( *v6 )
          {
            if ( *(_DWORD *)v5 )
              v8 = *(unsigned __int8 *)(*(_DWORD *)v5 + 0x3D);
            else
              v8 = 0xFFFFFFFF;
            if ( *(_DWORD *)v7 )
              v9 = *(unsigned __int8 *)(*(_DWORD *)v7 + 0x3D);
            else
              v9 = 0xFFFFFFFF;
            if ( v9 > v8 )
            {
              *i = v7;
              *v6 = v5;
            }
          }
        }
      }
      --v11;
    }
    while ( v11 );
  }
  return 1;
}
