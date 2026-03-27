int __thiscall sub_459990(_DWORD *this, unsigned __int16 a2)
{
  int v2; // eax

  v2 = *(this + 0x1E);
  if ( (unsigned int)a2 < *(_DWORD *)(v2 + 0xC) )
    return *(_DWORD *)(*(_DWORD *)(v2 + 4) + 4 * a2);
  else
    return 0;
}
