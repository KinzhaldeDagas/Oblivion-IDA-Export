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
  float PointerAtOffset08; // [esp+84h] [ebp+4h]
  float v46; // [esp+84h] [ebp+4h]

  v35 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)this + 0x184))(this); /*0x62c627*/
  if ( (*(_BYTE *)(v35 + 0x1E) & 1) == 0 ) /*0x62c62b*/
  {
    if ( !*((_DWORD *)this + 0xB) /*0x62c646*/
      || !(*(unsigned __int8 (__thiscall **)(_DWORD))(**((_DWORD **)this + 0xB) + 0x190))(*((_DWORD *)this + 0xB)) )
    {
      (*(void (__thiscall **)(_BYTE *, Concurrency::details::SchedulerBase *))(*(_DWORD *)this + 0x558))(this, a2); /*0x62c657*/
      if ( !*((_DWORD *)this + 0xB) ) /*0x62c659*/
        goto LABEL_37; /*0x62c659*/
      if ( !(*(unsigned __int8 (__thiscall **)(_DWORD))(**((_DWORD **)this + 0xB) + 0x190))(*((_DWORD *)this + 0xB)) ) /*0x62c66e*/
      {
        sub_4D88C0( /*0x62c67d*/
          (TESObjectREFR *)a2,
          *(bool (__thiscall **)(BSExtraData *, BSExtraData *))(*((_DWORD *)this + 0xB) + 0xC));
        if ( !v4 ) /*0x62c684*/
          goto LABEL_37; /*0x62c684*/
      }
    }
    v5 = *((_DWORD **)this + 0xB); /*0x62c68a*/
    if ( !v5 ) /*0x62c68f*/
      return; /*0x62c68f*/
    v6 = v5[0x16]; /*0x62c695*/
    if ( !v6 ) /*0x62c69a*/
      return; /*0x62c69a*/
    v7 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 0x184))(v6); /*0x62c6aa*/
    if ( !v7 ) /*0x62c6ae*/
      return; /*0x62c6ae*/
    (*(void (__thiscall **)(_DWORD, _DWORD *, _DWORD *, int))(*(_DWORD *)v5[0x16] + 0x70))(v5[0x16], v41, v5, 1); /*0x62c6c4*/
    v33 = (*(int (__thiscall **)(_DWORD, _DWORD *))(*(_DWORD *)v5[0x16] + 0x74))(v5[0x16], v5); /*0x62c6d4*/
    v32 = (*(int (__thiscall **)(_DWORD, _DWORD *))(*(_DWORD *)v5[0x16] + 0x78))(v5[0x16], v5); /*0x62c6e4*/
    if ( (*(_BYTE *)(v7 + 0x1E) & 1) != 0 /*0x62c709*/
      || (v8 = *(_DWORD *)(v7 + 0x18),
          *(_DWORD *)(*(_DWORD *)(4 * v8 + 0xB152B0)
                    + 4 * (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v5[0x16] + 0x180))(v5[0x16])) == 0x2C) )
    {
      v26 = *((_DWORD *)a2 + 0x16); /*0x62c964*/
      if ( !v26 || !(*(int (__thiscall **)(int))(*(_DWORD *)v26 + 0x36C))(v26) ) /*0x62c973*/
      {
        v29 = (float *)(*(int (__thiscall **)(Concurrency::details::SchedulerBase *))(*(_DWORD *)a2 + 0x174))(a2); /*0x62c98c*/
        v27 = (float *)(*(int (__thiscall **)(_DWORD *))(*v5 + 0x174))(v5); /*0x62c99a*/
        sub_4121A0(v27, &v42, v29); /*0x62c99e*/
        v34 = Vector3_CalculateHeadingRadiansXY(&v42); /*0x62c9ad*/
        *(float *)&v39 = 0.0; /*0x62c9ba*/
        sub_683D80((int)a2, v34, (float *)&v39); /*0x62c9c8*/
        v46 = (double)(int)MEMORY[0xB36C10].value * dbl_A31C78; /*0x62c9e2*/
        if ( sub_5E0590(a2) ) /*0x62c9e6*/
          v46 = (double)(int)MEMORY[0xB36C18].value * dbl_A31C78; /*0x62c9fb*/
        v38 = fabs(v34); /*0x62ca05*/
        if ( v46 >= (double)v38 ) /*0x62ca18*/
          sub_5E05F0((Actor *)a2, 0x30); /*0x62ca3b*/
        else
          sub_685530((Actor *)a2, v34, 1); /*0x62ca25*/
      }
      return; /*0x62ca34*/
    }
    v9 = 0; /*0x62c71a*/
    if ( (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v5[0x16] + 0x40C))(v5[0x16]) ) /*0x62c71c*/
    {
      v10 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v5[0x16] + 0x40C))(v5[0x16]); /*0x62c72d*/
      if ( (*(int (__thiscall **)(int))(*(_DWORD *)v10 + 4))(v10) == 2 ) /*0x62c73b*/
        v9 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v5[0x16] + 0x40C))(v5[0x16]); /*0x62c74a*/
    }
    PointerAtOffset08 = (float)(int)Shared_GetPointerAtOffset08(*(Atmosphere **)(v35 + 0x28)); /*0x62c760*/
    if ( PointerAtOffset08 <= 0.0 ) /*0x62c76f*/
      PointerAtOffset08 = flt_A57EF8; /*0x62c777*/
    if ( v9 ) /*0x62c77d*/
    {
      sub_68B3F0(v9); /*0x62c781*/
      v28 = v11; /*0x62c786*/
      v12 = (float *)(*(int (__thiscall **)(Concurrency::details::SchedulerBase *, float *))(*(_DWORD *)a2 + 0x174))( /*0x62c797*/
                       a2,
                       &v42);
    }
    else
    {
      v30 = (float *)(*(int (__thiscall **)(_DWORD *))(*v5 + 0x174))(v5); /*0x62c7aa*/
      v28 = (float *)v43; /*0x62c7b5*/
      v12 = (float *)(*(int (__thiscall **)(Concurrency::details::SchedulerBase *))(*(_DWORD *)a2 + 0x174))(a2); /*0x62c7b8*/
    }
    v13 = sub_4121A0(v12, v28, v30); /*0x62c7bc*/
    v14 = v13[1]; /*0x62c7c1*/
    v15 = *v13; /*0x62c7c4*/
    v16 = *((_DWORD *)v13 + 2); /*0x62c7c6*/
    v40[2] = v14; /*0x62c7c9*/
    v17 = *v5; /*0x62c7cd*/
    v41[0] = v16; /*0x62c7cf*/
    v18 = *(int (__thiscall **)(_DWORD *))(v17 + 0x174); /*0x62c7d3*/
    v40[1] = v15; /*0x62c7d9*/
    v31 = (float *)v18(v5); /*0x62c7e4*/
    v19 = (float *)(*(int (__thiscall **)(Concurrency::details::SchedulerBase *))(*(_DWORD *)a2 + 0x174))(a2); /*0x62c7f2*/
    v20 = sub_4121A0(v19, v44, v31); /*0x62c7f6*/
    v21 = *((_DWORD *)v20 + 1); /*0x62c7fb*/
    v22 = *(_DWORD *)v20; /*0x62c7fe*/
    v23 = *((_DWORD *)v20 + 2); /*0x62c800*/
    v43[1] = v21; /*0x62c803*/
    v24 = *v5; /*0x62c807*/
    v43[0] = v22; /*0x62c809*/
    v43[2] = v23; /*0x62c80d*/
    if ( (*(unsigned __int8 (__thiscall **)(_DWORD *, _DWORD))(v24 + 0x198))(v5, 0) || (v5[2] & 0x800) != 0 ) /*0x62c82e*/
    {
LABEL_37:
      (*(void (__thiscall **)(_BYTE *, Concurrency::details::SchedulerBase *, int))(*(_DWORD *)this + 0x188))( /*0x62ca57*/
        this,
        a2,
        1);
      if ( !*(this + 0xD0) ) /*0x62ca59*/
        (*(void (__thiscall **)(_BYTE *, Concurrency::details::SchedulerBase *))(*(_DWORD *)this + 0x194))(this, a2); /*0x62ca6d*/
      return; /*0x62ca6d*/
    }
    if ( sub_5E05B0(v5) && (v36 = NiPoint3_Length(&v42), v36 > NiPoint3_Length(v40)) && PointerAtOffset08 < (double)v36 ) /*0x62c86f*/
    {
      if ( !*(this + 0xD0) ) /*0x62c871*/
      {
        (*(void (__thiscall **)(_BYTE *, Concurrency::details::SchedulerBase *))(*(_DWORD *)this + 0x194))(this, a2); /*0x62c889*/
        (*(void (__thiscall **)(_BYTE *, Concurrency::details::SchedulerBase *, unsigned int))(*(_DWORD *)this + 0x188))( /*0x62c898*/
          this,
          a2,
          0xFFFFFFFF);
        return; /*0x62c8a1*/
      }
    }
    else if ( !*(this + 0xD0) ) /*0x62c8a6*/
    {
      *(float *)&v39 = TesObjectREF_GetDistance((TESObjectREFR *)a2, (TESObjectREFR *)*((_DWORD *)this + 0xB), 0); /*0x62c8bc*/
      v37 = PointerAtOffset08 + PointerAtOffset08; /*0x62c8d1*/
      v25 = sub_629F40(this, (Actor *)a2, *(float *)&v39, PointerAtOffset08, v37, 0, 0); /*0x62c8e9*/
      (*(void (__thiscall **)(_BYTE *, Concurrency::details::SchedulerBase *, int))(*(_DWORD *)this + 0x238))( /*0x62c8fa*/
        this,
        a2,
        v25);
      (*(void (__thiscall **)(_BYTE *, Concurrency::details::SchedulerBase *, _DWORD *, int, int, float))(*(_DWORD *)this + 0x414))( /*0x62c91e*/
        this,
        a2,
        v41,
        v33,
        v32,
        COERCE_FLOAT(LODWORD(PointerAtOffset08)));
      return; /*0x62c927*/
    }
    (*(void (__thiscall **)(_BYTE *, Concurrency::details::SchedulerBase *, _DWORD, _DWORD, _DWORD, int, int))(*(_DWORD *)this + 0x3DC))( /*0x62c958*/
      this,
      a2,
      v41[0],
      v41[1],
      v41[2],
      v33,
      v32);
  }
}
