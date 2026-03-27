int __thiscall sub_530E90(TESForm *this, BSStringT *a2)
{
  int *TopicInfoParent; // eax
  TESTopic *v4; // esi
  const char *v5; // eax
  TESQuest *v6; // eax
  const char *v7; // eax
  _DWORD *v8; // ecx
  CHAR *v9; // eax
  int v11; // [esp-4h] [ebp-320h]
  int v12; // [esp-4h] [ebp-320h]
  char v13[260]; // [esp+Ch] [ebp-310h] BYREF
  char v14[260]; // [esp+110h] [ebp-20Ch] BYREF
  char v15[260]; // [esp+214h] [ebp-108h] BYREF

  v13[0] = 0;
  TopicInfoParent = TESTopic_static_GetTopicInfoParent_((int)this);
  v4 = (TESTopic *)TopicInfoParent;
  if ( TopicInfoParent )
  {
    v5 = (const char *)(*(int (__thiscall **)(int *, int))(*TopicInfoParent + 0xD4))(
                         TopicInfoParent,
                         TopicInfoParent[3]);
    _sprintf(v13, ", Topic '%s' (%08X)", v5, v11);
  }
  v15[0] = 0;
  if ( v4 )
  {
    v6 = sub_52F570(v4, (int)this);
    if ( v6 )
    {
      v7 = (const char *)((int (__thiscall *)(TESQuest *, UInt32))v6->vtbl->GetEditorName)(v6, v6->super.refID);
      _sprintf(v15, "Quest '%s' (%08X)", v7, v12);
    }
  }
  v14[0] = 0;
  v8 = (_DWORD *)*sub_530C40(this);
  if ( v8 )
  {
    v9 = sub_52E100(v8);
    _sprintf(v14, ", Text: \"%s\"", v9);
  }
  return BSStringT_Static_Format(
           a2,
           "%s Form '%s' (%08X): %s%s%s",
           *(const char **)(0xC * (unsigned __int8)this->member.type + 0xB05E04),
           EmptyString,
           this->member.refID,
           v15,
           v13,
           v14);
}
