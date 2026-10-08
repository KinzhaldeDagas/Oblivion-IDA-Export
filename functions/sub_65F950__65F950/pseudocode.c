void __userpurge sub_65F950(
        TESObjectREFR *a1@<ecx>,
        char a2@<bpl>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st3>,
        double a6@<st0>,
        NiAVObject *a7)
{
  OSGlobals *v7; // eax
  BSExtraData *m_data; // edi
  ActorAnimData *v10; // edi
  int v11; // edi
  int *v12; // ecx
  const char *value; // [esp-Ch] [ebp-18h]

  v7 = MEMORY[0xB33398]; /*0x65f950*/
  if ( !MEMORY[0xB33398] || v7->quitGame || v7->exitToMainMenu || a7 ) /*0x65f96f*/
  {
    Character_Set3D(a1, a2, a3, a4, a6, a7); /*0x65f985*/
    if ( !a7 ) /*0x65f98c*/
    {
      m_data = a1[0x10].member.baseExtraList.members.m_data; /*0x65f992*/
      if ( m_data ) /*0x65f99a*/
      {
        sub_47AB80((ActorSkinInfo *)a1[0x10].member.baseExtraList.members.m_data); /*0x65f99e*/
        FormHeapFree((unsigned int)m_data); /*0x65f9a4*/
      }
      v10 = *(ActorAnimData **)a1[0x10].member.baseExtraList.members.m_presenceBitfield; /*0x65f9ac*/
      a1[0x10].member.baseExtraList.members.m_data = 0; /*0x65f9b4*/
      if ( v10 ) /*0x65f9ba*/
      {
        DisposeActorAnimData(v10); /*0x65f9be*/
        FormHeapFree((unsigned int)v10); /*0x65f9c4*/
      }
      *(_DWORD *)a1[0x10].member.baseExtraList.members.m_presenceBitfield = 0; /*0x65f9cc*/
      v11 = *(_DWORD *)&a1[0x10].member.baseExtraList.members.m_presenceBitfield[4]; /*0x65f9d2*/
      if ( v11 ) /*0x65f9da*/
      {
        if ( !InterlockedDecrement((volatile LONG *)(v11 + 4)) ) /*0x65f9e0*/
          (**(void (__thiscall ***)(int, int))v11)(v11, 1); /*0x65f9f6*/
        *(_DWORD *)&a1[0x10].member.baseExtraList.members.m_presenceBitfield[4] = 0; /*0x65f9f8*/
      }
      value = stru_B36BB8.value; /*0x65fa08*/
      v12 = (int *)MEMORY[0xB33A1C]; /*0x65fa09*/
      MEMORY[0xB3BB0C] = 0; /*0x65fa0f*/
      MEMORY[0xB3BB10] = 0; /*0x65fa15*/
      MEMORY[0xB3BB14] = 0; /*0x65fa1b*/
      QueuedModelLoader_RemoveModel(v12, (int)value, 1, 1); /*0x65fa21*/
      sub_578CF0(a2, a3, a4, a6, a5, 0); /*0x65fa27*/
    }
  }
  else
  {
    PrintError("PlayerCharacter::Set3D( 0 ) called before the game was over."); /*0x65f976*/
  }
}
