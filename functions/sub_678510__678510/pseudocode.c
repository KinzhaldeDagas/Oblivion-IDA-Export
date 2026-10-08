// 3DTheft decode 2026-05-16: frame-loop actor process manager scheduled update dispatch before the second maintenance pass.
double __usercall sub_678510@<st0>(int a1@<ecx>, float a2@<edi>)
{
  NiTMap_TESCELL *v3; // ecx
  bool v4; // zf
  double result; // st7
  double v6; // st6
  int v7; // eax
  char v8; // cl
  double v9; // st4
  double v10; // st5
  double v11; // st6
  double v12; // st5
  float v13; // [esp+0h] [ebp-14h]
  float v14; // [esp+0h] [ebp-14h]
  float v15; // [esp+0h] [ebp-14h]
  float v16; // [esp+0h] [ebp-14h]
  float v17; // [esp+Ch] [ebp-8h]
  float v18; // [esp+10h] [ebp-4h]
  float v19; // [esp+10h] [ebp-4h]

  v3 = (NiTMap_TESCELL *)LODWORD(qword_B3BB2C[0x115]); /*0x678516*/
  v4 = LODWORD(qword_B3BB2C[0x115]) == 0; /*0x67851c*/
  LODWORD(qword_B3BB2C[0x72]) = 0x6E; /*0x67851e*/
  if ( !v4 ) /*0x678528*/
    sub_683420(v3); /*0x67852a*/
  sub_60DEA0(); /*0x67852f*/
  v17 = *(float *)&MEMORY[0xB33E90][0xC]; /*0x67853a*/
  v18 = qword_B3BB2C[0x71] + v17; /*0x67854b*/
  result = v18; /*0x67854f*/
  sub_673B10(v18); /*0x678556*/
  v6 = v17; /*0x67855b*/
  v7 = Double_To_SInt32(v18); /*0x678569*/
  v8 = 1; /*0x678576*/
  v19 = *(float *)(a1 + 0x24) + v17; /*0x678578*/
  v9 = v19; /*0x67857c*/
  *(float *)(a1 + 0x24) = v19; /*0x678580*/
  if ( v7 >= 0x32 ) /*0x678585*/
  {
    v11 = 0.0; /*0x6785dc*/
  }
  else if ( v7 >= 0xA ) /*0x67858a*/
  {
    if ( v9 >= 1.0 ) /*0x6785b6*/
    {
      v11 = 0.0; /*0x6785d1*/
      *(float *)(a1 + 0x24) = 0.0; /*0x6785d5*/
    }
    else
    {
      v8 = 0; /*0x6785ba*/
      v12 = v9 + (1.0 - v6) * dbl_A2FAA0; /*0x6785c8*/
      v11 = 0.0; /*0x6785c8*/
      *(float *)(a1 + 0x24) = v12; /*0x6785ca*/
    }
  }
  else
  {
    v10 = 0.0; /*0x67858c*/
    if ( v9 >= 1.0 ) /*0x678597*/
    {
      v11 = 0.0; /*0x6785a6*/
    }
    else
    {
      v8 = 0; /*0x67859b*/
      v10 = v6 + v9; /*0x67859d*/
      v11 = 0.0; /*0x67859d*/
    }
    *(float *)(a1 + 0x24) = v10; /*0x67859f*/
  }
  LODWORD(qword_B3BB2C[0x72]) = 0x78; /*0x6785e2*/
  if ( v8 ) /*0x6785ec*/
  {
    if ( *(_BYTE *)(a1 + 0xA1) ) /*0x6785ee*/
    {
      if ( !unk_B333B8 ) /*0x6785f7*/
      {
        v13 = v11; /*0x678605*/
        sub_673C10((ActorList *)a1, v13, 0); /*0x678608*/
        v11 = 0.0; /*0x67860d*/
      }
    }
    LODWORD(qword_B3BB2C[0x72]) = 0x82; /*0x67860f*/
    if ( *(_BYTE *)(a1 + 0xA3) ) /*0x678619*/
    {
      if ( !unk_B333B8 ) /*0x678622*/
      {
        v14 = v11; /*0x678630*/
        sub_673E90(*(float *)&a1, a2, v14, 0.0); /*0x678633*/
        v11 = 0.0; /*0x678638*/
      }
    }
    LODWORD(qword_B3BB2C[0x72]) = 0x8C; /*0x67863a*/
    if ( *(_BYTE *)(a1 + 0xA2) ) /*0x678644*/
    {
      v15 = v11; /*0x678652*/
      sub_674200((ActorList *)a1, a2, v15, 0.0); /*0x678655*/
      v11 = 0.0; /*0x67865a*/
    }
  }
  LODWORD(qword_B3BB2C[0x72]) = 0xB4; /*0x67865c*/
  if ( *(_BYTE *)(a1 + 0xA0) ) /*0x678666*/
  {
    v16 = v11; /*0x678674*/
    sub_677EC0(a1, a2, result, v11, v16, 0.0); /*0x678677*/
  }
  LODWORD(qword_B3BB2C[0x72]) = 0xBE; /*0x67867c*/
  return result; /*0x678686*/
}
