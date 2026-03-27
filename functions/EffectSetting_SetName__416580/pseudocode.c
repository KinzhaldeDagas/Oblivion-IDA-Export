void __thiscall EffectSetting_SetName(unsigned int *this, char *Str2)
{
  BSStringT *Name; // eax
  char *m_data; // eax
  int v5; // edi
  BSStringT v6; // [esp+Ch] [ebp-8h] BYREF

  Name = EffectSetting_GetName((int)this, &v6);
  if ( Str2 && (m_data = Name->m_data) != 0 )
    v5 = _strcmp(m_data, Str2);
  else
    v5 = 2 * (Str2 == 0) - 1;
  FormHeapFree((unsigned int)v6.m_data);
  if ( v5 )
    BSStringT_Set((BSStringT *)(this + 0xF), Str2, 0);
}
