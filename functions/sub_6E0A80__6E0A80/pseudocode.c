char __thiscall sub_6E0A80(int this, float applicationTime)
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

  LOBYTE(v3) = *(_BYTE *)(this + 8) >> 5; /*0x6e0a89*/
  if ( (*(_BYTE *)(this + 8) & 0x20) != 0 ) /*0x6e0a8e*/
  {
    *(float *)(this + 0x28) = flt_A7A164; /*0x6e0a96*/
LABEL_6:
    v5 = *(_DWORD *)(this + 0x3C); /*0x6e0ac9*/
    if ( v5 ) /*0x6e0ace*/
    {
      LOBYTE(v3) = (*(int (__stdcall **)(_DWORD, _DWORD, float *))(*(_DWORD *)v5 + 0x54))( /*0x6e0ae9*/
                     *(float *)(this + 0x28),
                     *(_DWORD *)(this + 0x30),
                     &v14);
      if ( (_BYTE)v3 ) /*0x6e0aed*/
      {
        v11 = v14; /*0x6e0af7*/
        v12 = v15; /*0x6e0aff*/
        v13 = v16; /*0x6e0b07*/
        if ( v14 >= 0.0 ) /*0x6e0b16*/
        {
          v6 = 1.0; /*0x6e0b24*/
          if ( v14 > 1.0 ) /*0x6e0b29*/
            v11 = 1.0; /*0x6e0b2d*/
        }
        else
        {
          v6 = 1.0; /*0x6e0b18*/
          v11 = 0.0; /*0x6e0b1a*/
        }
        if ( v15 >= 0.0 ) /*0x6e0b3a*/
        {
          if ( v15 > v6 ) /*0x6e0b4f*/
            v12 = v6; /*0x6e0b53*/
          v7 = 0.0; /*0x6e0b59*/
          v8 = v16; /*0x6e0b59*/
        }
        else
        {
          v7 = 0.0; /*0x6e0b3e*/
          v8 = v16; /*0x6e0b3e*/
          v12 = 0.0; /*0x6e0b40*/
        }
        if ( v7 <= v8 ) /*0x6e0b62*/
        {
          if ( v8 > v6 ) /*0x6e0b77*/
            v13 = v6; /*0x6e0b79*/
        }
        else
        {
          v13 = v7; /*0x6e0b68*/
        }
        v3 = *(NiObject **)(this + 0x30); /*0x6e0b81*/
        if ( v3 ) /*0x6e0b86*/
        {
          v9 = NiRTTI_Cast((BSStringT *)&stru_B3FD14, v3); /*0x6e0b9b*/
          if ( (*(_BYTE *)(this + 0x40) & 1) != 0 ) /*0x6e0b9f*/
          {
            sub_4820F0(v9, &v11); /*0x6e0ba6*/
            sub_482120(v9, &stru_B3FA90); /*0x6e0bb2*/
            LOBYTE(v3) = sub_4B0BC0(v9, &stru_B3FA90); /*0x6e0bbe*/
          }
          else
          {
            sub_4820F0(v9, &stru_B3FA90); /*0x6e0bd0*/
            sub_482120(v9, &v11); /*0x6e0bdc*/
            LOBYTE(v3) = sub_4B0BC0(v9, &v11); /*0x6e0be8*/
          }
        }
      }
    }
    return (char)v3; /*0x6e0bc8*/
  }
  LOBYTE(v3) = NiTimeController_IsUpdateUnchanged((NiTimeController *)this, applicationTime); /*0x6e0aa3*/
  if ( !(_BYTE)v3 ) /*0x6e0aaa*/
    goto LABEL_6; /*0x6e0aaa*/
  v4 = *(_DWORD *)(this + 0x3C); /*0x6e0aac*/
  if ( v4 ) /*0x6e0ab1*/
  {
    LOBYTE(v3) = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 0x94))(v4); /*0x6e0abf*/
    if ( (_BYTE)v3 ) /*0x6e0ac3*/
      goto LABEL_6; /*0x6e0ac3*/
  }
  return (char)v3; /*0x6e0bc4*/
}
