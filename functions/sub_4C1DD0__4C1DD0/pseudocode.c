float *__thiscall sub_4C1DD0(_DWORD *this, int a2, int a3, float *a4)
{
  _DWORD *v4; // eax
  int v5; // ecx
  int v6; // eax
  bool v7; // zf
  int *v8; // eax
  int v9; // eax
  int v10; // eax
  float *result; // eax
  double v12; // st7
  float v13; // [esp+8h] [ebp-4h]

  v4 = (_DWORD *)*(this + 9); /*0x4c1dd0*/
  if ( v4 ) /*0x4c1dd8*/
  {
    v5 = v4[1]; /*0x4c1dda*/
    if ( v5 ) /*0x4c1ddf*/
    {
      if ( *(_DWORD *)(v5 + 4 * a2) ) /*0x4c1de5*/
      {
        v6 = *(_DWORD *)(v5 + 4 * a2) + 0xC * a3; /*0x4c1df5*/
LABEL_11:
        *a4 = *(float *)v6; /*0x4c1e35*/
        a4[1] = *(float *)(v6 + 4); /*0x4c1e40*/
        result = *(float **)(v6 + 8); /*0x4c1e43*/
        *((_DWORD *)a4 + 2) = result; /*0x4c1e46*/
        return result; /*0x4c1e4c*/
      }
      if ( *v4 ) /*0x4c1dfa*/
      {
        v7 = *(_DWORD *)(*v4 + 4 * a2) == 0; /*0x4c1e01*/
        v8 = (int *)(*v4 + 4 * a2); /*0x4c1e05*/
        if ( !v7 ) /*0x4c1e08*/
        {
          v9 = *v8; /*0x4c1e0a*/
          if ( *(_WORD *)(v9 + 0xB6) ) /*0x4c1e0c*/
            v10 = **(_DWORD **)(v9 + 0xB0); /*0x4c1e20*/
          else
            v10 = 0; /*0x4c1e16*/
          v6 = *(_DWORD *)(*(_DWORD *)(v10 + 0xB4) + 0x1C) + 0xC * a3; /*0x4c1e32*/
          goto LABEL_11; /*0x4c1e32*/
        }
      }
    }
  }
  v12 = flt_A37448; /*0x4c1e5f*/
  *a4 = 0.0; /*0x4c1e69*/
  v13 = v12; /*0x4c1e6b*/
  a4[1] = 0.0; /*0x4c1e73*/
  a4[2] = v13; /*0x4c1e76*/
  return a4; /*0x4c1e49*/
}
