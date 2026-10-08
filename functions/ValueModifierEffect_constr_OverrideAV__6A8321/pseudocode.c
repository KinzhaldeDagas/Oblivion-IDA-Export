void __userpurge ValueModifierEffect_constr_::OverrideAV(int a1@<edi>, int a2@<esi>, int a3, int a4, int a5)
{
  *(_DWORD *)(a2 + 0x38) = *(_DWORD *)(a1 + 0x14); /*0x6a8324*/
  if ( (*(_DWORD *)(*(_DWORD *)(a1 + 0x1C) + 0x58) & 0x100) != 0 ) /*0x6a8335*/
    *(float *)(a2 + 0x18) = 1.0; /*0x6a8339*/
  ValueModifierEffect_constr_::Epilogue(a3, a4, a5); /*0x6a833a*/
}
