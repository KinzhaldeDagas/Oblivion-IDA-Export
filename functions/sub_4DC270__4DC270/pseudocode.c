PlayerCharacter *__cdecl sub_4DC270(int a1)
{
  int v2; // ebp
  int v3; // ebx
  int v4; // edi
  int v5; // ecx
  int v6; // esi
  int v7; // eax
  char v8; // al
  int v9; // esi
  PlayerCharacter *v11; // eax
  NiNode *PlayerNode; // [esp+14h] [ebp+4h]

  v2 = 0;
  v3 = a1;
  PlayerNode = 0;
  if ( TESDataHandler_g_PlayerRef )
    PlayerNode = PlayerCharacter_GetPlayerNode(TESDataHandler_g_PlayerRef, 1);
  if ( a1 )
  {
    while ( 1 )
    {
      if ( (NiNode *)v3 == PlayerNode )
        return TESDataHandler_g_PlayerRef;
      v4 = *(unsigned __int16 *)(v3 + 0x14);
      if ( *(_WORD *)(v3 + 0x14) )
        break;
LABEL_15:
      v3 = *(_DWORD *)(v3 + 0x1C);
      if ( !v3 )
        return 0;
    }
    while ( 1 )
    {
      v5 = *(_DWORD *)(v3 + 0x10);
      v6 = *(_DWORD *)(v5 + 4 * (unsigned __int16)--v4);
      if ( v6 )
      {
        v7 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v6 + 4))(*(_DWORD *)(v5 + 4 * (unsigned __int16)v4));
        if ( v7 )
        {
          while ( (char *)v7 != dword_B35ACC )
          {
            v7 = *(_DWORD *)(v7 + 4);
            if ( !v7 )
              goto LABEL_10;
          }
          v8 = 1;
        }
        else
        {
LABEL_10:
          v8 = 0;
        }
        v9 = v8 != 0 ? v6 : 0;
        if ( v9 )
          break;
      }
      if ( !v4 )
        goto LABEL_15;
    }
    v2 = *(_DWORD *)(v9 + 0xC);
    if ( v2 )
    {
      if ( (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v2 + 0x170))(*(_DWORD *)(v9 + 0xC)) )
      {
        if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v2 + 0x170))(v2) + 4) == 0x22 )
        {
          v11 = sub_4DC270(*(_DWORD *)(v3 + 0x1C));
          if ( v11 )
            return v11;
        }
      }
    }
  }
  return (PlayerCharacter *)v2;
}
