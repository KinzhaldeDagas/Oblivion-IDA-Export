int *__thiscall sub_72CA40(int *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    _LN21(this, 0x2Cu, *(this + 0xFFFFFFFF), (void (__thiscall *)(void *))sub_72C450);
    if ( (a2 & 1) != 0 )
      FormHeapFree((unsigned int)(this + 0xFFFFFFFF));
    return this + 0xFFFFFFFF;
  }
  else
  {
    sub_72C450((unsigned int *)this);
    if ( (a2 & 1) != 0 )
      FormHeapFree((unsigned int)this);
    return this;
  }
}
