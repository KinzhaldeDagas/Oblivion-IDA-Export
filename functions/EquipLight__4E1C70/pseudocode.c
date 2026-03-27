ExtraLight *__userpurge EquipLight@<eax>(
        TESObjectREFR *a1@<ecx>,
        double a2@<st0>,
        double st5_0@<st2>,
        double a4@<st1>,
        int *a5)
{
  ExtraLight *result; // eax
  char *v7; // edi
  TESObjectREFRVtbl *vtbl; // ecx
  PlayerCharacter *v9; // ecx
  const char **v10; // eax
  const char *ModelPath; // eax
  NiObjectNET *v12; // edi
  const char *v13; // [esp-18h] [ebp-40h]
  int v14; // [esp-14h] [ebp-3Ch]
  BSStringT Src; // [esp+14h] [ebp-14h] BYREF
  unsigned int v16; // [esp+24h] [ebp-4h]

  result = (ExtraLight *)a1->member.niNode;
  if ( result )
  {
    v7 = (char *)((int (__thiscall *)(TESObjectREFR *))a1->vtbl->Unk_5A)(a1);
    result = (ExtraLight *)((int (__thiscall *)(TESObjectREFR *))a1->vtbl->IsActor)(a1);
    if ( (_BYTE)result )
    {
      vtbl = a1[1].vtbl;
      if ( vtbl )
      {
        result = (ExtraLight *)(*((int (__thiscall **)(TESObjectREFRVtbl *, int))vtbl->super.super.InitializeComponent
                                + 0xCF))(
                                 vtbl,
                                 1);
        if ( !result )
        {
          v9 = TESDataHandler_g_PlayerRef;
          if ( a1 == (TESObjectREFR *)TESDataHandler_g_PlayerRef )
          {
            if ( v7 )
            {
              sub_47A2C0(v7, st5_0, a4, a2, (UInt32)a5);
              v9 = TESDataHandler_g_PlayerRef;
            }
            v7 = (char *)sub_6600D0(v9, v9->isThirdPerson);
          }
          if ( v7 )
          {
            sub_47A2C0(v7, st5_0, a4, a2, (UInt32)a5);
          }
          else
          {
            v10 = (const char **)OblivionDynamicCast(
                                   a5,
                                   0,
                                   (struct _s_RTTICompleteObjectLocator *)&TESObjectLIGH `RTTI Type Descriptor',
                                   &TESBipedModelForm `RTTI Type Descriptor',
                                   0);
            if ( v10 )
            {
              ModelPath = (const char *)TESBipedModelForm_GetModelPath(v10, 0);
              v12 = (NiObjectNET *)sub_479450(ModelPath, 0xE, a1, 0);
              Src.m_data = 0;
              Src.m_dataLen = 0;
              Src.m_bufLen = 0;
              v14 = a5[3];
              v13 = *(const char **)off_B065C0;
              v16 = 0;
              BSStringT_Static_Format(&Src, "%s (%08X)", v13, v14);
              NiObjectNET_SetName(v12, Src.m_data);
              v16 = 0xFFFFFFFF;
              BSStringT_Clear((unsigned int *)&Src);
            }
          }
          (*((void (__thiscall **)(TESObjectREFRVtbl *, TESObjectREFR *))a1[1].vtbl->super.super.InitializeComponent
           + 0xD2))(
            a1[1].vtbl,
            a1);
          sub_5EA1A0((int)a1, 0, (_DWORD *)a1->member.niNode);
          result = (ExtraLight *)sub_5EE1B0((Actor *)a1, a2);
          if ( a1 == (TESObjectREFR *)TESDataHandler_g_PlayerRef )
            return sub_6637C0(TESDataHandler_g_PlayerRef);
        }
      }
    }
  }
  return result;
}
