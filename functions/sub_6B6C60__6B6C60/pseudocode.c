int __thiscall sub_6B6C60(int *this, float a2, float a3)
{
  int result; // eax
  int v5; // ecx
  int v6; // eax
  int (__stdcall *v7)(int, float, _DWORD); // edx
  float v8; // [esp+24h] [ebp+4h]
  float v9; // [esp+24h] [ebp+4h]

  result = *this; /*0x6b6c66*/
  if ( (*this & 1) == 0 && (result & 2) != 0 ) /*0x6b6c72*/
  {
    v5 = *(this + 0x15); /*0x6b6c78*/
    if ( v5 ) /*0x6b6c7d*/
    {
      if ( a2 <= 0.0 ) /*0x6b6c95*/
      {
        (*(void (__stdcall **)(int, _DWORD, _DWORD))(*(_DWORD *)v5 + 0x44))(v5, 1.0, 0); /*0x6b6cbf*/
      }
      else
      {
        v8 = a2 / dbl_A77238; /*0x6b6c9f*/
        (*(void (__stdcall **)(int, _DWORD, _DWORD))(*(_DWORD *)v5 + 0x44))(v5, LODWORD(v8), 0); /*0x6b6cae*/
      }
      v6 = *(this + 0x15); /*0x6b6cd2*/
      v7 = *(int (__stdcall **)(int, float, _DWORD))(*(_DWORD *)v6 + 0x40); /*0x6b6cd7*/
      if ( a3 <= 0.0 ) /*0x6b6cdb*/
      {
        result = ((int (__stdcall *)(_DWORD, _DWORD, _DWORD))v7)(v6, flt_A6D1E8, 0); /*0x6b6d2d*/
        *(this + 0xE) = 0x3B9ACA00; /*0x6b6d2f*/
      }
      else
      {
        v9 = a3 / dbl_A77238; /*0x6b6ce3*/
        ((void (__stdcall *)(int, _DWORD, _DWORD))v7)(v6, LODWORD(v9), 0); /*0x6b6cef*/
        result = (__int64)a3; /*0x6b6d0f*/
        *(this + 0xE) = result; /*0x6b6d13*/
      }
    }
  }
  return result; /*0x6b6d1b*/
}
