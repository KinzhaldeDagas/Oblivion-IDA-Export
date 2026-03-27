int __thiscall sub_9569F0(int *this, int a2)
{
  int v3; // edx
  int v4; // eax
  int v5; // esi
  int v6; // eax
  int v7; // esi
  int v8; // edi
  int v9; // esi
  int v10; // edi
  int v11; // esi
  int v12; // eax
  int v13; // esi
  int v14; // edi
  int result; // eax
  float v16; // [esp+10h] [ebp+4h]

  v16 = *(float *)(a2 + 0xC);
  v3 = *this - 1;
  if ( *this < 4 )
  {
LABEL_11:
    if ( v3 >= 0 )
    {
      while ( 1 )
      {
        v12 = *(this + 2);
        v13 = *(_DWORD *)(v12 + 4 * v3);
        v14 = v12 + 4 * v3;
        if ( !v13 || *(float *)(v13 + 0xC) >= (double)v16 )
          break;
        --v3;
        *(_DWORD *)(v14 + 4) = v13;
        if ( v3 < 0 )
        {
          *(_DWORD *)(*(this + 2) + 4 * v3 + 4) = a2;
          result = *this + 1;
          *this = result;
          return result;
        }
      }
    }
  }
  else
  {
    while ( 1 )
    {
      v4 = *(this + 2);
      v5 = *(_DWORD *)(v4 + 4 * v3);
      if ( !v5 || *(float *)(v5 + 0xC) >= (double)v16 )
        break;
      *(_DWORD *)(v4 + 4 * v3 + 4) = v5;
      v6 = *(this + 2);
      v7 = *(_DWORD *)(v6 + 4 * v3 - 4);
      if ( !v7 || *(float *)(v7 + 0xC) >= (double)v16 )
      {
        *(_DWORD *)(*(this + 2) + 4 * (v3 - 1) + 4) = a2;
        result = *this + 1;
        *this = result;
        return result;
      }
      *(_DWORD *)(v6 + 4 * v3) = v7;
      v8 = *(this + 2);
      v9 = *(_DWORD *)(v8 + 4 * v3 - 8);
      if ( !v9 || *(float *)(v9 + 0xC) >= (double)v16 )
      {
        *(_DWORD *)(*(this + 2) + 4 * (v3 - 2) + 4) = a2;
        result = *this + 1;
        *this = result;
        return result;
      }
      *(_DWORD *)(v8 + 4 * v3 - 4) = v9;
      v10 = *(this + 2);
      v11 = *(_DWORD *)(v10 + 4 * v3 - 0xC);
      if ( !v11 || *(float *)(v11 + 0xC) >= (double)v16 )
      {
        v3 -= 3;
        break;
      }
      *(_DWORD *)(v10 + 4 * v3 - 8) = v11;
      v3 -= 4;
      if ( v3 < 3 )
        goto LABEL_11;
    }
  }
  *(_DWORD *)(*(this + 2) + 4 * v3 + 4) = a2;
  result = *this + 1;
  *this = result;
  return result;
}
