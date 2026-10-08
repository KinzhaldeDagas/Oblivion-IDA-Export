int __userpurge sub_48F450@<eax>(EntryData *this@<ecx>, int a2@<ebx>, int a3, int a4, TESObjectREFR *a5, double a6)
{
  SInt32 countDelta; // ecx
  double HealthFracOrUses; // st7
  double v10; // st7
  int v11; // eax
  float v12; // [esp+8h] [ebp-8h]
  float v13; // [esp+24h] [ebp+14h]
  float v14; // [esp+24h] [ebp+14h]

  if ( (MEMORY[0xB33E90][0x5A4] & 1) == 0 ) /*0x48f45d*/
  {
    *(_DWORD *)&MEMORY[0xB33E90][0x5A4] |= 1u; /*0x48f45f*/
    *(_DWORD *)&MEMORY[0xB33E90][0x59C] = 0; /*0x48f46b*/
    *(_WORD *)&MEMORY[0xB33E90][0x5A0] = 0; /*0x48f471*/
    *(_WORD *)&MEMORY[0xB33E90][0x5A2] = 0; /*0x48f478*/
    atexit(sub_A18920); /*0x48f47f*/
  }
  FormHeapFree(*(_DWORD *)&MEMORY[0xB33E90][0x59C]); /*0x48f48d*/
  *(_DWORD *)&MEMORY[0xB33E90][0x59C] = 0; /*0x48f49b*/
  *(_WORD *)&MEMORY[0xB33E90][0x5A2] = 0; /*0x48f4a1*/
  *(_WORD *)&MEMORY[0xB33E90][0x5A0] = 0; /*0x48f4a8*/
  switch ( a3 ) /*0x48f4af*/
  {
    case 0: /*0x48f4af*/
      countDelta = this->countDelta; /*0x48f4b5*/
      if ( countDelta <= 0xF423F ) /*0x48f4be*/
      {
        if ( countDelta <= 0x3E7 ) /*0x48f4f4*/
        {
          if ( countDelta <= 1 ) /*0x48f527*/
            BSStringT_Static_Format((BSStringT *)&MEMORY[0xB33E90][0x59C], word_A36430); /*0x48f550*/
          else
            BSStringT_Static_Format((BSStringT *)&MEMORY[0xB33E90][0x59C], "%i", this->countDelta); /*0x48f534*/
          return *(_DWORD *)&MEMORY[0xB33E90][0x59C]; /*0x48f539*/
        }
        else
        {
          BSStringT_Static_Format((BSStringT *)&MEMORY[0xB33E90][0x59C], off_A3D900, countDelta / 0x3E8); /*0x48f512*/
          return *(_DWORD *)&MEMORY[0xB33E90][0x59C]; /*0x48f517*/
        }
      }
      else
      {
        BSStringT_Static_Format((BSStringT *)&MEMORY[0xB33E90][0x59C], off_A3D904, countDelta / 0xF4240); /*0x48f4dc*/
        return *(_DWORD *)&MEMORY[0xB33E90][0x59C]; /*0x48f4e1*/
      }
    case 1: /*0x48f4af*/
      HealthFracOrUses = sub_488E50((void **)&this->extendData, a5, SLODWORD(a6), SHIDWORD(a6), v12); /*0x48f578*/
      break;
    case 2: /*0x48f4af*/
      HealthFracOrUses = sub_485260((void **)&this->extendData, (int)a5, SLODWORD(a6), SHIDWORD(a6)); /*0x48f595*/
      break;
    case 3: /*0x48f4af*/
      HealthFracOrUses = Player_CalcInventoryEntryRating(this, a2, (int)a5, SLODWORD(a6), SHIDWORD(a6)); /*0x48f5b2*/
      break;
    case 4: /*0x48f4af*/
      HealthFracOrUses = ContainerEntryExtraData_GetHealthFracOrUses((void **)&this->extendData, a4, (int)a5, a6); /*0x48f5d8*/
      break;
    default:
      return *(_DWORD *)&MEMORY[0xB33E90][0x59C]; /*0x48f68c*/
  }
  v13 = HealthFracOrUses; /*0x48f5dd*/
  v10 = v13; /*0x48f5eb*/
  if ( v13 < 0.0 ) /*0x48f5f0*/
    return *(_DWORD *)&MEMORY[0xB33E90][0x59C]; /*0x48f5f0*/
  if ( v10 > dbl_A2FC68 && v10 < 1.0 ) /*0x48f60c*/
  {
    v14 = Round_Float(v13, kFaceEarNormalMatchRadius); /*0x48f623*/
    v10 = v14; /*0x48f62a*/
  }
  if ( v10 <= dbl_A2FC68 || v10 >= 1.0 ) /*0x48f644*/
  {
    v11 = Double_To_SInt32(v10); /*0x48f668*/
    BSStringT_Static_Format((BSStringT *)&MEMORY[0xB33E90][0x59C], "%d", v11); /*0x48f678*/
    return *(_DWORD *)&MEMORY[0xB33E90][0x59C]; /*0x48f67d*/
  }
  else
  {
    BSStringT_Static_Format((BSStringT *)&MEMORY[0xB33E90][0x59C], "%.1f", v10); /*0x48f656*/
    return *(_DWORD *)&MEMORY[0xB33E90][0x59C]; /*0x48f65b*/
  }
}
