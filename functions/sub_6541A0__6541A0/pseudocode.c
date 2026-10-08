// Refreshes the equipment attachment cache for the selected skeleton context: either first-person globals or MiddleHighProcess fields (+0xFC Weapon, +0x100 Torch, +0x104 Bip01 L ForearmTwist, +0x108 BackWeapon/SideWeapon selected by native WEAP type, +0x10C Quiver). It pre-clears the matching ArrowBone cache for separate population. The Boolean result is not general cache success; it is NiNode_RemoveScbChildAlongFadeNodeChain(cached Weapon), meaning whether literal Scb was removed.
bool __thiscall MiddleHighProcess_CacheEquipmentAttachmentNodes(
        MiddleHighProcess *this,
        void *skinInstance,
        NiNode *rootNode)
{
  int vtbl_low; // eax
  int v5; // ebx
  int v6; // eax
  int v7; // ecx
  int v8; // edx
  int v9; // eax
  int v10; // ecx
  int (__thiscall *v11)(int, char *); // edx
  int v12; // eax
  int v13; // ecx
  int (__thiscall *v14)(int, char *); // edx
  int v15; // eax
  UInt32 v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  char *v21; // [esp-24h] [ebp-30h]
  char *v22; // [esp-1Ch] [ebp-28h]
  char *v23; // [esp-Ch] [ebp-18h]
  int v24; // [esp-4h] [ebp-10h]
  UInt32 unk0FC; // [esp-4h] [ebp-10h]

  vtbl_low = SLOBYTE(this->equippedWeaponData->type[6].vtbl); /*0x6541ae*/
  v5 = 5; /*0x6541b8*/
  if ( vtbl_low == 1 || (unsigned int)(vtbl_low - 3) <= 2 ) /*0x6541c5*/
    v5 = 4; /*0x6541c7*/
  if ( skinInstance ) /*0x6541d2*/
  {
    if ( PlayerCharacter_GetAnimDataByPerspective((Actor *)reference, 1) /*0x654200*/
      && skinInstance == *((void **)PlayerCharacter_GetAnimDataByPerspective((Actor *)reference, 1) + 0x26) )
    {
      v6 = (*(int (__thiscall **)(_DWORD, char *))(**((_DWORD **)skinInstance + 0x1F) + 0x4C))( /*0x654214*/
             *((_DWORD *)skinInstance + 0x1F),
             off_B0655C[0]);
      v7 = *((_DWORD *)skinInstance + 0x1F); /*0x654216*/
      v8 = *(_DWORD *)(4 * v5 + 0xB06550); /*0x654219*/
      g_playerFirstPersonWeaponAttachNode = v6; /*0x654220*/
      v9 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v7 + 0x4C))(v7, v8); /*0x65422b*/
      v10 = *((_DWORD *)skinInstance + 0x1F); /*0x65422d*/
      v11 = *(int (__thiscall **)(int, char *))(*(_DWORD *)v10 + 0x4C); /*0x654232*/
      g_playerFirstPersonBackOrSideWeaponAttachNode = v9; /*0x654235*/
      g_playerFirstPersonTorchAttachNode = v11(v10, off_B06570); /*0x654246*/
      v12 = NiObjectNET_LookupObjectByName(rootNode, off_B0656C[0]); /*0x654252*/
      v13 = *((_DWORD *)skinInstance + 0x1F); /*0x654257*/
      v14 = *(int (__thiscall **)(int, char *))(*(_DWORD *)v13 + 0x4C); /*0x65425c*/
      g_playerFirstPersonForearmTwistNode = v12; /*0x65425f*/
      v15 = v14(v13, off_B06568[0]); /*0x65426d*/
LABEL_8:
      v24 = g_playerFirstPersonWeaponAttachNode; /*0x65426f*/
      g_playerFirstPersonQuiverAttachNode = v15; /*0x654276*/
      g_playerFirstPersonArrowBoneAttachNode = 0; /*0x65427b*/
      return NiNode_RemoveScbChildAlongFadeNodeChain(v24); /*0x654290*/
    }
    this->weaponAttachNode = (*(int (__thiscall **)(_DWORD, char *))(**((_DWORD **)skinInstance + 0x1F) + 0x4C))( /*0x6542a4*/
                               *((_DWORD *)skinInstance + 0x1F),
                               off_B0655C[0]);
    this->backOrSideWeaponAttachNode = (*(int (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)skinInstance + 0x1F) + 0x4C))( /*0x6542bc*/
                                         *((_DWORD *)skinInstance + 0x1F),
                                         *(_DWORD *)(4 * v5 + 0xB06550));
    this->torchAttachNode = (*(int (__thiscall **)(_DWORD, char *))(**((_DWORD **)skinInstance + 0x1F) + 0x4C))( /*0x6542d7*/
                              *((_DWORD *)skinInstance + 0x1F),
                              off_B06570);
    this->forearmTwistAttachNode = NiObjectNET_LookupObjectByName(rootNode, off_B0656C[0]); /*0x6542ea*/
    v17 = (*(int (__thiscall **)(_DWORD, char *))(**((_DWORD **)skinInstance + 0x1F) + 0x4C))( /*0x654302*/
            *((_DWORD *)skinInstance + 0x1F),
            off_B06568[0]);
  }
  else
  {
    if ( !rootNode ) /*0x65432f*/
      goto LABEL_11; /*0x65432f*/
    if ( PlayerCharacter_GetAnimDataByPerspective((Actor *)reference, 1) /*0x654352*/
      && rootNode == *((NiNode **)PlayerCharacter_GetAnimDataByPerspective((Actor *)reference, 1) + 1) )
    {
      v18 = NiObjectNET_LookupObjectByName(rootNode, off_B0655C[0]); /*0x65435c*/
      v23 = *(char **)(4 * v5 + 0xB06550); /*0x654368*/
      g_playerFirstPersonWeaponAttachNode = v18; /*0x65436a*/
      g_playerFirstPersonBackOrSideWeaponAttachNode = NiObjectNET_LookupObjectByName(rootNode, v23); /*0x654374*/
      v19 = NiObjectNET_LookupObjectByName(rootNode, off_B06570); /*0x654380*/
      v22 = off_B0656C[0]; /*0x65438b*/
      g_playerFirstPersonTorchAttachNode = v19; /*0x65438d*/
      v20 = NiObjectNET_LookupObjectByName(rootNode, v22); /*0x654392*/
      v21 = off_B06568[0]; /*0x65439d*/
      g_playerFirstPersonForearmTwistNode = v20; /*0x65439f*/
      v15 = NiObjectNET_LookupObjectByName(rootNode, v21); /*0x6543a4*/
      goto LABEL_8; /*0x6543ac*/
    }
    this->weaponAttachNode = NiObjectNET_LookupObjectByName(rootNode, off_B0655C[0]); /*0x6543bd*/
    this->backOrSideWeaponAttachNode = NiObjectNET_LookupObjectByName(rootNode, *(char **)(4 * v5 + 0xB06550)); /*0x6543d1*/
    this->torchAttachNode = NiObjectNET_LookupObjectByName(rootNode, off_B06570); /*0x6543e4*/
    this->forearmTwistAttachNode = NiObjectNET_LookupObjectByName(rootNode, off_B0656C[0]); /*0x6543f6*/
    v17 = NiObjectNET_LookupObjectByName(rootNode, off_B06568[0]); /*0x654404*/
  }
  this->quiverAttachNode = v17; /*0x654304*/
LABEL_11:
  unk0FC = this->weaponAttachNode; /*0x65430a*/
  this->arrowBoneAttachNode = 0; /*0x654311*/
  return NiNode_RemoveScbChildAlongFadeNodeChain(unk0FC); /*0x65428d*/
}
