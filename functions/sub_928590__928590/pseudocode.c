_BYTE *__thiscall sub_928590(int this, _BYTE *a2)
{
  if ( *(_DWORD *)(this + 0xC) && *(_BYTE *)(this + 0x14) )
  {
    *a2 = 1;
    return a2;
  }
  else
  {
    *a2 = 0;
    return a2;
  }
}
