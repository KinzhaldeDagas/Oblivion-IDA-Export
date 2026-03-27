void __thiscall sub_552F40(_DWORD *this)
{
  unsigned int v2; // eax
  int v3; // eax

  v2 = *(this + 0x1F);
  if ( v2 )
    FormHeapFree(v2);
  *(this + 0x1F) = 0;
  *(this + 0x20) = 0;
  *(this + 0x21) = 0;
  v3 = *(this + 0x1B);
  if ( v3 )
  {
    sub_552D60(v3, *(this + 0x1C));
    FormHeapFree(*(this + 0x1B));
  }
  *(this + 0x1B) = 0;
  *(this + 0x1C) = 0;
  *(this + 0x1D) = 0;
  _LN21(this + 2, 0x18u, 4, (void (__thiscall *)(void *))sub_43ACE0);
}
