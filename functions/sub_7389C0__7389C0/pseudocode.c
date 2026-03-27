int *__thiscall sub_7389C0(int *this, char a2)
{
  unsigned int v4; // [esp-4h] [ebp-Ch]

  if ( (a2 & 2) != 0 )
  {
    _LN21(this, 0x14u, *(this + 0xFFFFFFFF), (void (__thiscall *)(void *))sub_7387F0);
    if ( (a2 & 1) != 0 )
      FormHeapFree((unsigned int)(this + 0xFFFFFFFF));
    return this + 0xFFFFFFFF;
  }
  else
  {
    v4 = *(this + 2);
    *this = (int)&NiScreenGeometryData::ScreenElement::`vftable';
    FormHeapFree(v4);
    FormHeapFree(*(this + 3));
    FormHeapFree(*(this + 4));
    if ( (a2 & 1) != 0 )
      FormHeapFree((unsigned int)this);
    return this;
  }
}
