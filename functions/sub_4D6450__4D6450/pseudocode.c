void __usercall sub_4D6450(int this@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  int v5; // eax
  TES *v6; // ecx
  NiAVObject *v7; // edi
  _DWORD *v8; // ecx
  void (__thiscall ***v9)(_DWORD, int); // edi
  int v10; // [esp+8h] [ebp-4h] BYREF

  v5 = *(char *)(this + 0x26);
  if ( v5 == 6 || v5 == 5 )
  {
    *(_BYTE *)(this + 0x26) = 4;
    sub_43DE30(ModelLoaderPtr, (TESChildCELL *)this);
    BYTE1(TES->unk68) = 1;
    sub_4CB670((TESObjectCELL *)this, 0);
    v6 = TES;
    if ( (*(_BYTE *)(this + 0x24) & 1) != 0 )
      sub_43FD70(v6, a2, a3, a4, (TESObjectCELL *)this);
    else
      sub_43FF80(v6, this);
    sub_4D4DC0((TESObjectCELL *)this);
    v7 = sub_4D58B0((TESObjectCELL *)this);
    if ( sub_4E4980() )
    {
      v8 = *(_DWORD **)(this + 0x44);
      if ( v8 )
        sub_4E54D0(v8);
    }
    sub_708B80(v7);
    TES->ObjectLODRoot->vtbl->RemoveObject(TES->ObjectLODRoot, (NiAVObject **)&v10, v7);
    v9 = (void (__thiscall ***)(_DWORD, int))v10;
    if ( v10 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) )
      {
        if ( v9 )
          (**v9)(v9, 1);
      }
    }
    *(_BYTE *)(this + 0x26) = 3;
    sub_496EA0((char *)&stru_B35C80, (TESObjectCELL *)this);
    sub_6786A0(&ActorProcessManager_ptr, a2, a3, a4, (int *)(this + 0x48), 1);
    sub_496F50(&stru_B35C80, (TESObjectCELL *)this);
    sub_4CAA30((ExtraDataList *)this);
    sub_4CB590((TESObjectCELL *)this, a2, a3, a4, 0);
    BYTE1(TES->unk68) = 1;
  }
}
