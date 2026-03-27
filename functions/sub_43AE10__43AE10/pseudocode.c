LONG __userpurge sub_43AE10@<eax>(int a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>, _DWORD *a5)
{
  _DWORD *v6; // eax
  UInt32 mainThreadID; // esi
  TESObjectCELL *ParentCell; // eax
  IOTask *v11; // eax
  IOTask *v12; // esi
  void *v13; // edi
  int *v14; // ebx
  QueuedTreeBillboard *v15; // esi
  int v16; // [esp-4h] [ebp-38h]
  float v17[9]; // [esp+10h] [ebp-24h] BYREF
  float v18; // [esp+38h] [ebp+4h]

  v6 = (_DWORD *)(*(int (__usercall **)@<eax>(_DWORD@<ecx>, double@<st0>, double@<st1>, double@<st2>))(**(_DWORD **)(a1 + 0x20) + 0x174))(
                   *(_DWORD *)(a1 + 0x20),
                   a4,
                   a3,
                   a2);
  a5[0x15] = *v6;
  a5[0x16] = v6[1];
  a5[0x17] = v6[2];
  qmemcpy(a5 + 0xC, sub_4D7AF0(*(float **)(a1 + 0x20), v17), 0x24u);
  v18 = fabs(((double (__thiscall *)(_DWORD))*(_DWORD *)(**(_DWORD **)(a1 + 0x20) + 0xEC))(*(_DWORD *)(a1 + 0x20)));
  *((float *)a5 + 0x18) = v18;
  mainThreadID = OSGlobals->mainThreadID;
  if ( mainThreadID == GetCurrentThreadId() )
  {
    sub_4D7D10(*(MobileObject **)(a1 + 0x20), a5);
    ParentCell = TESObjectREFR_GetParentCell(*(TESObjectREFR **)(a1 + 0x20));
    sub_441EF0((int)TES, *(TESObjectREFR **)(a1 + 0x20), ParentCell, 0, 0);
    return sub_4D7010(*(_DWORD **)(a1 + 0x20), 1);
  }
  else
  {
    v11 = (IOTask *)FormHeapAlloc(0x20u);
    v12 = v11;
    if ( v11 )
    {
      v13 = *(void **)(a1 + 0x20);
      sub_436500(v11, 0);
      v12->vtbl = &AttachDistant3DTask::`vftable';
      v12[1].vtbl = v13;
      v12[1].members.unk04 = (BSTask *)a5;
      InterlockedIncrement(a5 + 1);
    }
    else
    {
      v12 = 0;
    }
    v14 = (int *)(a1 + 0x30);
    sub_4BCB70(v14, (int)v12);
    v15 = ModelLoaderPtr;
    v16 = *v14;
    if ( *v14 )
      InterlockedIncrement((volatile LONG *)(*v14 + 8));
    return sub_43A5F0(*((_DWORD **)v15 + 5), v16);
  }
}
