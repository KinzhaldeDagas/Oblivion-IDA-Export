void __thiscall DispelEffect_Apply(MagicCaster **this, int a2, int a3, int a4, int a5, int a6)
{
  int v7; // eax
  MagicCaster *v8; // ecx
  int *v9; // esi

  v7 = ((int (__thiscall *)(_DWORD))(*(this + 8))->vtbl->AddObjectEnchantment)(*(this + 8)); /*0x693aaf*/
  v8 = *(this + 9); /*0x693ab1*/
  v9 = (int *)v7; /*0x693ab4*/
  if ( v8 ) /*0x693ac4*/
    MagicCaster_GetParentActor(v8); /*0x693ac6*/
  if ( v9 ) /*0x693adb*/
    DispelEffect_Apply_::EffectLoop_Check((int)this, v9, a2, a3, a4, a5, a6); /*0x693adf*/
  else
    DispelEffect_Apply_::Done(); /*0x693adb*/
}
