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

  *(_DWORD *)this = &NiRefObject::`vftable';
  *((_DWORD *)this + 1) = 0;
  InterlockedIncrement(&NiRefObject_objcount);
  *(_DWORD *)this = &NiD3DRenderState::`vftable';
  *((_DWORD *)this + 0x1D) = 0;
  *((float *)this + 0x23) = 0.0;
  *((float *)this + 0x24) = 0.0;
  *((float *)this + 0x25) = 0.0;
  sub_7616D0((ActorList *)((char *)this + 0xF8));
  v3 = (_DWORD *)((char *)this + 0x120);
  for ( i = 0xFF; i >= 0; --i )
  {
    *v3 = 0x7FFFFFFF;
    v3[1] = 0x7FFFFFFF;
    v3 += 2;
  }
  v5 = (_DWORD *)((char *)this + 0x920);
  for ( j = 0x7F; j >= 0; --j )
  {
    *v5 = 0x7FFFFFFF;
    v5[1] = 0x7FFFFFFF;
    v5 += 2;
  }
  v7 = (_DWORD *)((char *)this + 0xD20);
  for ( k = 0x4F; k >= 0; --k )
  {
    *v7 = 0x7FFFFFFF;
    v7[1] = 0x7FFFFFFF;
    v7 += 2;
  }
  *((_DWORD *)this + 0x3FC) = 0;
  *((_DWORD *)this + 0x3FE) = 0;
  *((_DWORD *)this + 0x3FF) = 0;
  sub_77F840(this, a2);
  *((_DWORD *)this + 3) = 0;
  *((_DWORD *)this + 4) = 1;
  *((_DWORD *)this + 5) = 1;
  *((_DWORD *)this + 6) = 2;
  *((_DWORD *)this + 7) = 3;
  *((_DWORD *)this + 0x1B) = 0;
  *((_DWORD *)this + 0x1C) = 0;
  v9 = (NiObjectNET *)FormHeapAlloc(0x1Cu);
  v18 = v9;
  if ( v9 )
  {
    NiObjectNET::NiObjectNET(v9);
    v10 = v18;
    v18->vtbl = (NiObjectVtbl **)&NiAlphaProperty::`vftable';
    LOWORD(v18[1].vtbl) = 0xEC;
    BYTE2(v18[1].vtbl) = 0;
  }
  else
  {
    v18 = 0;
    v10 = 0;
  }
  v11 = *((_DWORD *)this + 0x1D);
  v17 = (void (__thiscall ***)(_DWORD, int))v11;
  if ( (NiObjectNET *)v11 != v10 )
  {
    if ( v11 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v11 + 4)) )
      {
        if ( v17 )
          (**v17)(v17, 1);
      }
      v10 = v18;
    }
    *((_DWORD *)this + 0x1D) = v10;
    if ( v10 )
      InterlockedIncrement((volatile LONG *)&v10->members);
  }
  *((float *)this + 0x1E) = 0.0;
  *((_DWORD *)this + 0xB) = 4;
  *((float *)this + 0x1F) = 0.0;
  *((_DWORD *)this + 0x16) = 4;
  *((float *)this + 0x20) = 0.0;
  *((_DWORD *)this + 0x2A) = 4;
  *((float *)this + 0x21) = 0.0;
  *((_DWORD *)this + 0x32) = 4;
  *((float *)this + 0x22) = 1.0;
  *((_DWORD *)this + 0xE) = 5;
  *((_DWORD *)this + 0x17) = 5;
  *((_DWORD *)this + 0x2B) = 5;
  *((_DWORD *)this + 0x33) = 5;
  *((_DWORD *)this + 8) = 2;
  *((_DWORD *)this + 9) = 1;
  *((_DWORD *)this + 0xA) = 3;
  *((_DWORD *)this + 0xC) = 9;
  *((_DWORD *)this + 0xD) = 0xA;
  *((_DWORD *)this + 0xF) = 6;
  *((_DWORD *)this + 0x10) = 7;
  *((_DWORD *)this + 0x11) = 8;
  *((_DWORD *)this + 0x12) = 0xB;
  *((_DWORD *)this + 0x13) = 8;
  *((_DWORD *)this + 0x14) = 2;
  *((_DWORD *)this + 0x15) = 3;
  *((_DWORD *)this + 0x18) = 6;
  *((_DWORD *)this + 0x19) = 7;
  *((_DWORD *)this + 0x1A) = 1;
  *((_DWORD *)this + 0x2E) = 8;
  *((_DWORD *)this + 0x28) = 2;
  *((_DWORD *)this + 0x29) = 3;
  *((_DWORD *)this + 0x2C) = 6;
  *((_DWORD *)this + 0x2D) = 7;
  *((_DWORD *)this + 0x27) = 1;
  *((_DWORD *)this + 0x2F) = 1;
  *((_DWORD *)this + 0x30) = 2;
  *((_DWORD *)this + 0x31) = 3;
  *((_DWORD *)this + 0x34) = 6;
  *((_DWORD *)this + 0x35) = 2;
  *((_DWORD *)this + 0x37) = 2;
  *((_DWORD *)this + 0x39) = 3;
  *((_DWORD *)this + 0x3B) = 1;
  *((_DWORD *)this + 0x36) = 3;
  *((_DWORD *)this + 0x38) = 3;
  *((_DWORD *)this + 0x3A) = 2;
  *((_DWORD *)this + 0x3C) = 1;
  *((_DWORD *)this + 0x3D) = 0;
  *((_DWORD *)this + 0x23) = dword_B3FA90;
  *((_DWORD *)this + 0x24) = dword_B3FA94;
  *((_DWORD *)this + 0x25) = dword_B3FA98;
  v12 = dbl_A3DDD8;
  v13 = ((int)(*((float *)this + 0x23) * v12) | 0xFFFFFF00) << 8;
  v14 = *((float *)this + 0x24) * v12;
  v15 = v12 * *((float *)this + 0x25);
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 0x40) = 8;
  *((_DWORD *)this + 0x41) = 2;
  *((_DWORD *)this + 0x42) = 3;
  *((_DWORD *)this + 0x43) = 4;
  *((_DWORD *)this + 0x44) = 5;
  *((_DWORD *)this + 0x26) = (unsigned __int8)(int)v15 | (((unsigned __int8)(int)v14 | v13) << 8);
  *((_DWORD *)this + 0x45) = 6;
  *((_DWORD *)this + 0x46) = 7;
  *((_DWORD *)this + 0x47) = 1;
  *((_BYTE *)this + 0xFF4) = 0;
  *((_BYTE *)this + 0xFF5) = 0;
  _memset(word_B427E0, 0xFF, 0x42);
  word_B427EA = 4;
  word_B4282A = 4;
  dword_B427B8 = 0xFFFFFFFF;
  dword_B427BC = 0xFFFFFFFF;
  word_B427E6 = 2;
  word_B42826 = 2;
  dword_B427B0 = 0xFFFFFFFF;
  dword_B427B4 = 0xFFFFFFFF;
  HIWORD(dword_B427B8) = 2;
  dword_B427D0 = 2;
  dword_B427C0 = 0xFFFFFFFF;
  dword_B427C4 = 0xFFFFFFFF;
  dword_B427C8 = 0xFFFFFFFF;
  word_B427E4 = 1;
  word_B42824[0] = 1;
  LOWORD(dword_B427B4) = 1;
  dword_B427CC[0] = 1;
  word_B427E8 = 3;
  word_B42828 = 3;
  LOWORD(dword_B427BC) = 3;
  word_B427E2 = 0;
  word_B427EC = 5;
  word_B427EE = 6;
  word_B42810 = 7;
  word_B4282C = 5;
  word_B4282E = 6;
  word_B42830 = 7;
  word_B42832 = 0x18;
  HIWORD(dword_B427B0) = 0;
  HIWORD(dword_B427BC) = 4;
  dword_B427D4 = 5;
  dword_B427D8 = 6;
  dword_B427DC = 7;
  return this;
}
