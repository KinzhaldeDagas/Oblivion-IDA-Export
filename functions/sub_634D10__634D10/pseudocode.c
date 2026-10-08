char __thiscall sub_634D10(HighProcess *this)
{
  ActorAnimData *animData; // ecx
  BSAnimGroupSequence *NormalizedSequenceSlot; // eax
  char result; // al

  switch ( ((int (__thiscall *)(HighProcess *))this->GetCurrentAction)(this) ) /*0x634d2c*/
  {
    case kAction_None: /*0x634d2c*/
    case kAction_AttackFollowThrough: /*0x634d2c*/
    case kAction_Block: /*0x634d2c*/
      goto LABEL_5;
    case kAction_Attack: /*0x634d2c*/
    case kAction_AttackBow: /*0x634d2c*/
    case kAction_AttackBowArrowAttached: /*0x634d2c*/
      animData = this->animData; /*0x634d33*/
      if ( animData ) /*0x634d3b*/
      {
        NormalizedSequenceSlot = ActorAnimData_GetNormalizedSequenceSlot(animData, 1u); /*0x634d3f*/
        if ( NormalizedSequenceSlot ) /*0x634d46*/
        {
          if ( (unsigned int)(TESAnimGroup_GetAnimationGroup(*((TESAnimGroup **)NormalizedSequenceSlot + 0x1A)) - 0x22) <= 5 ) /*0x634d56*/
            goto LABEL_6; /*0x634d56*/
        }
      }
LABEL_5:
      result = 1; /*0x634d58*/
      break; /*0x634d5b*/
    default:
LABEL_6:
      result = 0; /*0x634d5c*/
      break; /*0x634d5c*/
  }
  return result; /*0x634d5a*/
}
