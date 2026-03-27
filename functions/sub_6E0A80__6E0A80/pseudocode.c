char __thiscall sub_6E0A80(int this, float a2)
{
  NiObject *v3; // eax
  int v4; // ecx
  int v5; // ecx
  double v6; // st7
  double v7; // st5
  double v8; // st6
  NiObject *v9; // edi
  float v11; // [esp+10h] [ebp-18h] BYREF
  float v12; // [esp+14h] [ebp-14h]
  float v13; // [esp+18h] [ebp-10h]
  float v14; // [esp+1Ch] [ebp-Ch] BYREF
  float v15; // [esp+20h] [ebp-8h]
  float v16; // [esp+24h] [ebp-4h]

  LOBYTE(v3) = *(_BYTE *)(this + 8) >> 5;
  if ( (*(_BYTE *)(this + 8) & 0x20) != 0 )
  {
    *(float *)(this + 0x28) = flt_A7A164;
LABEL_6:
    v5 = *(_DWORD *)(this + 0x3C);
    if ( v5 )
    {
      LOBYTE(v3) = (*(int (__stdcall **)(_DWORD, _DWORD, float *))(*(_DWORD *)v5 + 0x54))(
                     *(float *)(this + 0x28),
                     *(_DWORD *)(this + 0x30),
                     &v14);
      if ( (_BYTE)v3 )
      {
        v11 = v14;
        v12 = v15;
        v13 = v16;
        if ( v14 >= 0.0 )
        {
          v6 = 1.0;
          if ( v14 > 1.0 )
            v11 = 1.0;
        }
        else
        {
          v6 = 1.0;
          v11 = 0.0;
        }
        if ( v15 >= 0.0 )
        {
          if ( v15 > v6 )
            v12 = v6;
          v7 = 0.0;
          v8 = v16;
        }
        else
        {
          v7 = 0.0;
          v8 = v16;
          v12 = 0.0;
        }
        if ( v7 <= v8 )
        {
          if ( v8 > v6 )
            v13 = v6;
        }
        else
        {
          v13 = v7;
        }
        v3 = *(NiObject **)(this + 0x30);
        if ( v3 )
        {
          v9 = NiRTTI_Cast((BSStringT *)dword_B3FD14, v3);
          if ( (*(_BYTE *)(this + 0x40) & 1) != 0 )
          {
            sub_4820F0(v9, &v11);
            sub_482120(v9, &dword_B3FA90);
            LOBYTE(v3) = sub_4B0BC0(v9, &dword_B3FA90);
          }
          else
          {
            sub_4820F0(v9, &dword_B3FA90);
            sub_482120(v9, &v11);
            LOBYTE(v3) = sub_4B0BC0(v9, &v11);
          }
        }
      }
    }
    return (char)v3;
  }
  LOBYTE(v3) = sub_6C36B0((float *)this, a2);
  if ( !(_BYTE)v3 )
    goto LABEL_6;
  v4 = *(_DWORD *)(this + 0x3C);
  if ( v4 )
  {
    LOBYTE(v3) = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 0x94))(v4);
    if ( (_BYTE)v3 )
      goto LABEL_6;
  }
  return (char)v3;
}
