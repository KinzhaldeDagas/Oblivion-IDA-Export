float *__thiscall sub_976680(float *this, int a2, float *a3)
{
  double v4; // st7
  float *v5; // ecx
  double v6; // st7
  double v7; // st7
  float *v8; // eax
  bool v9; // zf
  float v10; // ecx
  double v11; // st7
  float *result; // eax
  float v13; // edx
  double v14; // st5
  float v15; // [esp+4h] [ebp-28h]
  float v16; // [esp+4h] [ebp-28h]
  float v17; // [esp+8h] [ebp-24h]
  float v18; // [esp+8h] [ebp-24h]
  float v19; // [esp+Ch] [ebp-20h]
  float v20; // [esp+Ch] [ebp-20h]
  float v21; // [esp+10h] [ebp-1Ch]
  float v22; // [esp+10h] [ebp-1Ch]
  float v23; // [esp+14h] [ebp-18h] BYREF
  float v24; // [esp+18h] [ebp-14h]
  float v25; // [esp+1Ch] [ebp-10h]
  float v26; // [esp+20h] [ebp-Ch]
  float v27; // [esp+24h] [ebp-8h]
  float v28; // [esp+28h] [ebp-4h]

  v4 = *(this + 0x1A); /*0x976686*/
  v5 = this + 0xF; /*0x976689*/
  v15 = v4; /*0x97668c*/
  v26 = *(this + 0x15) * v15; /*0x97669d*/
  v27 = *(this + 0x16) * v15; /*0x9766a6*/
  v28 = v15 * *(this + 0x17); /*0x9766ad*/
  v16 = *(this + 0x19); /*0x9766b4*/
  v17 = *(this + 0x12) * v16; /*0x9766c5*/
  v19 = *(this + 0x13) * v16; /*0x9766ce*/
  v21 = v16 * *(this + 0x14); /*0x9766d5*/
  v23 = *v5 + v17; /*0x9766df*/
  v24 = v5[1] + v19; /*0x9766ea*/
  v25 = v5[2] + v21; /*0x9766f5*/
  v18 = v23 + v26; /*0x976701*/
  v6 = v24; /*0x976709*/
  *(this + 8) = v18; /*0x97670d*/
  v20 = v6 + v27; /*0x976714*/
  v7 = v25; /*0x97671c*/
  *(this + 9) = v20; /*0x976720*/
  v22 = v7 + v28; /*0x97672c*/
  *(this + 0xA) = v22; /*0x976734*/
  v8 = sub_9741F0(v5, &v23); /*0x976737*/
  v9 = *((_DWORD *)this + 6) == 2; /*0x97673e*/
  v26 = -*v8; /*0x976744*/
  v27 = -v8[1]; /*0x97674d*/
  v10 = v27; /*0x976751*/
  v11 = v8[2]; /*0x976755*/
  result = (float *)LODWORD(v26); /*0x976758*/
  *(this + 0xB) = v26; /*0x97675e*/
  v28 = -v11; /*0x976761*/
  v13 = v28; /*0x976765*/
  *(this + 0xC) = v10; /*0x976769*/
  *(this + 0xD) = v13; /*0x97676c*/
  if ( v9 ) /*0x97676f*/
  {
    v14 = *(this + 7); /*0x976782*/
    v26 = *a3 * v14; /*0x976788*/
    v27 = a3[1] * v14; /*0x976791*/
    v28 = v14 * a3[2]; /*0x976798*/
    *(this + 8) = *(this + 8) + v26; /*0x9767a3*/
    *(this + 9) = *(this + 9) + v27; /*0x9767ad*/
    *(this + 0xA) = v28 + *(this + 0xA); /*0x9767b7*/
    return a3; /*0x976774*/
  }
  return result; /*0x9767ba*/
}
