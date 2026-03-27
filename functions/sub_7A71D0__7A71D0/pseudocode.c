void __thiscall sub_7A71D0(_BYTE *this, char a2)
{
  double v3; // st7
  int v4; // edi
  double v5; // st7
  rsize_t v6; // [esp+0h] [ebp-B4h]
  float v7; // [esp+14h] [ebp-A0h]
  float v8; // [esp+18h] [ebp-9Ch]
  float v9; // [esp+1Ch] [ebp-98h]
  int v10; // [esp+20h] [ebp-94h] BYREF
  char v11; // [esp+24h] [ebp-90h]
  int v12; // [esp+34h] [ebp-80h]
  int v13; // [esp+38h] [ebp-7Ch]
  int v14; // [esp+3Ch] [ebp-78h] BYREF
  char v15; // [esp+40h] [ebp-74h]
  int v16; // [esp+50h] [ebp-64h]
  int v17; // [esp+54h] [ebp-60h]
  _DWORD v18[3]; // [esp+58h] [ebp-5Ch] BYREF
  _BYTE v19[20]; // [esp+64h] [ebp-50h] BYREF
  int v20; // [esp+78h] [ebp-3Ch]
  int v21; // [esp+7Ch] [ebp-38h]
  _BYTE v22[40]; // [esp+80h] [ebp-34h] BYREF
  int v23; // [esp+B0h] [ebp-4h]

  *(this + 0x10) = 0;
  *((_DWORD *)this + 2) = FormHeapAlloc(0xF0u);
  v8 = 0.0;
  *((_DWORD *)this + 3) = FormHeapAlloc(0xF0u);
  if ( a2 )
    v3 = flt_A34BA0;
  else
    v3 = flt_A57604;
  v9 = v3;
  v4 = 0;
  while ( 1 )
  {
    *(float *)(*((_DWORD *)this + 2) + 4 * v4) = v8;
    v7 = ((double (__thiscall *)(_BYTE *, _DWORD))*(_DWORD *)(*(_DWORD *)this + 0xC))(this, LODWORD(v8));
    *(float *)(*((_DWORD *)this + 3) + 4 * v4) = v7;
    if ( v7 <= 0.0 )
      break;
    ++v4;
    v8 = v9 / v7 + v8;
    if ( v4 >= 0x3C )
    {
      LODWORD(v6) = 0x16;
      v17 = 0xF;
      v16 = 0;
      v15 = 0;
      sub_414500(&v14, v4, "Newran: area too large", v6);
      v23 = 0;
      std::exception::exception((std::exception *)v18);
      LOBYTE(v23) = 1;
      v18[0] = &std::runtime_error::`vftable';
      v21 = 0xF;
      v20 = 0;
      v19[4] = 0;
      sub_414420((int)v19, &v14, 0, 0xFFFFFFFF);
      LOBYTE(v23) = 0;
      ThrowException__((int)v18, &_TI2_AVruntime_error_std__);
    }
  }
  if ( v4 < 0x32 )
  {
    LODWORD(v6) = 0x16;
    v13 = 0xF;
    v12 = 0;
    v11 = 0;
    sub_414500(&v10, v4, "Newran: area too small", v6);
    v23 = 2;
    sub_6F7DD0((std::exception *)v22, &v10);
    ThrowException__((int)v22, &_TI2_AVruntime_error_std__);
  }
  if ( a2 )
    v5 = (double)v4 + (double)v4;
  else
    v5 = (double)v4;
  *((float *)this + 1) = v5;
}
