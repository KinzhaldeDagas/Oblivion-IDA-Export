void __thiscall sub_8453F0(void *this, int a2, int a3, int a4, _DWORD *a5)
{
  int v5; // ebx
  int v6; // ebp
  int v7; // eax
  int v8; // esi
  int v9; // ebp
  int v10; // esi
  int v11; // ecx
  float *v12; // ebp
  double v13; // st6
  unsigned int v14; // eax
  double v15; // st5
  int v16; // [esp+18h] [ebp-D8h]
  int v17; // [esp+18h] [ebp-D8h]
  float v18; // [esp+20h] [ebp-D0h]
  float v19; // [esp+28h] [ebp-C8h]
  int v20; // [esp+34h] [ebp-BCh]
  int v21; // [esp+40h] [ebp-B0h]
  int v22; // [esp+50h] [ebp-A0h]
  int v23; // [esp+64h] [ebp-8Ch]
  float v24[13]; // [esp+70h] [ebp-80h] BYREF
  float v25[16]; // [esp+A4h] [ebp-4Ch] BYREF

  v5 = unk_B45BC8; /*0x84542c*/
  (*(void (__thiscall **)(void *, int, _DWORD, _DWORD))(*(_DWORD *)this + 0xBC))(this, a2, 0, 0); /*0x845443*/
  v6 = **(_DWORD **)(v5 + 0x24); /*0x845451*/
  v7 = (*(int (__thiscall **)(_DWORD *, _DWORD))(*a5 + 0x88))(a5, 0); /*0x84545b*/
  v8 = *(_DWORD *)(v6 + 4); /*0x84545d*/
  v16 = v7; /*0x845462*/
  if ( v8 != v7 ) /*0x845466*/
  {
    if ( v8 ) /*0x84546a*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v8 + 4)) ) /*0x845470*/
        (**(void (__thiscall ***)(int, int))v8)(v8, 1); /*0x845486*/
      v7 = v16; /*0x845488*/
    }
    *(_DWORD *)(v6 + 4) = v7; /*0x84548e*/
    if ( v7 ) /*0x845491*/
      InterlockedIncrement((volatile LONG *)(v7 + 4)); /*0x845497*/
  }
  sub_848FA0((_DWORD **)v6, (int)a5); /*0x8454a8*/
  v9 = *(_DWORD *)(*(_DWORD *)(v5 + 0x24) + 4); /*0x8454b0*/
  v10 = *(_DWORD *)(v9 + 4); /*0x8454b8*/
  v11 = unk_B43128; /*0x8454bd*/
  v17 = unk_B43128; /*0x8454bf*/
  if ( v10 != unk_B43128 ) /*0x8454c3*/
  {
    if ( v10 ) /*0x8454c7*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v10 + 4)) ) /*0x8454cd*/
        (**(void (__thiscall ***)(int, int))v10)(v10, 1); /*0x8454e3*/
      v11 = v17; /*0x8454e5*/
    }
    *(_DWORD *)(v9 + 4) = v11; /*0x8454eb*/
    if ( v11 ) /*0x8454ee*/
      InterlockedIncrement((volatile LONG *)(v11 + 4)); /*0x8454f4*/
  }
  v12 = (float *)sub_7EE1F0(a5); /*0x84550e*/
  if ( !v12 ) /*0x845512*/
  {
    v12 = (float *)sub_7EE1D0(a5); /*0x845520*/
    if ( !v12 ) /*0x845524*/
      JUMPOUT(0x8457EA); /*0x8457ea*/
  }
  v13 = kHeadBodyNormalMatchRadius; /*0x845534*/
  if ( *(int *)&OB_DisplayDebugFlags_010201A0[4] > 0 ) /*0x845546*/
  {
    qmemcpy(v24, v12 + 2, sizeof(v24)); /*0x845558*/
    v25[0] = v24[0]; /*0x84555e*/
    v25[1] = v24[1]; /*0x845569*/
    v25[2] = v24[2]; /*0x845574*/
    v25[3] = v24[9]; /*0x845582*/
    v25[4] = v24[3]; /*0x84558d*/
    v25[5] = v24[4]; /*0x845598*/
    v25[6] = v24[5]; /*0x8455af*/
    v14 = 5; /*0x8455c4*/
    v25[7] = v24[0xA]; /*0x8455c9*/
    v25[8] = v24[6]; /*0x8455d7*/
    v25[9] = v24[7]; /*0x8455e5*/
    v25[0xA] = v24[8]; /*0x8455f3*/
    v25[0xB] = v24[0xB]; /*0x845601*/
    v25[0xC] = 0.0; /*0x84560a*/
    v25[0xD] = 0.0; /*0x845611*/
    v25[0xE] = 0.0; /*0x845618*/
    v25[0xF] = v24[0xC]; /*0x845626*/
    qmemcpy(&unk_B46298, v25, 0x40u); /*0x84562d*/
    v18 = v12[0x10]; /*0x845632*/
    v19 = 1.0; /*0x845638*/
    while ( 1 ) /*0x84563e*/
    {
      v15 = v18; /*0x84563e*/
      if ( (v14 & 1) != 0 ) /*0x845642*/
        v19 = v15 * v19; /*0x84564a*/
      v14 >>= 1; /*0x84564e*/
      if ( !v14 ) /*0x845650*/
      {
        unk_B46218 = 1.0 - v19; /*0x84566c*/
        switch ( *((_BYTE *)v12 + 0x44) ) /*0x84567f*/
        {
          case 0: /*0x84567f*/
            flt_B46198 = 0.0; /*0x845698*/
            *(float *)&v20 = v13; /*0x84569e*/
            unk_B4619C = v20; /*0x8456ae*/
            flt_B461A0 = 0.0; /*0x8456b4*/
            unk_B461A4 = v20; /*0x8456ba*/
            break; /*0x8456c0*/
          case 1: /*0x84567f*/
            *(float *)&v22 = v13; /*0x8456c7*/
            LODWORD(flt_B46198) = v22; /*0x8456db*/
            unk_B4619C = v22; /*0x8456ef*/
            flt_B461A0 = 0.0; /*0x8456f5*/
            unk_B461A4 = v22; /*0x8456fb*/
            JUMPOUT(0x84579F); /*0x84579f*/
          case 2: /*0x84567f*/
            flt_B46198 = 0.0; /*0x845710*/
            *(float *)&v23 = v13; /*0x845716*/
            unk_B4619C = v23; /*0x84572e*/
            LODWORD(flt_B461A0) = v23; /*0x845734*/
            unk_B461A4 = v23; /*0x84573a*/
            break; /*0x845740*/
          case 3: /*0x84567f*/
            *(float *)&v21 = v13; /*0x845744*/
            LODWORD(flt_B46198) = v21; /*0x845754*/
            unk_B4619C = v21; /*0x84576a*/
            LODWORD(flt_B461A0) = v21; /*0x845770*/
            unk_B461A4 = v21; /*0x845776*/
            break; /*0x84577c*/
          default:
            JUMPOUT(0x84577E); /*0x84577e*/
        }
        JUMPOUT(0x8457A1); /*0x8457a1*/
      }
      v18 = v15 * v15; /*0x845654*/
    }
  }
  JUMPOUT(0x8457E2); /*0x8457e2*/
}
