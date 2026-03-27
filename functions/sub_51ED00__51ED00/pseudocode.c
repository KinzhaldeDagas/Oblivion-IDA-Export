TESActorBase *__thiscall sub_51ED00(TESActorBase *this, char a2)
{
  sub_51E9A0(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
