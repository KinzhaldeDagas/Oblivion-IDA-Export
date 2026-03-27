int *__thiscall sub_56B9C0(int *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    _LN21(this, 0x10u, *(this + 0xFFFFFFFF), (void (__thiscall *)(void *))sub_56B820);
    if ( (a2 & 1) != 0 )
      FormHeapFree((unsigned int)(this + 0xFFFFFFFF));
    return this + 0xFFFFFFFF;
  }
  else
  {
    sub_56B820(this);
    if ( (a2 & 1) != 0 )
      FormHeapFree((unsigned int)this);
    return this;
  }
}
