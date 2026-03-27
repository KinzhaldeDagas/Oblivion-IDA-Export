int __cdecl ValueModifierEffect_Clone_::AllocateEffect(int a1, int a2, int a3, int a4)
{
  int v4; // ecx
  int v5; // esi
  ActiveEffect *v6; // eax
  int v7; // edi
  int v8; // eax
  ActiveEffect *v10; // [esp+Ch] [ebp+Ch]

  v5 = v4;
  v6 = (ActiveEffect *)FormHeapAlloc(0x3Cu);
  v10 = v6;
  v7 = 0;
  if ( v6 )
  {
    ValueModifierEffect_constr(v6, *(MagicCaster **)(v5 + 0x24), *(MagicItem **)(v5 + 8), *(EffectItem **)(v5 + 0xC));
    v7 = v8;
  }
  (*(void (__cdecl **)(int))(*(_DWORD *)v5 + 0x2C))(v7);
  return ValueModifierEffect_Clone_::Epilogue(a1, a2, v10, a4);
}
