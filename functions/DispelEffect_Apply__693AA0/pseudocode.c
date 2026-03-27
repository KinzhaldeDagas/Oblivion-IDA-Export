int __thiscall DispelEffect_Apply(MagicCaster **this, int a2, int a3, int a4, int a5, int a6)
{
  int v7; // eax
  MagicCaster *v8; // ecx
  int *v9; // esi

  v7 = ((int (__thiscall *)(_DWORD))(*(this + 8))->vtbl->AddObjectEnchantment)(*(this + 8));
  v8 = *(this + 9);
  v9 = (int *)v7;
  if ( v8 )
    MagicCaster_GetParentActor(v8);
  if ( v9 )
    return DispelEffect_Apply_::EffectLoop_Check((int)this, v9, a2, a3, a4, a5, a6);
  else
    return DispelEffect_Apply_::Done();
}
