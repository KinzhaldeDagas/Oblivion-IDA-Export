char sub_50A050()
{
  PlayerCharacter *v0; // ecx
  NiNode *PlayerNode; // eax
  PlayerCharacter *v3; // ecx
  NiNode *v4; // eax
  NiNode *v5; // eax

  v0 = TESDataHandler_g_PlayerRef;
  if ( TESDataHandler_g_PlayerRef->isThirdPerson )
  {
    if ( (PlayerCharacter_GetPlayerNode(v0, 0)->members.super.m_flags & 1) != 0 )
    {
      TESDataHandler_g_PlayerRef->isThirdPerson = 0;
      if ( IsConsoleMode )
      {
        Interface_ConsolePrint("Normal 1st person mode.");
        return 1;
      }
    }
    else
    {
      PlayerNode = PlayerCharacter_GetPlayerNode(TESDataHandler_g_PlayerRef, 1);
      v3 = TESDataHandler_g_PlayerRef;
      if ( (PlayerNode->members.super.m_flags & 1) != 0 )
      {
        v5 = PlayerCharacter_GetPlayerNode(v3, 1);
        v5->members.super.m_flags &= ~1u;
        if ( IsConsoleMode )
        {
          Interface_ConsolePrint("Showing 1st and 3rd person models.");
          return 1;
        }
      }
      else
      {
        v4 = PlayerCharacter_GetPlayerNode(v3, 1);
        v4->members.super.m_flags |= 1u;
        if ( IsConsoleMode )
        {
          Interface_ConsolePrint("Normal 3rd person mode.");
          return 1;
        }
      }
    }
  }
  else
  {
    v0->isThirdPerson = 1;
    if ( IsConsoleMode )
      Interface_ConsolePrint("Showing 1st person model in 3rd person camera.");
  }
  return 1;
}
