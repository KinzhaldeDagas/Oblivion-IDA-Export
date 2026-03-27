_BYTE *__thiscall sub_534000(_DWORD *this, _BYTE *a2)
{
  int v2; // eax

  v2 = *(this + 2);
  if ( v2 )
  {
    *a2 = *(_BYTE *)(v2 + 0x24);
    return a2;
  }
  else
  {
    *a2 = 0;
    return a2;
  }
}
