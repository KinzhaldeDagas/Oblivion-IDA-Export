// Oblivion NiTransformInterpolator stream registration. After successful base registration, recursively registers nonnull NiTransformData +0x2C through its virtual +0x24.
char __thiscall NiTransformInterpolator_RegisterStreamables(_DWORD *this, int a2)
{
  char result; // al
  int v4; // ecx

  result = sub_6EC2C0(a2); /*0x6d6819*/
  if ( result ) /*0x6d6820*/
  {
    v4 = *(this + 0xB); /*0x6d6827*/
    if ( v4 ) /*0x6d682c*/
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 0x24))(v4, a2); /*0x6d6834*/
    return 1; /*0x6d6837*/
  }
  return result; /*0x6d6822*/
}
