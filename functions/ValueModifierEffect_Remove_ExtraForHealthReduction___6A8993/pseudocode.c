int __usercall ValueModifierEffect_Remove_::ExtraForHealthReduction__@<eax>(int a1@<edi>, int a2@<esi>)
{
  int v2; // esi

  if ( (*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)a1 + 0x198))(a1, 0)
    && ((v2 = *(_DWORD *)(a2 + 0x38), v2 == 8) || v2 == 5) )
  {
    return ValueModifierEffect_Remove_::CheckHealth(a1);
  }
  else
  {
    return ValueModifierEffect_Remove_::Done_();
  }
}
