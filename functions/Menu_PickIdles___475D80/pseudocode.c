// Menu_PickIdles loader. Loads candidate idle KF paths from a list, filters power attacks for menu/player contexts, installs valid sequences, and initializes the selected idle sequence on the target node.
char __userpurge Menu_PickIdles__@<al>(
        AnimSequenceSingle *this@<ecx>,
        double st5_0@<st2>,
        double st6_0@<st1>,
        double st7_0@<st0>,
        BSSimpleList_VoidPtr *a5,
        NiNode *a6,
        _DWORD *a7)
{
  bool v9; // zf
  int v10; // esi
  int *v11; // edi
  NiTimeController *v12; // eax
  NiTimeController *v13; // eax
  BSSimpleList_VoidPtr *v14; // ebp
  const char *data; // edi
  QueuedTreeBillboard *v16; // ecx
  int v17; // esi
  unsigned __int8 *v18; // ecx
  BSSimpleList_VoidPtr::NodeVoid *next; // eax
  int v20; // eax
  char v21; // bl
  float *v22; // eax
  int v23; // esi
  int v25; // [esp+28h] [ebp-2Ch] BYREF
  const char *v26; // [esp+2Ch] [ebp-28h]
  AnimSequenceSingle *v27; // [esp+30h] [ebp-24h]
  _DWORD v28[5]; // [esp+34h] [ebp-20h]
  unsigned int v29; // [esp+50h] [ebp-4h]
  bool v30; // [esp+60h] [ebp+Ch]

  v27 = this; /*0x475da9*/
  if ( !a5 || !a6 || !a7 || ActorAnimData_FindAnimMapEntry(*((_DWORD **)this + 0x27), 0, &v25) ) /*0x475ddd*/
    return 0; /*0x476066*/
  v9 = *(_BYTE *)((*(int (__usercall **)@<eax>(_DWORD *@<ecx>, double@<st0>, double@<st1>, double@<st2>))(*a7 + 0x170))( /*0x475df7*/
                    a7,
                    st7_0,
                    st6_0,
                    st5_0)
                + 4) == 0x23;
  *((_DWORD *)this + 1) = a6; /*0x475dfb*/
  v30 = v9; /*0x475dfe*/
  v28[0] = "Bip01"; /*0x475e03*/
  v28[1] = "Bip01 L ForearmTwist"; /*0x475e0b*/
  v28[2] = "Torch"; /*0x475e13*/
  v28[3] = "Weapon"; /*0x475e1b*/
  v28[4] = "Bip01 Head"; /*0x475e23*/
  v10 = 0; /*0x475e2b*/
  v11 = (int *)((char *)this + 0x24); /*0x475e2d*/
  do /*0x475e4c*/
    *v11++ = sub_4D96F0(a7, a6, (char *)v28[v10++]); /*0x475e41*/
  while ( v10 < 5 ); /*0x475e4c*/
  *(_WORD *)(*((_DWORD *)this + 1) + 0x18) &= ~2u; /*0x475e51*/
  v12 = (NiTimeController *)FormHeapAlloc(0x80u); /*0x475e5c*/
  v26 = (const char *)v12; /*0x475e64*/
  v29 = 0; /*0x475e6a*/
  if ( v12 ) /*0x475e72*/
    v13 = sub_6C5610(v12, *((NiObjectNET **)this + 1), 1); /*0x475e7c*/
  else
    v13 = 0; /*0x475e83*/
  v29 = 0xFFFFFFFF; /*0x475e8c*/
  NiSmartPointer_Set__((Ni2DBuffer **)this + 0x26, (Ni2DBuffer *)v13); /*0x475e94*/
  v14 = a5; /*0x475e99*/
  while ( !BSSimpleList_IsEmpty(v14) ) /*0x475e9f*/
  {
    data = (const char *)v14->firstNode.data; /*0x475eb0*/
    v16 = MEMORY[0xB33A1C]; /*0x475eb3*/
    v26 = data; /*0x475eba*/
    v17 = ModelLoader_LoadKFModelNow(v16, data); /*0x475ec3*/
    v18 = *(unsigned __int8 **)(v17 + 8); /*0x475ec5*/
    if ( v18 ) /*0x475eca*/
    {
      if ( !TESAnimGroup_IsPowerAttack(v18) || !v30 ) /*0x475ede*/
      {
        LOBYTE(a5) = 1; /*0x475ef7*/
        if ( reference && PlayerCharacter_GetNodeByPerspective(reference, 0) && dword_B06548 ) /*0x475f0d*/
        {
          if ( a6 == PlayerCharacter_GetNodeByPerspective(reference, 0) /*0x475f48*/
            || a6 == PlayerCharacter_GetNodeByPerspective(reference, 1)
            || a6 == reference->inventoryPC )
          {
            if ( !InterfaceManager_IsMenuVisibleByID(0x40C, 0) ) /*0x475f7a*/
              goto LABEL_26; /*0x475f84*/
          }
          else if ( sub_45A500(g_TESSaveLoadGame) || InterfaceManager_IsMenuMode() || sub_404F20(MEMORY[0xB333A0]) ) /*0x475f68*/
          {
            goto LABEL_26; /*0x475f6f*/
          }
        }
        else
        {
LABEL_26:
          LOBYTE(a5) = 0; /*0x475f86*/
        }
        ActorAnimData_InstallKFModel(this, v17, (volatile LONG *)a5); /*0x475f93*/
        data = v26; /*0x475f98*/
        goto LABEL_28; /*0x475f98*/
      }
      InterlockedDecrement((volatile LONG *)(v17 + 0xC)); /*0x475ee4*/
    }
LABEL_28:
    FormHeapFree((unsigned int)data); /*0x475f9c*/
    next = v14->firstNode.next; /*0x475fa2*/
    if ( next ) /*0x475faa*/
    {
      v14->firstNode.next = next->next; /*0x475faf*/
      v14->firstNode.data = next->data; /*0x475fb5*/
      FormHeapFree((unsigned int)next); /*0x475fb8*/
    }
    else
    {
      v14->firstNode.data = 0; /*0x475fc2*/
    }
  }
  v20 = *((_DWORD *)this + 2); /*0x475fd8*/
  if ( v20 ) /*0x475fdd*/
    qmemcpy((void *)(v20 + 0x30), &stru_B26AF0[0xA].unk2C, 0x24u); /*0x475fec*/
  FormHeapFree((unsigned int)v14); /*0x475fef*/
  v21 = ActorAnimData_FindAnimMapEntry(*((_DWORD **)this + 0x27), 0, &v25); /*0x476009*/
  if ( v21 ) /*0x47600d*/
  {
    v22 = (float *)(*(int (__thiscall **)(int, unsigned int))(*(_DWORD *)v25 + 0x10))(v25, 0xFFFFFFFF); /*0x47601a*/
    v23 = (int)v22; /*0x47601c*/
    if ( v22 ) /*0x476020*/
    {
      NiControllerSequence_Activate(v22, 0x64, 1, 1.0, 0.0, 0, 0); /*0x47603a*/
      NiAVObject_UpdateNiAVObject(*((NiAVObject **)v27 + 1), 0.0, 1); /*0x47604e*/
      NiControllerSequence_Deactivate(v23, 0.0, 0); /*0x47605d*/
    }
  }
  return v21; /*0x476068*/
}
