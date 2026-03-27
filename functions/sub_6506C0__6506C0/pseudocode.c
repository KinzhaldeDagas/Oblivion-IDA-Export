void __userpurge sub_6506C0(float *a1@<ecx>, int a2@<ebx>, Actor *a3)
{
  void (__stdcall *v5)(Actor *); // edx
  int v6; // ecx
  void *v7; // eax
  BSExtraData *v8; // eax
  ActorAnimData *v9; // eax
  int v10; // [esp+8h] [ebp-8h]
  float v11; // [esp+14h] [ebp+4h]

  if ( !*((_BYTE *)a1 + 0xD0) )
  {
    v5 = *(void (__stdcall **)(Actor *))(*(_DWORD *)a1 + 0x194);
    a1[0x2E] = 0.0;
    v5(a3);
  }
  if ( !*((_DWORD *)a1 + 0xB) )
    (*(void (__thiscall **)(float *, Actor *))(*(_DWORD *)a1 + 0x558))(a1, a3);
  v6 = *((_DWORD *)a1 + 0xB);
  if ( v6 )
  {
    v7 = (void *)(*(int (__thiscall **)(int))(*(_DWORD *)v6 + 0x170))(v6);
    if ( OblivionDynamicCast(
           v7,
           0,
           (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
           &TESObjectDOOR `RTTI Type Descriptor',
           0) )
    {
      v8 = sub_4D7740(*((TESObjectREFR **)a1 + 0xB));
      if ( !v8 || !sub_428E70(v8) )
        (*(void (__thiscall **)(float *, Actor *, int))(*(_DWORD *)a1 + 0x188))(a1, a3, 1);
    }
  }
  v9 = a3->vtbl->super.super.GetAnimData(a3);
  if ( v9 )
  {
    if ( sub_472EA0(v9) && !a3->members.super.process->GetProcessLevel(a3->members.super.process) )
      (*(void (__thiscall **)(float *, Actor *))(*(_DWORD *)a1 + 0x48))(a1, a3);
  }
  v11 = flt_B33E9C + a1[0x2E];
  a1[0x2E] = v11;
  if ( v11 >= dbl_A3AA50 )
  {
    sub_5EAE70(a3, a2, (int)a3, v10);
    a1[0x2E] = 0.0;
  }
}
