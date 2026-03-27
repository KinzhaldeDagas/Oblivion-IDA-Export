int __thiscall sub_8C4C70(_DWORD *this, unsigned int a2)
{
  int v2; // ecx

  v2 = *(this + 4);
  if ( (int)HIBYTE(a2) < *(unsigned __int16 *)(v2 + 0x10) )
    return *(_DWORD *)(*(_DWORD *)(v2 + 0x1C) + 0xC * HIBYTE(a2));
  else
    return 0;
}
