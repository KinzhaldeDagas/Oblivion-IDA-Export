unsigned int sub_8A83C0()
{
  int v0; // edi
  int v1; // ebx
  int v2; // edx
  int v3; // ecx
  int v4; // esi
  int v5; // ebp
  int v6; // eax
  int v7; // esi
  int v8; // eax
  int v9; // esi
  int v10; // eax
  int v11; // edx
  unsigned int v12; // ecx
  int v13; // ebx
  int v14; // edi
  unsigned int v15; // eax
  int v16; // esi
  int v17; // edx
  unsigned int v18; // ecx
  int v19; // ebp
  unsigned int v20; // ebp
  int v21; // ebp
  int v22; // eax
  unsigned int result; // eax

  _memset(dword_BA7E30, 0, 0x80);
  _memset(dword_BA7DB0, 0xFF, 0x80);
  _memset(dword_BA7EB0, 0, 0x80);
  dword_BA7E34 |= 0x230C0u;
  v0 = dword_BA7E48;
  v1 = dword_BA7E60;
  v2 = dword_BA7E64;
  dword_BA7E38 |= 0x30C0u;
  v3 = dword_BA7E4C;
  v4 = dword_BA7E74;
  v5 = dword_BA7E50;
  dword_BA7E3C |= 0x30C0u;
  dword_BA7E40 |= 0x230C0u;
  dword_BA7E44 |= 0x3000u;
  dword_BA7E74 = v4 | 0x52;
  v6 = dword_BA7E7C;
  dword_BA7E58 |= 0x80u;
  dword_BA7E58 |= 0x80000u;
  v7 = dword_BA7E68;
  dword_BA7E54 |= 0x80u;
  dword_BA7E6C |= 0x80u;
  dword_BA7E54 |= 0x80000u;
  dword_BA7E6C |= 0x80000u;
  dword_BA7E70 |= 0x80u;
  dword_BA7E54 |= 0x8000u;
  dword_BA7E6C |= 0x200u;
  dword_BA7E70 |= 0x80000u;
  dword_BA7E54 |= 0x4000u;
  dword_BA7E6C |= 0x400u;
  dword_BA7E74 |= 0x1000u;
  dword_BA7E7C = v6 | 0x6300;
  v8 = dword_BA7E58;
  dword_BA7E7C |= 0x8000u;
  dword_BA7E7C |= 0x400u;
  dword_BA7E7C |= 0x10000u;
  dword_BA7E7C |= 0x400000u;
  dword_BA7E58 = v8 | 0xC000;
  dword_BA7E5C |= 0xC0u;
  dword_BA7E54 |= 0x2000u;
  dword_BA7E6C |= 0x2000u;
  dword_BA7E58 |= 0x2000u;
  dword_BA7E70 |= 0x2000u;
  dword_BA7E68 = v7 | 0x837C0;
  v9 = dword_BA7E88 | 0x80040;
  dword_BA7E70 |= 0x400000u;
  dword_BA7E70 |= 0x300u;
  dword_BA7E78 |= 0x300u;
  v10 = dword_BA7E90 | 0x28E0;
  dword_BA7E54 |= 0x400000u;
  dword_BA7E6C |= 0x400000u;
  dword_BA7E58 |= 0x400000u;
  dword_BA7E54 |= 0x10000u;
  dword_BA7E44 |= 0x400000u;
  dword_BA7E40 |= 0x400000u;
  dword_BA7E3C |= 0x400000u;
  dword_BA7E38 |= 0x400000u;
  dword_BA7E68 |= 0x400000u;
  dword_BA7E6C |= 0x100u;
  dword_BA7E54 |= 0x40000u;
  dword_BA7E78 |= 0x400u;
  dword_BA7E58 |= 0x40000u;
  dword_BA7E44 |= 0x1000000u;
  dword_BA7E4C = v3 | 0x141FF1E;
  dword_BA7E5C |= 0x1000000u;
  dword_BA7E34 |= 0x1000000u;
  dword_BA7E40 |= 0x1000000u;
  dword_BA7E3C |= 0x1000000u;
  dword_BA7E38 |= 0x1000000u;
  dword_BA7E54 |= 0x1000000u;
  dword_BA7E58 |= 0x1000000u;
  dword_BA7E68 |= 0x1000000u;
  dword_BA7E6C |= 0x1000000u;
  dword_BA7E70 |= 0x1000000u;
  dword_BA7E78 |= 0x1000000u;
  dword_BA7E7C |= 0x1000000u;
  dword_BA7E48 = v0 | 0x142791E;
  dword_BA7E64 = v2 | 0x109C7FE;
  dword_BA7E60 = v1 | 0x10241FE;
  dword_BA7E50 = v5 | 0x14DF0C0;
  dword_BA7E8C |= 0x1000000u;
  dword_BA7E74 |= 0x1000000u;
  v11 = dword_BA7E00;
  v12 = dword_BA7DF8 & 0xFFF70001;
  dword_BA7DB4 &= ~0x40000u;
  dword_BA7DFC &= ~0x40000u;
  v13 = dword_BA7E18;
  v14 = dword_BA7E1C;
  dword_BA7DB8 &= ~0x40000u;
  dword_BA7DBC &= ~0x40000u;
  dword_BA7DC0 &= ~0x40000u;
  dword_BA7DC4 &= ~0x40000u;
  dword_BA7DC8 &= ~0x40000u;
  dword_BA7DCC &= ~0x40000u;
  dword_BA7DD4 &= ~0x40000u;
  dword_BA7DD8 &= ~0x40000u;
  dword_BA7DDC &= ~0x40000u;
  dword_BA7DE4 &= ~0x40000u;
  dword_BA7DE8 &= ~0x40000u;
  dword_BA7DF4 &= ~0x40000u;
  dword_BA7DF0 &= ~0x40000u;
  dword_BA7E10 &= ~0x40000u;
  dword_BA7E20 &= ~0x40000u;
  dword_BA7E24 &= ~0x40000u;
  dword_BA7DB4 &= ~0x8000u;
  dword_BA7DFC &= ~0x8000u;
  dword_BA7E90 = (unsigned int)&loc_800000 | v10 | 0x4DD71E | 0x20000;
  dword_BA7DD0 &= 0xFFEBFFFF;
  v15 = dword_BA7DEC & 0xFFFBFFFD;
  dword_BA7E88 = v9 | 0x101C7BC;
  v16 = dword_BA7DE0;
  dword_BA7E00 = v11 & 0xFFFBFEFF;
  v17 = dword_BA7E04;
  dword_BA7DF8 = v12 & 0x82C8FFFF;
  v18 = dword_BA7E28 & 0xFFFBFFFF;
  dword_BA7DB8 &= ~0x8000u;
  dword_BA7E10 &= ~0x8000u;
  dword_BA7E10 &= ~0x80u;
  v19 = dword_BA7E10;
  dword_BA7DCC &= ~0x8000u;
  dword_BA7E14 &= ~0x80u;
  dword_BA7DCC &= ~0x1000000u;
  dword_BA7DDC &= ~0x8000u;
  dword_BA7DCC &= ~0x2000000u;
  dword_BA7DBC &= ~0x8000u;
  dword_BA7DC0 &= ~0x8000u;
  dword_BA7DC4 &= ~0x8000u;
  dword_BA7DC8 &= ~0x8000u;
  dword_BA7E00 &= ~0x8000u;
  dword_BA7DDC &= ~0x2000000u;
  dword_BA7DCC &= ~0x4000000u;
  dword_BA7DD0 &= ~0x8000u;
  dword_BA7DD4 &= ~0x8000u;
  dword_BA7DD8 &= ~0x8000u;
  dword_BA7DE4 &= ~0x8000u;
  dword_BA7DE8 &= ~0x8000u;
  dword_BA7DF4 &= ~0x8000u;
  dword_BA7DF0 &= ~0x8000u;
  dword_BA7E20 &= ~0x8000u;
  dword_BA7E24 &= ~0x8000u;
  dword_BA7DBC &= ~0x4000000u;
  dword_BA7DDC &= ~0x4000000u;
  dword_BA7E00 &= ~0x4000000u;
  dword_BA7DC0 &= ~0x8000000u;
  dword_BA7DC4 &= ~0x8000000u;
  dword_BA7DC8 &= ~0x8000000u;
  dword_BA7DCC &= ~0x8000000u;
  dword_BA7E10 = v19 & 0xFEFFEFFF;
  v20 = dword_BA7E14 & 0xFFFFE7FF;
  dword_BA7DD0 &= ~0x8000000u;
  dword_BA7E14 = v20;
  dword_BA7E10 &= ~0x8000000u;
  dword_BA7E14 &= ~0x8000000u;
  dword_BA7DC8 &= ~0x200000u;
  dword_BA7DD8 &= ~0x8000000u;
  dword_BA7DB4 &= ~0x200000u;
  dword_BA7DCC &= ~0x200000u;
  dword_BA7DD4 &= ~0x200000u;
  dword_BA7DDC &= ~0x200000u;
  dword_BA7DE4 &= ~0x200000u;
  dword_BA7DF4 &= ~0x200000u;
  dword_BA7E10 &= ~0x200000u;
  dword_BA7E14 &= ~0x200000u;
  v21 = dword_BA7DC8;
  dword_BA7E00 &= ~0x8000000u;
  dword_BA7DE8 &= ~0x8000000u;
  dword_BA7DF0 &= ~0x8000000u;
  dword_BA7DC0 &= ~0x200000u;
  dword_BA7DC4 &= ~0x200000u;
  dword_BA7DD0 &= ~0x200000u;
  dword_BA7DD8 &= ~0x200000u;
  dword_BA7DB4 &= ~0x40000000u;
  dword_BA7DBC &= ~0x40000000u;
  dword_BA7DCC &= ~0x40000000u;
  dword_BA7DD4 &= ~0x40000000u;
  dword_BA7DDC &= ~0x40000000u;
  dword_BA7DE4 &= ~0x40000000u;
  dword_BA7DF4 &= ~0x40000000u;
  dword_BA7E10 &= ~0x40000000u;
  dword_BA7E14 &= ~0x40000000u;
  dword_BA7DEC = v15 & 0x82C40003;
  dword_BA7DFC &= 0xBFDFFFFF;
  v22 = dword_BA7E2C;
  dword_BA7DDC &= ~0x1000u;
  dword_BA7DCC &= ~0x40u;
  dword_BA7DF0 &= ~0x40u;
  dword_BA7DBC &= ~0x40u;
  dword_BA7DBC &= ~0x1000u;
  dword_BA7DF0 &= ~0x1000u;
  dword_BA7DCC &= 0xFFFEFF7F;
  dword_BA7E20 &= ~0x40000000u;
  dword_BA7E24 &= ~0x40000000u;
  dword_BA7DB4 &= ~0x1000u;
  dword_BA7DFC &= ~0x1000u;
  dword_BA7DB8 &= ~0x1000u;
  dword_BA7DD4 &= ~0x1000u;
  dword_BA7DD8 &= ~0x1000u;
  dword_BA7DE4 &= ~0x1000u;
  dword_BA7DF4 &= ~0x1000u;
  dword_BA7E14 &= ~0x1000u;
  dword_BA7DF0 &= ~0x80u;
  dword_BA7DCC &= ~8u;
  dword_BA7DBC &= ~0x80u;
  dword_BA7DC0 &= ~0x80000000;
  dword_BA7DE0 = v16 & 0x70F051F1;
  dword_BA7DC4 &= ~0x80000000;
  dword_BA7DDC &= ~0x80000000;
  dword_BA7E10 &= ~0x80000000;
  dword_BA7E1C = v14 & 0x38CA2A0F;
  dword_BA7DC8 = v21 & 0x3FFEFF37;
  result = v22 & 0xB2DFE78F;
  dword_BA7E18 = v13 & 0x37CB6777;
  dword_BA7E04 = v17 & 0x30D1500D;
  dword_BA7E28 = v18 & 0xD55535;
  dword_BA7E2C = result;
  dword_BA7EE4 = 2;
  dword_BA7ED4 = 3;
  dword_BA7EDC = 4;
  return result;
}
