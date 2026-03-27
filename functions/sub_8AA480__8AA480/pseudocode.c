void __thiscall sub_8AA480(unsigned int *this, unsigned int a2)
{
  double v4; // st7
  unsigned int v5; // edx
  unsigned int v6; // ebx
  float *v7; // ecx
  unsigned int v8; // ebp
  void *v9; // eax
  unsigned int v10; // ebx
  unsigned int v11; // edx
  bool v12; // zf
  int v13; // ecx
  _DWORD *v14; // eax
  unsigned int v15; // ecx
  float v16; // ebp
  int v17; // edx
  float *v18; // eax
  float v19; // [esp+18h] [ebp-24h]
  float v20; // [esp+20h] [ebp-1Ch]
  float v21; // [esp+40h] [ebp+4h]
  unsigned int v22; // [esp+40h] [ebp+4h]

  if ( a2 != *(this + 2) )
  {
    v4 = flt_A30634;
    if ( a2 < *(this + 3) )
    {
      v5 = 0xC * a2;
      v6 = a2;
      v21 = 0.0 / fCostant_100;
      do
      {
        v7 = (float *)(v5 + *(this + 1));
        if ( v4 != *v7 || v21 != v7[1] || v7[2] != v21 )
        {
          v19 = v4;
          *v7 = v19;
          v7[1] = v21;
          v7[2] = v21;
          --*(this + 4);
        }
        ++v6;
        v5 += 0xC;
      }
      while ( v6 < *(this + 3) );
      *(this + 3) = a2;
    }
    v8 = *(this + 1);
    v22 = v8;
    *(this + 2) = a2;
    if ( a2 )
    {
      v9 = (void *)FormHeapAlloc((0xC * (unsigned __int64)a2) >> 0x20 != 0 ? 0xFFFFFFFF : 0xC * a2);
      v10 = (unsigned int)v9;
      if ( v9 )
        sub_401080(v9, 0xC, a2, (void *(__thiscall *)(void *))sub_8AA460);
      else
        v10 = 0;
      v11 = 0;
      v12 = *(this + 3) == 0;
      *(this + 1) = v10;
      if ( !v12 )
      {
        v13 = 0;
        do
        {
          v14 = (_DWORD *)(v13 + *(this + 1));
          *v14 = *(_DWORD *)(v13 + v8);
          v14[1] = *(_DWORD *)(v13 + v8 + 4);
          ++v11;
          v14[2] = *(_DWORD *)(v13 + v8 + 8);
          v13 += 0xC;
        }
        while ( v11 < *(this + 3) );
      }
      v15 = *(this + 3);
      if ( v15 < *(this + 2) )
      {
        v16 = flt_A30634;
        v17 = 0xC * v15;
        v20 = 0.0 / fCostant_100;
        do
        {
          v18 = (float *)(v17 + *(this + 1));
          *v18 = v16;
          v18[1] = v20;
          ++v15;
          v18[2] = v20;
          v17 += 0xC;
        }
        while ( v15 < *(this + 2) );
        v8 = v22;
      }
    }
    else
    {
      *(this + 1) = 0;
    }
    FormHeapFree(v8);
  }
}
