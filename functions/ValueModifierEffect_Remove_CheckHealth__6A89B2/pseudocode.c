int __usercall ValueModifierEffect_Remove_::CheckHealth@<eax>(int a1@<edi>, int a2)
{
  float v3; // [esp+4h] [ebp-8h]
  float v4; // [esp+14h] [ebp+8h]

  v4 = (float)(*(int (__thiscall **)(int, int))(*(_DWORD *)a1 + 0x284))(a1, 8);
  if ( v4 <= 0.0 )
    return ValueModifierEffect_Remove_::Done__(a2, LODWORD(v4));
  v3 = -v4;
  return (*(int (__thiscall **)(int, int, _DWORD, _DWORD))(*(_DWORD *)a1 + 0x2A4))(a1, 8, LODWORD(v3), 0);
}
