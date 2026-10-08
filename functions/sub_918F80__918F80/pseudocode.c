char __thiscall sub_918F80(int this)
{
  int v2; // eax
  int v3; // ecx

  v2 = *(_DWORD *)(this + 0x2C); /*0x918f83*/
  if ( v2 ) /*0x918f88*/
  {
    if ( *(_DWORD *)(v2 + 8) ) /*0x918f8a*/
    {
      sub_89CCC0(*(char ****)(this + 0x28), v2); /*0x918f95*/
      LOBYTE(v2) = sub_8A6410(*(_DWORD *)(*(_DWORD *)(this + 0x2C) + 0x18)); /*0x918fa0*/
    }
    v3 = *(_DWORD *)(this + 0x2C); /*0x918fa5*/
    if ( *(_WORD *)(v3 + 4) ) /*0x918fa8*/
    {
      if ( !--*(_WORD *)(v3 + 6) ) /*0x918fb3*/
        LOBYTE(v2) = (**(int (__thiscall ***)(int, int))v3)(v3, 1); /*0x918fbe*/
    }
    *(_DWORD *)(this + 0x2C) = 0; /*0x918fc0*/
  }
  *(_DWORD *)(this + 0x28) = 0; /*0x918fc7*/
  return v2; /*0x918fce*/
}
