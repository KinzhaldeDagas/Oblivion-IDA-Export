char __thiscall sub_6D1A90(_DWORD *this, int a2)
{
  char result; // al
  unsigned int v4; // ebx
  unsigned int i; // esi
  int v6; // ecx

  result = NiTransformController_RegisterStreamables(this, a2); /*0x6d1a99*/
  if ( result ) /*0x6d1aa0*/
  {
    v4 = *((unsigned __int16 *)this + 0x25); /*0x6d1aa8*/
    for ( i = 0; i < v4; ++i ) /*0x6d1aa8*/
    {
      v6 = *(_DWORD *)(*(this + 0x11) + 4 * i); /*0x6d1ab6*/
      if ( v6 ) /*0x6d1abb*/
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v6 + 0x24))(v6, a2); /*0x6d1ac3*/
    }
    return 1; /*0x6d1acf*/
  }
  return result; /*0x6d1aa3*/
}
