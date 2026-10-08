void __thiscall CreateDialogueFileName(
        unsigned __int8 *this,
        TESQuest *a2,
        TESTopic *a3,
        TESForm *a4,
        BSStringT *a5,
        UInt32 a6)
{
  int v6; // ebx
  UInt32 v7; // esi
  const char *(__thiscall *GetEditorName)(TESForm *); // edx
  const char *v9; // eax
  char *m_data; // esi
  const char *v11; // [esp-Ch] [ebp-34h]
  UInt32 v12; // [esp-8h] [ebp-30h]
  BSStringT Format; // [esp+14h] [ebp-14h] BYREF
  int v14; // [esp+24h] [ebp-4h]

  if ( a2 ) /*0x52e34d*/
  {
    if ( a3 ) /*0x52e359*/
    {
      if ( a4 ) /*0x52e365*/
      {
        v6 = *(this + 0xC); /*0x52e36b*/
        if ( *(this + 0xC) ) /*0x52e36b*/
        {
          if ( a6 ) /*0x52e379*/
            v7 = a6 & 0xFFFFFF; /*0x52e37b*/
          else
            v7 = a4->member.refID & 0xFFFFFF; /*0x52e38b*/
          Format.m_data = 0; /*0x52e397*/
          Format.m_dataLen = 0; /*0x52e39b*/
          Format.m_bufLen = 0; /*0x52e3a0*/
          BSStringT_Set(&Format, "%s_%s_%08X_%u", 0); /*0x52e3a5*/
          GetEditorName = a3->vtbl->GetEditorName; /*0x52e3ad*/
          v12 = v7; /*0x52e3b4*/
          v14 = 0; /*0x52e3b7*/
          v11 = GetEditorName((TESForm *)a3); /*0x52e3c1*/
          v9 = a2->vtbl->GetEditorName((TESForm *)a2); /*0x52e3ca*/
          m_data = Format.m_data; /*0x52e3cc*/
          BSStringT_Static_Format(a5, Format.m_data, v9, v11, v12, v6); /*0x52e3d7*/
          FormHeapFree((unsigned int)m_data); /*0x52e3dd*/
        }
        else
        {
          BSStringT_Set(a5, "New Response", 0); /*0x52e3f1*/
        }
      }
    }
  }
}
