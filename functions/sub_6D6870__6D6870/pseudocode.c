// Oblivion NiTransformInterpolator equality. Requires base equality and cached-transform equality, then requires both data pointers null or both nonnull and NiTransformData-equal through virtual +0x2C. Key cursor values are deliberately excluded.
bool __thiscall NiTransformInterpolator_IsEqual(float *this, int a2)
{
  int v4; // ecx

  if ( !(unsigned __int8)sub_6EC2E0(a2) || !sub_6CE450(this + 3, (float *)(a2 + 0xC)) ) /*0x6d6890*/
    return 0; /*0x6d6897*/
  v4 = *((_DWORD *)this + 0xB); /*0x6d6899*/
  if ( v4 ) /*0x6d689e*/
    return *(_DWORD *)(a2 + 0x2C) /*0x6d6886*/
        && (*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)v4 + 0x2C))(v4, *(_DWORD *)(a2 + 0x2C));
  return !*(_DWORD *)(a2 + 0x2C); /*0x6d68aa*/
}
