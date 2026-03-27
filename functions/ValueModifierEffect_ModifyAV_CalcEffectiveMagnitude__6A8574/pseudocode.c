void __usercall ValueModifierEffect_ModifyAV_::CalcEffectiveMagnitude(
        int a1@<edi>,
        int a2@<esi>,
        int a3,
        int a4,
        int a5,
        int a6,
        float a7)
{
  if ( a7 < 0.0 && *(_DWORD *)(a2 + 0x38) != 0xA )
    ((double (__thiscall *)(int, _DWORD))*(_DWORD *)(*(_DWORD *)a1 + 0x288))(a1, *(_DWORD *)(a2 + 0x38));
  JUMPOUT(0x6A85C9);
}
