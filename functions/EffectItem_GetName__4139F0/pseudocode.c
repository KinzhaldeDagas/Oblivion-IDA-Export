int __thiscall EffectItem_GetName(
        int *this,
        int a2,
        int a3,
        int a4,
        BSStringT a5,
        int a6,
        int a7,
        int a8,
        int a9,
        BSStringT *a10)
{
  int v10; // eax

  v10 = *(this + 6); /*0x413a1b*/
  if ( v10 ) /*0x413a20*/
    return EffectItem_GetName_::CopyName( /*0x413a25*/
             (const char **)(v10 + 8),
             0,
             a2,
             a3,
             a4,
             (int)a5.m_data,
             *(int *)&a5.m_dataLen,
             a6,
             a7,
             a8,
             a9,
             a10);
  else
    return EffectItem_GetName_::GetEffectSettingName(this, a2, a3, a4, a5, a6, a7, a8, a9, (int)a10); /*0x413a20*/
}
