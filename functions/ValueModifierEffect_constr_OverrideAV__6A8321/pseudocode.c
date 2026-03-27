int __userpurge ValueModifierEffect_constr_::OverrideAV@<eax>(int a1@<edi>, int a2@<esi>, int a3, int a4, int a5)
{
  *(_DWORD *)(a2 + 0x38) = *(_DWORD *)(a1 + 0x14);
  if ( (*(_DWORD *)(*(_DWORD *)(a1 + 0x1C) + 0x58) & 0x100) != 0 )
    *(float *)(a2 + 0x18) = 1.0;
  return ValueModifierEffect_constr_::Epilogue(a3, a4, a5);
}
