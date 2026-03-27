void __userpurge sub_646200(_DWORD *a1@<ecx>, int a2@<ebx>, double a3@<st2>, Actor *a4, int a5, int a6, int a7)
{
  Actor *v9; // ebp
  Actor *v10; // eax
  Actor *v11; // ebx
  double v12; // st7
  double v13; // st6
  double v14; // st7
  signed int v15; // eax
  double v16; // [esp+20h] [ebp-8h]
  float v17; // [esp+2Ch] [ebp+4h]
  ActorVtbl *vtbl; // [esp+38h] [ebp+10h]

  if ( !a1[0xB] )
    (*(void (__thiscall **)(_DWORD *, Actor *))(*a1 + 0x558))(a1, a4);
  v9 = (Actor *)a1[0xB];
  if ( !v9 )
    goto LABEL_4;
  if ( Actor::GetProcessLevel((Actor *)a1[0xB]) < 1 && !sub_5E6BA0(a4) )
  {
    (*(void (__thiscall **)(_DWORD *, Actor *, int))(*a1 + 0x188))(a1, a4, 2);
    sub_5EFF30(v9, a2, (int)a1, (int)a4);
  }
  if ( TesObjectREF_GetDistance((TESObjectREFR *)a4, (TESObjectREFR *)a1[0xB], 0) > fConst_200 )
  {
    (*(void (__thiscall **)(_DWORD *, Actor *, _DWORD, int, int))(*a1 + 0x198))(a1, a4, 0, a7, 1);
    return;
  }
  if ( !sub_5E6C60(a4) || *(_BYTE *)(a1[2] + 0x20) == 0xD )
  {
LABEL_4:
    (*(void (__thiscall **)(_DWORD *, Actor *, int))(*a1 + 0x188))(a1, a4, 1);
    return;
  }
  v10 = (Actor *)OblivionDynamicCast(
                   (void *)a1[0xB],
                   0,
                   (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                   &Character `RTTI Type Descriptor',
                   0);
  v11 = v10;
  if ( !v10 )
    goto LABEL_17;
  v12 = ((double (__thiscall *)(Actor *))v10->vtbl->Unk_94)(v10);
  v13 = (double)iCrimeGoldAttackMin;
  if ( v13 <= v12 )
  {
    (*(void (__thiscall **)(_DWORD *, Actor *, Actor *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int))(*a1 + 0x228))(
      a1,
      a4,
      v11,
      0,
      0,
      0,
      0,
      0,
      0,
      0,
      1);
    return;
  }
  v16 = (double)sub_5E4420(v11);
  if ( ((double (__thiscall *)(Actor *))v11->vtbl->Unk_94)(v11) <= v16 )
  {
    v14 = ((double (__thiscall *)(Actor *))v11->vtbl->Unk_94)(v11);
    v15 = Double_To_SInt32(v14);
    sub_5E4A40(v11, a3, v13, v14, (TESForm *)a4, v15);
    vtbl = v11->vtbl;
    v17 = ((double (__thiscall *)(Actor *))v11->vtbl->Unk_94)(v11) * dbl_A3D360;
    ((void (__thiscall *)(Actor *, _DWORD))vtbl->Unk_95)(v11, LODWORD(v17));
    (*(void (__thiscall **)(_DWORD *, Actor *, int))(*a1 + 0x188))(a1, a4, 2);
    sub_5EFF30(v9, (int)v11, (int)a1, (int)a4);
  }
  else
  {
LABEL_17:
    (*(void (__thiscall **)(_DWORD *, Actor *, int))(*a1 + 0x188))(a1, a4, 2);
    sub_5EFF30(v9, (int)v11, (int)a1, (int)a4);
    (*(void (__thiscall **)(_DWORD *, Actor *, Actor *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int))(*a1 + 0x228))(
      a1,
      a4,
      v11,
      0,
      0,
      0,
      0,
      0,
      0,
      0,
      1);
  }
}
