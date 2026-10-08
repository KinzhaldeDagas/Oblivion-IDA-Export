void *__userpurge EquipShield@<eax>(
        TESObjectREFR *a1@<ecx>,
        double a2@<st0>,
        double st5_0@<st2>,
        double a4@<st1>,
        UInt32 firstPerson)
{
  void *result; // eax
  Actor *v7; // ebp
  ActorSkinInfo *SkinInfoByPerspective; // eax
  PlayerCharacter *v9; // ecx
  const char *ModelPath; // eax
  NiObjectNET *CloneAndAttachModel3D; // edi
  char *m_data; // ebx
  const char *v13; // [esp-18h] [ebp-40h]
  int v14; // [esp-14h] [ebp-3Ch]
  BSStringT Src; // [esp+14h] [ebp-14h] BYREF
  unsigned int v16; // [esp+24h] [ebp-4h]

  result = a1->member.niNode; /*0x4e1b69*/
  v7 = 0; /*0x4e1b6c*/
  if ( result ) /*0x4e1b70*/
  {
    SkinInfoByPerspective = a1->vtbl->GetActiveSkinInfo(a1); /*0x4e1b7e*/
    v9 = reference; /*0x4e1b80*/
    if ( a1 == (TESObjectREFR *)reference ) /*0x4e1b8c*/
    {
      if ( SkinInfoByPerspective ) /*0x4e1b90*/
      {
        sub_479F80((int)SkinInfoByPerspective, st5_0, a4, a2, firstPerson); /*0x4e1b95*/
        v9 = reference; /*0x4e1b9a*/
      }
      SkinInfoByPerspective = Actor_GetSkinInfoByPerspective((Actor *)v9, v9->isThirdPerson); /*0x4e1baf*/
    }
    if ( SkinInfoByPerspective ) /*0x4e1bb6*/
    {
      sub_479F80((int)SkinInfoByPerspective, st5_0, a4, a2, firstPerson); /*0x4e1bbb*/
    }
    else if ( firstPerson ) /*0x4e1bc4*/
    {
      if ( firstPerson != 0xFFFFFF9C ) /*0x4e1bcb*/
      {
        ModelPath = (const char *)TESBipedModelForm_GetModelPath((const char **)(firstPerson + 0x64), 0); /*0x4e1bd2*/
        CloneAndAttachModel3D = (NiObjectNET *)Actor_LoadCloneAndAttachModel3D(ModelPath, 0xD, a1, 0); /*0x4e1bdd*/
        Src.m_data = 0; /*0x4e1bdf*/
        Src.m_dataLen = 0; /*0x4e1be3*/
        Src.m_bufLen = 0; /*0x4e1be8*/
        v14 = *(_DWORD *)(firstPerson + 0xC); /*0x4e1bf0*/
        v13 = *(const char **)off_B065BC; /*0x4e1bf6*/
        v16 = 0; /*0x4e1c01*/
        BSStringT_Static_Format(&Src, "%s (%08X)", v13, v14); /*0x4e1c05*/
        m_data = Src.m_data; /*0x4e1c0a*/
        NiObjectNET_SetName(CloneAndAttachModel3D, Src.m_data); /*0x4e1c14*/
        v16 = 0xFFFFFFFF; /*0x4e1c1a*/
        FormHeapFree((unsigned int)m_data); /*0x4e1c22*/
      }
    }
    if ( a1->vtbl->IsActor(a1) ) /*0x4e1c34*/
    {
      v7 = (Actor *)a1; /*0x4e1c40*/
      sub_5EA1A0((int)a1, (int)a1, (_DWORD *)a1->member.niNode); /*0x4e1c42*/
    }
    return (void *)sub_5EE1B0(v7, a2); /*0x4e1c49*/
  }
  return result; /*0x4e1c4e*/
}
