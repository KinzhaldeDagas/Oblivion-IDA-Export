char __thiscall sub_775FF0(float *this, int a2)
{
  int v2; // eax
  int v4; // eax
  int v5; // eax
  double v6; // st7
  float v8; // [esp+8h] [ebp-24h]
  float v9; // [esp+Ch] [ebp-20h]
  float v10; // [esp+10h] [ebp-1Ch]
  float v11; // [esp+14h] [ebp-18h]
  float v12; // [esp+18h] [ebp-14h]
  float v13; // [esp+1Ch] [ebp-10h]
  float v14; // [esp+20h] [ebp-Ch]
  float v15; // [esp+24h] [ebp-8h]
  float v16; // [esp+28h] [ebp-4h]

  v2 = *(_DWORD *)(a2 + 0xB8);
  if ( *((_DWORD *)this + 0x1A) != v2 )
  {
    *((_DWORD *)this + 0x1A) = v2;
    _memset(this, 0, 0x68);
    v4 = (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x84))(a2) - 1;
    if ( !v4 )
    {
      *(_DWORD *)this = 3;
      *(this + 0x10) = *(float *)(a2 + 0x108);
      *(this + 0x11) = *(float *)(a2 + 0x10C);
      *(this + 0x12) = *(float *)(a2 + 0x110);
      goto LABEL_7;
    }
    v5 = v4 - 1;
    if ( v5 )
    {
      if ( v5 != 1 )
      {
LABEL_7:
        v6 = *(float *)(a2 + 0xDC);
        v8 = *(float *)(a2 + 0xE0) * v6;
        v9 = *(float *)(a2 + 0xE4) * v6;
        v10 = *(float *)(a2 + 0xE8) * v6;
        v11 = *(float *)(a2 + 0xEC) * v6;
        v12 = *(float *)(a2 + 0xF0) * v6;
        v13 = *(float *)(a2 + 0xF4) * v6;
        v14 = *(float *)(a2 + 0xF8) * v6;
        v15 = *(float *)(a2 + 0xFC) * v6;
        v16 = v6 * *(float *)(a2 + 0x100);
        *(this + 9) = v8;
        *(this + 0xA) = v9;
        *(this + 0xB) = v10;
        *(this + 0xC) = 1.0;
        *(this + 1) = v11;
        *(this + 2) = v12;
        *(this + 3) = v13;
        *(this + 4) = 1.0;
        *(this + 5) = v14;
        *(this + 6) = v15;
        *(this + 7) = v16;
        *(this + 8) = 1.0;
        return 1;
      }
      *(_DWORD *)this = 2;
      *(this + 0xD) = *(float *)(a2 + 0x88);
      *(this + 0xE) = *(float *)(a2 + 0x8C);
      *(this + 0xF) = *(float *)(a2 + 0x90);
      *(this + 0x10) = *(float *)(a2 + 0x114);
      *(this + 0x11) = *(float *)(a2 + 0x118);
      *(this + 0x12) = *(float *)(a2 + 0x11C);
      *(this + 0x18) = 0.0;
      *(this + 0x19) = *(float *)(a2 + 0x120) * flt_B3F9A4 / dbl_A65A18;
      *(this + 0x14) = *(float *)(a2 + 0x124);
    }
    else
    {
      *(_DWORD *)this = 1;
      *(this + 0xD) = *(float *)(a2 + 0x88);
      *(this + 0xE) = *(float *)(a2 + 0x8C);
      *(this + 0xF) = *(float *)(a2 + 0x90);
    }
    *(this + 0x15) = *(float *)(a2 + 0x108);
    *(this + 0x16) = *(float *)(a2 + 0x10C);
    *(this + 0x17) = *(float *)(a2 + 0x110);
    *(this + 0x13) = flt_B42844;
    goto LABEL_7;
  }
  return 0;
}
