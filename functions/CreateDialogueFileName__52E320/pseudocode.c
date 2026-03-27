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

  if ( a2 )
  {
    if ( a3 )
    {
      if ( a4 )
      {
        v6 = *(this + 0xC);
        if ( *(this + 0xC) )
        {
          if ( a6 )
            v7 = a6 & 0xFFFFFF;
          else
            v7 = a4->member.refID & 0xFFFFFF;
          Format.m_data = 0;
          Format.m_dataLen = 0;
          Format.m_bufLen = 0;
          BSStringT_Set(&Format, "%s_%s_%08X_%u", 0);
          GetEditorName = a3->vtbl->GetEditorName;
          v12 = v7;
          v14 = 0;
          v11 = GetEditorName((TESForm *)a3);
          v9 = a2->vtbl->GetEditorName((TESForm *)a2);
          m_data = Format.m_data;
          BSStringT_Static_Format(a5, Format.m_data, v9, v11, v12, v6);
          FormHeapFree((unsigned int)m_data);
        }
        else
        {
          BSStringT_Set(a5, "New Response", 0);
        }
      }
    }
  }
}
