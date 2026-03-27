void __thiscall sub_71AA00(_DWORD *this)
{
  int v2; // eax
  unsigned int v3; // eax
  _DWORD *v4; // ecx
  float *v5; // eax
  double v6; // st7
  int i; // eax
  int v8; // edx
  float *v9; // edx
  int j; // edx
  int v11; // eax
  float *v12; // eax
  float v13; // [esp+4h] [ebp-10h]
  float v14; // [esp+4h] [ebp-10h]
  float v15; // [esp+4h] [ebp-10h]
  float v16; // [esp+8h] [ebp-Ch]
  float v17; // [esp+Ch] [ebp-8h]
  float v18; // [esp+10h] [ebp-4h]

  if ( !*(this + 7) )
    *(this + 7) = this + 3;
  v2 = *(_DWORD *)(*(this + 7) + 0xC);
  *(this + 8) = v2;
  if ( v2 )
  {
    if ( v2 > *(this + 9) )
    {
      FormHeapFree(*(this + 0xA));
      v3 = *(this + 8);
      *(this + 9) = v3;
      *(this + 0xA) = FormHeapAlloc((unsigned __int64)v3 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * v3);
      FormHeapFree(*(this + 0xB));
      *(this + 0xB) = FormHeapAlloc((unsigned __int64)(unsigned int)*(this + 9) >> 0x1E != 0 ? 0xFFFFFFFF : 4 * *(this + 9));
    }
    v4 = *(_DWORD **)(*(this + 7) + 4);
    v5 = (float *)*(this + 2);
    v6 = v5[0x19];
    v5 += 0x19;
    v16 = v6;
    v17 = v5[3];
    v18 = v5[6];
    if ( *((_BYTE *)this + 0x35) )
    {
      for ( i = 0; i < *(this + 8); *(float *)(*(this + 0xB) + 4 * i - 4) = v14 )
      {
        v8 = v4[2];
        v4 = (_DWORD *)*v4;
        *(_DWORD *)(*(this + 0xA) + 4 * i) = v8;
        v9 = *(float **)(*(this + 0xA) + 4 * i++);
        v13 = v9[9] * v17 + v16 * v9[8] + v9[0xA] * v18;
        v14 = v13 - v9[0xB];
      }
    }
    else
    {
      for ( j = 0; j < *(this + 8); *(float *)(*(this + 0xB) + 4 * j - 4) = v15 )
      {
        v11 = v4[2];
        v4 = (_DWORD *)*v4;
        *(_DWORD *)(*(this + 0xA) + 4 * j) = v11;
        v12 = *(float **)(*(this + 0xA) + 4 * j++);
        v15 = v12[9] * v17 + v12[8] * v16 + v12[0xA] * v18;
      }
    }
    sub_733380(this, 0, *(this + 8) - 1);
  }
}
