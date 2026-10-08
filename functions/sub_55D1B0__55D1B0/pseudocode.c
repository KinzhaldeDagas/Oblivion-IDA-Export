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

  v3 = *((unsigned __int16 *)this + 0x5B); /*0x55d1b8*/
  v4 = 0; /*0x55d1bf*/
  v28[0] = 0; /*0x55d1c3*/
  v28[1] = 0; /*0x55d1cb*/
  v29 = 0; /*0x55d1d3*/
  for ( i = v3; v4 < v3; ++v4 ) /*0x55d1dc*/
  {
    v5 = *((unsigned __int16 *)this + 0x5B); /*0x55d1e2*/
    v33 = 0; /*0x55d1eb*/
    if ( v5 > v4 ) /*0x55d1f0*/
    {
      v6 = *(_DWORD *)(*(this + 0x2C) + 4 * v4); /*0x55d1fc*/
      if ( v6 ) /*0x55d201*/
      {
        v7 = (*(int (__thiscall **)(int))(*(_DWORD *)v6 + 0x10))(v6); /*0x55d20c*/
        v27 = v7; /*0x55d210*/
        if ( v7 ) /*0x55d214*/
        {
          if ( *(_DWORD *)(v7 + 0xB4) ) /*0x55d21a*/
          {
            if ( sub_550800(v7) ) /*0x55d228*/
            {
              if ( NiObjectNET_FindFaceGenBaseVertexData(v27) ) /*0x55d241*/
              {
                if ( NiGeometryData_LockVertexStream(*(_DWORD *)(v27 + 0xB4), 1) ) /*0x55d261*/
                {
                  NiGeometryData_GetLockedVertexStream(*(_DWORD *)(v27 + 0xB4), (int)v28); /*0x55d27d*/
                  v32 = *(unsigned __int16 *)(*(_DWORD *)(v27 + 0xB4) + 8); /*0x55d295*/
                  if ( a2 || *((_BYTE *)this + 0x104) ) /*0x55d29b*/
                  {
                    NiGeometry_RestoreFaceGenBaseVertices(v27, (int)v28); /*0x55d2aa*/
                    v33 = 1; /*0x55d2b2*/
                    *((_BYTE *)this + 0x104) = 0; /*0x55d2b7*/
                  }
                  v19 = 0; /*0x55d2be*/
                  v8 = 0; /*0x55d2c3*/
                  v9 = sub_55CBF0(); /*0x55d2c5*/
                  v24 = v9[1]; /*0x55d2e0*/
                  v25 = v9[2]; /*0x55d2e4*/
                  v26[0] = *v9 - *((float *)this + 0x22); /*0x55d2ec*/
                  v26[1] = v24 - *((float *)this + 0x23); /*0x55d2fa*/
                  v26[2] = v25 - *((float *)this + 0x24); /*0x55d308*/
                  v22 = NiPoint3_Length(v26); /*0x55d317*/
                  v21 = flt_B120CC; /*0x55d321*/
                  v20 = flt_B120D4; /*0x55d32b*/
                  if ( unk_B333B8 ) /*0x55d311*/
                  {
                    v21 = v21 * dbl_A3C770; /*0x55d33f*/
                    v20 = dbl_A3C770 * v20; /*0x55d347*/
                  }
                  v18 = 0; /*0x55d34f*/
                  v10 = v20 + dbl_A3F3E8; /*0x55d358*/
                  if ( v10 >= v22 || *((_BYTE *)this + 0x112) || InterfaceManager_IsMenuMode() ) /*0x55d370*/
                  {
                    v10 = v21 + dbl_A3F3E8; /*0x55d381*/
                    if ( v10 >= v22 || *((_BYTE *)this + 0x112) || InterfaceManager_IsMenuMode() ) /*0x55d399*/
                      v18 = 1; /*0x55d3a2*/
                    v11 = sub_55CAA0((int)this, v22, v10, (int)&v27); /*0x55d3ae*/
                    v8 = 1; /*0x55d3b8*/
                    if ( v18 ) /*0x55d3ba*/
                    {
                      v12 = sub_55C850((int)this, v11, v10, (int)&v27); /*0x55d3c3*/
                      v13 = sub_55C900((int)this, v12, v10, (int)&v27); /*0x55d3cf*/
                      sub_55CB50((int)this, v13, (int)&v27); /*0x55d3db*/
                      v19 = 1; /*0x55d3e0*/
                    }
                  }
                  v14 = (*(int (__thiscall **)(_DWORD *))(*this + 0x9C))(this); /*0x55d3ee*/
                  if ( (*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v14 + 0x98))(v14) ) /*0x55d3fa*/
                  {
                    if ( !v19 ) /*0x55d405*/
                    {
                      v15 = (*(int (__thiscall **)(_DWORD *))(*this + 0x9C))(this); /*0x55d415*/
                      v16 = ((double (__thiscall *)(int, _DWORD))*(_DWORD *)(*(_DWORD *)v15 + 0x5C))(v15, 0); /*0x55d420*/
                      if ( v16 > *(float *)&SrcStr ) /*0x55d42d*/
                      {
                        if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 7) + 0x98))(*(this + 7)) ) /*0x55d43a*/
                          sub_55C900((int)this, v16, v10, (int)&v27); /*0x55d447*/
                      }
                    }
                  }
                  else if ( !v8 && flt_B120CC - dbl_A3F3E8 < v22 ) /*0x55d469*/
                  {
                    v17 = (*(int (__thiscall **)(_DWORD *))(*this + 0x9C))(this); /*0x55d475*/
                    (*(void (__thiscall **)(int, _DWORD, int, int, int, int, _DWORD))(*(_DWORD *)v17 + 0x78))( /*0x55d48e*/
                      v17,
                      0.0,
                      1,
                      1,
                      1,
                      1,
                      0);
                  }
                  NiGeometryData_UnlockVertexStream(*(_DWORD *)(v27 + 0xB4)); /*0x55d49a*/
                  v3 = i; /*0x55d49f*/
                }
              }
            }
          }
        }
      }
    }
  }
}
