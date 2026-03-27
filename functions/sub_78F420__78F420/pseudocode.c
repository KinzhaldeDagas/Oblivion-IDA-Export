_DWORD *__thiscall sub_78F420(int this, unsigned __int16 a2, _DWORD *a3)
{
  _DWORD *result; // eax
  double v5; // st7
  int v6; // ebp
  int v7; // esi
  int v8; // ebx
  int v9; // esi
  double v10; // st7
  int v11; // ecx
  int v12; // esi
  __int16 v13; // ax
  int v14; // edx
  __int16 v15; // ax
  int v16; // esi
  unsigned __int16 v17; // ax
  bool v18; // zf
  int v19; // [esp+4h] [ebp-Ch]
  int v20; // [esp+8h] [ebp-8h]
  float v21; // [esp+Ch] [ebp-4h]
  float v22; // [esp+14h] [ebp+4h]
  float v23; // [esp+14h] [ebp+4h]

  result = (_DWORD *)*(unsigned __int16 *)(this + 0x20);
  if ( (unsigned __int16)result >= 2u )
  {
    v19 = (unsigned __int16)result;
    v5 = (double)(unsigned __int16)result / (double)(unsigned __int16)result;
    v6 = *(_DWORD *)(this + 0x1C) - 1;
    v7 = 2 * v6 * ((unsigned __int16)result + 2);
    v8 = FormHeapAlloc((unsigned __int64)(unsigned int)v7 >> 0x1F != 0 ? 0xFFFFFFFF : 4
                                                                                    * v6
                                                                                    * ((unsigned __int16)result + 2));
    sub_796100(a3, a2, v8, v7);
    v9 = 0;
    v22 = 0.0;
    if ( v6 > 0 )
    {
      v21 = v5;
      v10 = v21;
      v20 = v6;
      do
      {
        v11 = Double_To_SInt32(v10);
        v12 = v9 + 2;
        v13 = (int)v22;
        *(_WORD *)(v8 + 2 * v12 - 4) = *(_WORD *)(this + 0x20) + v13 + *(_WORD *)(this + 0x24) + 1;
        *(_WORD *)(v8 + 2 * v12 - 2) = v13 + *(_WORD *)(this + 0x24);
        v23 = v22 + v10;
        v14 = v19 - 1;
        do
        {
          v12 += 2;
          v15 = (int)v23;
          *(_WORD *)(v8 + 2 * v12 - 4) = *(_WORD *)(this + 0x20) + v15 + *(_WORD *)(this + 0x24) + 1;
          --v14;
          *(_WORD *)(v8 + 2 * v12 - 2) = v15 + *(_WORD *)(this + 0x24);
          v23 = v23 + v10;
        }
        while ( v14 );
        v16 = v12 + 1;
        *(_WORD *)(v8 + 2 * v16++ - 2) = *(_WORD *)(this + 0x24) + v11 + 2 * *(_WORD *)(this + 0x20) + 1;
        *(_WORD *)(v8 + 2 * v16 - 2) = *(_WORD *)(this + 0x20) + v11 + *(_WORD *)(this + 0x24);
        v17 = *(_WORD *)(this + 0x20);
        *(_WORD *)(v8 + 2 * v16++) = *(_WORD *)(this + 0x24) + v11 + v17 + 1;
        *(_WORD *)(v8 + 2 * v16) = *(_WORD *)(this + 0x20) + v11 + *(_WORD *)(this + 0x24) + 1;
        v9 = v16 + 1;
        v18 = v20-- == 1;
        v22 = (float)(v17 + v11 + 1);
      }
      while ( !v18 );
    }
    ++*((_WORD *)a3 + 0x13);
    return a3;
  }
  return result;
}
