TESForm *__thiscall sub_65E5E0(TESObjectREFR *this, float a2)
{
  TESObjectCELL *DwordAtOffset40; // eax
  TESForm *CellFromCoords; // esi
  int v5; // ebx
  signed int v6; // edi
  signed int v7; // ebp
  double v8; // st7
  double v9; // st6
  double v10; // st7
  bool v11; // c0
  bool v12; // c3
  double v13; // st7
  TESForm *v14; // eax
  TESForm **v15; // eax
  char v17; // [esp+7h] [ebp-21h]
  float v18; // [esp+8h] [ebp-20h]
  float v19; // [esp+8h] [ebp-20h]
  int v20; // [esp+8h] [ebp-20h]
  float v21; // [esp+Ch] [ebp-1Ch]
  float v22; // [esp+10h] [ebp-18h]
  float v23; // [esp+14h] [ebp-14h]
  float v24; // [esp+18h] [ebp-10h]
  float v25; // [esp+1Ch] [ebp-Ch]
  float v26; // [esp+20h] [ebp-8h]

  v17 = 0; /*0x65e5f2*/
  if ( flt_A2FF44 < (double)a2 ) /*0x65e5fc*/
  {
    a2 = flt_A2FF44; /*0x65e5fe*/
    v17 = 1; /*0x65e602*/
  }
  DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(this); /*0x65e60b*/
  CellFromCoords = (TESForm *)DwordAtOffset40; /*0x65e610*/
  v5 = 0; /*0x65e612*/
  if ( DwordAtOffset40 /*0x65e63b*/
    && (TESObjectCELL_IsInterior(DwordAtOffset40)
     || (CellFromCoords[1].member.refID & 2) != 0
     || !TES::GetCurrentWorldspace(MEMORY[0xB333A0])) )
  {
    goto LABEL_28; /*0x65e642*/
  }
  v25 = this->member.pos[0]; /*0x65e652*/
  v26 = this->member.pos[1]; /*0x65e656*/
  v6 = (int)v25 >> 0xC; /*0x65e66a*/
  v7 = (int)v26 >> 0xC; /*0x65e686*/
  v18 = (float)(v6 << 0xC); /*0x65e68b*/
  v8 = v18; /*0x65e692*/
  v21 = v18; /*0x65e69a*/
  v19 = (float)(v7 << 0xC); /*0x65e6a2*/
  v9 = v19; /*0x65e6a6*/
  v20 = 0; /*0x65e6aa*/
  v23 = v8 + dbl_A37650; /*0x65e6bc*/
  v24 = dbl_A37650 + v9; /*0x65e6c2*/
  if ( v21 >= v25 - a2 ) /*0x65e6e1*/
  {
    v20 = 0xFFFFFFFF; /*0x65e6e5*/
LABEL_11:
    v13 = a2; /*0x65e70a*/
    CellFromCoords = TES_GetCellFromCoords(MEMORY[0xB333A0], v6 + v20, v7); /*0x65e723*/
    goto LABEL_12; /*0x65e723*/
  }
  v10 = v25 + a2; /*0x65e6f1*/
  v11 = v23 < v10; /*0x65e6f7*/
  v12 = v23 == v10; /*0x65e6f7*/
  v13 = a2; /*0x65e6fb*/
  if ( v11 || v12 ) /*0x65e6fd*/
  {
    v20 = 1; /*0x65e702*/
    goto LABEL_11; /*0x65e702*/
  }
LABEL_12:
  if ( !CellFromCoords || (CellFromCoords[1].member.refID & 2) == 0 ) /*0x65e732*/
  {
    v22 = v9; /*0x65e6ae*/
    if ( v22 < v26 - v13 ) /*0x65e74b*/
    {
      if ( v24 > v13 + v26 ) /*0x65e763*/
      {
LABEL_19:
        if ( !CellFromCoords || (CellFromCoords[1].member.refID & 2) == 0 ) /*0x65e788*/
        {
          if ( v20 ) /*0x65e790*/
          {
            if ( v5 ) /*0x65e794*/
            {
              v14 = TES_GetCellFromCoords(MEMORY[0xB333A0], v6 + v20, v7 + v5); /*0x65e7a2*/
              CellFromCoords = v14; /*0x65e7a7*/
              if ( !v14 || (v14[1].member.refID & 2) == 0 ) /*0x65e7b6*/
              {
                if ( v17 ) /*0x65e7bd*/
                {
                  v15 = (TESForm **)sub_43F900(MEMORY[0xB333A0]); /*0x65e7c5*/
                  if ( v15 ) /*0x65e7cc*/
                    CellFromCoords = *v15; /*0x65e7ce*/
                }
              }
            }
          }
        }
        goto LABEL_28; /*0x65e7ce*/
      }
      v5 = 1; /*0x65e765*/
    }
    else
    {
      v5 = 0xFFFFFFFF; /*0x65e74f*/
    }
    CellFromCoords = TES_GetCellFromCoords(MEMORY[0xB333A0], v6, v5 + v7); /*0x65e77a*/
    goto LABEL_19; /*0x65e77a*/
  }
LABEL_28:
  if ( !CellFromCoords || (CellFromCoords[1].member.refID & 2) != 0 ) /*0x65e7e2*/
    return CellFromCoords; /*0x65e7f0*/
  else
    return 0; /*0x65e7e6*/
}
