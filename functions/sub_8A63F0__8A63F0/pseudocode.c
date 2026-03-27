_BYTE *__thiscall sub_8A63F0(_DWORD *this, _BYTE *a2)
{
  int v2; // eax
  char v4; // cl

  v2 = *(this + 0x15);
  if ( v2 )
  {
    v4 = *(_BYTE *)(v2 + 0x28);
    *a2 = v4;
    return a2;
  }
  else
  {
    *a2 = 0;
    return a2;
  }
}
