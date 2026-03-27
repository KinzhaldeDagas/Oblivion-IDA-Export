int __thiscall sub_7ED180(_DWORD *this)
{
  _DWORD *v1; // eax

  if ( !*(this + 0x1F) )
    return 0;
  v1 = (_DWORD *)*(this + 0x1F);
  *(this + 0x1F) = *v1;
  return v1[2];
}
