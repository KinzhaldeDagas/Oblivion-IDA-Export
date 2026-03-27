char __thiscall sub_634D10(HighProcess *this)
{
  ActorAnimData *animData; // ecx
  BSAnimGroupSequence *v3; // eax
  char result; // al

  switch ( ((int (__thiscall *)(HighProcess *))this->GetCurrentAction)(this) )
  {
    case kAction_None:
    case kAction_AttackFollowThrough:
    case kAction_Block:
      goto LABEL_5;
    case kAction_Attack:
    case kAction_AttackBow:
    case kAction_AttackBowArrowAttached:
      animData = this->animData;
      if ( animData )
      {
        v3 = (BSAnimGroupSequence *)sub_4706E0(animData, 1);
        if ( v3 )
        {
          if ( (unsigned int)(TESAnimGroup_GetAnimationGroup(*((TESAnimGroup **)v3 + 0x1A)) - 0x22) <= 5 )
            goto LABEL_6;
        }
      }
LABEL_5:
      result = 1;
      break;
    default:
LABEL_6:
      result = 0;
      break;
  }
  return result;
}
