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

  v5 = a2;
  if ( a2 > dbl_A2FC80 )
    v5 = flt_A2FAAC;
  v14 = v5;
  v15 = v14 * a4;
  sub_7F2AB0((int)this, v15);
  v16 = *(this + 0x54);
  if ( a3 >= (double)v16 )
    v7 = a3;
  else
    v7 = v16;
  v8 = *((_DWORD *)this + 0x1B);
  v9 = 0x10 * *((_DWORD *)this + 0x21);
  *(this + 0x24) = *(float *)(0x10 * *((_DWORD *)this + 0x22) + v8 + 4);
  v17 = *(float *)(v9 + v8 + 4);
  *(this + 0x63) = v17;
  if ( -*(this + 0x54) >= v17 )
  {
    v10 = Double_To_SInt32(v7);
    sub_7F2BA0((int)this, v10);
    *(this + 0x63) = *(float *)(0x10 * *((_DWORD *)this + 0x21) + *((_DWORD *)this + 0x1B) + 4);
  }
  if ( *(this + 0x24) >= v7 )
  {
    v12 = v7 + *(this + 0x54);
    if ( *(this + 0x24) >= v12 )
    {
      v13 = Double_To_SInt32((*(this + 0x24) - v12) / *(this + 0x54));
      sub_7F2B30((int)this, v13);
      *(this + 0x24) = *(float *)(0x10 * *((_DWORD *)this + 0x22) + *((_DWORD *)this + 0x1B) + 4);
    }
  }
  else
  {
    v11 = Double_To_SInt32((v7 - *(this + 0x24)) / *(this + 0x54));
    sub_7F3130(this, v11);
    *(this + 0x24) = *(float *)(0x10 * *((_DWORD *)this + 0x22) + *((_DWORD *)this + 0x1B) + 4);
  }
}
