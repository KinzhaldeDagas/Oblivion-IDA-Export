int __thiscall sub_6B6C60(int *this, float a2, float a3)
{
  int result; // eax
  int v5; // ecx
  int v6; // eax
  int (__stdcall *v7)(int, float, _DWORD); // edx
  float v8; // [esp+24h] [ebp+4h]
  float v9; // [esp+24h] [ebp+4h]

  result = *this;
  if ( (*this & 1) == 0 && (result & 2) != 0 )
  {
    v5 = *(this + 0x15);
    if ( v5 )
    {
      if ( a2 <= 0.0 )
      {
        (*(void (__stdcall **)(int, _DWORD, _DWORD))(*(_DWORD *)v5 + 0x44))(v5, 1.0, 0);
      }
      else
      {
        v8 = a2 / dbl_A77238;
        (*(void (__stdcall **)(int, _DWORD, _DWORD))(*(_DWORD *)v5 + 0x44))(v5, LODWORD(v8), 0);
      }
      v6 = *(this + 0x15);
      v7 = *(int (__stdcall **)(int, float, _DWORD))(*(_DWORD *)v6 + 0x40);
      if ( a3 <= 0.0 )
      {
        result = ((int (__stdcall *)(_DWORD, _DWORD, _DWORD))v7)(v6, flt_A6D1E8, 0);
        *(this + 0xE) = 0x3B9ACA00;
      }
      else
      {
        v9 = a3 / dbl_A77238;
        ((void (__stdcall *)(int, _DWORD, _DWORD))v7)(v6, LODWORD(v9), 0);
        result = (__int64)a3;
        *(this + 0xE) = result;
      }
    }
  }
  return result;
}
