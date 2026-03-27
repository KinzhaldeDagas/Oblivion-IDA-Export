int __thiscall sub_6D1920(_DWORD *this, unsigned int a2)
{
  int v2; // eax

  v2 = *(this + 0xB);
  if ( v2 && a2 < *(unsigned __int16 *)(v2 + 0xA) )
    return *(_DWORD *)(*(_DWORD *)(v2 + 4) + 4 * a2);
  else
    return 0;
}
