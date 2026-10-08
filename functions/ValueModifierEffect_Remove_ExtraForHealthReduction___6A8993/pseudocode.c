int __usercall ValueModifierEffect_Remove_::ExtraForHealthReduction__@<eax>(int a1@<edi>, int a2@<esi>, int a3)
{
  int v3; // esi

  if ( (*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)a1 + 0x198))(a1, 0) /*0x6a89b0*/
    && ((v3 = *(_DWORD *)(a2 + 0x38), v3 == 8) || v3 == 5) )
  {
    return ValueModifierEffect_Remove_::CheckHealth(a1, a3); /*0x6a89b1*/
  }
  else
  {
    return ValueModifierEffect_Remove_::Done_(); /*0x6a89a3*/
  }
}
