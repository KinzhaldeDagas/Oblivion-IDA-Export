void __cdecl sub_67F830(char *a1, _WORD *a2, _DWORD *a3)
{
  _DWORD *v3; // ecx
  NiTMap_TESCELL *v4; // esi
  TESObjectCELL *v5; // ebx
  TESFormVtbl *vtbl; // esi
  double v7; // st7
  char v8; // bl
  double v9; // st7
  double v10; // st7
  bool v11; // zf
  TESObjectCELL *v12; // [esp+14h] [ebp-30h] BYREF
  NiTMap_TESCELL *v13; // [esp+18h] [ebp-2Ch] BYREF
  double v14; // [esp+1Ch] [ebp-28h] BYREF
  NiTMap_Entry_TESCELL *v15; // [esp+28h] [ebp-1Ch] BYREF
  double v16; // [esp+2Ch] [ebp-18h]
  float v17[3]; // [esp+38h] [ebp-Ch] BYREF

  if ( a1 )
  {
    if ( a3 )
    {
      if ( a2 )
      {
        if ( sub_6803A0(a2, (int)a1, v17) )
        {
          v3 = lowPathWorld_ptr;
          v13 = 0;
          if ( NiTMap_GetAt(v3, (int)a1, &v13) )
          {
            v4 = v13;
            if ( v13 )
            {
              v15 = (NiTMap_Entry_TESCELL *)sub_6A9030(v13);
              if ( v15 )
              {
                while ( 1 )
                {
                  v12 = 0;
                  sub_452600(v4, &v15, (void **)&v14, &v12);
                  v5 = v12;
                  if ( v12 )
                  {
                    while ( *(_DWORD *)&v5->members.super.type || v5->vtbl )
                    {
                      vtbl = v5->vtbl;
                      if ( sub_680790(&v5->vtbl->super.InitializeComponent, (int)a1) )
                      {
                        v14 = sub_680AA0((int)a1, v17, vtbl, (TESObjectREFR *)dword_B3BE08, 1);
                        v7 = sub_6804B0(a2);
                        v8 = 0;
                        *(float *)&v14 = v7 + v14;
                        if ( !sub_680550((unsigned __int16 *)vtbl) && !sub_6804D0((unsigned __int16 *)vtbl)
                          || (v16 = *(float *)&v14, v8 = 1, v9 = sub_6804B0(vtbl), v9 > v16) )
                        {
                          sub_680930((unsigned __int16 *)vtbl, *(float *)&v14);
                          sub_680460(vtbl, (int)a2, a1);
                          if ( sub_680550((unsigned __int16 *)vtbl) || flt_B1545C <= sub_6804B0(vtbl) )
                          {
                            if ( v8 )
                              sub_680C60(a3, vtbl);
                          }
                          else
                          {
                            sub_680570((unsigned __int16 *)vtbl, 1);
                            sub_680BB0(a3, vtbl);
                          }
                          if ( sub_6803F0(vtbl, (int)a1) == dword_B3BE10 )
                          {
                            v16 = sub_680AA0(
                                    dword_B3BE10,
                                    (float *)&qword_B3BE2C,
                                    vtbl,
                                    (TESObjectREFR *)dword_B3BE08,
                                    0);
                            v10 = sub_6804B0(vtbl);
                            v11 = dword_B3BE04 == 0;
                            *(float *)&v14 = v10 + v16;
                            if ( v11 || flt_B1545C > (double)*(float *)&v14 )
                            {
                              flt_B1545C = *(float *)&v14;
                              dword_B3BE04 = (int)vtbl;
                            }
                          }
                        }
                        v5 = v12;
                      }
                      v12 = *(TESObjectCELL **)&v5->members.super.type;
                      if ( !v12 )
                        break;
                      v5 = v12;
                    }
                  }
                  if ( !v15 )
                    break;
                  v4 = v13;
                }
              }
            }
          }
        }
        else
        {
          PrintError("Failed to find coord for space.");
        }
      }
    }
  }
}
