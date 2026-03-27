char __thiscall sub_784FA0(_DWORD *this, unsigned int a2)
{
  int v4; // eax

  *(this + 1) = 0;
  *(this + 2) = 0;
  *(this + 3) = 0;
  if ( !a2 )
    return 0;
  v4 = FormHeapAlloc(0x18 * a2);
  *(this + 3) = v4 + 0x18 * a2;
  *(this + 1) = v4;
  *(this + 2) = v4;
  return 1;
}
