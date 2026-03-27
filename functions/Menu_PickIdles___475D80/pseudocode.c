char __userpurge Menu_PickIdles__@<al>(
        AnimSequenceSingle *this@<ecx>,
        double st5_0@<st2>,
        double st6_0@<st1>,
        double st7_0@<st0>,
        volatile LONG *a5,
        NiNode *a6,
        _DWORD *a7)
{
  bool v9; // zf
  int v10; // esi
  int *v11; // edi
  NiTimeController *v12; // eax
  Ni2DBuffer *v13; // eax
  BSSimpleList_VoidPtr *v14; // ebp
  const char *data; // edi
  QueuedTreeBillboard *v16; // ecx
  int a2; // esi
  unsigned __int8 *v18; // ecx
  BSSimpleList_VoidPtr::NodeVoid *next; // eax
  int v20; // eax
  char v21; // bl
  _DWORD *v22; // eax
  int v23; // esi
  int v25; // [esp+28h] [ebp-2Ch] BYREF
  const char *v26; // [esp+2Ch] [ebp-28h]
  AnimSequenceSingle *v27; // [esp+30h] [ebp-24h]
  _DWORD v28[5]; // [esp+34h] [ebp-20h]
  unsigned int v29; // [esp+50h] [ebp-4h]
  bool v30; // [esp+60h] [ebp+Ch]

  v27 = this;
  if ( !a5 || !a6 || !a7 || sub_470960(*((_DWORD **)this + 0x27), 0, &v25) )
    return 0;
  v9 = *(_BYTE *)((*(int (__usercall **)@<eax>(_DWORD *@<ecx>, double@<st0>, double@<st1>, double@<st2>))(*a7 + 0x170))(
                    a7,
                    st7_0,
                    st6_0,
                    st5_0)
                + 4) == 0x23;
  *((_DWORD *)this + 1) = a6;
  v30 = v9;
  v28[0] = "Bip01";
  v28[1] = "Bip01 L ForearmTwist";
  v28[2] = "Torch";
  v28[3] = "Weapon";
  v28[4] = "Bip01 Head";
  v10 = 0;
  v11 = (int *)((char *)this + 0x24);
  do
    *v11++ = sub_4D96F0(a7, a6, (const char *)v28[v10++]);
  while ( v10 < 5 );
  *(_WORD *)(*((_DWORD *)this + 1) + 0x18) &= ~2u;
  v12 = (NiTimeController *)FormHeapAlloc(0x80u);
  v26 = (const char *)v12;
  v29 = 0;
  if ( v12 )
    v13 = (Ni2DBuffer *)sub_6C5610(v12, *((int **)this + 1), 1);
  else
    v13 = 0;
  v29 = 0xFFFFFFFF;
  NiSmartPointer_Set__((Ni2DBuffer **)this + 0x26, v13);
  v14 = (BSSimpleList_VoidPtr *)a5;
  while ( !BSSimpleList_IsEmpty(v14) )
  {
    data = (const char *)v14->firstNode.data;
    v16 = ModelLoaderPtr;
    v26 = data;
    a2 = sub_439FF0(v16, data);
    v18 = *(unsigned __int8 **)(a2 + 8);
    if ( v18 )
    {
      if ( !TESAnimGroup_IsPowerAttack(v18) || !v30 )
      {
        LOBYTE(a5) = 1;
        if ( TESDataHandler_g_PlayerRef && PlayerCharacter_GetPlayerNode(TESDataHandler_g_PlayerRef, 0) && dword_B06548 )
        {
          if ( a6 == PlayerCharacter_GetPlayerNode(TESDataHandler_g_PlayerRef, 0)
            || a6 == PlayerCharacter_GetPlayerNode(TESDataHandler_g_PlayerRef, 1)
            || a6 == TESDataHandler_g_PlayerRef->inventoryPC )
          {
            if ( !sub_5790E0(0x40C, 0) )
              goto LABEL_26;
          }
          else if ( sub_45A500(SaveLoad_CurrentSavegame) || InterfaceManager_IsMenuMode() || sub_404F20(TES) )
          {
            goto LABEL_26;
          }
        }
        else
        {
LABEL_26:
          LOBYTE(a5) = 0;
        }
        AnimSequenceSingle::AnimSequenceSingle(this, a2, a5);
        data = v26;
        goto LABEL_28;
      }
      InterlockedDecrement((volatile LONG *)(a2 + 0xC));
    }
LABEL_28:
    FormHeapFree((unsigned int)data);
    next = v14->firstNode.next;
    if ( next )
    {
      v14->firstNode.next = next->next;
      v14->firstNode.data = next->data;
      FormHeapFree((unsigned int)next);
    }
    else
    {
      v14->firstNode.data = 0;
    }
  }
  v20 = *((_DWORD *)this + 2);
  if ( v20 )
    qmemcpy((void *)(v20 + 0x30), &stru_B26AF0[0xA].unk2C, 0x24u);
  FormHeapFree((unsigned int)v14);
  v21 = sub_470960(*((_DWORD **)this + 0x27), 0, &v25);
  if ( v21 )
  {
    v22 = (_DWORD *)(*(int (__thiscall **)(int, unsigned int))(*(_DWORD *)v25 + 0x10))(v25, 0xFFFFFFFF);
    v23 = (int)v22;
    if ( v22 )
    {
      sub_6C9BA0(v22, 0x64, 1, 1.0, 0.0, 0, 0);
      NiAVObject_UpdateNiAVObject(*((NiAVObject **)v27 + 1), 0.0, 1);
      sub_6C9CB0(v23, 0.0, 0);
    }
  }
  return v21;
}
