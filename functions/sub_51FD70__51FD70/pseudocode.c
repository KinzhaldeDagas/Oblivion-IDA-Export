TESForm *__thiscall sub_51FD70(TESForm *this, char a2)
{
  sub_51FCD0(this);
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
