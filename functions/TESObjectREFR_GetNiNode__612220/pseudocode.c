// ODismemberment: TESObjectREFR::GetNiNode; runtime primitive starts from actor 3D and toggles prepared ODISMEMBER_* nodes.
NiNode *__thiscall TESObjectREFR::GetNiNode(TESObjectREFR *this)
{
  NiNode *result; // eax

  result = (NiNode *)this->member.niNode; /*0x612226*/
  if ( this != (TESObjectREFR *)reference ) /*0x612229*/
  {
    if ( result ) /*0x61222d*/
    {                                           // ODismemberment: GetNiNode returns null for non-player refs whose root has AppCulled set; runtime limb suppression must never app-cull actor root.
      if ( (result->members.super.m_flags & 1) != 0 ) /*0x612233*/
        return 0; /*0x612235*/
    }
  }
  return result; /*0x612237*/
}
