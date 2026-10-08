// 3DTheft release-door-targeted-getaway-150: high-process path request helper reached from process vtable +0x3DC. Used to redirect the engine-owned Flee package toward a selected load door; rebuilds path destination state without forcing package reevaluation.
char __userpurge sub_64CD60@<al>(
        int *a1@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        TESChildCELL *a5,
        int a6,
        int a7,
        int a8,
        TESObjectCELL *a9,
        TESObjectREFR *a10)
{
  TESObjectCELL *v10; // ebp
  int (__usercall *v12)@<eax>(int *@<ecx>, double@<st0>, double@<st1>, double@<st2>); // edx
  int v13; // eax
  TESObjectREFR *v14; // esi
  char result; // al
  TESObjectCELL *DwordAtOffset40; // edi
  TESWorldSpace *WorldSpace; // ebx
  float *v18; // eax
  float *v19; // ebx
  float *v20; // eax
  TESObjectREFR *v21; // edi
  int v22; // edx
  int (__thiscall *v23)(int *); // eax
  Actor *v24; // edi
  int *v25; // ecx
  char IsSleeping; // al
  int v27; // ecx
  bool v28; // zf
  char v29; // al
  float ***v30; // ecx
  int *v31; // eax
  int v32; // ecx
  int v33; // ecx
  int v35; // [esp+18h] [ebp-Ch] BYREF
  int v36; // [esp+1Ch] [ebp-8h]
  int v37; // [esp+20h] [ebp-4h]

  v10 = a9; /*0x64cd65*/
  if ( a9 ) /*0x64cd73*/
  {
    if ( !TESObjectCELL_IsInterior(a9) ) /*0x64cd77*/
      v10 = 0; /*0x64cd80*/
  }
  v12 = *(int (__usercall **)@<eax>(int *@<ecx>, double@<st0>, double@<st1>, double@<st2>))(*a1 + 0x184); /*0x64cd84*/
  LOBYTE(a9) = 0; /*0x64cd8c*/
  v13 = v12(a1, a4, a3, a2); /*0x64cd91*/
  v14 = (TESObjectREFR *)a5; /*0x64cd95*/
  if ( !v13 && !a5 ) /*0x64cd9d*/
    return 1; /*0x64cd9d*/
  if ( !v10 && !a10 ) /*0x64cdb3*/
    return 1; /*0x64cdb3*/
  DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(a5); /*0x64cdbe*/
  WorldSpace = TESObjectREFR_GetWorldSpace(v14); /*0x64cdc7*/
  if ( (!DwordAtOffset40 || !TESObjectCELL_IsInterior(DwordAtOffset40)) && !WorldSpace ) /*0x64cdd8*/
    return 1; /*0x64cda8*/
  LOBYTE(a5) = 0; /*0x64cddc*/
  sub_4D8AF0((TESObjectCELL **)v14); /*0x64cde1*/
  v19 = v18; /*0x64cde6*/
  v20 = 0; /*0x64cde8*/
  if ( v10 ) /*0x64cdec*/
  {
    v20 = sub_4CBBB0(v10, (float *)&a6); /*0x64cdf5*/
    if ( !v20 ) /*0x64cdfc*/
      v20 = (float *)v10; /*0x64cdfe*/
  }
  else
  {
    v21 = a10; /*0x64ce02*/
    if ( a10 ) /*0x64ce08*/
    {
      v20 = sub_4F0600(a10, (float *)&a6); /*0x64ce11*/
      if ( !v20 ) /*0x64ce18*/
        v20 = (float *)v21; /*0x64ce1a*/
    }
  }
  if ( v19 != v20 ) /*0x64ce1e*/
    LOBYTE(a5) = 1; /*0x64ce20*/
  v35 = a6; /*0x64ce35*/
  v22 = *a1; /*0x64ce39*/
  v36 = a7; /*0x64ce3b*/
  v23 = *(int (__thiscall **)(int *))(v22 + 0xCC); /*0x64ce3f*/
  v37 = a8; /*0x64ce45*/
  v24 = (Actor *)v23(a1); /*0x64ce4f*/
  if ( !Actor_IsSwimming((Actor *)v14) ) /*0x64ce51*/
  {
    if ( v24 ) /*0x64ce5c*/
    {
      if ( v24->vtbl->super.super.IsActor((TESObjectREFR *)v24) && Actor_IsSwimming(v24) ) /*0x64ce70*/
      {
        a4 = *(float *)&v37 - Actor_GetScaledCollisionHeight(v14); /*0x64ce88*/
        *(float *)&v37 = a4; /*0x64ce8c*/
      }
    }
  }
  v25 = (int *)a1[0xD]; /*0x64ce90*/
  if ( !v25 ) /*0x64ce95*/
  {
    (*(void (__thiscall **)(int *))(*a1 + 0x408))(a1); /*0x64cec3*/
    goto LABEL_31; /*0x64cec5*/
  }
  if ( (_BYTE)a5 ) /*0x64ce9c*/
  {
    sub_689A00(v25); /*0x64cec7*/
LABEL_31:
    if ( byte_B15800 ) /*0x64cecc*/
    {
      IsSleeping = PlayerCharacter::IsSleeping_(reference); /*0x64cedb*/
      sub_6836E0((NiTMap_TESCELL *)LODWORD(qword_B3BB2C[0x115]), a2, a3, a4, v14, v10, a10, v35, v36, v37, IsSleeping); /*0x64cf07*/
      v27 = LODWORD(qword_B3BB2C[0x115]); /*0x64cf0c*/
      LOBYTE(a5) = 0; /*0x64cf18*/
      if ( !sub_682820(v27, (int)v14, (Actor *)v14, &a5) ) /*0x64cf24*/
        goto LABEL_38; /*0x64cf24*/
      v28 = (_BYTE)a5 == 0; /*0x64cf26*/
    }
    else
    {
      TravelPath_BuildToDestination((char *)a1[0xD], (TESObjectCELL **)v14, (float *)&v35, v10, (TESObjectCELL *)a10); /*0x64cf49*/
      v28 = v29 == 0; /*0x64cf4e*/
    }
    if ( v28 ) /*0x64cf50*/
    {
      sub_5F7CF0((Actor *)v14, 0, 0); /*0x64cf33*/
    }
    else
    {
      v30 = (float ***)a1[0xD]; /*0x64cf52*/
      LOBYTE(a9) = 1; /*0x64cf55*/
      sub_68A160(v30); /*0x64cf5a*/
      a6 = *v31; /*0x64cf61*/
      v32 = a1[0xD]; /*0x64cf68*/
      a7 = v31[1]; /*0x64cf6b*/
      a8 = v31[2]; /*0x64cf72*/
      (*(void (__thiscall **)(int, TESObjectREFR *, int *, _DWORD))(*(_DWORD *)v32 + 0x14))(v32, v14, &a6, 0); /*0x64cf83*/
    }
    goto LABEL_38; /*0x64cf83*/
  }
  (*(void (__thiscall **)(int *, TESObjectREFR *, int *))(*v25 + 0x24))(v25, v14, &v35); /*0x64cea9*/
  LOBYTE(a9) = 1; /*0x64ceab*/
LABEL_38:
  v33 = a1[0xD]; /*0x64cf85*/
  if ( v33 ) /*0x64cf8a*/
    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v33 + 0x30))(v33, 0); /*0x64cf93*/
  result = (char)a9; /*0x64cf95*/
  if ( (_BYTE)a9 ) /*0x64cf9b*/
    *((_BYTE *)a1 + 0xD0) = 0; /*0x64cf9d*/
  return result; /*0x64cda1*/
}
