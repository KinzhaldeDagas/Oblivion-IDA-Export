void __userpurge sub_646200(
        _DWORD *a1@<ecx>,
        int a2@<ebx>,
        double a3@<st2>,
        double a4@<st0>,
        Actor *a5,
        int a6,
        int a7,
        int a8)
{
  Actor *v10; // ebp
  Actor *v11; // eax
  Actor *v12; // ebx
  double value; // st6
  double v14; // st6
  signed int v15; // eax
  float v16; // [esp+2Ch] [ebp+4h]
  ActorVtbl *vtbl; // [esp+38h] [ebp+10h]

  if ( !a1[0xB] ) /*0x646207*/
    (*(void (__thiscall **)(_DWORD *, Actor *))(*a1 + 0x558))(a1, a5); /*0x64621b*/
  v10 = (Actor *)a1[0xB]; /*0x64621d*/
  if ( !v10 ) /*0x646222*/
    goto LABEL_4; /*0x646222*/
  if ( Actor::GetProcessLevel((Actor *)a1[0xB]) < 1 && !sub_5E6BA0(a5) ) /*0x64624a*/
  {
    (*(void (__thiscall **)(_DWORD *, Actor *, int))(*a1 + 0x188))(a1, a5, 2); /*0x646260*/
    sub_5EFF30(v10, a2, (int)a1, (int)a5); /*0x646265*/
  }
  TesObjectREF_GetDistance((TESObjectREFR *)a5, (TESObjectREFR *)a1[0xB], 0); /*0x646272*/
  if ( a4 > fConst_200 ) /*0x646282*/
  {
    (*(void (__thiscall **)(_DWORD *, Actor *, _DWORD, int, int))(*a1 + 0x198))(a1, a5, 0, a8, 1); /*0x646298*/
    return; /*0x6462a0*/
  }
  if ( !Actor_IsGuardClass(a5) || *(_BYTE *)(a1[2] + 0x20) == 0xD ) /*0x6462b9*/
  {
LABEL_4:
    (*(void (__usercall **)(_DWORD *@<ecx>, Actor *, int, double@<st0>))(*a1 + 0x188))(a1, a5, 1, a4); /*0x646224*/
    return; /*0x646239*/
  }
  v11 = (Actor *)OblivionDynamicCast( /*0x6462d2*/
                   (void *)a1[0xB],
                   0,
                   (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                   &Character `RTTI Type Descriptor',
                   0);
  v12 = v11; /*0x6462d7*/
  if ( !v11 ) /*0x6462de*/
    goto LABEL_17; /*0x6462de*/
  v11->vtbl->Unk_94(v11); /*0x6462ee*/
  value = (double)(int)MEMORY[0xB36A60].value; /*0x6462f0*/
  if ( value <= a4 ) /*0x6462fd*/
  {
    (*(void (__thiscall **)(_DWORD *, Actor *, Actor *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int))(*a1 + 0x228))( /*0x64631b*/
      a1,
      a5,
      v12,
      0,
      0,
      0,
      0,
      0,
      0,
      0,
      1);
    return; /*0x646324*/
  }
  a4 = (double)sub_5E4420(v12); /*0x646334*/
  v12->vtbl->Unk_94(v12); /*0x646344*/
  if ( value <= a4 ) /*0x64634f*/
  {
    v14 = ((double (__thiscall *)(Actor *))v12->vtbl->Unk_94)(v12); /*0x64635b*/
    v15 = Double_To_SInt32(a4); /*0x64635d*/
    sub_5E4A40(v12, a3, v14, a4, (TESForm *)a5, v15); /*0x646366*/
    vtbl = v12->vtbl; /*0x646375*/
    v16 = ((double (__thiscall *)(Actor *))v12->vtbl->Unk_94)(v12) * dbl_A3D360; /*0x64638b*/
    ((void (__thiscall *)(Actor *, _DWORD))vtbl->Unk_95)(v12, LODWORD(v16)); /*0x646399*/
    (*(void (__thiscall **)(_DWORD *, Actor *, int))(*a1 + 0x188))(a1, a5, 2); /*0x6463a8*/
    sub_5EFF30(v10, (int)v12, (int)a1, (int)a5); /*0x6463ad*/
  }
  else
  {
LABEL_17:
    (*(void (__usercall **)(_DWORD *@<ecx>, Actor *, int, double@<st0>))(*a1 + 0x188))(a1, a5, 2, a4); /*0x6463c9*/
    sub_5EFF30(v10, (int)v12, (int)a1, (int)a5); /*0x6463ce*/
    (*(void (__thiscall **)(_DWORD *, Actor *, Actor *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int))(*a1 + 0x228))( /*0x6463ef*/
      a1,
      a5,
      v12,
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
