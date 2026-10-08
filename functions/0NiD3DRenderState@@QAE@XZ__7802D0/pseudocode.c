NiD3DRenderState *__thiscall NiD3DRenderState::NiD3DRenderState(NiD3DRenderState *this, int a2)
{
  _DWORD *v3; // eax
  int i; // ecx
  _DWORD *v5; // eax
  int j; // ecx
  _DWORD *v7; // eax
  int k; // ecx
  NiObjectNET *v9; // eax
  NiObjectNET *v10; // eax
  int v11; // ecx
  double v12; // rt0
  unsigned int v13; // edx
  double v14; // st6
  double v15; // st7
  void (__thiscall ***v17)(_DWORD, int); // [esp+10h] [ebp-4h]
  NiObjectNET *v18; // [esp+18h] [ebp+4h]

  *(_DWORD *)this = &NiRefObject::`vftable'; /*0x7802de*/
  *((_DWORD *)this + 1) = 0; /*0x7802e4*/
  InterlockedIncrement(&MEMORY[0xB3FD64]); /*0x7802e7*/
  *(_DWORD *)this = &NiD3DRenderState::`vftable'; /*0x7802ef*/
  *((_DWORD *)this + 0x1D) = 0; /*0x7802f5*/
  *((float *)this + 0x23) = 0.0; /*0x7802f8*/
  *((float *)this + 0x24) = 0.0; /*0x7802fe*/
  *((float *)this + 0x25) = 0.0; /*0x78030a*/
  ActorList_ReturnHead((ActorList *)((char *)this + 0xF8)); /*0x780310*/
  v3 = (_DWORD *)((char *)this + 0x120); /*0x780315*/
  for ( i = 0xFF; i >= 0; --i ) /*0x78031b*/
  {
    *v3 = 0x7FFFFFFF; /*0x780330*/
    v3[1] = 0x7FFFFFFF; /*0x780332*/
    v3 += 2; /*0x780335*/
  }
  v5 = (_DWORD *)((char *)this + 0x920); /*0x78033c*/
  for ( j = 0x7F; j >= 0; --j ) /*0x780342*/
  {
    *v5 = 0x7FFFFFFF; /*0x780347*/
    v5[1] = 0x7FFFFFFF; /*0x780349*/
    v5 += 2; /*0x78034c*/
  }
  v7 = (_DWORD *)((char *)this + 0xD20); /*0x780353*/
  for ( k = 0x4F; k >= 0; --k ) /*0x780359*/
  {
    *v7 = 0x7FFFFFFF; /*0x780360*/
    v7[1] = 0x7FFFFFFF; /*0x780362*/
    v7 += 2; /*0x780365*/
  }
  *((_DWORD *)this + 0x3FC) = 0; /*0x780370*/
  *((_DWORD *)this + 0x3FE) = 0; /*0x780379*/
  *((_DWORD *)this + 0x3FF) = 0; /*0x78037f*/
  sub_77F840(this, a2); /*0x780385*/
  *((_DWORD *)this + 3) = 0; /*0x78038a*/
  *((_DWORD *)this + 4) = 1; /*0x78039b*/
  *((_DWORD *)this + 5) = 1; /*0x78039e*/
  *((_DWORD *)this + 6) = 2; /*0x7803a1*/
  *((_DWORD *)this + 7) = 3; /*0x7803a4*/
  *((_DWORD *)this + 0x1B) = 0; /*0x7803a7*/
  *((_DWORD *)this + 0x1C) = 0; /*0x7803aa*/
  v9 = (NiObjectNET *)FormHeapAlloc(0x1Cu); /*0x7803ad*/
  v18 = v9; /*0x7803b7*/
  if ( v9 ) /*0x7803bb*/
  {
    NiObjectNET::NiObjectNET(v9); /*0x7803bf*/
    v10 = v18; /*0x7803c4*/
    v18->vtbl = (NiObjectVtbl **)&NiAlphaProperty::`vftable'; /*0x7803c8*/
    LOWORD(v18[1].vtbl) = 0xEC; /*0x7803ce*/
    BYTE2(v18[1].vtbl) = 0; /*0x7803d4*/
  }
  else
  {
    v18 = 0; /*0x7803de*/
    v10 = 0; /*0x7803e6*/
  }
  v11 = *((_DWORD *)this + 0x1D); /*0x7803ea*/
  v17 = (void (__thiscall ***)(_DWORD, int))v11; /*0x7803ef*/
  if ( (NiObjectNET *)v11 != v10 ) /*0x7803f3*/
  {
    if ( v11 ) /*0x7803f7*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v11 + 4)) ) /*0x7803fd*/
      {
        if ( v17 ) /*0x78040d*/
          (**v17)(v17, 1); /*0x780414*/
      }
      v10 = v18; /*0x780416*/
    }
    *((_DWORD *)this + 0x1D) = v10; /*0x78041c*/
    if ( v10 ) /*0x78041f*/
      InterlockedIncrement((volatile LONG *)&v10->members); /*0x780425*/
  }
  *((float *)this + 0x1E) = 0.0; /*0x780432*/
  *((_DWORD *)this + 0xB) = 4; /*0x780435*/
  *((float *)this + 0x1F) = 0.0; /*0x780438*/
  *((_DWORD *)this + 0x16) = 4; /*0x78043b*/
  *((float *)this + 0x20) = 0.0; /*0x78043e*/
  *((_DWORD *)this + 0x2A) = 4; /*0x780444*/
  *((float *)this + 0x21) = 0.0; /*0x78044a*/
  *((_DWORD *)this + 0x32) = 4; /*0x780450*/
  *((float *)this + 0x22) = 1.0; /*0x78045d*/
  *((_DWORD *)this + 0xE) = 5; /*0x780463*/
  *((_DWORD *)this + 0x17) = 5;                 // NiD3DRenderState alpha-function table entry 4 is D3DCMP_GREATER (5). Tree cutout flags 0x12EC select this entry. /*0x78046f*/
  *((_DWORD *)this + 0x2B) = 5; /*0x780472*/
  *((_DWORD *)this + 0x33) = 5; /*0x780478*/
  *((_DWORD *)this + 8) = 2; /*0x78047e*/
  *((_DWORD *)this + 9) = 1; /*0x780481*/
  *((_DWORD *)this + 0xA) = 3; /*0x780484*/
  *((_DWORD *)this + 0xC) = 9; /*0x780487*/
  *((_DWORD *)this + 0xD) = 0xA; /*0x78048e*/
  *((_DWORD *)this + 0xF) = 6; /*0x780495*/
  *((_DWORD *)this + 0x10) = 7; /*0x780498*/
  *((_DWORD *)this + 0x11) = 8; /*0x78049f*/
  *((_DWORD *)this + 0x12) = 0xB; /*0x7804a6*/
  *((_DWORD *)this + 0x13) = 8; /*0x7804ad*/
  *((_DWORD *)this + 0x14) = 2; /*0x7804b4*/
  *((_DWORD *)this + 0x15) = 3; /*0x7804b7*/
  *((_DWORD *)this + 0x18) = 6; /*0x7804ba*/
  *((_DWORD *)this + 0x19) = 7; /*0x7804bd*/
  *((_DWORD *)this + 0x1A) = 1; /*0x7804c4*/
  *((_DWORD *)this + 0x2E) = 8; /*0x7804c7*/
  *((_DWORD *)this + 0x28) = 2; /*0x7804d1*/
  *((_DWORD *)this + 0x29) = 3; /*0x7804d7*/
  *((_DWORD *)this + 0x2C) = 6; /*0x7804dd*/
  *((_DWORD *)this + 0x2D) = 7; /*0x7804e3*/
  *((_DWORD *)this + 0x27) = 1; /*0x7804ed*/
  *((_DWORD *)this + 0x2F) = 1; /*0x7804f3*/
  *((_DWORD *)this + 0x30) = 2; /*0x7804f9*/
  *((_DWORD *)this + 0x31) = 3; /*0x7804ff*/
  *((_DWORD *)this + 0x34) = 6; /*0x780505*/
  *((_DWORD *)this + 0x35) = 2; /*0x78050b*/
  *((_DWORD *)this + 0x37) = 2; /*0x780511*/
  *((_DWORD *)this + 0x39) = 3; /*0x780517*/
  *((_DWORD *)this + 0x3B) = 1; /*0x78051d*/
  *((_DWORD *)this + 0x36) = 3; /*0x780523*/
  *((_DWORD *)this + 0x38) = 3; /*0x780529*/
  *((_DWORD *)this + 0x3A) = 2; /*0x78052f*/
  *((_DWORD *)this + 0x3C) = 1; /*0x780535*/
  *((_DWORD *)this + 0x3D) = 0; /*0x78053b*/
  *((_DWORD *)this + 0x23) = stru_B3FA90; /*0x78054b*/
  *((_DWORD *)this + 0x24) = MEMORY[0xB3FA94]; /*0x780556*/
  *((_DWORD *)this + 0x25) = MEMORY[0xB3FA98]; /*0x780567*/
  v12 = dbl_A3DDD8; /*0x780588*/
  v13 = ((int)(*((float *)this + 0x23) * v12) | 0xFFFFFF00) << 8; /*0x7805a0*/
  v14 = *((float *)this + 0x24) * v12; /*0x7805ad*/
  v15 = v12 * *((float *)this + 0x25); /*0x7805d3*/
  *((_DWORD *)this + 2) = 0; /*0x7805fe*/
  *((_DWORD *)this + 0x40) = 8; /*0x780605*/
  *((_DWORD *)this + 0x41) = 2; /*0x78060f*/
  *((_DWORD *)this + 0x42) = 3; /*0x780615*/
  *((_DWORD *)this + 0x43) = 4; /*0x78061b*/
  *((_DWORD *)this + 0x44) = 5; /*0x780629*/
  *((_DWORD *)this + 0x26) = (unsigned __int8)(int)v15 | (((unsigned __int8)(int)v14 | v13) << 8); /*0x780641*/
  *((_DWORD *)this + 0x45) = 6; /*0x780647*/
  *((_DWORD *)this + 0x46) = 7; /*0x78064d*/
  *((_DWORD *)this + 0x47) = 1; /*0x780657*/
  *((_BYTE *)this + 0xFF4) = 0; /*0x78065d*/
  *((_BYTE *)this + 0xFF5) = 0; /*0x780664*/
  _memset((int)unk_B427E0, 0xFFFF, 0x42u);      // Sampler enum-to-cache initialization. All entries start 0xFFFF; later writes map only D3DSAMP_ADDRESSU(1)->0, ADDRESSV(2)->1, MAGFILTER(5)->2, MINFILTER(6)->3, MIPFILTER(7)->4. MIPMAPLODBIAS(8), MAXMIPLEVEL(9), MAXANISOTROPY(10), and SRGBTEXTURE(11) remain untracked. /*0x78066b*/
  unk_B427EA = 4; /*0x780678*/
  unk_B4282A = 4; /*0x78067e*/
  unk_B427B8 = 0xFFFFFFFF; /*0x780687*/
  unk_B427BC = 0xFFFFFFFF; /*0x78068c*/
  unk_B427E6 = 2; /*0x780691*/
  unk_B42826 = 2; /*0x780698*/
  unk_B427B0 = 0xFFFFFFFF; /*0x78069f*/
  unk_B427B4 = 0xFFFFFFFF; /*0x7806a4*/
  HIWORD(unk_B427B8) = 2; /*0x7806a9*/
  unk_B427D0 = 2; /*0x7806b0*/
  unk_B427C0 = 0xFFFFFFFF; /*0x7806b7*/
  unk_B427C4 = 0xFFFFFFFF; /*0x7806bc*/
  unk_B427C8 = 0xFFFFFFFF; /*0x7806c1*/
  unk_B427E4 = 1; /*0x7806d3*/
  unk_B42824[0] = 1; /*0x7806da*/
  LOWORD(unk_B427B4) = 1; /*0x7806e1*/
  unk_B427CC[0] = 1; /*0x7806e8*/
  unk_B427E8 = 3; /*0x7806ef*/
  unk_B42828 = 3; /*0x7806f6*/
  LOWORD(unk_B427BC) = 3; /*0x7806fd*/
  unk_B427E2 = 0; /*0x780704*/
  unk_B427EC = 5; /*0x78070d*/
  unk_B427EE = 6; /*0x780716*/
  unk_B42810 = 7; /*0x78071d*/
  unk_B4282C = 5; /*0x780724*/
  unk_B4282E = 6; /*0x78072d*/
  unk_B42830 = 7; /*0x780734*/
  unk_B42832 = 0x18; /*0x78073b*/
  HIWORD(unk_B427B0) = 0; /*0x780744*/
  HIWORD(unk_B427BC) = 4; /*0x78074d*/
  unk_B427D4 = 5; /*0x780756*/
  unk_B427D8 = 6; /*0x780760*/
  unk_B427DC = 7; /*0x780766*/
  return this; /*0x7806b6*/
}
