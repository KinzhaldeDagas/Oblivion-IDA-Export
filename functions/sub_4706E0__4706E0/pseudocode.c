PowerListEntry *__thiscall sub_4706E0(ActorAnimData *this, int a2)
{
  if ( a2 == 5 )
    return (PowerListEntry *)this->animSequences[0];
  if ( a2 == 6 )
    return (PowerListEntry *)this->animSequences[3];
  return (PowerListEntry *)this->animSequences[a2];
}
