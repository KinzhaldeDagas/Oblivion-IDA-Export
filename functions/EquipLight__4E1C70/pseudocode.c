BSExtraData *__userpurge EquipLight@<eax>(
        TESObjectREFR *a1@<ecx>,
        double a2@<st0>,
        double st5_0@<st2>,
        double a4@<st1>,
        int *a5)
{
  BSExtraData *result; // eax
  ActorSkinInfo *SkinInfoByPerspective; // edi
  TESObjectREFRVtbl *vtbl; // ecx
  PlayerCharacter *v9; // ecx
  const char **v10; // eax
  const char *ModelPath; // eax
  NiObjectNET *CloneAndAttachModel3D; // edi
  const char *v13; // [esp-18h] [ebp-40h]
  int v14; // [esp-14h] [ebp-3Ch]
  BSStringT Src; // [esp+14h] [ebp-14h] BYREF
  unsigned int v16; // [esp+24h] [ebp-4h]

  result = (BSExtraData *)a1->member.niNode; /*0x4e1c99*/
  if ( result ) /*0x4e1ca0*/
  {
    SkinInfoByPerspective = a1->vtbl->GetActiveSkinInfo(a1); /*0x4e1cb0*/
    result = (BSExtraData *)((int (__thiscall *)(TESObjectREFR *))a1->vtbl->IsActor)(a1); /*0x4e1cbc*/
    if ( (_BYTE)result ) /*0x4e1cc0*/
    {
      vtbl = a1[1].vtbl; /*0x4e1cc6*/
      if ( vtbl ) /*0x4e1ccb*/
      {
        result = (BSExtraData *)(*((int (__thiscall **)(TESObjectREFRVtbl *, int))vtbl->super.super.InitializeComponent /*0x4e1cdb*/
                                 + 0xCF))(
                                  vtbl,
                                  1);
        if ( !result ) /*0x4e1cdf*/
        {
          v9 = reference; /*0x4e1ce5*/
          if ( a1 == (TESObjectREFR *)reference ) /*0x4e1cf1*/
          {
            if ( SkinInfoByPerspective ) /*0x4e1cf5*/
            {
              sub_47A2C0((ActorAnimData *)SkinInfoByPerspective, st5_0, a4, a2, (UInt32)a5); /*0x4e1cfa*/
              v9 = reference; /*0x4e1cff*/
            }
            SkinInfoByPerspective = Actor_GetSkinInfoByPerspective((Actor *)v9, v9->isThirdPerson); /*0x4e1d19*/
          }
          if ( SkinInfoByPerspective ) /*0x4e1d1d*/
          {
            sub_47A2C0((ActorAnimData *)SkinInfoByPerspective, st5_0, a4, a2, (UInt32)a5); /*0x4e1d22*/
          }
          else
          {
            v10 = (const char **)OblivionDynamicCast( /*0x4e1d36*/
                                   a5,
                                   0,
                                   (struct _s_RTTICompleteObjectLocator *)&TESObjectLIGH `RTTI Type Descriptor',
                                   &TESBipedModelForm `RTTI Type Descriptor',
                                   0);
            if ( v10 ) /*0x4e1d40*/
            {
              ModelPath = (const char *)TESBipedModelForm_GetModelPath(v10, 0); /*0x4e1d49*/
              CloneAndAttachModel3D = (NiObjectNET *)Actor_LoadCloneAndAttachModel3D(ModelPath, 0xE, a1, 0); /*0x4e1d54*/
              Src.m_data = 0; /*0x4e1d56*/
              Src.m_dataLen = 0; /*0x4e1d5a*/
              Src.m_bufLen = 0; /*0x4e1d5f*/
              v14 = a5[3]; /*0x4e1d67*/
              v13 = *(const char **)off_B065C0; /*0x4e1d6d*/
              v16 = 0; /*0x4e1d78*/
              BSStringT_Static_Format(&Src, "%s (%08X)", v13, v14); /*0x4e1d7c*/
              NiObjectNET_SetName(CloneAndAttachModel3D, Src.m_data); /*0x4e1d8b*/
              v16 = 0xFFFFFFFF; /*0x4e1d94*/
              BSStringT_Clear((unsigned int *)&Src); /*0x4e1d9c*/
            }
          }
          (*((void (__thiscall **)(TESObjectREFRVtbl *, TESObjectREFR *))a1[1].vtbl->super.super.InitializeComponent /*0x4e1dad*/
           + 0xD2))(
            a1[1].vtbl,
            a1);
          sub_5EA1A0((int)a1, 0, (_DWORD *)a1->member.niNode); /*0x4e1db5*/
          result = (BSExtraData *)sub_5EE1B0((Actor *)a1, a2); /*0x4e1dbc*/
          if ( a1 == (TESObjectREFR *)reference ) /*0x4e1dc9*/
            return sub_6637C0(reference); /*0x4e1dcb*/
        }
      }
    }
  }
  return result; /*0x4e1dd0*/
}
