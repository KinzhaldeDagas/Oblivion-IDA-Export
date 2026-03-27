double __thiscall sub_784210(float *this, float a2)
{
  int v3; // eax
  _DWORD *v4; // esi
  signed int v5; // ebx
  double v6; // st7
  unsigned int v7; // ebp
  unsigned int v8; // eax
  float v10; // [esp+0h] [ebp-2Ch]
  float v11; // [esp+1Ch] [ebp-10h]
  float v12; // [esp+1Ch] [ebp-10h]
  float v13; // [esp+1Ch] [ebp-10h]
  float v14; // [esp+1Ch] [ebp-10h]

  v3 = *((_DWORD *)this + 0x10);
  v11 = 0.0;
  v4 = this + 0xF;
  if ( v3 )
  {
    if ( (*((_DWORD *)this + 0x11) - v3) / 0x18 == 0x1F4 )
    {
      v5 = Double_To_SInt32(a2);
      if ( v5 == 0x1F3 )
      {
        v6 = *(float *)(sub_784000(v4, 0x1F3u) + 4);
      }
      else
      {
        v12 = (a2 - (double)v5 * dbl_A8B9F8) / dbl_A8B9F8;
        v7 = sub_784000(v4, v5 + 1);
        v8 = sub_784000(v4, v5);
        v6 = (*(float *)(v7 + 4) - *(float *)(v8 + 4)) * v12 + *(float *)(v8 + 4);
      }
      v13 = v6;
      v14 = (*(this + 1) - *this) * v13 + *this;
      if ( (dword_B42960 & 1) == 0 )
      {
        dword_B42960 |= 1u;
        sub_78EAF0(&unk_B4295D);
        atexit(sub_A26E10);
      }
      v10 = -*(this + 2);
      return (float)(sub_78EA00(v10, *(this + 2)) + v14);
    }
  }
  return v11;
}
