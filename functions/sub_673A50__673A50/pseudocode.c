Actor *__thiscall sub_673A50(ActorProcessManager *this, int a2)
{
  Actor *result; // eax

  result = (Actor *)this;
  switch ( a2 )
  {
    case 0:
      result = (Actor *)&this->actor64;
      break;
    case 1:
      return result;
    case 2:
      result = (Actor *)&this->lowActors0C;
      break;
    case 3:
      result = (Actor *)&this->lowActors18;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}
