void __usercall sub_4D6450(int this@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  int v5; // eax
  TES *v6; // ecx
  NiAVObject *v7; // edi
  _DWORD *v8; // ecx
  void (__thiscall ***v9)(_DWORD, int); // edi
  int v10; // [esp+8h] [ebp-4h] BYREF

  v5 = *(char *)(this + 0x26); /*0x4d6454*/
  if ( v5 == 6 || v5 == 5 ) /*0x4d6460*/
  {
    *(_BYTE *)(this + 0x26) = 4; /*0x4d6466*/
    sub_43DE30(MEMORY[0xB33A1C], (TESChildCELL *)this); /*0x4d6471*/
    BYTE1(MEMORY[0xB333A0]->unk68) = 1; /*0x4d647f*/
    TESObjectCELL_RegisterOrUnregisterAttachedLights((TESObjectCELL *)this, 0);// As a process-level-5/6 cell begins unload, unregister ordinary attached reference lights before removing the cell scene node. /*0x4d6483*/
    v6 = MEMORY[0xB333A0]; /*0x4d648c*/
    if ( (*(_BYTE *)(this + 0x24) & 1) != 0 ) /*0x4d6493*/
      sub_43FD70(v6, a2, a3, a4, (TESObjectCELL *)this); /*0x4d6495*/
    else
      sub_43FF80(v6, this); /*0x4d649c*/
    sub_4D4DC0((TESObjectCELL *)this); /*0x4d64a4*/
    v7 = (NiAVObject *)sub_4D58B0((TESObjectCELL *)this); /*0x4d64b0*/
    if ( sub_4E4980() ) /*0x4d64b2*/
    {
      v8 = *(_DWORD **)(this + 0x44); /*0x4d64bb*/
      if ( v8 ) /*0x4d64c0*/
        sub_4E54D0(v8); /*0x4d64c2*/
    }
    sub_708B80(v7); /*0x4d64c9*/
    MEMORY[0xB333A0]->ObjectLODRoot->vtbl->RemoveObject(MEMORY[0xB333A0]->ObjectLODRoot, (NiAVObject **)&v10, v7); /*0x4d64e5*/
    v9 = (void (__thiscall ***)(_DWORD, int))v10; /*0x4d64e7*/
    if ( v10 ) /*0x4d64ed*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) ) /*0x4d64f3*/
      {
        if ( v9 ) /*0x4d64ff*/
          (**v9)(v9, 1); /*0x4d6509*/
      }
    }
    *(_BYTE *)(this + 0x26) = 3; /*0x4d6511*/
    sub_496EA0((char *)&unk_B35C80, (TESObjectCELL *)this); /*0x4d6515*/
    sub_6786A0(&qword_B3BB2C[0x75], (int *)(this + 0x48), 1); /*0x4d6525*/
    sub_496F50(&unk_B35C80, (TESObjectCELL *)this); /*0x4d6530*/
    sub_4CAA30((ExtraDataList *)this); /*0x4d6537*/
    sub_4CB590((TESObjectCELL *)this, a2, a3, a4, 0); /*0x4d6540*/
    BYTE1(MEMORY[0xB333A0]->unk68) = 1; /*0x4d654b*/
  }
}
