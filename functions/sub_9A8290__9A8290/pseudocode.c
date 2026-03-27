int __cdecl sub_9A8290(_DWORD *a1, int a2, int a3)
{
  int v3; // ebx
  _DWORD *v4; // esi
  int v5; // edi
  int v6; // ecx
  _DWORD *v8; // eax
  int v9; // edx
  int v10; // ecx
  int v11; // edi
  _DWORD *v12; // eax
  int v13; // edx
  int v14; // edi

  v3 = 0;
  if ( !a1 )
LABEL_20:
    JUMPOUT(0x9A8387);
  switch ( a2 )
  {
    case 1:
    case 2:
    case 3:
    case 4:
      v4 = (_DWORD *)a1[3];
      if ( !v4 )
        return def_9A82B7(a1, a2);
      while ( 1 )
      {
        v5 = v4[1];
        v4 = (_DWORD *)*v4;
        if ( sub_9A6670(v5, a2) )
        {
          v6 = v3++;
          if ( v6 == a3 )
            break;
        }
        if ( !v4 )
          return 0;
      }
      return v5;
    case 5:
      return a1[6];
    case 6:
      v8 = (_DWORD *)a1[5];
      v9 = 0;
      if ( !v8 )
        return def_9A82B7(a1, a2);
      while ( 1 )
      {
        v10 = v8[1];
        v8 = (_DWORD *)*v8;
        v11 = v9++;
        if ( v11 == a3 )
          break;
        if ( !v8 )
          return 0;
      }
      return v10;
    case 7:
      v12 = (_DWORD *)a1[4];
      v13 = 0;
      if ( !v12 )
        return def_9A82B7(a1, a2);
      break;
    case 8:
      return def_9A82B7(a1, a2);
    default:
      goto LABEL_20;
  }
  while ( 1 )
  {
    v10 = v12[1];
    v12 = (_DWORD *)*v12;
    v14 = v13++;
    if ( v14 == a3 )
      break;
    if ( !v12 )
      return 0;
  }
  return v10;
}
