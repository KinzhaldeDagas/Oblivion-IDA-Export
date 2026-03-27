void __thiscall sub_62C610(_BYTE *this, Concurrency::details::SchedulerBase *a2)
{
  char v4; // al
  _DWORD *v5; // edi
  int v6; // ecx
  int v7; // ebx
  int v8; // ebx
  int v9; // ebx
  int v10; // eax
  float *v11; // eax
  float *v12; // eax
  float *v13; // eax
  float v14; // edx
  float v15; // ecx
  int v16; // eax
  int v17; // edx
  int (__thiscall *v18)(_DWORD *); // eax
  float *v19; // eax
  float *v20; // eax
  int v21; // edx
  int v22; // ecx
  int v23; // eax
  int v24; // edx
  int v25; // eax
  int v26; // ecx
  float *v27; // eax
  float *v28; // [esp+2Ch] [ebp-54h]
  float *v29; // [esp+2Ch] [ebp-54h]
  float *v30; // [esp+30h] [ebp-50h]
  float *v31; // [esp+30h] [ebp-50h]
  int v32; // [esp+40h] [ebp-40h]
  int v33; // [esp+44h] [ebp-3Ch]
  float v34; // [esp+44h] [ebp-3Ch]
  int v35; // [esp+48h] [ebp-38h]
  float v36; // [esp+48h] [ebp-38h]
  float v37; // [esp+48h] [ebp-38h]
  float v38; // [esp+48h] [ebp-38h]
  int v39; // [esp+4Ch] [ebp-34h] BYREF
  float v40[3]; // [esp+50h] [ebp-30h] BYREF
  _DWORD v41[3]; // [esp+5Ch] [ebp-24h] BYREF
  float v42; // [esp+68h] [ebp-18h] BYREF
  _DWORD v43[3]; // [esp+6Ch] [ebp-14h] BYREF
  float v44[2]; // [esp+78h] [ebp-8h] BYREF
  float v45; // [esp+84h] [ebp+4h]
  float v46; // [esp+84h] [ebp+4h]

  v35 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 0x184))(this);
  if ( (*(_BYTE *)(v35 + 0x1E) & 1) == 0 )
  {
    if ( !*((_DWORD *)this + 0xB)
      || !(*(unsigned __int8 (__thiscall **)(_DWORD))(**((_DWORD **)this + 0xB) + 0x190))(*((_DWORD *)this + 0xB)) )
    {
      (*(void (__thiscall **)(_BYTE *, Concurrency::details::SchedulerBase *))(*(_DWORD *)this + 0x558))(this, a2);
      if ( !*((_DWORD *)this + 0xB) )
        goto LABEL_37;
      if ( !(*(unsigned __int8 (__thiscall **)(_DWORD))(**((_DWORD **)this + 0xB) + 0x190))(*((_DWORD *)this + 0xB)) )
      {
        sub_4D88C0(
          (TESObjectREFR *)a2,
          *(bool (__thiscall **)(BSExtraData *, BSExtraData *))(*((_DWORD *)this + 0xB) + 0xC));
        if ( !v4 )
          goto LABEL_37;
      }
    }
    v5 = *((_DWORD **)this + 0xB);
    if ( !v5 )
      return;
    v6 = v5[0x16];
    if ( !v6 )
      return;
    v7 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 0x184))(v6);
    if ( !v7 )
      return;
    (*(void (__thiscall **)(_DWORD, _DWORD *, _DWORD *, int))(*(_DWORD *)v5[0x16] + 0x70))(v5[0x16], v41, v5, 1);
    v33 = (*(int (__thiscall **)(_DWORD, _DWORD *))(*(_DWORD *)v5[0x16] + 0x74))(v5[0x16], v5);
    v32 = (*(int (__thiscall **)(_DWORD, _DWORD *))(*(_DWORD *)v5[0x16] + 0x78))(v5[0x16], v5);
    if ( (*(_BYTE *)(v7 + 0x1E) & 1) != 0
      || (v8 = *(_DWORD *)(v7 + 0x18),
          *(_DWORD *)(*(_DWORD *)(4 * v8 + 0xB152B0)
                    + 4 * (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v5[0x16] + 0x180))(v5[0x16])) == 0x2C) )
    {
      v26 = *((_DWORD *)a2 + 0x16);
      if ( !v26 || !(*(int (__thiscall **)(int))(*(_DWORD *)v26 + 0x36C))(v26) )
      {
        v29 = (float *)(*(int (__thiscall **)(Concurrency::details::SchedulerBase *))(*(_DWORD *)a2 + 0x174))(a2);
        v27 = (float *)(*(int (__thiscall **)(_DWORD *))(*v5 + 0x174))(v5);
        sub_4121A0(v27, &v42, v29);
        v34 = sub_683CB0(&v42);
        *(float *)&v39 = 0.0;
        sub_683D80((int)a2, v34, (int)&v39);
        v46 = (double)iActorTurnDegree * dbl_A31C78;
        if ( sub_5E0590(a2) )
          v46 = (double)iActorKeepTurnDegree * dbl_A31C78;
        v38 = fabs(v34);
        if ( v46 >= (double)v38 )
          sub_5E05F0((Actor *)a2, 0x30);
        else
          sub_685530((Actor *)a2, v34, 1);
      }
      return;
    }
    v9 = 0;
    if ( (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v5[0x16] + 0x40C))(v5[0x16]) )
    {
      v10 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v5[0x16] + 0x40C))(v5[0x16]);
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)v10 + 4))(v10) == 2 )
        v9 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v5[0x16] + 0x40C))(v5[0x16]);
    }
    v45 = (float)(int)sub_452A60(*(Atmosphere **)(v35 + 0x28));
    if ( v45 <= 0.0 )
      v45 = flt_A57EF8;
    if ( v9 )
    {
      sub_68B3F0(v9);
      v28 = v11;
      v12 = (float *)(*(int (__thiscall **)(Concurrency::details::SchedulerBase *, float *))(*(_DWORD *)a2 + 0x174))(
                       a2,
                       &v42);
    }
    else
    {
      v30 = (float *)(*(int (__thiscall **)(_DWORD *))(*v5 + 0x174))(v5);
      v28 = (float *)v43;
      v12 = (float *)(*(int (__thiscall **)(Concurrency::details::SchedulerBase *))(*(_DWORD *)a2 + 0x174))(a2);
    }
    v13 = sub_4121A0(v12, v28, v30);
    v14 = v13[1];
    v15 = *v13;
    v16 = *((_DWORD *)v13 + 2);
    v40[2] = v14;
    v17 = *v5;
    v41[0] = v16;
    v18 = *(int (__thiscall **)(_DWORD *))(v17 + 0x174);
    v40[1] = v15;
    v31 = (float *)v18(v5);
    v19 = (float *)(*(int (__thiscall **)(Concurrency::details::SchedulerBase *))(*(_DWORD *)a2 + 0x174))(a2);
    v20 = sub_4121A0(v19, v44, v31);
    v21 = *((_DWORD *)v20 + 1);
    v22 = *(_DWORD *)v20;
    v23 = *((_DWORD *)v20 + 2);
    v43[1] = v21;
    v24 = *v5;
    v43[0] = v22;
    v43[2] = v23;
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, _DWORD))(v24 + 0x198))(v5, 0) || (v5[2] & 0x800) != 0 )
    {
LABEL_37:
      (*(void (__thiscall **)(_BYTE *, Concurrency::details::SchedulerBase *, int))(*(_DWORD *)this + 0x188))(
        this,
        a2,
        1);
      if ( !*(this + 0xD0) )
        (*(void (__thiscall **)(_BYTE *, Concurrency::details::SchedulerBase *))(*(_DWORD *)this + 0x194))(this, a2);
      return;
    }
    if ( sub_5E05B0(v5) && (v36 = sub_404C90(&v42), v36 > sub_404C90(v40)) && v45 < (double)v36 )
    {
      if ( !*(this + 0xD0) )
      {
        (*(void (__thiscall **)(_BYTE *, Concurrency::details::SchedulerBase *))(*(_DWORD *)this + 0x194))(this, a2);
        (*(void (__thiscall **)(_BYTE *, Concurrency::details::SchedulerBase *, unsigned int))(*(_DWORD *)this + 0x188))(
          this,
          a2,
          0xFFFFFFFF);
        return;
      }
    }
    else if ( !*(this + 0xD0) )
    {
      *(float *)&v39 = TesObjectREF_GetDistance((TESObjectREFR *)a2, (TESObjectREFR *)*((_DWORD *)this + 0xB), 0);
      v37 = v45 + v45;
      v25 = sub_629F40(this, a2, *(float *)&v39, v45, v37, 0, 0);
      (*(void (__thiscall **)(_BYTE *, Concurrency::details::SchedulerBase *, int))(*(_DWORD *)this + 0x238))(
        this,
        a2,
        v25);
      (*(void (__thiscall **)(_BYTE *, Concurrency::details::SchedulerBase *, _DWORD *, int, int, float))(*(_DWORD *)this + 0x414))(
        this,
        a2,
        v41,
        v33,
        v32,
        COERCE_FLOAT(LODWORD(v45)));
      return;
    }
    (*(void (__thiscall **)(_BYTE *, Concurrency::details::SchedulerBase *, _DWORD, _DWORD, _DWORD, int, int))(*(_DWORD *)this + 0x3DC))(
      this,
      a2,
      v41[0],
      v41[1],
      v41[2],
      v33,
      v32);
  }
}
