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

  v16 = *(float *)(a2 + 0xC); /*0x9569f8*/
  v3 = *this - 1; /*0x9569fe*/
  if ( *this < 4 ) /*0x956a09*/
  {
LABEL_11:
    if ( v3 >= 0 ) /*0x956aac*/
    {
      while ( 1 ) /*0x956ab0*/
      {
        v12 = *(this + 2); /*0x956ab0*/
        v13 = *(_DWORD *)(v12 + 4 * v3); /*0x956ab3*/
        v14 = v12 + 4 * v3; /*0x956ab8*/
        if ( !v13 || *(float *)(v13 + 0xC) >= (double)v16 ) /*0x956ac9*/
          break; /*0x956ac9*/
        --v3; /*0x956acb*/
        *(_DWORD *)(v14 + 4) = v13; /*0x956acc*/
        if ( v3 < 0 ) /*0x956acf*/
        {
          *(_DWORD *)(*(this + 2) + 4 * v3 + 4) = a2; /*0x956ad4*/
          result = *this + 1; /*0x956adb*/
          *this = result; /*0x956add*/
          return result; /*0x956ae0*/
        }
      }
    }
  }
  else
  {
    while ( 1 ) /*0x956a10*/
    {
      v4 = *(this + 2); /*0x956a10*/
      v5 = *(_DWORD *)(v4 + 4 * v3); /*0x956a13*/
      if ( !v5 || *(float *)(v5 + 0xC) >= (double)v16 ) /*0x956a2d*/
        break; /*0x956a2d*/
      *(_DWORD *)(v4 + 4 * v3 + 4) = v5; /*0x956a33*/
      v6 = *(this + 2); /*0x956a36*/
      v7 = *(_DWORD *)(v6 + 4 * v3 - 4); /*0x956a39*/
      if ( !v7 || *(float *)(v7 + 0xC) >= (double)v16 ) /*0x956a54*/
      {
        *(_DWORD *)(*(this + 2) + 4 * (v3 - 1) + 4) = a2; /*0x956ae7*/
        result = *this + 1; /*0x956aee*/
        *this = result; /*0x956af0*/
        return result; /*0x956af3*/
      }
      *(_DWORD *)(v6 + 4 * v3) = v7; /*0x956a5a*/
      v8 = *(this + 2); /*0x956a5c*/
      v9 = *(_DWORD *)(v8 + 4 * v3 - 8); /*0x956a5f*/
      if ( !v9 || *(float *)(v9 + 0xC) >= (double)v16 ) /*0x956a77*/
      {
        *(_DWORD *)(*(this + 2) + 4 * (v3 - 2) + 4) = a2; /*0x956afc*/
        result = *this + 1; /*0x956b03*/
        *this = result; /*0x956b05*/
        return result; /*0x956b08*/
      }
      *(_DWORD *)(v8 + 4 * v3 - 4) = v9; /*0x956a79*/
      v10 = *(this + 2); /*0x956a7d*/
      v11 = *(_DWORD *)(v10 + 4 * v3 - 0xC); /*0x956a80*/
      if ( !v11 || *(float *)(v11 + 0xC) >= (double)v16 ) /*0x956a98*/
      {
        v3 -= 3; /*0x956b0b*/
        break; /*0x956b0b*/
      }
      *(_DWORD *)(v10 + 4 * v3 - 8) = v11; /*0x956a9a*/
      v3 -= 4; /*0x956a9e*/
      if ( v3 < 3 ) /*0x956aa4*/
        goto LABEL_11; /*0x956aa4*/
    }
  }
  *(_DWORD *)(*(this + 2) + 4 * v3 + 4) = a2; /*0x956b0e*/
  result = *this + 1; /*0x956b18*/
  *this = result; /*0x956b1a*/
  return result; /*0x956ada*/
}
