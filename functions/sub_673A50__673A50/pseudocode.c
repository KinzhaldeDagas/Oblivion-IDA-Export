// ActorProcessManager list selector: level 0 -> manager+0x68 (HighProcess actors), level 1 -> manager+0x00 (MiddleHigh), level 2 -> manager+0x0C (MiddleLow), level 3 -> manager+0x18 (Low).
Actor *__thiscall ActorProcessManager_GetListHead(ActorProcessManager *this, int a2)
{
  Actor *result; // eax

  result = (Actor *)this; /*0x673a50*/
  switch ( a2 ) /*0x673a5b*/
  {
    case 0: /*0x673a5b*/
      result = (Actor *)&this->actor68; /*0x673a62*/
      break; /*0x673a65*/
    case 1: /*0x673a5b*/
      return result;
    case 2: /*0x673a5b*/
      result = (Actor *)&this->lowActors0C; /*0x673a68*/
      break; /*0x673a6b*/
    case 3: /*0x673a5b*/
      result = (Actor *)&this->lowActors18; /*0x673a6e*/
      break; /*0x673a71*/
    default:
      result = 0; /*0x673a74*/
      break; /*0x673a74*/
  }
  return result; /*0x673a65*/
}
