int *__usercall PlayerCharacter_constr@<eax>(int *a1@<ecx>, double st5_0@<st2>, double a3@<st1>)
{
  int v4; // eax
  int *v5; // eax
  int v6; // ecx
  int i; // eax
  LONG (__stdcall *v8)(volatile LONG *); // ebp
  int v9; // edi
  int v10; // edi
  HighProcess *v11; // eax
  HighProcess *v12; // edi
  int ProcessLevel; // eax
  void (__thiscall ***v14)(_DWORD, int); // ecx
  int v15; // eax
  _DWORD *v16; // eax
  bhkCharacterProxy *CharProxy; // eax
  bhkCharacterProxy *v18; // edi
  _DWORD *v19; // ecx
  _DWORD *v20; // ecx
  int v21; // eax
  int v22; // eax
  FreeEntry *v23; // eax
  unsigned __int8 v24; // cl
  float *v25; // eax
  int v26; // edi
  int v27; // edi
  float v28; // ecx
  int v29; // edx
  int v30; // eax
  _DWORD *v31; // eax
  double v32; // st7
  int v33; // edi
  int v34; // eax
  int v35; // edx
  bool v36; // zf
  void (__stdcall *v37)(int); // eax
  void (__stdcall *v38)(int); // eax
  double v39; // st7
  int v40; // edi
  int a2; // [esp+20h] [ebp-30h]
  int v43; // [esp+28h] [ebp-28h]
  float v44; // [esp+3Ch] [ebp-14h]

  Character_constr((TESObjectREFR *)a1);
  *a1 = (int)&PlayerCharacter::`vftable'{for `PlayerCharacter'};
  a1[6] = (int)&PlayerCharacter::`vftable'{for `TESChildCell'};
  a1[0x17] = (int)&PlayerCharacter::`vftable'{for `MagicCaster'};
  a1[0x1A] = (int)&PlayerCharacter::`vftable'{for `MagicTarget'};
  a1[0x15D] = 0;
  a1[0x174] = 0;
  a1[0x176] = 0;
  a1[0x179] = 0;
  a1[0x17A] = 0;
  a1[0x17B] = 0;
  a1[0x17C] = 0;
  a1[0x17E] = 0;
  a1[0x17F] = 0;
  a1[0x1BB] = 0;
  a1[0x1BC] = 0;
  a1[0x1C1] = 0;
  a1[0x1C2] = 0;
  a1[0x1CF] = 0;
  a1[0x1D0] = 0;
  a1[0x1E0] = 0;
  a1[0x1E1] = 0;
  a1[0x1E3] = 0x25;
  a1[0x1E2] = (int)&NiTMapBase<DFALL<unsigned char>,unsigned int,unsigned char>::`vftable';
  a1[0x1E5] = 0;
  v4 = FormHeapAlloc(0x94u);
  a2 = 4 * a1[0x1E3];
  a1[0x1E4] = v4;
  _memset(v4, 0, a2);
  a1[0x1E2] = (int)&NiTMap<unsigned int,unsigned char>::`vftable';
  a1[0x1E6] = 0;
  a1[0x1E7] = 0;
  TESForm_SetIsLinked((TESForm *)a1, 0);
  *((float *)&qword_B3BB20 + 1) = flt_B36B70;
  v5 = a1 + 0xC9;
  v6 = 0x48;
  do
  {
    *((float *)v5++ + 0xFFFFFFB8) = 0.0;
    --v6;
    *((float *)v5 + 0xFFFFFFFF) = 0.0;
    *((float *)v5 + 0x4A) = 0.0;
  }
  while ( v6 );
  *((float *)a1 + 0x113) = 0.0;
  *((float *)a1 + 0x111) = 0.0;
  a1[0x164] = 0;
  *((float *)a1 + 0x112) = 0.0;
  a1[0x47] = 0;
  *((float *)a1 + 0x167) = 0.0;
  a1[0x48] = 0;
  *((float *)a1 + 0x168) = 0.0;
  a1[0x4A] = 0;
  *((float *)a1 + 0x169) = 0.0;
  *((_BYTE *)a1 + 0x10C) = 0;
  a1[0x185] = 0;
  a1[0x192] = 0;
  *((_BYTE *)a1 + 0x12C) = 0;
  *((_BYTE *)a1 + 0x5A9) = 1;
  *((_BYTE *)a1 + 0x6E5) = 0;
  a1[0x78] = 0;
  a1[0x193] = 0x48;
  a1[0x194] = 0;
  a1[0x16C] = FormHeapAlloc(0x54u);
  for ( i = 0; i < 0x54; i += 4 )
    *(float *)(i + a1[0x16C]) = 0.0;
  v8 = InterlockedDecrement;
  a1[0x1BD] = 0;
  a1[0x1BE] = 0;
  a1[0x195] = 0;
  *((_BYTE *)a1 + 0x114) = 0;
  v9 = a1[0x1E6];
  if ( v9 )
  {
    if ( !v8((volatile LONG *)(v9 + 4)) )
      (**(void (__thiscall ***)(int, int))v9)(v9, 1);
    a1[0x1E6] = 0;
  }
  v10 = a1[0x1E7];
  if ( v10 )
  {
    if ( !v8((volatile LONG *)(v10 + 4)) )
      (**(void (__thiscall ***)(int, int))v10)(v10, 1);
    a1[0x1E7] = 0;
  }
  *((_BYTE *)a1 + 0x115) = 1;
  v11 = (HighProcess *)FormHeapAlloc(0x2ECu);
  if ( v11 )
    v12 = HighProcess::HighProcess(v11);
  else
    v12 = 0;
  v12->Copy(v12, (BaseProcess *)a1[0x16]);
  ProcessLevel = Actor::GetProcessLevel((Actor *)a1);
  sub_674550((char)v8, st5_0, a3, 0.0, (int)a1, ProcessLevel);
  v14 = (void (__thiscall ***)(_DWORD, int))a1[0x16];
  if ( v14 )
    (**v14)(v14, 1);
  a1[0x16] = (int)v12;
  v15 = Actor::GetProcessLevel((Actor *)a1);
  sub_674550((char)v8, st5_0, a3, 0.0, (int)a1, v15);
  a1[0x7A] = 0;
  a1[0x7B] = 0;
  v16 = (_DWORD *)FormHeapAlloc(8u);
  if ( v16 )
  {
    *v16 = 0;
    v16[1] = 0;
  }
  else
  {
    v16 = 0;
  }
  a1[0x79] = (int)v16;
  sub_65B750(a1);
  CharProxy = MobileObject_GetCharProxy((MobileObject *)a1);
  v18 = CharProxy;
  if ( CharProxy )
  {
    *((_DWORD *)CharProxy + 0xEC) = 0x3E8;
    sub_65A310((Actor *)a1, 1);
    v19 = *((_DWORD **)v18 + 0xD9);
    if ( v19 )
      sub_89F4D0(v19, 9);
    v20 = *((_DWORD **)v18 + 0xDA);
    if ( v20 )
      sub_89F4D0(v20, 9);
    v21 = FormHeapAlloc(8u);
    if ( v21 )
      v22 = sub_532BC0(v21, flt_A58E1C, 9);
    else
      v22 = 0;
    a1[0x7C] = v22;
    v23 = j_MemoryHeap_Alloc(&FormHeap, (char)v8, 0x1000001C0uLL, v43);
    v24 = 0x10 - ((unsigned __int8)v23 & 0xF);
    v25 = (float *)((char *)v23 + v24);
    *((_BYTE *)v25 + 0xFFFFFFFF) = v24;
    a1[0x7D] = (int)sub_5358F0(v25, fConstant_2, 9);
  }
  else
  {
    a1[0x7C] = 0;
    a1[0x7D] = 0;
  }
  *((_BYTE *)a1 + 0x588) = 0;
  *((_BYTE *)a1 + 0x589) = 0;
  *((_BYTE *)a1 + 0x58A) = 0;
  *((_BYTE *)a1 + 0x58B) = 0;
  *((_BYTE *)a1 + 0x58C) = 0;
  v44 = g_DefaulFOV;
  *((float *)a1 + 0x166) = v44;
  SetCameraFOV_0(g_worldScenegraph, *((float *)a1 + 0x166), 0.0);
  UpdateParticleShaderFOVData(v44);
  a1[0x172] = 0;
  a1[0x173] = 0;
  v26 = a1[0x174];
  if ( v26 )
  {
    if ( !v8((volatile LONG *)(v26 + 4)) )
      (**(void (__thiscall ***)(int, int))v26)(v26, 1);
    a1[0x174] = 0;
  }
  *((float *)a1 + 0x175) = flt_A73980;
  v27 = a1[0x176];
  if ( v27 )
  {
    if ( !v8((volatile LONG *)(v27 + 4)) )
      (**(void (__thiscall ***)(int, int))v27)(v27, 1);
    a1[0x176] = 0;
  }
  a1[0x177] = 0;
  *((_BYTE *)a1 + 0x124) = 0;
  v28 = Vector3_InitValue_;
  flt_B3BACC = *((float *)&qword_B3BB20 + 1);
  v29 = *((_DWORD *)&Vector3_InitValue_ + 1);
  v30 = LODWORD(dword_B3F9B0);
  *(float *)&qword_B3BB38 = v28;
  HIDWORD(qword_B3BB38) = v29;
  dword_B3BB40 = v30;
  byte_B14E4D = 1;
  *((float *)a1 + 0x1C0) = 0.0;
  a1[0x1BF] = 0;
  sub_668030((PlayerCharacter *)a1);
  a1[0x16D] = 0;
  sub_65FBB0((unsigned int **)a1);
  *((_WORD *)a1 + 0x2DC) = 0;
  *((_BYTE *)a1 + 0x5BA) = 0;
  sub_65D560(a1);
  *((float *)a1 + 0x187) = 0.0;
  a1[0x61] = 0;
  *((_BYTE *)a1 + 0x1DC) = 0;
  *((_BYTE *)a1 + 0x600) = 0;
  *((_BYTE *)a1 + 0x5C0) = 0;
  a1[0x46] = 0;
  a1[0x182] = 0;
  a1[0x183] = 0;
  *((_BYTE *)a1 + 0x610) = 0;
  *((_BYTE *)a1 + 0x611) = 0;
  *((_BYTE *)a1 + 0x620) = 0;
  a1[0x189] = 0;
  a1[0x18A] = 0;
  a1[0x18B] = LODWORD(Vector3_InitValue_);
  a1[0x18C] = *((_DWORD *)&Vector3_InitValue_ + 1);
  a1[0x18D] = LODWORD(dword_B3F9B0);
  a1[0x18E] = 0;
  a1[0x18F] = 0;
  a1[0x17D] = 0;
  v31 = (_DWORD *)FormHeapAlloc(8u);
  if ( v31 )
  {
    *v31 = 0;
    v31[1] = 0;
  }
  else
  {
    v31 = 0;
  }
  v32 = 0.0;
  a1[0x7E] = (int)v31;
  *((float *)a1 + 0x190) = 0.0;
  a1[0x7F] = 0;
  *(float *)&flt_B3BAFC.vtbl = 0.0;
  a1[0x191] = 0;
  a1[0x16F] = 0;
  a1[0x171] = 0;
  *((_BYTE *)a1 + 0x594) = 0;
  a1[0x1B8] = 0;
  *((_BYTE *)a1 + 0x6E4) = 0;
  *((_BYTE *)a1 + 0x6E6) = 0;
  a1[0x1BA] = 0;
  v33 = a1[0x15D];
  if ( v33 )
  {
    if ( !v8((volatile LONG *)(v33 + 4)) )
      (**(void (__thiscall ***)(int, int))v33)(v33, 1);
    v32 = 0.0;
    a1[0x15D] = 0;
  }
  *((float *)a1 + 0x160) = v32;
  a1[0x15E] = 0;
  *((float *)a1 + 0x161) = v32;
  a1[0x15F] = 0;
  a1[0x1C3] = 0;
  a1[0x1C5] = 0;
  a1[0x1C4] = GetTickCount();
  a1[0x1B2] = 0;
  a1[0x1B3] = 0;
  a1[0x1B4] = 0;
  a1[0x1B5] = 0;
  a1[0x1B6] = 0;
  a1[0x1B7] = 0;
  a1[0x196] = 0;
  a1[0x197] = 0;
  a1[0x198] = 0;
  a1[0x199] = 0;
  a1[0x19A] = 0;
  a1[0x19B] = 0;
  a1[0x19C] = 0;
  a1[0x19D] = 0;
  a1[0x19E] = 0;
  a1[0x19F] = 0;
  a1[0x1A0] = 0;
  a1[0x1A1] = 0;
  a1[0x1A2] = 0;
  a1[0x1A3] = 0;
  a1[0x1A4] = 0;
  a1[0x1A5] = 0;
  a1[0x1A6] = 0;
  a1[0x1A7] = 0;
  a1[0x1A8] = 0;
  a1[0x1A9] = 0;
  a1[0x1AA] = 0;
  a1[0x1AB] = 0;
  a1[0x1AC] = 0;
  a1[0x1AD] = 0;
  a1[0x1AE] = 0;
  a1[0x1AF] = 0;
  a1[0x1B0] = 0;
  a1[0x1B1] = 0;
  a1[0x1E9] = 0;
  a1[0x1EA] = 0;
  a1[0x1EB] = 0;
  a1[0x1EC] = 0;
  a1[0x1ED] = 0;
  a1[0x1EE] = 0;
  a1[0x1EF] = 0;
  a1[0x1F0] = 0;
  a1[0x1F1] = 0;
  a1[0x1F2] = 0;
  a1[0x1F3] = 0;
  a1[0x1F4] = 0;
  a1[0x1F5] = 0;
  a1[0x1F6] = 0;
  a1[0x1F7] = 0;
  a1[0x1F8] = 0;
  a1[0x1F9] = 0;
  a1[0x1FA] = 0;
  a1[0x1FB] = 0;
  a1[0x1FC] = 0;
  a1[0x1FD] = 0;
  v34 = _time64(0);
  v35 = *a1;
  v36 = *((_BYTE *)a1 + 0x71D) == 0;
  a1[0x1C6] = v34;
  v37 = *(void (__stdcall **)(int))(v35 + 0x1BC);
  *((_BYTE *)a1 + 0x71C) = 0;
  if ( v36 )
    v37(1);
  else
    v37(0);
  v36 = *((_BYTE *)a1 + 0x71C) == 0;
  v38 = *(void (__stdcall **)(int))(*a1 + 0x1BC);
  *((_BYTE *)a1 + 0x71D) = 0;
  if ( v36 )
    v38(1);
  else
    v38(0);
  *((_BYTE *)a1 + 0x71E) = 0;
  *((_BYTE *)a1 + 0x71F) = 0;
  a1[0x1C8] = LODWORD(Vector3_InitValue_);
  a1[0x1C9] = *((_DWORD *)&Vector3_InitValue_ + 1);
  a1[0x1CA] = LODWORD(dword_B3F9B0);
  a1[0x1CB] = 0;
  a1[0x1CC] = 0;
  *((float *)a1 + 0x1CD) = flt_B14EB0;
  a1[0x178] = 0;
  v39 = 0.0;
  *((_BYTE *)a1 + 0x738) = 0;
  a1[0x44] = 0;
  a1[0x1D1] = 0;
  *((_BYTE *)a1 + 0x748) = 0;
  *((float *)a1 + 0x1D3) = 0.0;
  *((float *)a1 + 0x1D4) = 0.0;
  a1[0x1D5] = LODWORD(Vector3_InitValue_);
  a1[0x1D6] = *((_DWORD *)&Vector3_InitValue_ + 1);
  a1[0x1D7] = LODWORD(dword_B3F9B0);
  *((_BYTE *)a1 + 0x200) = 0;
  a1[0x1D8] = 0;
  a1[0x1D9] = 0;
  a1[0x1DA] = 0;
  a1[0x1DB] = 0;
  a1[0x1DC] = 0;
  a1[0x1DD] = 0;
  a1[0x1DE] = 0;
  a1[0x1DF] = 0;
  a1[0x15C] = 0;
  if ( a1[0x1E1] )
  {
    do
    {
      v40 = *(_DWORD *)(a1[0x1E1] + 4);
      FormHeapFree(a1[0x1E1]);
      a1[0x1E1] = v40;
    }
    while ( v40 );
    v39 = 0.0;
  }
  a1[0x1E0] = 0;
  a1[0x1E8] = 0;
  *((_BYTE *)a1 + 0x7F8) = 0;
  a1[0x16B] = 0;
  *((_BYTE *)a1 + 0x7F9) = 0;
  *((float *)a1 + 0x186) = v39;
  *((float *)a1 + 0x1FF) = v39;
  *((float *)a1 + 0x200) = v39;
  *((_BYTE *)a1 + 0x116) = 0;
  a1[2] |= 0x400u;
  return a1;
}
