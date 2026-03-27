char __thiscall sub_7641A0(float *this)
{
  double v2; // st7
  int v3; // eax
  double v4; // st6
  double v5; // st7
  _DWORD *v6; // ebp
  _DWORD *v7; // edi
  int v9; // [esp+10h] [ebp-8h]
  void (__thiscall ***v10)(_DWORD, int); // [esp+14h] [ebp-4h]

  *(this + 0xA0) = 0.0;
  _memset(this + 0xA1, 0, 0x130);
  *(this + 0x176) = 1.0;
  *(this + 0xED) = 0.0;
  *((_BYTE *)this + 0x3BC) = 0;
  v2 = flt_A2FAAC;
  *(this + 0x16F) = 0.0;
  *(this + 0xEE) = 0.0;
  *(this + 0x171) = 0.0;
  *((_BYTE *)this + 0x5C8) = 0;
  *((_BYTE *)this + 0x5C9) = 0;
  *(this + 0x1B6) = 0.0;
  *(this + 0x1B7) = 0.0;
  *(this + 0x1B8) = 0.0;
  *(this + 0x1B9) = 0.0;
  *((_BYTE *)this + 0x6E8) = 0;
  *((_BYTE *)this + 0x6E9) = 0;
  *(this + 0x225) = 0.0;
  *((_BYTE *)this + 0x898) = 0;
  *((_BYTE *)this + 0x899) = 0;
  *(this + 0x1BB) = 0.0;
  *((_BYTE *)this + 0x6F0) = 0;
  *(this + 0x175) = NAN;
  *(this + 0x177) = 0.0;
  *(this + 0x178) = 0.0;
  *((_BYTE *)this + 0x5E4) = 0;
  *((_DWORD *)this + 0x170) = 1;
  *((_DWORD *)this + 0x18A) = dword_B258D0;
  *((_DWORD *)this + 0x18B) = dword_B258D4;
  *((_DWORD *)this + 0x18C) = dword_B258D8;
  *((_DWORD *)this + 0x18D) = dword_B258DC;
  *(this + 0x18E) = *(float *)&qword_B258E0;
  *(this + 0x18F) = *((float *)&qword_B258E0 + 1);
  *((_DWORD *)this + 0x190) = dword_B258D0;
  *((_DWORD *)this + 0x191) = dword_B258D4;
  *((_DWORD *)this + 0x192) = dword_B258D8;
  *((_DWORD *)this + 0x193) = dword_B258DC;
  *(this + 0x194) = *(float *)&qword_B258E0;
  v3 = HIDWORD(qword_B258E0);
  *(this + 0x19E) = v2;
  *(this + 0x19F) = flt_A2FE7C;
  *((_DWORD *)this + 0x195) = v3;
  _memset(this + 0x1A0, 0, 0x40);
  *(this + 0x1AF) = 1.0;
  *(this + 0x1AA) = 1.0;
  *(this + 0x185) = 0.0;
  *(this + 0x1A5) = 1.0;
  *(this + 0x186) = 0.0;
  *(this + 0x1A0) = 1.0;
  *(this + 0x1B0) = 0.0;
  *((_DWORD *)this + 0x1B2) = 1;
  *(this + 0x1B4) = 0.0;
  *((_DWORD *)this + 0x1B3) = 1;
  v4 = 1.0;
  v5 = 0.0;
  *(this + 0x1B1) = 0.0;
  *(this + 0x1B5) = 1.0;
  v6 = this + 0x219;
  v7 = this + 0x1BD;
  v9 = 4;
  do
  {
    *v7 = 0;
    v7[1] = 0;
    v7[2] = 0;
    v7[3] = 0;
    v7[4] = 0;
    v7[5] = 0;
    v7[6] = 0;
    v7[7] = 0;
    v7[8] = 0;
    v7[9] = 0;
    v7[0xA] = 0;
    v7[0xB] = 0;
    v7[0xC] = 0;
    v7[0xD] = 0;
    v7[0xE] = 0;
    v7[0xF] = 0;
    v7[0x10] = 0;
    v7[0x11] = 0;
    v7[0x12] = 0;
    v7[0x13] = 0;
    v7[0x14] = 0;
    v7[0x15] = 0;
    v6[0xFFFFFFFC] = 0;
    v10 = (void (__thiscall ***)(_DWORD, int))*v6;
    if ( *v6 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(*v6 + 4)) )
      {
        if ( v10 )
          (**v10)(v10, 1);
      }
      v5 = 0.0;
      *v6 = 0;
      v4 = 1.0;
    }
    ++v6;
    v7 += 0x16;
    --v9;
  }
  while ( v9 );
  *(this + 0x253) = v5;
  *(this + 0x257) = v5;
  *(this + 0x25B) = v5;
  *((_DWORD *)this + 0x21D) = 0x16;
  *(this + 0x21F) = 0.0;
  *(this + 0x25F) = v4;
  *(this + 0x220) = 0.0;
  *(this + 0x22C) = 0.0;
  *(this + 0x22D) = 0.0;
  *(this + 0x22E) = 0.0;
  *(this + 0x22B) = 0.0;
  *(this + 0x22F) = 0.0;
  *(this + 0x228) = 0.0;
  *(this + 0x229) = 0.0;
  *(this + 0x22A) = 0.0;
  *(this + 0x290) = 0.0;
  *(this + 0x291) = 0.0;
  *(this + 0x292) = 0.0;
  *(this + 0x294) = 0.0;
  *((_WORD *)this + 0x526) = 0;
  *(this + 0x295) = 0.0;
  _memset(byte_B42070, 0, 0x76);
  byte_B42084 = 0x18;
  byte_B42085 = 0x20;
  byte_B42086 = 0x20;
  byte_B42087 = 0x10;
  byte_B42088 = 0x10;
  byte_B42089 = 0x10;
  byte_B4208A = 0x10;
  byte_B4208B = 8;
  byte_B4208C = 8;
  byte_B4208D = 0x10;
  byte_B4208E = 0x10;
  byte_B4208F = 0x20;
  byte_B42090 = 0x20;
  byte_B42091 = 0x20;
  byte_B42092 = 0x20;
  byte_B42093 = 0x20;
  byte_B42094 = 0x40;
  byte_B42098 = 0x10;
  byte_B42099 = 8;
  byte_B420A2 = 8;
  byte_B420A3 = 0x10;
  byte_B420A4 = 8;
  byte_B420AC = 0x10;
  byte_B420AD = 0x10;
  byte_B420AE = 0x20;
  byte_B420AF = 0x20;
  byte_B420B0 = 0x20;
  byte_B420B3 = 0x20;
  byte_B420B6 = 0x10;
  byte_B420B7 = 0x20;
  byte_B420B9 = 0x10;
  byte_B420BB = 0x20;
  byte_B420BD = 0x20;
  byte_B420BF = 0x20;
  byte_B420C0 = 0x10;
  byte_B420C2 = 0x20;
  byte_B420C3 = 0x20;
  byte_B420C1 = 0x10;
  byte_B420D5 = 0x10;
  byte_B420D6 = 0x20;
  byte_B420DE = 0x40;
  byte_B420DF = 0x10;
  byte_B420E0 = 0x20;
  byte_B420E1 = 0x40;
  byte_B420E2 = 0x20;
  byte_B420E3 = 0x40;
  byte_B420E4 = 0x80;
  byte_B420E5 = 0x10;
  return 0x20;
}
