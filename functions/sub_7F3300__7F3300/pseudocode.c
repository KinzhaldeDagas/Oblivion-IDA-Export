void __thiscall sub_7F3300(float *this, float a2, float a3, float a4, int a5)
{
  double v5; // st7
  double v7; // st7
  int v8; // eax
  int v9; // edx
  int v10; // eax
  int v11; // eax
  double v12; // st7
  int v13; // eax
  float v14; // [esp+Ch] [ebp+4h]
  float v15; // [esp+Ch] [ebp+4h]
  float v16; // [esp+Ch] [ebp+4h]
  float v17; // [esp+10h] [ebp+8h]

  v5 = a2; /*0x7f3300*/
  if ( a2 > dbl_A2FC80 ) /*0x7f3312*/
    v5 = kFaceEarNormalMatchRadius; /*0x7f3316*/
  v14 = v5; /*0x7f331c*/
  v15 = v14 * a4; /*0x7f3329*/
  sub_7F2AB0((int)this, v15); /*0x7f3334*/
  v16 = *(this + 0x54); /*0x7f333f*/
  if ( a3 >= (double)v16 ) /*0x7f3352*/
    v7 = a3; /*0x7f3360*/
  else
    v7 = v16; /*0x7f335a*/
  v8 = *((_DWORD *)this + 0x1B); /*0x7f3362*/
  v9 = 0x10 * *((_DWORD *)this + 0x21); /*0x7f3378*/
  *(this + 0x24) = *(float *)(0x10 * *((_DWORD *)this + 0x22) + v8 + 4); /*0x7f337b*/
  v17 = *(float *)(v9 + v8 + 4); /*0x7f3385*/
  *(this + 0x63) = v17; /*0x7f338d*/
  if ( -*(this + 0x54) >= v17 ) /*0x7f33a2*/
  {
    v10 = Double_To_SInt32(v7); /*0x7f33ac*/
    sub_7F2BA0((int)this, v10); /*0x7f33b4*/
    *(this + 0x63) = *(float *)(0x10 * *((_DWORD *)this + 0x21) + *((_DWORD *)this + 0x1B) + 4); /*0x7f33c9*/
  }
  if ( *(this + 0x24) >= v7 ) /*0x7f33e0*/
  {
    v12 = v7 + *(this + 0x54); /*0x7f3415*/
    if ( *(this + 0x24) >= v12 ) /*0x7f3428*/
    {
      v13 = Double_To_SInt32((*(this + 0x24) - v12) / *(this + 0x54)); /*0x7f3436*/
      sub_7F2B30((int)this, v13); /*0x7f343e*/
      *(this + 0x24) = *(float *)(0x10 * *((_DWORD *)this + 0x22) + *((_DWORD *)this + 0x1B) + 4); /*0x7f3453*/
    }
  }
  else
  {
    v11 = Double_To_SInt32((v7 - *(this + 0x24)) / *(this + 0x54)); /*0x7f33ee*/
    sub_7F3130(this, v11); /*0x7f33f6*/
    *(this + 0x24) = *(float *)(0x10 * *((_DWORD *)this + 0x22) + *((_DWORD *)this + 0x1B) + 4); /*0x7f340b*/
  }
}
