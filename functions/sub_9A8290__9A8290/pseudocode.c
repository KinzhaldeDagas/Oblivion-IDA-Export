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

  v3 = 0; /*0x9a8296*/
  if ( !a1 ) /*0x9a829f*/
LABEL_20:
    JUMPOUT(0x9A8387); /*0x9a8387*/
  switch ( a2 ) /*0x9a82b7*/
  {
    case 1: /*0x9a82b7*/
    case 2: /*0x9a82b7*/
    case 3: /*0x9a82b7*/
    case 4: /*0x9a82b7*/
      v4 = (_DWORD *)a1[3]; /*0x9a82be*/
      if ( !v4 ) /*0x9a82c3*/
        return def_9A82B7(); /*0x9a82c3*/
      while ( 1 ) /*0x9a82d5*/
      {
        v5 = v4[1]; /*0x9a82d5*/
        v4 = (_DWORD *)*v4; /*0x9a82d8*/
        if ( sub_9A6670(v5, a2) ) /*0x9a82e0*/
        {
          v6 = v3++; /*0x9a82ec*/
          if ( v6 == a3 ) /*0x9a82f3*/
            break; /*0x9a82f3*/
        }
        if ( !v4 ) /*0x9a82f7*/
          return 0; /*0x9a8302*/
      }
      return v5; /*0x9a8310*/
    case 5: /*0x9a82b7*/
      return a1[6]; /*0x9a831f*/
    case 6: /*0x9a82b7*/
      v8 = (_DWORD *)a1[5]; /*0x9a8320*/
      v9 = 0; /*0x9a8323*/
      if ( !v8 ) /*0x9a8327*/
        return def_9A82B7(); /*0x9a8327*/
      while ( 1 ) /*0x9a832d*/
      {
        v10 = v8[1]; /*0x9a832d*/
        v8 = (_DWORD *)*v8; /*0x9a8330*/
        v11 = v9++; /*0x9a8332*/
        if ( v11 == a3 ) /*0x9a8339*/
          break; /*0x9a8339*/
        if ( !v8 ) /*0x9a833d*/
          return 0; /*0x9a8348*/
      }
      return v10; /*0x9a8339*/
    case 7: /*0x9a82b7*/
      v12 = (_DWORD *)a1[4]; /*0x9a8349*/
      v13 = 0; /*0x9a834c*/
      if ( !v12 ) /*0x9a8350*/
        return def_9A82B7(); /*0x9a8350*/
      break; /*0x9a8350*/
    case 8: /*0x9a82b7*/
      return def_9A82B7(); /*0x9a8386*/
    default:
      goto LABEL_20;
  }
  while ( 1 ) /*0x9a8356*/
  {
    v10 = v12[1]; /*0x9a8356*/
    v12 = (_DWORD *)*v12; /*0x9a8359*/
    v14 = v13++; /*0x9a835b*/
    if ( v14 == a3 ) /*0x9a8362*/
      break; /*0x9a8362*/
    if ( !v12 ) /*0x9a8366*/
      return 0; /*0x9a8371*/
  }
  return v10; /*0x9a82ff*/
}
