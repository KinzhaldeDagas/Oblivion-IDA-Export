unsigned int __thiscall TESRace_GetBodyModel__(void *this, unsigned int a2, int a3)
{
  unsigned int v3; // esi
  int v5; // esi

  if ( a3 == 0xF )
    return sub_52BDB0((int)this, a2);
  v3 = a3 - 2;
  if ( (unsigned int)(a3 - 2) > 4 )
    v3 = 0xFFFFFFFF;
  if ( a2 > 1 || v3 > 4 )
    return 0;
  if ( sub_449190(0x18 * (a2 + v3 + 4 * a2) + 0xB36380) )
    return 0x18 * (a2 + v3 + 4 * a2) + 0xB36380;
  if ( a2 )
    v5 = 0x18 * v3 + 0xB36380;
  else
    v5 = 0x18 * v3 + 0xB363F8;
  if ( sub_449190(v5) )
    return v5;
  else
    return 0;
}
