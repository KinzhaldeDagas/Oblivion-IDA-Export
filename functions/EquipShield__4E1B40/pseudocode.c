void *__userpurge EquipShield@<eax>(
        TESObjectREFR *a1@<ecx>,
        double a2@<st0>,
        double st5_0@<st2>,
        double a4@<st1>,
        UInt32 a5)
{
  void *result; // eax
  Actor *v7; // ebp
  int v8; // eax
  PlayerCharacter *v9; // ecx
  const char *ModelPath; // eax
  NiObjectNET *v11; // edi
  char *m_data; // ebx
  const char *v13; // [esp-18h] [ebp-40h]
  int v14; // [esp-14h] [ebp-3Ch]
  BSStringT Src; // [esp+14h] [ebp-14h] BYREF
  unsigned int v16; // [esp+24h] [ebp-4h]

  result = a1->member.niNode;
  v7 = 0;
  if ( result )
  {
    v8 = ((int (__thiscall *)(TESObjectREFR *))a1->vtbl->Unk_5A)(a1);
    v9 = TESDataHandler_g_PlayerRef;
    if ( a1 == (TESObjectREFR *)TESDataHandler_g_PlayerRef )
    {
      if ( v8 )
      {
        sub_479F80(v8, 0, st5_0, a4, a2, a5);
        v9 = TESDataHandler_g_PlayerRef;
      }
      v8 = sub_6600D0(v9, v9->isThirdPerson);
    }
    if ( v8 )
    {
      sub_479F80(v8, 0, st5_0, a4, a2, a5);
    }
    else if ( a5 )
    {
      if ( a5 != 0xFFFFFF9C )
      {
        ModelPath = (const char *)TESBipedModelForm_GetModelPath((const char **)(a5 + 0x64), 0);
        v11 = (NiObjectNET *)sub_479450(ModelPath, 0xD, a1, 0);
        Src.m_data = 0;
        Src.m_dataLen = 0;
        Src.m_bufLen = 0;
        v14 = *(_DWORD *)(a5 + 0xC);
        v13 = *(const char **)off_B065BC;
        v16 = 0;
        BSStringT_Static_Format(&Src, "%s (%08X)", v13, v14);
        m_data = Src.m_data;
        NiObjectNET_SetName(v11, Src.m_data);
        v16 = 0xFFFFFFFF;
        FormHeapFree((unsigned int)m_data);
      }
    }
    if ( a1->vtbl->IsActor(a1) )
    {
      v7 = (Actor *)a1;
      sub_5EA1A0((int)a1, (int)a1, (_DWORD *)a1->member.niNode);
    }
    return (void *)sub_5EE1B0(v7, a2);
  }
  return result;
}
