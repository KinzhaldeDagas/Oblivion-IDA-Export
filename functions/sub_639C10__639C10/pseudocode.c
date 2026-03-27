void __thiscall sub_639C10(float *this, Concurrency::details::SchedulerBase *a2)
{
  TargetData **v3; // eax
  int v4; // ecx
  TargetData **v6; // edi
  double v7; // st7
  float *v8; // eax
  double v9; // st7
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
  _BYTE v27[12]; // [esp+20h] [ebp-Ch] BYREF
  float v28; // [esp+30h] [ebp+4h]

  v3 = (TargetData **)(*(int (__thiscall **)(float *))(*(_DWORD *)this + 0x184))(this);
  v4 = *((_DWORD *)this + 0xB);
  v6 = v3;
  if ( !v4 || (*(_DWORD *)(v4 + 8) & 0x800) != 0 )
  {
    if ( *(this + 0x7A) > 0.0 )
    {
      v7 = *(this + 0x7A) - flt_B33E9C;
    }
    else
    {
      (*(void (__thiscall **)(float *, Concurrency::details::SchedulerBase *))(*(_DWORD *)this + 0x558))(this, a2);
      if ( *((_DWORD *)this + 0xB) )
        goto LABEL_15;
      v7 = flt_A31C80;
    }
    *(this + 0x7A) = v7;
  }
  else
  {
    if ( (*(_DWORD *)(v4 + 8) & 0x20) != 0 )
    {
      sub_566870(v3, (TESForm *)v4, 1);
      (*(void (__thiscall **)(float *, Concurrency::details::SchedulerBase *, int))(*(_DWORD *)this + 0x188))(
        this,
        a2,
        2);
      return;
    }
    if ( (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v4 + 0x198))(v4, 1) && !*((_DWORD *)this + 0x11) )
    {
      sub_566870(v6, *((TESForm **)this + 0xB), 1);
      (*(void (__thiscall **)(Concurrency::details::SchedulerBase *, _DWORD))(*(_DWORD *)a2 + 0x2F8))(
        a2,
        *((_DWORD *)this + 0xB));
      return;
    }
  }
  if ( !*((_DWORD *)this + 0xB) )
  {
    (*(void (__thiscall **)(float *, Concurrency::details::SchedulerBase *, int))(*(_DWORD *)this + 0x188))(this, a2, 2);
    return;
  }
LABEL_15:
  v8 = (float *)sub_566B30((TESPackage *)v6, (int)v27, (Actor *)a2);
  v9 = sub_4D7E30((float *)a2, v8);
  if ( (double)Double_To_SInt32(v9) <= fConst_200 )
  {
    v20 = *((TESObjectREFR **)this + 0xB);
    *(float *)&v26 = 0.0;
    Distance = TesObjectREF_GetDistance((TESObjectREFR *)a2, v20, 0);
    v10 = (float *)sub_566B30((TESPackage *)v6, (int)v27, (Actor *)a2);
    v11 = sub_4D7E30((float *)*((_DWORD *)this + 0xB), v10);
    v12 = Double_To_SInt32(v11);
    sub_566DB0(v6);
    if ( v12 > v13 || (v14 = 1, Distance == dbl_A3A5B0) )
      v14 = 0;
    v15 = v6[9];
    if ( v15 )
      v16 = (float *)sub_5697E0(v15);
    else
      v16 = (float *)v26;
    if ( v14 )
    {
      if ( *((PlayerCharacter **)this + 0xB) != TESDataHandler_g_PlayerRef
        || !TESDataHandler_g_PlayerRef->isMovingToNewSpace )
      {
        if ( !*((_BYTE *)this + 0xD0) )
          (*(void (__thiscall **)(float *, Concurrency::details::SchedulerBase *))(*(_DWORD *)this + 0x194))(this, a2);
        (*(void (__thiscall **)(float *, Concurrency::details::SchedulerBase *, int))(*(_DWORD *)this + 0x188))(
          this,
          a2,
          1);
      }
    }
    else if ( v16 )
    {
      if ( (*(int (__thiscall **)(float *))(*(_DWORD *)v16 + 0x170))(v16) == TESDataHandler_g_XMarkerHeading )
      {
        v28 = v16[0xA];
        v17 = v28;
        v18 = dbl_A3D5B0;
        if ( v28 >= 0.0 )
        {
          if ( v18 <= v17 )
          {
            unknown_libname_14(v18, v17);
            v17 = v28;
          }
        }
        else
        {
          unknown_libname_14(v18, v17);
          v28 = v28 + dbl_A3D5B0;
          v17 = v28;
        }
        *(float *)&v26 = 0.0;
        v21 = v17;
        sub_683D80((int)a2, v21, (int)&v26);
        v23 = v17;
        v24 = fabs(v23);
        v19 = v24;
        v25 = (double)iActorKeepTurnDegree * dbl_A31C78;
        if ( v25 >= v19 )
          sub_5E05F0((Actor *)a2, 0x30);
        else
          sub_685530((Actor *)a2, v28, 1);
      }
    }
  }
  else
  {
    (*(void (__thiscall **)(float *, Concurrency::details::SchedulerBase *, unsigned int))(*(_DWORD *)this + 0x188))(
      this,
      a2,
      0xFFFFFFFF);
  }
}
