void __thiscall sub_6DEB70(int this, int a2)
{
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  double v6; // st7
  double v7; // st5
  double v8; // st6
  float applicationTime; // [esp+8h] [ebp-24h]
  float v10; // [esp+Ch] [ebp-20h]
  float v11; // [esp+10h] [ebp-1Ch]
  float v12; // [esp+14h] [ebp-18h]
  float v13; // [esp+18h] [ebp-14h]
  float v14; // [esp+1Ch] [ebp-10h]
  _BYTE v15[12]; // [esp+20h] [ebp-Ch] BYREF

  if ( (*(_BYTE *)(this + 8) & 0x20) != 0 ) /*0x6deb84*/
  {
    *(float *)(this + 0x28) = flt_A7A164; /*0x6deb8c*/
  }
  else if ( NiTimeController_IsUpdateUnchanged((NiTimeController *)this, *(float *)&a2) ) /*0x6deb99*/
  {
    v3 = *(_DWORD *)(this + 0x3C); /*0x6deba2*/
    if ( !v3 || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v3 + 0x94))(v3) ) /*0x6debb5*/
LABEL_26:
      JUMPOUT(0x6DED05); /*0x6ded05*/
  }
  v4 = *(_DWORD *)(this + 0x3C); /*0x6debbf*/
  if ( v4 ) /*0x6debc4*/
  {
    if ( (*(unsigned __int8 (__cdecl **)(_DWORD, _DWORD, _BYTE *))(*(_DWORD *)v4 + 0x54))( /*0x6debdf*/
           *(float *)(this + 0x28),
           *(_DWORD *)(this + 0x30),
           v15) )
    {
      v5 = *(_DWORD *)(this + 0x30); /*0x6debed*/
      applicationTime = v12; /*0x6debf0*/
      v10 = v13; /*0x6debf8*/
      v11 = v14; /*0x6dec00*/
      if ( v12 >= 0.0 ) /*0x6dec0f*/
      {
        v6 = 1.0; /*0x6dec1d*/
        if ( v12 > 1.0 ) /*0x6dec22*/
          applicationTime = 1.0; /*0x6dec26*/
      }
      else
      {
        v6 = 1.0; /*0x6dec11*/
        applicationTime = 0.0; /*0x6dec13*/
      }
      if ( v13 >= 0.0 ) /*0x6dec33*/
      {
        if ( v13 > v6 ) /*0x6dec48*/
          v10 = v6; /*0x6dec4c*/
        v7 = 0.0; /*0x6dec52*/
        v8 = v14; /*0x6dec52*/
      }
      else
      {
        v7 = 0.0; /*0x6dec37*/
        v8 = v14; /*0x6dec37*/
        v10 = 0.0; /*0x6dec39*/
      }
      if ( v7 <= v8 ) /*0x6dec5b*/
      {
        if ( v8 > v6 ) /*0x6dec70*/
          v11 = v6; /*0x6dec72*/
      }
      else
      {
        v11 = v7; /*0x6dec61*/
      }
      switch ( *(_BYTE *)(this + 0x40) & 7 ) /*0x6dec86*/
      {
        case 0: /*0x6dec86*/
          ++*(_DWORD *)(v5 + 0x54); /*0x6dec95*/
          *(float *)(v5 + 0x1C) = applicationTime; /*0x6dec98*/
          *(float *)(v5 + 0x20) = v10; /*0x6deca0*/
          *(float *)(v5 + 0x24) = v11; /*0x6deca3*/
          return; /*0x6decaa*/
        case 1: /*0x6dec86*/
          ++*(_DWORD *)(v5 + 0x54); /*0x6decb5*/
          *(float *)(v5 + 0x28) = applicationTime; /*0x6decb8*/
          *(float *)(v5 + 0x2C) = v10; /*0x6decc0*/
          *(float *)(v5 + 0x30) = v11; /*0x6decc3*/
          return; /*0x6decca*/
        case 2: /*0x6dec86*/
          ++*(_DWORD *)(v5 + 0x54); /*0x6decd5*/
          *(float *)(v5 + 0x34) = applicationTime; /*0x6decd8*/
          *(float *)(v5 + 0x38) = v10; /*0x6dece0*/
          *(float *)(v5 + 0x3C) = v11; /*0x6dece3*/
          return; /*0x6decea*/
        case 3: /*0x6dec86*/
          ++*(_DWORD *)(v5 + 0x54); /*0x6decf5*/
          *(float *)(v5 + 0x40) = applicationTime; /*0x6decf8*/
          *(float *)(v5 + 0x44) = v10; /*0x6decff*/
          *(float *)(v5 + 0x48) = v11; /*0x6ded02*/
          def_6DEC86(a2); /*0x6ded03*/
          return;
        default:
          goto LABEL_26;
      }
    }
  }
  goto LABEL_26;
}
