char sub_50A050()
{
  PlayerCharacter *v0; // ecx
  NiNode *NodeByPerspective; // eax
  PlayerCharacter *v3; // ecx
  NiNode *v4; // eax
  NiNode *v5; // eax

  v0 = reference; /*0x50a050*/
  if ( reference->isThirdPerson ) /*0x50a056*/
  {
    if ( (PlayerCharacter_GetNodeByPerspective(v0, 0)->members.super.m_flags & 1) != 0 ) /*0x50a06e*/
    {
      reference->isThirdPerson = 0; /*0x50a075*/
      if ( MEMORY[0xB361AC] ) /*0x50a07c*/
      {
        Interface_ConsolePrint("Normal 1st person mode."); /*0x50a08e*/
        return 1; /*0x50a098*/
      }
    }
    else
    {
      NodeByPerspective = PlayerCharacter_GetNodeByPerspective(reference, 1); /*0x50a0a1*/
      v3 = reference; /*0x50a0aa*/
      if ( (NodeByPerspective->members.super.m_flags & 1) != 0 ) /*0x50a0b2*/
      {
        v5 = PlayerCharacter_GetNodeByPerspective(v3, 1); /*0x50a0d7*/
        v5->members.super.m_flags &= ~1u; /*0x50a0dc*/
        if ( MEMORY[0xB361AC] ) /*0x50a0e2*/
        {
          Interface_ConsolePrint("Showing 1st and 3rd person models."); /*0x50a0f0*/
          return 1; /*0x50a0fa*/
        }
      }
      else
      {
        v4 = PlayerCharacter_GetNodeByPerspective(v3, 1); /*0x50a0b4*/
        v4->members.super.m_flags |= 1u; /*0x50a0b9*/
        if ( MEMORY[0xB361AC] ) /*0x50a0be*/
        {
          Interface_ConsolePrint("Normal 3rd person mode."); /*0x50a0cc*/
          return 1; /*0x50a0d6*/
        }
      }
    }
  }
  else
  {
    v0->isThirdPerson = 1; /*0x50a0fb*/
    if ( MEMORY[0xB361AC] ) /*0x50a102*/
      Interface_ConsolePrint("Showing 1st person model in 3rd person camera."); /*0x50a110*/
  }
  return 1; /*0x50a098*/
}
