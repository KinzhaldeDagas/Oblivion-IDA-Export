int __thiscall sub_8C57A0(_DWORD *this, unsigned int a2)
{
  int v2; // edx
  signed int v3; // eax
  int v4; // edx

  if ( this )
    v2 = *(this + 2);
  else
    v2 = 0;
  v3 = HIBYTE(a2);
  if ( a2 == 0xFFFFFFFF )
    return *(this + 4);
  v4 = *(_DWORD *)(v2 + 0x10);
  if ( v3 >= *(unsigned __int16 *)(v4 + 0x10) )
    return *(this + 4);
  else
    return *(_DWORD *)(*(_DWORD *)(v4 + 0x1C) + 0xC * v3 + 8);
}
