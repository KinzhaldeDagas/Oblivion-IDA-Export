char __thiscall sub_75EEA0(NiRenderTargetGroup *this, int a2)
{
  char result; // al
  int v4; // ecx

  result = sub_700650(this, a2); /*0x75eea9*/
  if ( result ) /*0x75eeb0*/
  {
    v4 = *((_DWORD *)this + 0xA); /*0x75eeb7*/
    if ( v4 ) /*0x75eebc*/
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 0x24))(v4, a2); /*0x75eec4*/
    return 1; /*0x75eec7*/
  }
  return result; /*0x75eeb2*/
}
