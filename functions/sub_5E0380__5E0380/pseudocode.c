// Returns Actor.process->GetCurrentPackage when a process exists. Random-conversation setup uses it to share the newly created DialoguePackage with the partner actor.
TESPackage *__thiscall Actor::GetCurrentPackage(Actor *this)
{
  if ( this->members.super.process ) /*0x5e0380*/
    return this->members.super.process->GetCurrentPackage(this->members.super.process); /*0x5e0391*/
  else
    return 0; /*0x5e0393*/
}
