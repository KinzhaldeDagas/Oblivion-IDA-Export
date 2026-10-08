// Verified XML source resolver. sibling() walks parent child list to current tile, returns following list node, and wraps to head if current is last or not found. It does not filter visible, target, or listindex. sibling(name) compares immediate sibling names case-insensitively. Fallout analogue 0x827DC678.
Tile *__cdecl Tile::GetTileByName(Tile *target, const char *selector)
{
  Tile *v2; // esi
  Tile *v3; // ebx
  signed int v4; // eax
  Tile *result; // eax
  int v6; // eax
  int **v7; // edx
  int **v8; // eax
  bool v9; // zf
  int v10; // esi
  _DWORD *v11; // esi
  const unsigned __int8 **v12; // edi
  const unsigned __int8 *v13; // eax
  int v14; // eax
  InterfaceManager *Singleton; // eax
  char name[2048]; // [esp+Ch] [ebp-804h] BYREF

  v2 = target; /*0x58b816*/
  v3 = 0; /*0x58b82a*/
  name[0] = 0; /*0x58b82d*/
  v4 = Tile::TextToTraitAndParam(selector, name); /*0x58b831*/
  if ( v4 > 0x1389 ) /*0x58b83e*/
  {
    switch ( v4 ) /*0x58b896*/
    {
      case 0x138A: /*0x58b896*/
        return target; /*0x58b8b6*/
      case 0x138C: /*0x58b896*/
        if ( !name[0] ) /*0x58b8bb*/
        {
          v6 = *((_DWORD *)target + 4); /*0x58b8bd*/
          if ( !*(_DWORD *)(v6 + 0x3C) ) /*0x58b8c3*/
            goto LABEL_24; /*0x58b8c3*/
          v7 = *(int ***)(v6 + 0x34); /*0x58b8c9*/
          v8 = v7; /*0x58b8cc*/
          if ( v7 ) /*0x58b8d0*/
          {
            while ( 1 ) /*0x58b8d6*/
            {
              v9 = v8[2] == (int *)target; /*0x58b8d6*/
              v8 = (int **)*v8; /*0x58b8dc*/
              if ( v9 ) /*0x58b8de*/
                break; /*0x58b8de*/
              if ( !v8 ) /*0x58b8e2*/
                return (Tile *)v7[2]; /*0x58b8fe*/
            }
            if ( v8 ) /*0x58b901*/
              return (Tile *)v8[2]; /*0x58b921*/
          }
          goto LABEL_28; /*0x58b901*/
        }
        v10 = *((_DWORD *)target + 4); /*0x58b922*/
        if ( !*(_DWORD *)(v10 + 0x3C) ) /*0x58b928*/
          goto LABEL_24; /*0x58b928*/
        v11 = *(_DWORD **)(v10 + 0x34); /*0x58b92a*/
        if ( v11 ) /*0x58b92f*/
        {
          while ( 1 ) /*0x58b931*/
          {
            v12 = (const unsigned __int8 **)v11[2]; /*0x58b931*/
            v13 = v12[2]; /*0x58b937*/
            v11 = (_DWORD *)*v11; /*0x58b93c*/
            if ( v13 ) /*0x58b93e*/
            {
              if ( !_mbsicmp(v13, (const unsigned __int8 *)name) ) /*0x58b946*/
                break; /*0x58b946*/
            }
            if ( !v11 ) /*0x58b954*/
              return 0; /*0x58b96f*/
          }
          v3 = (Tile *)v12; /*0x58b970*/
        }
        result = v3; /*0x58b974*/
        break; /*0x58b98b*/
      case 0x138D: /*0x58b896*/
        if ( name[0] || !*((_DWORD *)target + 0xF) ) /*0x58b9ae*/
        {
          if ( target && name[0] && *((_DWORD *)target + 0xF) ) /*0x58b9d9*/
            result = Tile_FindDescendantByName(target, name); /*0x58b9e5*/
          else
LABEL_24:
            result = 0; /*0x58b98c*/
        }
        else
        {
          v7 = *((int ***)target + 0xD); /*0x58b9b3*/
LABEL_28:
          result = (Tile *)v7[2]; /*0x58b9b6*/
        }
        break; /*0x58b9d0*/
      case 0x138E: /*0x58b896*/
        return InterfaceManager_GetSingleton(0, 1)->menuRoot; /*0x58ba27*/
      case 0x138F: /*0x58b896*/
        return InterfaceManager_GetSingleton(0, 1)->strings; /*0x58ba4d*/
      default:
        goto LABEL_35;
    }
  }
  else if ( v4 == 0x1389 ) /*0x58b840*/
  {
    return *((Tile **)target + 4); /*0x58b86d*/
  }
  else if ( v4 == 0x6B ) /*0x58b845*/
  {
    return *(Tile **)(Tile_GetParentMenu(target) + 0x10); /*0x58b852*/
  }
  else
  {
LABEL_35:
    if ( target ) /*0x58ba50*/
    {
      while ( 1 ) /*0x58ba52*/
      {
        v14 = *((_DWORD *)v2 + 4); /*0x58ba52*/
        if ( !v14 || !*(_DWORD *)(v14 + 0x10) ) /*0x58ba59*/
          break; /*0x58ba59*/
        v2 = *((Tile **)v2 + 4); /*0x58ba5e*/
      }
      return (Tile *)sub_589B10((int)v2, (unsigned __int8 *)selector); /*0x58ba66*/
    }
    else
    {
      Singleton = InterfaceManager_GetSingleton(0, 1); /*0x58ba89*/
      return (Tile *)sub_589B10((int)Singleton->menuRoot, (unsigned __int8 *)selector); /*0x58ba93*/
    }
  }
  return result; /*0x58b855*/
}
