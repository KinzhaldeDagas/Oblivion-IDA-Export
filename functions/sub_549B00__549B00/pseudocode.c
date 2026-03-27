void __thiscall sub_549B00(_DWORD *this, float a2, float a3)
{
  int v4; // ecx
  int v5; // eax
  int v6; // eax
  double v7; // st7
  double v8; // st6
  double v9; // st7
  double v10; // st6
  double v11; // st5
  double v12; // st6
  double v13; // st5
  double v14; // st6
  double v15; // st5
  double v16; // st6
  double v17; // st5
  double v18; // st6
  double v19; // st6
  double v20; // [esp+14h] [ebp-14h]
  double v21; // [esp+14h] [ebp-14h]
  double v22; // [esp+14h] [ebp-14h]
  double v23; // [esp+14h] [ebp-14h]
  double v24; // [esp+14h] [ebp-14h]
  float v25; // [esp+30h] [ebp+8h]
  float v26; // [esp+30h] [ebp+8h]
  float v27; // [esp+30h] [ebp+8h]
  float v28; // [esp+30h] [ebp+8h]
  float v29; // [esp+30h] [ebp+8h]
  float v30; // [esp+30h] [ebp+8h]
  float v31; // [esp+30h] [ebp+8h]
  float v32; // [esp+30h] [ebp+8h]
  float v33; // [esp+30h] [ebp+8h]
  float v34; // [esp+30h] [ebp+8h]
  float v35; // [esp+30h] [ebp+8h]
  float v36; // [esp+30h] [ebp+8h]
  float v37; // [esp+30h] [ebp+8h]
  float v38; // [esp+30h] [ebp+8h]
  float v39; // [esp+30h] [ebp+8h]
  float v40; // [esp+30h] [ebp+8h]

  if ( !*((_BYTE *)this + 0x1DB) )
  {
    if ( a2 < 0.0 )
      a2 = 0.0;
    if ( a2 > fCostant_100 )
      a2 = flt_A2FE7C;
    v4 = *(this + 3);
    if ( v4 )
    {
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 0x20))(v4, 1);
    }
    else
    {
      v5 = FormHeapAlloc(0x14u);
      if ( v5 )
        v6 = sub_54EA00(v5, 1, 0xDu);
      else
        v6 = 0;
      *(this + 3) = v6;
      (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 0x38))(v6);
    }
    if ( !*((_BYTE *)this + 0x1DA) )
    {
      if ( LOBYTE(a3) )
      {
        v7 = a2;
        v8 = dbl_A3F3D0;
        if ( v8 <= a2 )
        {
          if ( v8 < v7 )
          {
            v26 = (v7 - v8) / v8;
            (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)*(this + 3) + 0x4C))(2, LODWORD(v26));
          }
        }
        else
        {
          v25 = v7 * dbl_A3D360 / v8 + dbl_A2F928;
          (*(void (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)*(this + 3) + 0x4C))(0, LODWORD(v25));
        }
      }
      else
      {
        v9 = a2;
        if ( a2 == 0.0 )
        {
          (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)*(this + 3) + 0x4C))(8, 1.0);
        }
        else
        {
          v10 = dbl_A641A8;
          if ( v10 <= v9 )
          {
            if ( v9 == v10 )
            {
              (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)*(this + 3) + 0x4C))(7, 1.0);
            }
            else
            {
              v11 = dbl_A492B0;
              if ( v11 <= v9 )
              {
                v12 = v11;
                if ( v9 == v11 )
                {
                  (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)*(this + 3) + 0x4C))(6, 1.0);
                }
                else
                {
                  v13 = flt_A64190;
                  if ( v13 <= v9 )
                  {
                    if ( v13 == v9 )
                    {
                      (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)*(this + 3) + 0x4C))(5, 1.0);
                    }
                    else
                    {
                      v14 = dbl_A3F3D0;
                      if ( v14 <= v9 )
                      {
                        if ( v9 == v14 )
                        {
                          (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 3) + 0x20))(*(this + 3), 1);
                        }
                        else
                        {
                          v15 = dbl_A64180;
                          if ( v15 <= v9 )
                          {
                            v16 = v15;
                            if ( v9 == v15 )
                            {
                              (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)*(this + 3) + 0x4C))(9, 1.0);
                            }
                            else
                            {
                              v17 = g_DialogueFov_;
                              if ( v17 <= v9 )
                              {
                                if ( v17 == v9 )
                                {
                                  (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)*(this + 3) + 0x4C))(0xA, 1.0);
                                }
                                else
                                {
                                  v18 = flt_A64178;
                                  if ( v18 <= v9 )
                                  {
                                    if ( v18 == v9 )
                                    {
                                      (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)*(this + 3) + 0x4C))(0xB, 1.0);
                                    }
                                    else
                                    {
                                      v19 = fCostant_100;
                                      if ( v19 <= v9 )
                                      {
                                        if ( v19 == v9 )
                                          (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)*(this + 3) + 0x4C))(0xC, 1.0);
                                      }
                                      else
                                      {
                                        v24 = v9 - dbl_A64168;
                                        v39 = v24 * dbl_A641A0 + dbl_A2F928;
                                        (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)*(this + 3) + 0x4C))(
                                          0xB,
                                          LODWORD(v39));
                                        v40 = v24 * dbl_A64198;
                                        (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)*(this + 3) + 0x4C))(
                                          0xC,
                                          LODWORD(v40));
                                      }
                                    }
                                  }
                                  else
                                  {
                                    v23 = v9 - dbl_A64170;
                                    v37 = v23 * dbl_A641A0 + dbl_A2F928;
                                    (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)*(this + 3) + 0x4C))(
                                      0xA,
                                      LODWORD(v37));
                                    v38 = v23 * dbl_A64198;
                                    (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)*(this + 3) + 0x4C))(
                                      0xB,
                                      LODWORD(v38));
                                  }
                                }
                              }
                              else
                              {
                                v22 = v9 - v16;
                                v35 = v22 * dbl_A641A0 + dbl_A2F928;
                                (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)*(this + 3) + 0x4C))(9, LODWORD(v35));
                                v36 = v22 * dbl_A64198;
                                (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)*(this + 3) + 0x4C))(0xA, LODWORD(v36));
                              }
                            }
                          }
                          else
                          {
                            v34 = (v9 - v14) * dbl_A64198;
                            (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)*(this + 3) + 0x4C))(9, LODWORD(v34));
                          }
                        }
                      }
                      else
                      {
                        v33 = (v9 - dbl_A64188) * dbl_A641A0 + dbl_A2F928;
                        (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)*(this + 3) + 0x4C))(5, LODWORD(v33));
                      }
                    }
                  }
                  else
                  {
                    v21 = v9 - v12;
                    v31 = v21 * dbl_A641A0 + dbl_A2F928;
                    (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)*(this + 3) + 0x4C))(6, LODWORD(v31));
                    v32 = v21 * dbl_A64198;
                    (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)*(this + 3) + 0x4C))(5, LODWORD(v32));
                  }
                }
              }
              else
              {
                v20 = v9 - v10;
                v29 = v20 * dbl_A641A0 + dbl_A2F928;
                (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)*(this + 3) + 0x4C))(7, LODWORD(v29));
                v30 = v20 * dbl_A64198;
                (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)*(this + 3) + 0x4C))(6, LODWORD(v30));
              }
            }
          }
          else
          {
            v27 = v9 * dbl_A641A0 + dbl_A2F928;
            (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)*(this + 3) + 0x4C))(8, LODWORD(v27));
            v28 = a2 * dbl_A64198;
            (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)*(this + 3) + 0x4C))(7, LODWORD(v28));
          }
        }
      }
      if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, _DWORD))(*(this + 4) + 0x2C))(this + 4, *(this + 3)) )
        (*(void (__thiscall **)(_DWORD *))(*this + 0xD4))(this);
    }
  }
}
