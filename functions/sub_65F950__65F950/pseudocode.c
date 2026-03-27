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
  int v13; // [esp-Ch] [ebp-18h]

  v7 = OSGlobals;
  if ( !OSGlobals || v7->quitGame || v7->exitToMainMenu || a7 )
  {
    Character_Set3D(a1, a2, a3, a4, a6, a7);
    if ( !a7 )
    {
      m_data = a1[0x10].member.baseExtraList.members.m_data;
      if ( m_data )
      {
        sub_47AB80((char *)a1[0x10].member.baseExtraList.members.m_data, a2, a3, a4, a6);
        FormHeapFree((unsigned int)m_data);
      }
      v10 = *(ActorAnimData **)a1[0x10].member.baseExtraList.members.m_presenceBitfield;
      a1[0x10].member.baseExtraList.members.m_data = 0;
      if ( v10 )
      {
        DisposeActorAnimData(v10);
        FormHeapFree((unsigned int)v10);
      }
      *(_DWORD *)a1[0x10].member.baseExtraList.members.m_presenceBitfield = 0;
      v11 = *(_DWORD *)&a1[0x10].member.baseExtraList.members.m_presenceBitfield[4];
      if ( v11 )
      {
        if ( !InterlockedDecrement((volatile LONG *)(v11 + 4)) )
          (**(void (__thiscall ***)(int, int))v11)(v11, 1);
        *(_DWORD *)&a1[0x10].member.baseExtraList.members.m_presenceBitfield[4] = 0;
      }
      v13 = *(_DWORD *)dword_B36BB8;
      v12 = (int *)ModelLoaderPtr;
      CameraP1 = 0;
      P3Camera = 0;
      Camera1PBiped = 0;
      QueuedModelLoader_RemoveModel(v12, v13, 1, 1);
      sub_578CF0(a2, a3, a4, a6, a5, 0);
    }
  }
  else
  {
    PrintError("PlayerCharacter::Set3D( 0 ) called before the game was over.");
  }
}
