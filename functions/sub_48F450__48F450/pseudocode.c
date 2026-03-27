int __thiscall sub_48F450(EntryData *this, int a2, int a3, TESObjectREFR *a4, double a5)
{
  int countDelta; // ecx
  double HealthFracOrUses; // st7
  double v10; // st7
  int v11; // eax
  float v12; // [esp+8h] [ebp-8h]
  float v13; // [esp+24h] [ebp+14h]
  float v14; // [esp+24h] [ebp+14h]

  if ( (dword_B34434 & 1) == 0 )
  {
    dword_B34434 |= 1u;
    dword_B3442C = 0;
    word_B34430 = 0;
    word_B34432 = 0;
    atexit(sub_A18920);
  }
  FormHeapFree(dword_B3442C);
  dword_B3442C = 0;
  word_B34432 = 0;
  word_B34430 = 0;
  switch ( a2 )
  {
    case 0:
      countDelta = this->countDelta;
      if ( countDelta <= 0xF423F )
      {
        if ( countDelta <= 0x3E7 )
        {
          if ( countDelta <= 1 )
            BSStringT_Static_Format((BSStringT *)&dword_B3442C, word_A36430);
          else
            BSStringT_Static_Format((BSStringT *)&dword_B3442C, "%i", this->countDelta);
          return dword_B3442C;
        }
        else
        {
          BSStringT_Static_Format((BSStringT *)&dword_B3442C, off_A3D900, countDelta / 0x3E8);
          return dword_B3442C;
        }
      }
      else
      {
        BSStringT_Static_Format((BSStringT *)&dword_B3442C, off_A3D904, countDelta / 0xF4240);
        return dword_B3442C;
      }
    case 1:
      HealthFracOrUses = sub_488E50((void **)&this->extendData, a4, SLODWORD(a5), SHIDWORD(a5), v12);
      break;
    case 2:
      HealthFracOrUses = sub_485260((void **)&this->extendData, (int)a4, SLODWORD(a5), SHIDWORD(a5));
      break;
    case 3:
      HealthFracOrUses = sub_4891C0(this, (int)a4, SLODWORD(a5), SHIDWORD(a5));
      break;
    case 4:
      HealthFracOrUses = ContainerEntryExtraData_GetHealthFracOrUses((void **)&this->extendData, a3, (int)a4, a5);
      break;
    default:
      return dword_B3442C;
  }
  v13 = HealthFracOrUses;
  v10 = v13;
  if ( v13 < 0.0 )
    return dword_B3442C;
  if ( v10 > dbl_A2FC68 && v10 < 1.0 )
  {
    v14 = Round_Float(v13, flt_A2FAAC);
    v10 = v14;
  }
  if ( v10 <= dbl_A2FC68 || v10 >= 1.0 )
  {
    v11 = Double_To_SInt32(v10);
    BSStringT_Static_Format((BSStringT *)&dword_B3442C, "%d", v11);
    return dword_B3442C;
  }
  else
  {
    BSStringT_Static_Format((BSStringT *)&dword_B3442C, "%.1f", v10);
    return dword_B3442C;
  }
}
