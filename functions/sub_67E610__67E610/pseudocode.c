char __stdcall sub_67E610(float *a1, char *a2, int *a3)
{
  char result; // al
  char *i; // edi
  char *v5; // eax
  char *v6; // esi
  char *j; // edi
  char *v8; // eax
  _BYTE *v9; // eax
  _BYTE *v10; // esi
  float v11; // [esp+0h] [ebp-50h]
  float v12; // [esp+0h] [ebp-50h]
  char v13; // [esp+17h] [ebp-39h]
  char *v14; // [esp+18h] [ebp-38h]
  char *v15; // [esp+1Ch] [ebp-34h]
  double v16; // [esp+20h] [ebp-30h]
  float v17; // [esp+20h] [ebp-30h]
  double v18; // [esp+28h] [ebp-28h]
  NiTPointerList__BSImageSpaceShader v19; // [esp+30h] [ebp-20h] BYREF
  unsigned int v20; // [esp+4Ch] [ebp-4h]

  result = 0;
  v13 = 0;
  if ( a1 )
  {
    if ( a2 )
    {
      if ( a3 )
      {
        memset(&v19.start, 0, 0xC);
        v19.__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&AStarNodeList::`vftable';
        v20 = 0;
        v14 = 0;
        sub_67EC70(0.0);
        v11 = sub_67EF50((char *)a1, a2);
        sub_67EC80(a1, v11);
        sub_67EC50(a1);
        TESWaterCulling::SetCamera((TESWaterCulling *)a1, 0);
        sub_67ECD0(a1, 1);
        sub_67EFE0(&v19, (int)a1);
        for ( i = (char *)sub_67F030(&v19); i; i = (char *)sub_67F030(&v19) )
        {
          if ( v13 )
            break;
          if ( i == a2 )
          {
            v13 = 1;
            v14 = a2;
          }
          v5 = sub_4E7DE0(i);
          v15 = v5;
          if ( v5 )
          {
            while ( *((_DWORD *)v5 + 1) || *(_DWORD *)v5 )
            {
              if ( v13 )
                break;
              v6 = *(char **)v5;
              if ( *(char **)v5 == a2 )
              {
                v13 = 1;
                TESWaterCulling::SetCamera((TESWaterCulling *)a2, (NiCamera *)i);
                v14 = a2;
              }
              else
              {
                v16 = sub_67EF50(i, (char *)*(_DWORD *)v5);
                v17 = sub_67EC60((float *)i) + v16;
                if ( !sub_67ECC0(v6) && !sub_67EC90(v6) || sub_67EC60((float *)v6) > v17 )
                {
                  if ( !sub_67ECC0(v6) )
                  {
                    sub_67ECD0(v6, 1);
                    sub_67EFE0(&v19, (int)v6);
                  }
                  sub_67EC70(v17);
                  v12 = sub_67EF50(v6, a2);
                  sub_67EC80((float *)v6, v12);
                  sub_67EC50((float *)v6);
                  TESWaterCulling::SetCamera((TESWaterCulling *)v6, (NiCamera *)i);
                  if ( !v14 || (v18 = sub_67EC40(v6), sub_67EC40(v14) > v18) )
                    v14 = v6;
                }
                v15 = *((char **)v15 + 1);
              }
              if ( !v15 )
                break;
              v5 = v15;
            }
          }
          sub_67ECA0(i, 1);
        }
        for ( j = v14; j; j = (char *)TESEnchantableForm_GetCastingType(j) )
        {
          v8 = sub_4BEF40(j);
          v9 = sub_68C280(a3, v8, 0);
          v10 = v9;
          if ( v9 )
          {
            sub_68CA30(v9, 1);
            sub_68CA60(v10, 1);
            sub_68CA90(v10, 0);
            sub_68CAC0(v10, 0);
            sub_68CB10(v10, 1);
          }
        }
        v20 = 0xFFFFFFFF;
        AStarNodeList::~AStarNodeList(&v19);
        return v13;
      }
    }
  }
  return result;
}
