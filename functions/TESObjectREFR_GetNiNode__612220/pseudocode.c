NiNode *__thiscall TESObjectREFR::GetNiNode(TESObjectREFR *this)
{
  NiNode *result; // eax

  result = (NiNode *)this->member.niNode;
  if ( this != (TESObjectREFR *)TESDataHandler_g_PlayerRef )
  {
    if ( result )
    {
      if ( (result->members.super.m_flags & 1) != 0 )
        return 0;
    }
  }
  return result;
}
