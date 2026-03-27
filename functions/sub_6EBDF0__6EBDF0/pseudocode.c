int *__thiscall sub_6EBDF0(int *this, char a2)
{
  if ( (a2 & 2) != 0 )
  {
    _LN21(this, 0x14u, *(this + 0xFFFFFFFF), (void (__thiscall *)(void *))sub_6EBB40);
    if ( (a2 & 1) != 0 )
      FormHeapFree((unsigned int)(this + 0xFFFFFFFF));
    return this + 0xFFFFFFFF;
  }
  else
  {
    sub_6EBB40(this);
    if ( (a2 & 1) != 0 )
      FormHeapFree((unsigned int)this);
    return this;
  }
}
