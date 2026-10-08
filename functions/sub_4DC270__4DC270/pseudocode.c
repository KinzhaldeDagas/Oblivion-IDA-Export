// NiAVObject -> owning TES reference resolver. Walks up NiNode parents and extra data to recover TESObjectREFR/Player. Climb probe can use this on TES::CastRay return to reject self and dynamic actors.
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

  v2 = 0; /*0x4dc280*/
  v3 = a1; /*0x4dc284*/
  PlayerNode = 0; /*0x4dc286*/
  if ( reference ) /*0x4dc270*/
    PlayerNode = PlayerCharacter_GetNodeByPerspective(reference, 1); /*0x4dc293*/
  if ( a1 )
  {
    while ( 1 ) /*0x4dc2a0*/
    {
      if ( (NiNode *)v3 == PlayerNode ) /*0x4dc2a4*/
        return reference; /*0x4dc30f*/
      v4 = *(unsigned __int16 *)(v3 + 0x14); /*0x4dc2a6*/
      if ( *(_WORD *)(v3 + 0x14) ) /*0x4dc2a6*/
        break; /*0x4dc2a6*/
LABEL_15:
      v3 = *(_DWORD *)(v3 + 0x1C); /*0x4dc2f8*/
      if ( !v3 ) /*0x4dc2fd*/
        return 0; /*0x4dc305*/
    }
    while ( 1 )
    {
      v5 = *(_DWORD *)(v3 + 0x10); /*0x4dc2b0*/
      v6 = *(_DWORD *)(v5 + 4 * (unsigned __int16)--v4); /*0x4dc2b9*/
      if ( v6 )
      {
        v7 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v6 + 4))(*(_DWORD *)(v5 + 4 * (unsigned __int16)v4)); /*0x4dc2c7*/
        if ( v7 ) /*0x4dc2cb*/
        {
          while ( (char *)v7 != stru_B35ACC ) /*0x4dc2d5*/
          {
            v7 = *(_DWORD *)(v7 + 4); /*0x4dc2d7*/
            if ( !v7 ) /*0x4dc2dc*/
              goto LABEL_10; /*0x4dc2dc*/
          }
          v8 = 1; /*0x4dc2f0*/
        }
        else
        {
LABEL_10:
          v8 = 0; /*0x4dc2de*/
        }
        v9 = v8 != 0 ? v6 : 0;
        if ( v9 ) /*0x4dc2e8*/
          break; /*0x4dc2e8*/
      }
      if ( !v4 ) /*0x4dc2ec*/
        goto LABEL_15; /*0x4dc2ec*/
    }
    v2 = *(_DWORD *)(v9 + 0xC); /*0x4dc310*/
    if ( v2 ) /*0x4dc315*/
    {
      if ( (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v2 + 0x170))(*(_DWORD *)(v9 + 0xC)) ) /*0x4dc322*/
      {
        if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)v2 + 0x170))(v2) + 4) == 0x22 ) /*0x4dc339*/
        {
          v11 = sub_4DC270(*(_DWORD *)(v3 + 0x1C)); /*0x4dc33f*/
          if ( v11 ) /*0x4dc349*/
            return v11; /*0x4dc34b*/
        }
      }
    }
  }
  return (PlayerCharacter *)v2; /*0x4dc2ff*/
}
