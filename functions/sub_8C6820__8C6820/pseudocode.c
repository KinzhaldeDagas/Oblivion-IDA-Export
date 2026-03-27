int __thiscall sub_8C6820(_DWORD *this, unsigned int a2)
{
  int v3; // eax
  int *v4; // eax
  int v5; // eax

  if ( a2 == 0xFFFFFFFF )
    return *(this + 4);
  if ( this && (v3 = *(this + 2)) != 0 )
    v4 = (int *)(*(_DWORD *)(v3 + 0x28) + 8 * (a2 >> 0x14));
  else
    v4 = &dword_BA8138;
  v5 = *v4;
  if ( v5 )
    return (*(unsigned __int16 *)(v5 + 0x2C) >> 6) & 0x3F;
  else
    return 0;
}
