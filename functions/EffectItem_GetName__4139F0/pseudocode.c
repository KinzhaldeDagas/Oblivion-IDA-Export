int __thiscall EffectItem_GetName(
        int *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  int v11; // eax

  v11 = *(this + 6);
  if ( v11 )
    return EffectItem_GetName_::CopyName((const char **)(v11 + 8), 0, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
  else
    return EffectItem_GetName_::GetEffectSettingName(this, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
}
