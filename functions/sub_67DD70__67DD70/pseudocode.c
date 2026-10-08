int __cdecl sub_67DD70(float *a1, TESObjectREFR *a2)
{
  _DWORD *DwordAtOffset40; // eax
  _DWORD *v3; // eax
  int result; // eax
  signed int v5; // ebp
  signed int v6; // ebx
  TESForm *CellFromCoords; // eax
  _DWORD *v8; // eax
  unsigned int v9; // edi
  unsigned int v10; // esi
  TESForm *v11; // eax
  _DWORD *v12; // eax
  int v13; // [esp+8h] [ebp-Ch]

  v13 = 0; /*0x67dd7d*/
  if ( !a2 ) /*0x67dd81*/
    return 0; /*0x67dd81*/
  if ( sub_4D8B90(a2) ) /*0x67dd89*/
  {
    DwordAtOffset40 = (_DWORD *)Shared_GetDwordAtOffset40(a2); /*0x67dd94*/
    v3 = (_DWORD *)sub_4AF170(DwordAtOffset40); /*0x67dd9b*/
    if ( v3 ) /*0x67dda2*/
      return sub_4E5A10(v3); /*0x67ddaf*/
    return 0; /*0x67dda2*/
  }
  if ( !sub_43F840(MEMORY[0xB333A0], a1) ) /*0x67ddbf*/
    return 0; /*0x67de85*/
  v5 = (int)a1[1] >> 0xC; /*0x67ddf9*/
  v6 = (int)*a1 >> 0xC; /*0x67ddfd*/
  CellFromCoords = TES_GetCellFromCoords(MEMORY[0xB333A0], v6, v5); /*0x67de01*/
  if ( !CellFromCoords /*0x67de22*/
    || (v8 = (_DWORD *)sub_4AF170(CellFromCoords)) == 0
    || (result = sub_4E5A10(v8), (v13 = result) == 0) )
  {
    v9 = 0xFFFFFFFF; /*0x67de24*/
LABEL_10:
    v10 = 0xFFFFFFFF; /*0x67de27*/
    while ( 1 ) /*0x67de30*/
    {
      if ( v9 || v10 ) /*0x67de36*/
      {
        v11 = TES_GetCellFromCoords(MEMORY[0xB333A0], v9 + v6, v10 + v5); /*0x67de46*/
        if ( v11 ) /*0x67de4d*/
        {
          v12 = (_DWORD *)sub_4AF170(v11); /*0x67de51*/
          if ( v12 ) /*0x67de58*/
            v13 = sub_4E5A10(v12); /*0x67de61*/
        }
      }
      result = v13; /*0x67de65*/
      if ( v13 ) /*0x67de6b*/
        break; /*0x67de6b*/
      if ( (int)++v10 >= 2 ) /*0x67de73*/
      {
        if ( (int)++v9 < 2 ) /*0x67de7b*/
          goto LABEL_10; /*0x67de7b*/
        return result; /*0x67de7b*/
      }
    }
  }
  return result; /*0x67dda8*/
}
