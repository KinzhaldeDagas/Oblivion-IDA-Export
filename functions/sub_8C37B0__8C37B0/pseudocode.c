int __thiscall sub_8C37B0(void *this, int a2)
{
  int v3; // ecx

  v3 = *(_DWORD *)(a2 + 8); /*0x8c37b8*/
  if ( v3 ) /*0x8c37bd*/
  {
    if ( *(_WORD *)(v3 + 4) ) /*0x8c37bf*/
    {
      if ( !--*(_WORD *)(v3 + 6) ) /*0x8c37cb*/
        (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x8c37da*/
    }
  }
  return sub_89D720(this, a2); /*0x8c37e4*/
}
