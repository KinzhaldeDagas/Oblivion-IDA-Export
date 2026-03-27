char __thiscall sub_67E8D0(int *this, TESObjectREFR *a2)
{
  char result; // al
  char *i; // ebx
  char *v5; // eax
  char *v6; // eax
  char *v7; // esi
  TESWaterCulling *v8; // ecx
  float v9; // [esp+0h] [ebp-50h]
  float v10; // [esp+0h] [ebp-50h]
  char v11; // [esp+1Bh] [ebp-35h]
  char *v12; // [esp+1Ch] [ebp-34h]
  double v13; // [esp+20h] [ebp-30h]
  float v14; // [esp+20h] [ebp-30h]
  double v15; // [esp+28h] [ebp-28h]
  NiTPointerList__BSImageSpaceShader v16; // [esp+30h] [ebp-20h] BYREF
  unsigned int v17; // [esp+4Ch] [ebp-4h]

  result = 0;
  v11 = 0;
  if ( *(this + 7) )
  {
    if ( *(this + 8) )
    {
      memset(&v16.start, 0, 0xC);
      v16.__vftable = (NiTPointerList_BSImageSpaceshaderVtbl *)&AStarNodeList::`vftable';
      v17 = 0;
      sub_67EC70(0.0);
      v9 = sub_67EEC0((char *)*(this + 7), (char *)*(this + 8));
      sub_67EC80((float *)*(this + 7), v9);
      sub_67EC50((float *)*(this + 7));
      TESWaterCulling::SetCamera((TESWaterCulling *)*(this + 7), 0);
      sub_67ECD0((_BYTE *)*(this + 7), 1);
      sub_67EFE0(&v16, *(this + 7));
      for ( i = (char *)sub_67F030(&v16); i; i = (char *)sub_67F030(&v16) )
      {
        if ( v11 )
          break;
        v5 = (char *)*(this + 8);
        if ( i == v5 )
        {
          v11 = 1;
          *(this + 9) = (int)v5;
        }
        v6 = sub_4E7DE0(i);
        v12 = v6;
        if ( v6 )
        {
          while ( *((_DWORD *)v6 + 1) || *(_DWORD *)v6 )
          {
            if ( v11 )
              break;
            v7 = *(char **)v6;
            if ( sub_67ED70(*(_BYTE **)v6) || sub_5E0710(a2, (int)i, (int)v7) )
            {
              v12 = *((char **)v12 + 1);
            }
            else
            {
              v8 = (TESWaterCulling *)*(this + 8);
              if ( v7 == (char *)v8 )
              {
                v11 = 1;
                TESWaterCulling::SetCamera(v8, (NiCamera *)i);
                *(this + 9) = *(this + 8);
              }
              else
              {
                v13 = sub_67EDE0(i, (int)v7, a2);
                v14 = sub_67EC60((float *)i) + v13;
                if ( !sub_67ECC0(v7) && !sub_67EC90(v7) || sub_67EC60((float *)v7) > v14 )
                {
                  if ( !sub_67ECC0(v7) )
                  {
                    sub_67ECD0(v7, 1);
                    sub_67EFE0(&v16, (int)v7);
                  }
                  sub_67EC70(v14);
                  v10 = sub_67EEC0(v7, (char *)*(this + 8));
                  sub_67EC80((float *)v7, v10);
                  sub_67EC50((float *)v7);
                  TESWaterCulling::SetCamera((TESWaterCulling *)v7, (NiCamera *)i);
                  if ( !*(this + 9) || (v15 = sub_67EC40(v7), sub_67EC40((void *)*(this + 9)) > v15) )
                    *(this + 9) = (int)v7;
                }
                v12 = *((char **)v12 + 1);
              }
            }
            if ( !v12 )
              break;
            v6 = v12;
          }
        }
        sub_67ECA0(i, 1);
      }
      v17 = 0xFFFFFFFF;
      AStarNodeList::~AStarNodeList(&v16);
      return v11;
    }
  }
  return result;
}
