void __thiscall EffectSetting_SetName(unsigned int *this, char *Str2)
{
  BSStringT *Name; // eax
  const char *m_data; // eax
  int v5; // edi
  BSStringT v6; // [esp+Ch] [ebp-8h] BYREF

  Name = EffectSetting_GetName((int)this, &v6); /*0x41658d*/
  if ( Str2 && (m_data = Name->m_data) != 0 ) /*0x41659e*/
    v5 = CRT_StricmpLocaleDispatch(m_data, Str2); /*0x4165aa*/
  else
    v5 = 2 * (Str2 == 0) - 1; /*0x4165b9*/
  FormHeapFree((unsigned int)v6.m_data); /*0x4165c0*/
  if ( v5 ) /*0x4165ca*/
    BSStringT_Set((BSStringT *)(this + 0xF), Str2, 0); /*0x4165d2*/
}
