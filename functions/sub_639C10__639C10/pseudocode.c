void __thiscall sub_639C10(float *this, TESObjectREFR *a2)
{
  TargetData **v3; // eax
  int v4; // ecx
  TargetData **v6; // edi
  double v7; // st7
  float *v8; // eax
  double DistanceToPoint; // st7
  float *v10; // eax
  double v11; // st7
  unsigned int v12; // ebx
  unsigned int v13; // eax
  char v14; // bl
  TargetData *v15; // edi
  float *v16; // edi
  double v17; // st7
  double v18; // st6
  double v19; // st7
  TESObjectREFR *v20; // [esp+0h] [ebp-2Ch]
  float v21; // [esp+4h] [ebp-28h]
  float Distance; // [esp+18h] [ebp-14h]
  float v23; // [esp+18h] [ebp-14h]
  float v24; // [esp+18h] [ebp-14h]
  float v25; // [esp+18h] [ebp-14h]
  int v26; // [esp+1Ch] [ebp-10h] BYREF
  float v27[3]; // [esp+20h] [ebp-Ch] BYREF
  float v28; // [esp+30h] [ebp+4h]

  v3 = (TargetData **)(*(int (__thiscall **)(float *))(*(_DWORD *)this + 0x184))(this); /*0x639c20*/
  v4 = *((_DWORD *)this + 0xB); /*0x639c22*/
  v6 = v3; /*0x639c2b*/
  if ( !v4 || (*(_DWORD *)(v4 + 8) & 0x800) != 0 ) /*0x639c3a*/
  {
    if ( *(this + 0x7A) > 0.0 ) /*0x639cae*/
    {
      v7 = *(this + 0x7A) - *(float *)&MEMORY[0xB33E90][0xC]; /*0x639cd1*/
    }
    else
    {
      (*(void (__thiscall **)(float *, TESObjectREFR *))(*(_DWORD *)this + 0x558))(this, a2); /*0x639cbb*/
      if ( *((_DWORD *)this + 0xB) ) /*0x639cbd*/
        goto LABEL_15; /*0x639cc1*/
      v7 = flt_A31C80; /*0x639cc3*/
    }
    *(this + 0x7A) = v7; /*0x639cd7*/
  }
  else
  {
    if ( (*(_DWORD *)(v4 + 8) & 0x20) != 0 ) /*0x639c43*/
    {
      sub_566870(v3, (TESForm *)v4, 1); /*0x639c48*/
      (*(void (__thiscall **)(float *, TESObjectREFR *, int))(*(_DWORD *)this + 0x188))(this, a2, 2); /*0x639c5c*/
      return; /*0x639c64*/
    }
    if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v4 + 0x198))(v4, 1) && !*((_DWORD *)this + 0x11) ) /*0x639c75*/
    {
      sub_566870(v6, *((TESForm **)this + 0xB), 1); /*0x639c83*/
      ((void (__thiscall *)(TESObjectREFR *, _DWORD))a2->vtbl[1].Set3D)(a2, *((_DWORD *)this + 0xB)); /*0x639c9f*/
      return; /*0x639c9f*/
    }
  }
  if ( !*((_DWORD *)this + 0xB) ) /*0x639cdd*/
  {
    (*(void (__thiscall **)(float *, TESObjectREFR *, int))(*(_DWORD *)this + 0x188))(this, a2, 2); /*0x639cf0*/
    return; /*0x639cf8*/
  }
LABEL_15:
  v8 = sub_566B30((TESPackage *)v6, v27, (Actor *)a2); /*0x639cfb*/
  DistanceToPoint = TESObjectREFR::GetDistanceToPoint(a2, v8); /*0x639d0b*/
  if ( (double)Double_To_SInt32(DistanceToPoint) <= fConst_200 ) /*0x639d28*/
  {
    v20 = *((TESObjectREFR **)this + 0xB); /*0x639d37*/
    *(float *)&v26 = 0.0; /*0x639d3f*/
    Distance = TesObjectREF_GetDistance(a2, v20, 0); /*0x639d4c*/
    v10 = sub_566B30((TESPackage *)v6, v27, (Actor *)a2); /*0x639d58*/
    v11 = TESObjectREFR::GetDistanceToPoint(*((TESObjectREFR **)this + 0xB), v10); /*0x639d61*/
    v12 = Double_To_SInt32(v11); /*0x639d6d*/
    sub_566DB0(v6); /*0x639d6f*/
    if ( v12 > v13 || (v14 = 1, Distance == dbl_A3A5B0) ) /*0x639d89*/
      v14 = 0; /*0x639d8b*/
    v15 = v6[9]; /*0x639d8f*/
    if ( v15 ) /*0x639d94*/
      v16 = (float *)sub_5697E0(v15); /*0x639d9d*/
    else
      v16 = (float *)v26; /*0x639da1*/
    if ( v14 ) /*0x639da8*/
    {
      if ( *((PlayerCharacter **)this + 0xB) != reference || !reference->isMovingToNewSpace ) /*0x639eaa*/
      {
        if ( !*((_BYTE *)this + 0xD0) ) /*0x639eb3*/
          (*(void (__thiscall **)(float *, TESObjectREFR *))(*(_DWORD *)this + 0x194))(this, a2); /*0x639ec7*/
        (*(void (__thiscall **)(float *, TESObjectREFR *, int))(*(_DWORD *)this + 0x188))(this, a2, 1); /*0x639ed6*/
      }
    }
    else if ( v16 ) /*0x639db0*/
    {
      if ( (*(int (__thiscall **)(float *))(*(_DWORD *)v16 + 0x170))(v16) == MEMORY[0xB35EB0] ) /*0x639dc8*/
      {
        v28 = v16[0xA]; /*0x639dd1*/
        v17 = v28; /*0x639ddf*/
        v18 = dbl_A3D5B0; /*0x639de4*/
        if ( v28 >= 0.0 ) /*0x639dea*/
        {
          if ( v18 <= v17 ) /*0x639e10*/
          {
            unknown_libname_14(v18, v17); /*0x639e12*/
            v17 = v28; /*0x639e23*/
          }
        }
        else
        {
          unknown_libname_14(v18, v17); /*0x639dec*/
          v28 = v28 + dbl_A3D5B0; /*0x639dff*/
          v17 = v28; /*0x639e03*/
        }
        *(float *)&v26 = 0.0; /*0x639e32*/
        v21 = v17; /*0x639e37*/
        sub_683D80((int)a2, v21, (float *)&v26); /*0x639e3b*/
        v23 = v17; /*0x639e40*/
        v24 = fabs(v23); /*0x639e4d*/
        v19 = v24; /*0x639e51*/
        v25 = (double)(int)MEMORY[0xB36C18].value * dbl_A31C78; /*0x639e61*/
        if ( v25 >= v19 ) /*0x639e70*/
          sub_5E05F0((Actor *)a2, 0x30); /*0x639e92*/
        else
          sub_685530((Actor *)a2, v28, 1); /*0x639e7d*/
      }
    }
  }
  else
  {
    (*(void (__thiscall **)(float *, TESObjectREFR *, unsigned int))(*(_DWORD *)this + 0x188))(this, a2, 0xFFFFFFFF); /*0x639d2c*/
  }
}
