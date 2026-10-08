// Actor-base KFFZ loader. Iterates TESAnimation_AnimationNode entries, constructs <model-dir>\SpecialAnims\<entry>, loads each KF synchronously, and installs/defer-installs it into this ActorAnimData. Full direct-xref audit found only the creature and NPC branches in Actor_SetupAnimationData; no direct first-person KFFZ load site.
void __thiscall ActorAnimData_LoadKFFZSpecialAnims(
        ActorAnimData *this,
        TESAnimation_AnimationNode *kffzEntries,
        const char *modelDirectory)
{
  ActorAnimData *v3; // esi
  TESAnimation_AnimationNode *v4; // ebp
  int KFModelNow; // edi
  NiNode *RootNode; // esi
  volatile LONG *v7; // [esp+8h] [ebp-110h]
  char ArgList[260]; // [esp+10h] [ebp-108h] BYREF

  v3 = this; /*0x4760a6*/
  if ( kffzEntries ) /*0x4760ac*/
  {
    v4 = kffzEntries; /*0x4760b4*/
    do /*0x476198*/
    {
      _sprintf(ArgList, "%s\\%s\\%s", modelDirectory, (const char *)&dword_A3407C, v4->animationName); /*0x4760ca*/
      KFModelNow = ModelLoader_LoadKFModelNow(MEMORY[0xB33A1C], ArgList); /*0x4760ea*/
      LOBYTE(v7) = 1; /*0x4760ec*/
      if ( !reference /*0x476158*/
        || !PlayerCharacter_GetNodeByPerspective(reference, 0)
        || !dword_B06548
        || v3->RootNode == PlayerCharacter_GetNodeByPerspective(reference, 0)
        || (RootNode = v3->RootNode, RootNode == PlayerCharacter_GetNodeByPerspective(reference, 1))
        || RootNode == reference->inventoryPC
        || sub_45A500(g_TESSaveLoadGame)
        || InterfaceManager_IsMenuMode()
        || sub_404F20(MEMORY[0xB333A0]) )
      {
        LOBYTE(v7) = 0; /*0x476161*/
      }
      if ( KFModelNow ) /*0x476168*/
      {
        v3 = this; /*0x47616e*/
        ActorAnimData_InstallKFModel((AnimSequenceSingle *)this, KFModelNow, v7); /*0x476176*/
      }
      else
      {
        PrintError("Failed to load animation file '%s'.", ArgList); /*0x476187*/
        v3 = this; /*0x47618c*/
      }
      v4 = v4->next; /*0x476193*/
    }
    while ( v4 ); /*0x476198*/
  }
}
