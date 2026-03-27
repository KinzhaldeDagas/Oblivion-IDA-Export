Tile *__cdecl sub_58B800(_DWORD *a1, unsigned __int8 *a2)
{
  int v6; // esi
  Tile *v7; // ebx
  int v8; // eax
  Tile *result; // eax
  int v10; // eax
  int v11; // edx
  _DWORD *v12; // eax
  bool v13; // zf
  int v14; // esi
  _DWORD *v15; // esi
  const unsigned __int8 **v16; // edi
  const unsigned __int8 *v17; // eax
  int v18; // eax
  InterfaceManager *Singleton; // eax
  unsigned __int8 v20[2048]; // [esp+Ch] [ebp-804h] BYREF

  v6 = (int)a1;
  v7 = 0;
  v20[0] = 0;
  v8 = sub_588FC0(a2, v20);
  if ( v8 > 0x1389 )
  {
    switch ( v8 )
    {
      case 0x138A:
        return (Tile *)a1;
      case 0x138C:
        if ( !v20[0] )
        {
          v10 = a1[4];
          if ( !*(_DWORD *)(v10 + 0x3C) )
            goto LABEL_24;
          v11 = *(_DWORD *)(v10 + 0x34);
          v12 = (_DWORD *)v11;
          if ( v11 )
          {
            while ( 1 )
            {
              v13 = v12[2] == (_DWORD)a1;
              v12 = (_DWORD *)*v12;
              if ( v13 )
                break;
              if ( !v12 )
                return *(Tile **)(v11 + 8);
            }
            if ( v12 )
              return (Tile *)v12[2];
          }
          goto LABEL_28;
        }
        v14 = a1[4];
        if ( !*(_DWORD *)(v14 + 0x3C) )
          goto LABEL_24;
        v15 = *(_DWORD **)(v14 + 0x34);
        if ( v15 )
        {
          while ( 1 )
          {
            v16 = (const unsigned __int8 **)v15[2];
            v17 = v16[2];
            v15 = (_DWORD *)*v15;
            if ( v17 )
            {
              if ( !_mbsicmp(v17, v20) )
                break;
            }
            if ( !v15 )
              return 0;
          }
          v7 = (Tile *)v16;
        }
        result = v7;
        break;
      case 0x138D:
        if ( v20[0] || !a1[0xF] )
        {
          if ( a1 && v20[0] && a1[0xF] )
            result = (Tile *)sub_589930(a1, v20);
          else
LABEL_24:
            result = 0;
        }
        else
        {
          v11 = a1[0xD];
LABEL_28:
          result = *(Tile **)(v11 + 8);
        }
        break;
      case 0x138E:
        return InterfaceManager_GetSingleton(0, 1)->menuRoot;
      case 0x138F:
        return InterfaceManager_GetSingleton(0, 1)->strings;
      default:
        goto LABEL_35;
    }
  }
  else if ( v8 == 0x1389 )
  {
    return (Tile *)a1[4];
  }
  else if ( v8 == 0x6B )
  {
    return *(Tile **)(Tile_GetParentMenu(a1) + 0x10);
  }
  else
  {
LABEL_35:
    if ( a1 )
    {
      while ( 1 )
      {
        v18 = *(_DWORD *)(v6 + 0x10);
        if ( !v18 || !*(_DWORD *)(v18 + 0x10) )
          break;
        v6 = *(_DWORD *)(v6 + 0x10);
      }
      return (Tile *)sub_589B10(v6, a2);
    }
    else
    {
      Singleton = InterfaceManager_GetSingleton(0, 1);
      return (Tile *)sub_589B10((int)Singleton->menuRoot, a2);
    }
  }
  return result;
}
