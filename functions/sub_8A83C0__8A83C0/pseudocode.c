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

  _memset((int)unk_BA7E30, 0, 0x80u); /*0x8a83d0*/
  _memset((int)unk_BA7DB0, 0xFF, 0x80u); /*0x8a83e4*/
  _memset((int)unk_BA7EB0, 0, 0x80u); /*0x8a83f5*/
  unk_BA7E34 |= 0x230C0u; /*0x8a8416*/
  v0 = unk_BA7E48; /*0x8a842d*/
  v1 = unk_BA7E60; /*0x8a8438*/
  v2 = unk_BA7E64; /*0x8a843e*/
  unk_BA7E38 |= 0x30C0u; /*0x8a8444*/
  v3 = unk_BA7E4C; /*0x8a844e*/
  v4 = unk_BA7E74; /*0x8a8454*/
  v5 = unk_BA7E50; /*0x8a846c*/
  unk_BA7E3C |= 0x30C0u; /*0x8a8472*/
  unk_BA7E40 |= 0x230C0u; /*0x8a84b4*/
  unk_BA7E44 |= 0x3000u; /*0x8a8501*/
  unk_BA7E74 = v4 | 0x52; /*0x8a8506*/
  v6 = unk_BA7E7C; /*0x8a8512*/
  unk_BA7E58 |= 0x80u; /*0x8a8517*/
  unk_BA7E58 |= 0x80000u; /*0x8a8521*/
  v7 = unk_BA7E68; /*0x8a852b*/
  unk_BA7E54 |= 0x80u; /*0x8a8536*/
  unk_BA7E6C |= 0x80u; /*0x8a8540*/
  unk_BA7E54 |= 0x80000u; /*0x8a854f*/
  unk_BA7E6C |= 0x80000u; /*0x8a8559*/
  unk_BA7E70 |= 0x80u; /*0x8a8563*/
  unk_BA7E54 |= 0x8000u; /*0x8a8572*/
  unk_BA7E6C |= 0x200u; /*0x8a857c*/
  unk_BA7E70 |= 0x80000u; /*0x8a858b*/
  unk_BA7E54 |= 0x4000u; /*0x8a8595*/
  unk_BA7E6C |= 0x400u; /*0x8a859f*/
  unk_BA7E74 |= 0x1000u; /*0x8a85a9*/
  unk_BA7E7C = v6 | 0x6300; /*0x8a85b6*/
  v8 = unk_BA7E58; /*0x8a85bb*/
  unk_BA7E7C |= 0x8000u; /*0x8a85c0*/
  unk_BA7E7C |= 0x400u; /*0x8a85ca*/
  unk_BA7E7C |= 0x10000u; /*0x8a85d4*/
  unk_BA7E7C |= 0x400000u; /*0x8a85de*/
  unk_BA7E58 = v8 | 0xC000; /*0x8a8616*/
  unk_BA7E5C |= 0xC0u; /*0x8a866a*/
  unk_BA7E54 |= 0x2000u; /*0x8a8674*/
  unk_BA7E6C |= 0x2000u; /*0x8a867a*/
  unk_BA7E58 |= 0x2000u; /*0x8a8680*/
  unk_BA7E70 |= 0x2000u; /*0x8a8686*/
  unk_BA7E68 = v7 | 0x837C0; /*0x8a86ac*/
  v9 = unk_BA7E88 | 0x80040; /*0x8a870e*/
  unk_BA7E70 |= 0x400000u; /*0x8a8717*/
  unk_BA7E70 |= 0x300u; /*0x8a8730*/
  unk_BA7E78 |= 0x300u; /*0x8a8744*/
  v10 = unk_BA7E90 | 0x28E0; /*0x8a875e*/
  unk_BA7E54 |= 0x400000u; /*0x8a8763*/
  unk_BA7E6C |= 0x400000u; /*0x8a876d*/
  unk_BA7E58 |= 0x400000u; /*0x8a8777*/
  unk_BA7E54 |= 0x10000u; /*0x8a8781*/
  unk_BA7E44 |= 0x400000u; /*0x8a8790*/
  unk_BA7E40 |= 0x400000u; /*0x8a879a*/
  unk_BA7E3C |= 0x400000u; /*0x8a87a4*/
  unk_BA7E38 |= 0x400000u; /*0x8a87ae*/
  unk_BA7E68 |= 0x400000u; /*0x8a87b8*/
  unk_BA7E6C |= 0x100u; /*0x8a87c2*/
  unk_BA7E54 |= 0x40000u; /*0x8a87cc*/
  unk_BA7E78 |= 0x400u; /*0x8a87d6*/
  unk_BA7E58 |= 0x40000u; /*0x8a87e0*/
  unk_BA7E44 |= 0x1000000u; /*0x8a87ed*/
  unk_BA7E4C = v3 | 0x141FF1E; /*0x8a886c*/
  unk_BA7E5C |= 0x1000000u; /*0x8a8877*/
  unk_BA7E34 |= 0x1000000u; /*0x8a887d*/
  unk_BA7E40 |= 0x1000000u; /*0x8a8883*/
  unk_BA7E3C |= 0x1000000u; /*0x8a8889*/
  unk_BA7E38 |= 0x1000000u; /*0x8a888f*/
  unk_BA7E54 |= 0x1000000u; /*0x8a8895*/
  unk_BA7E58 |= 0x1000000u; /*0x8a889b*/
  unk_BA7E68 |= 0x1000000u; /*0x8a88a1*/
  unk_BA7E6C |= 0x1000000u; /*0x8a88a7*/
  unk_BA7E70 |= 0x1000000u; /*0x8a88ad*/
  unk_BA7E78 |= 0x1000000u; /*0x8a88b3*/
  unk_BA7E7C |= 0x1000000u; /*0x8a88d7*/
  unk_BA7E48 = v0 | 0x142791E; /*0x8a88dd*/
  unk_BA7E64 = v2 | 0x109C7FE; /*0x8a88e3*/
  unk_BA7E60 = v1 | 0x10241FE; /*0x8a88e9*/
  unk_BA7E50 = v5 | 0x14DF0C0; /*0x8a88ef*/
  unk_BA7E8C |= 0x1000000u; /*0x8a88f5*/
  unk_BA7E74 |= 0x1000000u; /*0x8a88fb*/
  v11 = unk_BA7E00; /*0x8a894b*/
  v12 = unk_BA7DF8 & 0xFFF70001; /*0x8a895c*/
  unk_BA7DB4 &= ~0x40000u; /*0x8a8962*/
  unk_BA7DFC &= ~0x40000u; /*0x8a8968*/
  v13 = unk_BA7E18; /*0x8a8974*/
  v14 = unk_BA7E1C; /*0x8a897a*/
  unk_BA7DB8 &= ~0x40000u; /*0x8a8985*/
  unk_BA7DBC &= ~0x40000u; /*0x8a898b*/
  unk_BA7DC0 &= ~0x40000u; /*0x8a8991*/
  unk_BA7DC4 &= ~0x40000u; /*0x8a8997*/
  unk_BA7DC8 &= ~0x40000u; /*0x8a899d*/
  unk_BA7DCC &= ~0x40000u; /*0x8a89a3*/
  unk_BA7DD4 &= ~0x40000u; /*0x8a89a9*/
  unk_BA7DD8 &= ~0x40000u; /*0x8a89af*/
  unk_BA7DDC &= ~0x40000u; /*0x8a89b5*/
  unk_BA7DE4 &= ~0x40000u; /*0x8a89bb*/
  unk_BA7DE8 &= ~0x40000u; /*0x8a89c1*/
  unk_BA7DF4 &= ~0x40000u; /*0x8a89c7*/
  unk_BA7DF0 &= ~0x40000u; /*0x8a89cd*/
  unk_BA7E10 &= ~0x40000u; /*0x8a89d3*/
  unk_BA7E20 &= ~0x40000u; /*0x8a89d9*/
  unk_BA7E24 &= ~0x40000u; /*0x8a89df*/
  unk_BA7DB4 &= ~0x8000u; /*0x8a89e5*/
  unk_BA7DFC &= ~0x8000u; /*0x8a89ef*/
  unk_BA7E90 = (unsigned int)&loc_800000 | v10 | 0x4DD71E | 0x20000; /*0x8a8a15*/
  unk_BA7DD0 &= 0xFFEBFFFF; /*0x8a8a38*/
  v15 = unk_BA7DEC & 0xFFFBFFFD; /*0x8a8a5e*/
  unk_BA7E88 = v9 | 0x101C7BC; /*0x8a8a61*/
  v16 = unk_BA7DE0; /*0x8a8a67*/
  unk_BA7E00 = v11 & 0xFFFBFEFF; /*0x8a8a6d*/
  v17 = unk_BA7E04; /*0x8a8a73*/
  unk_BA7DF8 = v12 & 0x82C8FFFF; /*0x8a8a79*/
  v18 = unk_BA7E28 & 0xFFFBFFFF; /*0x8a8a92*/
  unk_BA7DB8 &= ~0x8000u; /*0x8a8a97*/
  unk_BA7E10 &= ~0x8000u; /*0x8a8ab7*/
  unk_BA7E10 &= ~0x80u; /*0x8a8ac1*/
  v19 = unk_BA7E10; /*0x8a8ad0*/
  unk_BA7DCC &= ~0x8000u; /*0x8a8adb*/
  unk_BA7E14 &= ~0x80u; /*0x8a8ae5*/
  unk_BA7DCC &= ~0x1000000u; /*0x8a8af4*/
  unk_BA7DDC &= ~0x8000u; /*0x8a8afe*/
  unk_BA7DCC &= ~0x2000000u; /*0x8a8b0d*/
  unk_BA7DBC &= ~0x8000u; /*0x8a8b17*/
  unk_BA7DC0 &= ~0x8000u; /*0x8a8b21*/
  unk_BA7DC4 &= ~0x8000u; /*0x8a8b2b*/
  unk_BA7DC8 &= ~0x8000u; /*0x8a8b35*/
  unk_BA7E00 &= ~0x8000u; /*0x8a8b3f*/
  unk_BA7DDC &= ~0x2000000u; /*0x8a8b49*/
  unk_BA7DCC &= ~0x4000000u; /*0x8a8b53*/
  unk_BA7DD0 &= ~0x8000u; /*0x8a8b62*/
  unk_BA7DD4 &= ~0x8000u; /*0x8a8b6c*/
  unk_BA7DD8 &= ~0x8000u; /*0x8a8b76*/
  unk_BA7DE4 &= ~0x8000u; /*0x8a8b80*/
  unk_BA7DE8 &= ~0x8000u; /*0x8a8b8a*/
  unk_BA7DF4 &= ~0x8000u; /*0x8a8b94*/
  unk_BA7DF0 &= ~0x8000u; /*0x8a8b9e*/
  unk_BA7E20 &= ~0x8000u; /*0x8a8ba8*/
  unk_BA7E24 &= ~0x8000u; /*0x8a8bb2*/
  unk_BA7DBC &= ~0x4000000u; /*0x8a8bbc*/
  unk_BA7DDC &= ~0x4000000u; /*0x8a8bc6*/
  unk_BA7E00 &= ~0x4000000u; /*0x8a8bd0*/
  unk_BA7DC0 &= ~0x8000000u; /*0x8a8bda*/
  unk_BA7DC4 &= ~0x8000000u; /*0x8a8be4*/
  unk_BA7DC8 &= ~0x8000000u; /*0x8a8bee*/
  unk_BA7DCC &= ~0x8000000u; /*0x8a8bf8*/
  unk_BA7E10 = v19 & 0xFEFFEFFF; /*0x8a8c5d*/
  v20 = unk_BA7E14 & 0xFFFFE7FF; /*0x8a8ca0*/
  unk_BA7DD0 &= ~0x8000000u; /*0x8a8cc9*/
  unk_BA7E14 = v20; /*0x8a8cd3*/
  unk_BA7E10 &= ~0x8000000u; /*0x8a8cf4*/
  unk_BA7E14 &= ~0x8000000u; /*0x8a8cfe*/
  unk_BA7DC8 &= ~0x200000u; /*0x8a8d08*/
  unk_BA7DD8 &= ~0x8000000u; /*0x8a8d18*/
  unk_BA7DB4 &= ~0x200000u; /*0x8a8d22*/
  unk_BA7DCC &= ~0x200000u; /*0x8a8d2c*/
  unk_BA7DD4 &= ~0x200000u; /*0x8a8d36*/
  unk_BA7DDC &= ~0x200000u; /*0x8a8d40*/
  unk_BA7DE4 &= ~0x200000u; /*0x8a8d4a*/
  unk_BA7DF4 &= ~0x200000u; /*0x8a8d54*/
  unk_BA7E10 &= ~0x200000u; /*0x8a8d5e*/
  unk_BA7E14 &= ~0x200000u; /*0x8a8d68*/
  v21 = unk_BA7DC8; /*0x8a8d75*/
  unk_BA7E00 &= ~0x8000000u; /*0x8a8d81*/
  unk_BA7DE8 &= ~0x8000000u; /*0x8a8d8b*/
  unk_BA7DF0 &= ~0x8000000u; /*0x8a8d95*/
  unk_BA7DC0 &= ~0x200000u; /*0x8a8d9f*/
  unk_BA7DC4 &= ~0x200000u; /*0x8a8da9*/
  unk_BA7DD0 &= ~0x200000u; /*0x8a8db3*/
  unk_BA7DD8 &= ~0x200000u; /*0x8a8dbd*/
  unk_BA7DB4 &= ~0x40000000u; /*0x8a8dc7*/
  unk_BA7DBC &= ~0x40000000u; /*0x8a8dd1*/
  unk_BA7DCC &= ~0x40000000u; /*0x8a8ddb*/
  unk_BA7DD4 &= ~0x40000000u; /*0x8a8de5*/
  unk_BA7DDC &= ~0x40000000u; /*0x8a8def*/
  unk_BA7DE4 &= ~0x40000000u; /*0x8a8df9*/
  unk_BA7DF4 &= ~0x40000000u; /*0x8a8e03*/
  unk_BA7E10 &= ~0x40000000u; /*0x8a8e0d*/
  unk_BA7E14 &= ~0x40000000u; /*0x8a8e17*/
  unk_BA7DEC = v15 & 0x82C40003; /*0x8a8ea4*/
  unk_BA7DFC &= 0xBFDFFFFF; /*0x8a8f0c*/
  v22 = unk_BA7E2C; /*0x8a8f17*/
  unk_BA7DDC &= ~0x1000u; /*0x8a8f37*/
  unk_BA7DCC &= ~0x40u; /*0x8a8f47*/
  unk_BA7DF0 &= ~0x40u; /*0x8a8f4e*/
  unk_BA7DBC &= ~0x40u; /*0x8a8f55*/
  unk_BA7DBC &= ~0x1000u; /*0x8a8f5c*/
  unk_BA7DF0 &= ~0x1000u; /*0x8a8f6c*/
  unk_BA7DCC &= 0xFFFEFF7F; /*0x8a8f76*/
  unk_BA7E20 &= ~0x40000000u; /*0x8a8f80*/
  unk_BA7E24 &= ~0x40000000u; /*0x8a8f8a*/
  unk_BA7DB4 &= ~0x1000u; /*0x8a8f94*/
  unk_BA7DFC &= ~0x1000u; /*0x8a8f9e*/
  unk_BA7DB8 &= ~0x1000u; /*0x8a8fa8*/
  unk_BA7DD4 &= ~0x1000u; /*0x8a8fb2*/
  unk_BA7DD8 &= ~0x1000u; /*0x8a8fbc*/
  unk_BA7DE4 &= ~0x1000u; /*0x8a8fc6*/
  unk_BA7DF4 &= ~0x1000u; /*0x8a8fd0*/
  unk_BA7E14 &= ~0x1000u; /*0x8a8fda*/
  unk_BA7DF0 &= ~0x80u; /*0x8a8fe4*/
  unk_BA7DCC &= ~8u; /*0x8a8fee*/
  unk_BA7DBC &= ~0x80u; /*0x8a8ff5*/
  unk_BA7DC0 &= ~0x80000000; /*0x8a8fff*/
  unk_BA7DE0 = v16 & 0x70F051F1; /*0x8a9052*/
  unk_BA7DC4 &= ~0x80000000; /*0x8a905d*/
  unk_BA7DDC &= ~0x80000000; /*0x8a9063*/
  unk_BA7E10 &= ~0x80000000; /*0x8a9069*/
  unk_BA7E1C = v14 & 0x38CA2A0F; /*0x8a909e*/
  unk_BA7DC8 = v21 & 0x3FFEFF37; /*0x8a90b6*/
  result = v22 & 0xB2DFE78F; /*0x8a90bc*/
  unk_BA7E18 = v13 & 0x37CB6777; /*0x8a90c2*/
  unk_BA7E04 = v17 & 0x30D1500D; /*0x8a90c8*/
  unk_BA7E28 = v18 & 0xD55535; /*0x8a90ce*/
  unk_BA7E2C = result; /*0x8a90d4*/
  unk_BA7EE4 = 2; /*0x8a90d9*/
  unk_BA7ED4 = 3; /*0x8a90e3*/
  unk_BA7EDC = 4; /*0x8a90ed*/
  return result; /*0x8a90a4*/
}
