int __userpurge EffectItem_GetName_::GetEffectSettingName@<eax>(
        int *this@<ecx>,
        int a2,
        int a3,
        int a4,
        BSStringT a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  BSStringT *Name; // eax

  Name = EffectSetting_GetName(*(this + 7), &a5);
  return EffectItem_GetName_::CopyName(
           (const char **)&Name->m_data,
           1,
           a2,
           a3,
           1,
           (int)a5.m_data,
           *(int *)&a5.m_dataLen,
           a6,
           a7,
           1,
           a9,
           a10);
}
