void __thiscall sub_55D1B0(_DWORD *this, char a2)
{
  unsigned int v3; // ebx
  unsigned int v4; // ebp
  unsigned int v5; // eax
  int v6; // ecx
  int v7; // eax
  char v8; // bl
  float *v9; // eax
  double v10; // st6
  double v11; // st7
  double v12; // st7
  double v13; // st7
  int v14; // eax
  int v15; // eax
  double v16; // st7
  int v17; // eax
  char v18; // [esp+26h] [ebp-4Ah]
  char v19; // [esp+27h] [ebp-49h]
  float v20; // [esp+28h] [ebp-48h]
  float v21; // [esp+2Ch] [ebp-44h]
  float v22; // [esp+30h] [ebp-40h]
  unsigned int i; // [esp+34h] [ebp-3Ch]
  float v24; // [esp+3Ch] [ebp-34h]
  float v25; // [esp+40h] [ebp-30h]
  float v26[3]; // [esp+44h] [ebp-2Ch] BYREF
  int v27; // [esp+50h] [ebp-20h] BYREF
  _DWORD v28[2]; // [esp+54h] [ebp-1Ch] BYREF
  char v29; // [esp+5Ch] [ebp-14h]
  int v32; // [esp+68h] [ebp-8h]
  char v33; // [esp+6Ch] [ebp-4h]

  v3 = *((unsigned __int16 *)this + 0x5B);
  v4 = 0;
  v28[0] = 0;
  v28[1] = 0;
  v29 = 0;
  for ( i = v3; v4 < v3; ++v4 )
  {
    v5 = *((unsigned __int16 *)this + 0x5B);
    v33 = 0;
    if ( v5 > v4 )
    {
      v6 = *(_DWORD *)(*(this + 0x2C) + 4 * v4);
      if ( v6 )
      {
        v7 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 0x10))(v6);
        v27 = v7;
        if ( v7 )
        {
          if ( *(_DWORD *)(v7 + 0xB4) )
          {
            if ( sub_550800(v7) )
            {
              if ( sub_5508A0(v27) )
              {
                if ( sub_728AB0(*(_DWORD *)(v27 + 0xB4), 1) )
                {
                  sub_728B60(*(_DWORD *)(v27 + 0xB4), (int)v28);
                  v32 = *(unsigned __int16 *)(*(_DWORD *)(v27 + 0xB4) + 8);
                  if ( a2 || *((_BYTE *)this + 0x104) )
                  {
                    sub_5508F0(v27, (int)v28);
                    v33 = 1;
                    *((_BYTE *)this + 0x104) = 0;
                  }
                  v19 = 0;
                  v8 = 0;
                  v9 = sub_55CBF0();
                  v24 = v9[1];
                  v25 = v9[2];
                  v26[0] = *v9 - *((float *)this + 0x22);
                  v26[1] = v24 - *((float *)this + 0x23);
                  v26[2] = v25 - *((float *)this + 0x24);
                  v22 = sub_404C90(v26);
                  v21 = flt_B120CC;
                  v20 = flt_B120D4;
                  if ( byte_B333B8 )
                  {
                    v21 = v21 * dbl_A3C770;
                    v20 = dbl_A3C770 * v20;
                  }
                  v18 = 0;
                  v10 = v20 + dbl_A3F3E8;
                  if ( v10 >= v22 || *((_BYTE *)this + 0x112) || InterfaceManager_IsMenuMode() )
                  {
                    v10 = v21 + dbl_A3F3E8;
                    if ( v10 >= v22 || *((_BYTE *)this + 0x112) || InterfaceManager_IsMenuMode() )
                      v18 = 1;
                    v11 = sub_55CAA0((int)this, v22, v10, (int)&v27);
                    v8 = 1;
                    if ( v18 )
                    {
                      v12 = sub_55C850((int)this, v11, v10, (int)&v27);
                      v13 = sub_55C900((int)this, v12, v10, (int)&v27);
                      sub_55CB50((int)this, v13, (int)&v27);
                      v19 = 1;
                    }
                  }
                  v14 = (*(int (__thiscall **)(_DWORD *))(*this + 0x9C))(this);
                  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v14 + 0x98))(v14) )
                  {
                    if ( !v19 )
                    {
                      v15 = (*(int (__thiscall **)(_DWORD *))(*this + 0x9C))(this);
                      v16 = ((double (__thiscall *)(int, _DWORD))*(_DWORD *)(*(_DWORD *)v15 + 0x5C))(v15, 0);
                      if ( v16 > *(float *)&SrcStr )
                      {
                        if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 7) + 0x98))(*(this + 7)) )
                          sub_55C900((int)this, v16, v10, (int)&v27);
                      }
                    }
                  }
                  else if ( !v8 && flt_B120CC - dbl_A3F3E8 < v22 )
                  {
                    v17 = (*(int (__thiscall **)(_DWORD *))(*this + 0x9C))(this);
                    (*(void (__thiscall **)(int, _DWORD, int, int, int, int, _DWORD))(*(_DWORD *)v17 + 0x78))(
                      v17,
                      0.0,
                      1,
                      1,
                      1,
                      1,
                      0);
                  }
                  sub_728B20(*(_DWORD *)(v27 + 0xB4));
                  v3 = i;
                }
              }
            }
          }
        }
      }
    }
  }
}
