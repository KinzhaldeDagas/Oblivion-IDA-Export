// Verified shared queued-reference callback: the same implementation appears in QueuedReference, QueuedTree, QueuedCharacter, QueuedCreature, and QueuedPlayer vtables. It stores the generated NiNode on the reference, refreshes/attaches its 3D, then sets bit 0x80000; off-main-thread calls enqueue AttachDistant3DTask. Fallout's named QueuedReference::AttachDistant3D follows the same flow and calls TESObjectREFR::SetHasTemp3D.
LONG __userpurge QueuedReference_AttachDistant3D@<eax>(
        int a1@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        _DWORD *a5)
{
  _DWORD *v6; // eax
  UInt32 mainThreadID; // esi
  _DWORD *DwordAtOffset40; // eax
  IOTask *v11; // eax
  IOTask *v12; // esi
  void *v13; // edi
  int *v14; // ebx
  QueuedTreeBillboard *v15; // esi
  int v16; // [esp-4h] [ebp-38h]
  float v17[9]; // [esp+10h] [ebp-24h] BYREF
  float v18; // [esp+38h] [ebp+4h]

  v6 = (_DWORD *)(*(int (__usercall **)@<eax>(_DWORD@<ecx>, double@<st0>, double@<st1>, double@<st2>))(**(_DWORD **)(a1 + 0x20) + 0x174))( /*0x43ae24*/
                   *(_DWORD *)(a1 + 0x20),
                   a4,
                   a3,
                   a2);
  a5[0x15] = *v6; /*0x43ae2c*/
  a5[0x16] = v6[1]; /*0x43ae32*/
  a5[0x17] = v6[2]; /*0x43ae3c*/
  qmemcpy(a5 + 0xC, sub_4D7AF0(*(float **)(a1 + 0x20), v17), 0x24u); /*0x43ae52*/
  v18 = fabs(((double (__thiscall *)(_DWORD))*(_DWORD *)(**(_DWORD **)(a1 + 0x20) + 0xEC))(*(_DWORD *)(a1 + 0x20))); /*0x43ae63*/
  *((float *)a5 + 0x18) = v18; /*0x43ae6b*/
  mainThreadID = MEMORY[0xB33398]->mainThreadID; /*0x43ae74*/
  if ( mainThreadID == GetCurrentThreadId() ) /*0x43ae7f*/
  {
    MobileObject_SetNiNode(*(MobileObject **)(a1 + 0x20), a5); /*0x43ae85*/
    DwordAtOffset40 = (_DWORD *)Shared_GetDwordAtOffset40(*(void **)(a1 + 0x20)); /*0x43ae91*/
    sub_441EF0((int)MEMORY[0xB333A0], *(TESObjectREFR **)(a1 + 0x20), DwordAtOffset40, 0, 0); /*0x43aea1*/
    return TESObjectREFR_SetTemp3DFlag(*(_DWORD **)(a1 + 0x20), 1);// Verified: after assigning the generated NiNode and refreshing cell attachment, the shared QueuedReference_AttachDistant3D callback sets bit 0x80000. Probable role is HasTemp3D, matching Fallout's named setter. /*0x43aeab*/
  }
  else
  {
    v11 = (IOTask *)FormHeapAlloc(0x20u); /*0x43aebc*/
    v12 = v11; /*0x43aec1*/
    if ( v11 ) /*0x43aec8*/
    {
      v13 = *(void **)(a1 + 0x20); /*0x43aeca*/
      sub_436500(v11, 0); /*0x43aed1*/
      v12->vtbl = &AttachDistant3DTask::`vftable'; /*0x43aed6*/
      v12[1].vtbl = v13;                        // Verified AttachDistant3DTask layout: constructor stores the TESObjectREFR at task+0x18 and the generated NiNode at task+0x1C; Run transfers this node to the reference on the main thread. /*0x43aedc*/
      v12[1].members.unk04 = (BSTask *)a5;      // Verified: task+0x1C holds the AddRef'd NiNode awaiting main-thread assignment to TESObjectREFR.niNode. /*0x43aedf*/
      InterlockedIncrement(a5 + 1); /*0x43aee6*/
    }
    else
    {
      v12 = 0; /*0x43aeee*/
    }
    v14 = (int *)(a1 + 0x30); /*0x43aef0*/
    sub_4BCB70(v14, (int)v12); /*0x43aef6*/
    v15 = MEMORY[0xB33A1C]; /*0x43aeff*/
    v16 = *v14; /*0x43af0c*/
    if ( *v14 ) /*0x43aefb*/
      InterlockedIncrement((volatile LONG *)(*v14 + 8)); /*0x43af14*/
    return sub_43A5F0(*((_DWORD **)v15 + 5), v16); /*0x43af1d*/
  }
}
