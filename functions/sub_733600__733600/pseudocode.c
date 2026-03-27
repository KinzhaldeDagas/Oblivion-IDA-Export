void __thiscall sub_733600(unsigned int *this)
{
  signed int v2; // eax
  unsigned int v3; // eax
  _DWORD *v4; // edx
  float *v5; // eax
  double v6; // st7
  signed int v7; // ecx
  int v8; // eax
  float *v9; // eax
  float v10; // [esp+4h] [ebp-10h]
  float v11; // [esp+8h] [ebp-Ch]
  float v12; // [esp+Ch] [ebp-8h]
  float i; // [esp+10h] [ebp-4h]

  if ( !*(this + 7) )
    *(this + 7) = (unsigned int)(this + 3);
  v2 = *(_DWORD *)(*(this + 7) + 0xC);
  *(this + 8) = v2;
  if ( v2 )
  {
    if ( v2 > (int)*(this + 9) )
    {
      FormHeapFree(*(this + 0xA));
      v3 = *(this + 8);
      *(this + 9) = v3;
      *(this + 0xA) = FormHeapAlloc((unsigned __int64)v3 >> 0x1E != 0 ? 0xFFFFFFFF : 4 * v3);
      FormHeapFree(*(this + 0xB));
      *(this + 0xB) = FormHeapAlloc((unsigned __int64)*(this + 9) >> 0x1E != 0 ? 0xFFFFFFFF : 4 * *(this + 9));
    }
    v4 = *(_DWORD **)(*(this + 7) + 4);
    v5 = (float *)*(this + 2);
    v6 = v5[0x19];
    v5 += 0x19;
    v7 = 0;
    v12 = v5[3];
    for ( i = v5[6]; v7 < (int)*(this + 8); *(float *)(*(this + 0xB) + 4 * v7 - 4) = v10 )
    {
      v8 = v4[2];
      v4 = (_DWORD *)*v4;
      *(_DWORD *)(*(this + 0xA) + 4 * v7) = v8;
      v9 = *(float **)(*(this + 0xA) + 4 * v7++);
      v11 = v6;
      v10 = v9[9] * v12 + v9[8] * v11 + v9[0xA] * i;
    }
    sub_733380(this, 0, *(this + 8) - 1);
  }
}
