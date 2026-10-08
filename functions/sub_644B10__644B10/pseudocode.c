void __userpurge sub_644B10(
        void *this@<ecx>,
        double a2@<st2>,
        double a3@<st0>,
        TESChildCELL *a4,
        int a5,
        int a6,
        int a7)
{
  int v9; // eax
  TESPackage *v11; // ecx
  char v12; // al
  int v13; // ecx
  TESForm *v14; // ebx
  double v15; // st7
  TESObjectREFR *v16; // eax
  TESObjectREFR *v17; // ebx
  int v18; // ebp
  UInt32 DwordAtOffset40; // eax
  int v20; // eax
  TESWorldSpace *WorldSpace; // [esp+0h] [ebp-28h]
  float v22; // [esp+8h] [ebp-20h]
  float v23; // [esp+1Ch] [ebp-Ch]
  float v24; // [esp+20h] [ebp-8h]
  float v25; // [esp+2Ch] [ebp+4h]
  float v26; // [esp+2Ch] [ebp+4h]
  float v27; // [esp+2Ch] [ebp+4h]

  v9 = *((_DWORD *)this + 2); /*0x644b17*/
  if ( !v9 || (*(_BYTE *)(v9 + 0x1E) & 1) == 0 ) /*0x644b2b*/
    goto LABEL_6; /*0x644b2b*/
  if ( !sub_663A60((int)a4) && sub_663A00() < (int)stru_B36A80.value ) /*0x644b52*/
  {
    sub_5668E0(*((_DWORD **)this + 2), 0); /*0x644b5d*/
LABEL_6:
    if ( (!*((_DWORD *)this + 0xB) /*0x644bb3*/
       && ((*(void (__thiscall **)(void *, TESChildCELL *))(*(_DWORD *)this + 0x558))(this, a4), !*((_DWORD *)this + 0xB))
       || (v11 = *((TESPackage **)this + 2), v11->members.location)
       && (a3 = sub_566DC0(v11, a3, kTerrainLODQuadRayDirectionZ, a2, (Actor *)a4, 0, kTerrainLODQuadRayDirectionZ), v12)
       && *(_BYTE *)(*((_DWORD *)this + 2) + 0x20) == 1)
      && ((*(void (__thiscall **)(void *, TESChildCELL *, int))(*(_DWORD *)this + 0x188))(this, a4, 1),
          TESPackage_IsRuntimePackage(*((TESPackage **)this + 2))) )
    {
      v13 = *((_DWORD *)this + 2); /*0x644bbc*/
      *((_DWORD *)this + 2) = 0; /*0x644bc1*/
      if ( v13 ) /*0x644bc8*/
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v13 + 0x10))(v13, 1); /*0x644bd0*/
      (*(void (__usercall **)(void *@<ecx>, TESChildCELL *, _DWORD, double@<st0>))(*(_DWORD *)this + 0x18))( /*0x644bdc*/
        this,
        a4,
        0,
        a3);
    }
    else
    {
      v14 = TESForm_LookupByFormID(0x3Au); /*0x644bf6*/
      TimeGlobals_GetGameHour(&MEMORY[0xB332E0]); /*0x644bf8*/
      v25 = a3; /*0x644bfd*/
      if ( sub_6599B0(a4) > v25 ) /*0x644c19*/
        v25 = v25 + dbl_A2F920; /*0x644c25*/
      v24 = v25 - sub_6599B0(a4); /*0x644c42*/
      v23 = *(float *)&v14[1].member.refID; /*0x644c49*/
      v15 = sub_5677B0((TESPackage *)*((_DWORD *)this + 2), v23, (TESObjectREFR *)a4, 2); /*0x644c4d*/
      v16 = *((TESObjectREFR **)this + 0xB); /*0x644c52*/
      v26 = v15; /*0x644c55*/
      if ( v16 ) /*0x644c5b*/
      {
        if ( v26 < TesObjectREF_GetDistance((TESObjectREFR *)a4, v16, 0) ) /*0x644c74*/
        {
          v22 = v26; /*0x644c7a*/
          v17 = *((TESObjectREFR **)this + 0xB); /*0x644c7e*/
          v18 = *(_DWORD *)this; /*0x644c85*/
          v27 = dbl_A2F938 / v23 * v24; /*0x644c93*/
          WorldSpace = TESObjectREFR_GetWorldSpace(v17); /*0x644ca6*/
          DwordAtOffset40 = Shared_GetDwordAtOffset40(*((void **)this + 0xB)); /*0x644ca7*/
          v20 = ((int (__thiscall *)(TESObjectREFR *, UInt32, TESWorldSpace *, _DWORD, _DWORD))v17->vtbl->GetPos)( /*0x644cb7*/
                  v17,
                  DwordAtOffset40,
                  WorldSpace,
                  LODWORD(v27),
                  LODWORD(v22));
          (*(void (__thiscall **)(void *, TESChildCELL *, int))(v18 + 0x418))(this, a4, v20); /*0x644cc3*/
        }
      }
    }
  }
}
