void __cdecl sub_67F690(_DWORD *a1)
{
  _DWORD *v1; // ecx
  NiTMap_TESCELL *v2; // esi
  TESObjectCELL *v3; // edi
  TESFormVtbl *vtbl; // esi
  double v5; // st7
  bool v6; // zf
  int v7; // [esp-4h] [ebp-28h]
  float v8; // [esp+0h] [ebp-24h]
  NiTMap_TESCELL *v9; // [esp+10h] [ebp-14h] BYREF
  float v10; // [esp+14h] [ebp-10h] BYREF
  NiTMap_Entry_TESCELL *v11; // [esp+18h] [ebp-Ch] BYREF
  double v12; // [esp+1Ch] [ebp-8h] BYREF

  if ( a1 )
  {
    v7 = dword_B3BE0C;
    v1 = lowPathWorld_ptr;
    v9 = 0;
    if ( NiTMap_GetAt(v1, v7, &v9) )
    {
      v2 = v9;
      if ( v9 )
      {
        v11 = (NiTMap_Entry_TESCELL *)sub_6A9030(v9);
        if ( v11 )
        {
          while ( 1 )
          {
            v10 = 0.0;
            sub_452600(v2, &v11, (void **)&v12, (TESObjectCELL **)&v10);
            v3 = (TESObjectCELL *)LODWORD(v10);
            if ( v10 != 0.0 )
            {
              do
              {
                if ( !*(_DWORD *)&v3->members.super.type && !v3->vtbl )
                  break;
                vtbl = v3->vtbl;
                if ( sub_680790(&v3->vtbl->super.InitializeComponent, dword_B3BE0C) )
                {
                  v8 = sub_680AA0(dword_B3BE0C, (float *)&qword_B3BE20, vtbl, (TESObjectREFR *)dword_B3BE08, 1);
                  sub_680930((unsigned __int16 *)vtbl, v8);
                  sub_680460(vtbl, 0, (char *)dword_B3BE0C);
                  sub_680570((unsigned __int16 *)vtbl, 1);
                  if ( flt_B1545C > sub_6804B0(vtbl) )
                    sub_680BB0(a1, vtbl);
                  if ( sub_6803F0(vtbl, dword_B3BE0C) == dword_B3BE10 )
                  {
                    v12 = sub_680AA0(dword_B3BE10, (float *)&qword_B3BE2C, vtbl, (TESObjectREFR *)dword_B3BE08, 0);
                    v5 = sub_6804B0(vtbl);
                    v6 = dword_B3BE04 == 0;
                    v10 = v5 + v12;
                    if ( v6 || flt_B1545C > (double)v10 )
                    {
                      flt_B1545C = v10;
                      dword_B3BE04 = (int)vtbl;
                    }
                  }
                }
                v3 = *(TESObjectCELL **)&v3->members.super.type;
              }
              while ( v3 );
            }
            if ( !v11 )
              break;
            v2 = v9;
          }
        }
      }
    }
  }
}
