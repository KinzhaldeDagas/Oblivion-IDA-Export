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

  if ( !*((_BYTE *)this + 0x1DB) ) /*0x549b26*/
  {
    if ( a2 < 0.0 ) /*0x549b46*/
      a2 = 0.0; /*0x549b48*/
    if ( a2 > fCostant_100 ) /*0x549b5f*/
      a2 = flt_A2FE7C; /*0x549b67*/
    v4 = *(this + 3); /*0x549b6b*/
    if ( v4 ) /*0x549b70*/
    {
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 0x20))(v4, 1); /*0x549b79*/
    }
    else
    {
      v5 = FormHeapAlloc(0x14u); /*0x549b7f*/
      if ( v5 ) /*0x549b95*/
        v6 = sub_54EA00(v5, 1, 0xDu); /*0x549b9d*/
      else
        v6 = 0; /*0x549ba4*/
      *(this + 3) = v6; /*0x549ba6*/
      (*(void (__thiscall **)(int))(*(_DWORD *)v6 + 0x38))(v6); /*0x549bb8*/
    }
    if ( !*((_BYTE *)this + 0x1DA) ) /*0x549bba*/
    {
      if ( LOBYTE(a3) ) /*0x549bcc*/
      {
        v7 = a2; /*0x549bce*/
        v8 = dbl_A3F3D0; /*0x549bd2*/
        if ( v8 <= a2 ) /*0x549bdf*/
        {
          if ( v8 < v7 ) /*0x549c15*/
          {
            v26 = (v7 - v8) / v8; /*0x549c28*/
            (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)*(this + 3) + 0x4C))(2, LODWORD(v26)); /*0x549c35*/
          }
        }
        else
        {
          v25 = v7 * dbl_A3D360 / v8 + dbl_A2F928; /*0x549bfa*/
          (*(void (__stdcall **)(_DWORD, _DWORD))(*(_DWORD *)*(this + 3) + 0x4C))(0, LODWORD(v25)); /*0x549c07*/
        }
      }
      else
      {
        v9 = a2; /*0x549c46*/
        if ( a2 == 0.0 ) /*0x549c4b*/
        {
          (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)*(this + 3) + 0x4C))(8, 1.0); /*0x549c5f*/
        }
        else
        {
          v10 = dbl_A641A8; /*0x549c66*/
          if ( v10 <= v9 ) /*0x549c73*/
          {
            if ( v9 == v10 ) /*0x549ccb*/
            {
              (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)*(this + 3) + 0x4C))(7, 1.0); /*0x549ce1*/
            }
            else
            {
              v11 = dbl_A492B0; /*0x549ce8*/
              if ( v11 <= v9 ) /*0x549cf5*/
              {
                v12 = v11; /*0x549d4a*/
                if ( v9 == v11 ) /*0x549d55*/
                {
                  (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)*(this + 3) + 0x4C))(6, 1.0); /*0x549d6b*/
                }
                else
                {
                  v13 = flt_A64190; /*0x549d72*/
                  if ( v13 <= v9 ) /*0x549d7f*/
                  {
                    if ( v13 == v9 ) /*0x549ddd*/
                    {
                      (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)*(this + 3) + 0x4C))(5, 1.0); /*0x549df1*/
                    }
                    else
                    {
                      v14 = dbl_A3F3D0; /*0x549df8*/
                      if ( v14 <= v9 ) /*0x549e05*/
                      {
                        if ( v9 == v14 ) /*0x549e41*/
                        {
                          (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)*(this + 3) + 0x20))(*(this + 3), 1); /*0x549e51*/
                        }
                        else
                        {
                          v15 = dbl_A64180; /*0x549e58*/
                          if ( v15 <= v9 ) /*0x549e65*/
                          {
                            v16 = v15; /*0x549e8e*/
                            if ( v9 == v15 ) /*0x549e99*/
                            {
                              (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)*(this + 3) + 0x4C))(9, 1.0); /*0x549eaf*/
                            }
                            else
                            {
                              v17 = g_DialogueFov_; /*0x549eb6*/
                              if ( v17 <= v9 ) /*0x549ec3*/
                              {
                                if ( v17 == v9 ) /*0x549f21*/
                                {
                                  (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)*(this + 3) + 0x4C))(0xA, 1.0); /*0x549f35*/
                                }
                                else
                                {
                                  v18 = flt_A64178; /*0x549f3c*/
                                  if ( v18 <= v9 ) /*0x549f49*/
                                  {
                                    if ( v18 == v9 ) /*0x549fa9*/
                                    {
                                      (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)*(this + 3) + 0x4C))(0xB, 1.0); /*0x549fbd*/
                                    }
                                    else
                                    {
                                      v19 = fCostant_100; /*0x549fc4*/
                                      if ( v19 <= v9 ) /*0x549fd1*/
                                      {
                                        if ( v19 == v9 ) /*0x54a02e*/
                                          (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)*(this + 3) + 0x4C))(0xC, 1.0); /*0x54a040*/
                                      }
                                      else
                                      {
                                        v24 = v9 - dbl_A64168; /*0x549fe4*/
                                        v39 = v24 * dbl_A641A0 + dbl_A2F928; /*0x549ff4*/
                                        (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)*(this + 3) + 0x4C))( /*0x54a001*/
                                          0xB,
                                          LODWORD(v39));
                                        v40 = v24 * dbl_A64198; /*0x54a015*/
                                        (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)*(this + 3) + 0x4C))( /*0x54a023*/
                                          0xC,
                                          LODWORD(v40));
                                      }
                                    }
                                  }
                                  else
                                  {
                                    v23 = v9 - dbl_A64170; /*0x549f5c*/
                                    v37 = v23 * dbl_A641A0 + dbl_A2F928; /*0x549f6c*/
                                    (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)*(this + 3) + 0x4C))( /*0x549f79*/
                                      0xA,
                                      LODWORD(v37));
                                    v38 = v23 * dbl_A64198; /*0x549f8d*/
                                    (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)*(this + 3) + 0x4C))( /*0x549f9b*/
                                      0xB,
                                      LODWORD(v38));
                                  }
                                }
                              }
                              else
                              {
                                v22 = v9 - v16; /*0x549ed2*/
                                v35 = v22 * dbl_A641A0 + dbl_A2F928; /*0x549ee2*/
                                (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)*(this + 3) + 0x4C))(9, LODWORD(v35)); /*0x549eef*/
                                v36 = v22 * dbl_A64198; /*0x549f03*/
                                (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)*(this + 3) + 0x4C))(0xA, LODWORD(v36)); /*0x549f11*/
                              }
                            }
                          }
                          else
                          {
                            v34 = (v9 - v14) * dbl_A64198; /*0x549e7a*/
                            (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)*(this + 3) + 0x4C))(9, LODWORD(v34)); /*0x549e87*/
                          }
                        }
                      }
                      else
                      {
                        v33 = (v9 - dbl_A64188) * dbl_A641A0 + dbl_A2F928; /*0x549e24*/
                        (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)*(this + 3) + 0x4C))(5, LODWORD(v33)); /*0x549e31*/
                      }
                    }
                  }
                  else
                  {
                    v21 = v9 - v12; /*0x549d8e*/
                    v31 = v21 * dbl_A641A0 + dbl_A2F928; /*0x549d9e*/
                    (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)*(this + 3) + 0x4C))(6, LODWORD(v31)); /*0x549dab*/
                    v32 = v21 * dbl_A64198; /*0x549dbf*/
                    (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)*(this + 3) + 0x4C))(5, LODWORD(v32)); /*0x549dcd*/
                  }
                }
              }
              else
              {
                v20 = v9 - v10; /*0x549d04*/
                v29 = v20 * dbl_A641A0 + dbl_A2F928; /*0x549d14*/
                (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)*(this + 3) + 0x4C))(7, LODWORD(v29)); /*0x549d21*/
                v30 = v20 * dbl_A64198; /*0x549d35*/
                (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)*(this + 3) + 0x4C))(6, LODWORD(v30)); /*0x549d43*/
              }
            }
          }
          else
          {
            v27 = v9 * dbl_A641A0 + dbl_A2F928; /*0x549c8c*/
            (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)*(this + 3) + 0x4C))(8, LODWORD(v27)); /*0x549c99*/
            v28 = a2 * dbl_A64198; /*0x549cad*/
            (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)*(this + 3) + 0x4C))(7, LODWORD(v28)); /*0x549cbb*/
          }
        }
      }
      if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, _DWORD))(*(this + 4) + 0x2C))(this + 4, *(this + 3)) ) /*0x54a055*/
        (*(void (__thiscall **)(_DWORD *))(*this + 0xD4))(this); /*0x54a065*/
    }
  }
}
