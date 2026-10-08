int __usercall ValueModifierEffect_Remove_::CheckHealth@<eax>(int a1@<edi>)
{
  double v1; // st7
  float v3; // [esp+4h] [ebp-8h]
  float v5; // [esp+14h] [ebp+8h]

  v5 = (float)(*(int (__thiscall **)(int, int))(*(_DWORD *)a1 + 0x284))(a1, 8); /*0x6a89c8*/
  v1 = v5; /*0x6a89d6*/
  if ( v5 <= 0.0 ) /*0x6a89db*/
    return ValueModifierEffect_Remove_::Done__(v1); /*0x6a89db*/
  v3 = -v1; /*0x6a89ea*/
  return (*(int (__thiscall **)(int, int, _DWORD, _DWORD))(*(_DWORD *)a1 + 0x2A4))(a1, 8, LODWORD(v3), 0); /*0x6a89f6*/
}
