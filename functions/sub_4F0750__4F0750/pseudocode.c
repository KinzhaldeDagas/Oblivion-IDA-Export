void __thiscall sub_4F0750(
        _DWORD *this,
        float *a2,
        float a3,
        float *a4,
        float argC,
        unsigned __int8 (__cdecl *a6)(TESObjectREFR *, int),
        int a7)
{
  int v7; // esi
  signed int v8; // edi
  signed int v9; // ebp
  TESObjectCELL *CellAtCellCoord; // eax
  int v11; // ebx
  _DWORD *v12; // ecx
  TESObjectCELL *v13; // esi
  double v14; // st7
  double v15; // st7
  bool v16; // c0
  bool v17; // c3
  int v18; // ebx
  _DWORD *v19; // ecx
  TESObjectCELL *v20; // esi
  double v21; // st7
  double v22; // st7
  bool v23; // c0
  bool v24; // c3
  int v25; // esi
  _DWORD *v26; // edi
  int v27; // esi
  _DWORD *v28; // ebx
  TESObjectCELL *v29; // ebx
  double v30; // st7
  double v31; // st7
  bool v32; // c0
  bool v33; // c3
  bool v34; // cc
  int v35; // esi
  _DWORD *v36; // edi
  int v37; // esi
  _DWORD *v38; // ebx
  TESObjectCELL *v39; // ebx
  double v40; // st7
  double v41; // st7
  bool v42; // c0
  bool v43; // c3
  TESObjectCELL *v44; // ecx
  float a5; // [esp+20h] [ebp-30h]
  float a5a; // [esp+20h] [ebp-30h]
  float a5b; // [esp+20h] [ebp-30h]
  float a5c; // [esp+20h] [ebp-30h]
  TESObjectCELL *v49; // [esp+3Ch] [ebp-14h] BYREF
  int v50; // [esp+40h] [ebp-10h]
  _DWORD *v51; // [esp+44h] [ebp-Ch]
  int v52; // [esp+48h] [ebp-8h]
  TESObjectCELL *v53; // [esp+4Ch] [ebp-4h] BYREF

  v51 = this; /*0x4f0758*/
  if ( a6 ) /*0x4f075c*/
  {
    v7 = 0; /*0x4f076c*/
    v8 = Double_To_SInt32(*a2) >> 0xC; /*0x4f0778*/
    v9 = Double_To_SInt32(a2[1]) >> 0xC; /*0x4f0786*/
    CellAtCellCoord = (TESObjectCELL *)TESWorldSpace::GetCellAtCellCoord((TESWorldSpace *)v51, v8, v9); /*0x4f078b*/
    if ( !CellAtCellCoord || sub_4CBC20(CellAtCellCoord, a2, a3, a4, argC, a6, a7) ) /*0x4f07b6*/
    {
      do /*0x4f0d24*/
      {
        v7 += 2; /*0x4f07c3*/
        --v8; /*0x4f07c6*/
        v11 = 0; /*0x4f07c9*/
        --v9; /*0x4f07cb*/
        v49 = (TESObjectCELL *)v8; /*0x4f07d0*/
        v52 = v7; /*0x4f07d4*/
        v50 = 0; /*0x4f07d8*/
        if ( v7 > 0 ) /*0x4f07dc*/
        {
          do /*0x4f07e2*/
          {
            if ( v8 > 0x7FFF || v9 > 0x7FFF || v8 < (int)0xFFFF8000 || v9 < (int)0xFFFF8000 ) /*0x4f080c*/
            {
              PrintError( /*0x4f08ec*/
                "Trying to get exterior cell for invalid cell coordinate. Values must be between %i and %i.",
                0xFFFF8000,
                0x7FFF);
            }
            else
            {
              v12 = (_DWORD *)v51[0xC]; /*0x4f0826*/
              v49 = 0; /*0x4f082a*/
              if ( NiTMap_GetAt(v12, (unsigned __int16)v9 | ((__int16)v8 << 0x10), &v49) ) /*0x4f0832*/
              {
                v13 = v49; /*0x4f083f*/
                if ( v49 ) /*0x4f0845*/
                {
                  if ( a3 == dbl_A3A5B0 || a3 > sub_4C9DA0((int)v49, a2) ) /*0x4f0873*/
                  {
                    v14 = argC; /*0x4f0879*/
                    if ( argC == dbl_A3A5B0 /*0x4f08a2*/
                      || (v15 = sub_4C9DA0((int)v13, a4), v16 = argC < v15, v17 = argC == v15, v14 = argC, !v16 && !v17) )
                    {
                      ++v50; /*0x4f08af*/
                      a5 = v14; /*0x4f08bf*/
                      if ( !sub_4CBC20(v13, a2, a3, a4, a5, a6, a7) ) /*0x4f08d5*/
                        return; /*0x4f08d5*/
                    }
                  }
                }
              }
            }
            v7 = v52; /*0x4f08f8*/
            ++v8; /*0x4f08fc*/
            ++v11; /*0x4f08ff*/
            v49 = (TESObjectCELL *)v8; /*0x4f0904*/
          }
          while ( v11 < v52 ); /*0x4f07e2*/
        }
        v18 = 0; /*0x4f090e*/
        if ( v7 > 0 ) /*0x4f0912*/
        {
          do /*0x4f0920*/
          {
            if ( v8 > 0x7FFF || v9 > 0x7FFF || v8 < (int)0xFFFF8000 || v9 < (int)0xFFFF8000 ) /*0x4f094a*/
            {
              PrintError( /*0x4f0a2a*/
                "Trying to get exterior cell for invalid cell coordinate. Values must be between %i and %i.",
                0xFFFF8000,
                0x7FFF);
            }
            else
            {
              v19 = (_DWORD *)v51[0xC]; /*0x4f0965*/
              v53 = 0; /*0x4f0968*/
              if ( NiTMap_GetAt(v19, (unsigned __int16)v9 | ((__int16)v8 << 0x10), &v53) ) /*0x4f0970*/
              {
                v20 = v53; /*0x4f097d*/
                if ( v53 ) /*0x4f0983*/
                {
                  if ( a3 == dbl_A3A5B0 || a3 > sub_4C9DA0((int)v53, a2) ) /*0x4f09b1*/
                  {
                    v21 = argC; /*0x4f09b7*/
                    if ( argC == dbl_A3A5B0 /*0x4f09e0*/
                      || (v22 = sub_4C9DA0((int)v20, a4), v23 = argC < v22, v24 = argC == v22, v21 = argC, !v23 && !v24) )
                    {
                      ++v50; /*0x4f09f1*/
                      a5a = v21; /*0x4f09fd*/
                      if ( !sub_4CBC20(v20, a2, a3, a4, a5a, a6, a7) ) /*0x4f0a13*/
                        return; /*0x4f0a13*/
                    }
                  }
                }
              }
            }
            v7 = v52; /*0x4f0a36*/
            ++v18; /*0x4f0a3a*/
            ++v9; /*0x4f0a3d*/
          }
          while ( v18 < v52 ); /*0x4f0920*/
        }
        v53 = 0; /*0x4f0a48*/
        if ( v7 > 0 ) /*0x4f0a52*/
        {
          do /*0x4f0a60*/
          {
            if ( v8 > 0x7FFF || v9 > 0x7FFF || v8 < (int)0xFFFF8000 || v9 < (int)0xFFFF8000 ) /*0x4f0a8a*/
            {
              PrintError( /*0x4f0b89*/
                "Trying to get exterior cell for invalid cell coordinate. Values must be between %i and %i.",
                0xFFFF8000,
                0x7FFF);
            }
            else
            {
              v25 = (__int16)v8; /*0x4f0a94*/
              v26 = (_DWORD *)v51[0xC]; /*0x4f0a97*/
              v27 = (unsigned __int16)v9 | (v25 << 0x10); /*0x4f0aa5*/
              v28 = *(_DWORD **)(v26[2] + 4 * (*(int (__thiscall **)(_DWORD *, int))(*v26 + 4))(v26, v27)); /*0x4f0aaf*/
              if ( v28 ) /*0x4f0ab4*/
              {
                while ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v26 + 8))(v26, v27, v28[1]) ) /*0x4f0ad0*/
                {
                  v28 = (_DWORD *)*v28; /*0x4f0ad2*/
                  if ( !v28 ) /*0x4f0ad6*/
                    goto LABEL_51; /*0x4f0ad6*/
                }
                v29 = (TESObjectCELL *)v28[2]; /*0x4f0add*/
                if ( v29 ) /*0x4f0ae2*/
                {
                  if ( a3 == dbl_A3A5B0 || a3 > sub_4C9DA0((int)v29, a2) ) /*0x4f0b10*/
                  {
                    v30 = argC; /*0x4f0b16*/
                    if ( argC == dbl_A3A5B0 /*0x4f0b3f*/
                      || (v31 = sub_4C9DA0((int)v29, a4), v32 = argC < v31, v33 = argC == v31, v30 = argC, !v32 && !v33) )
                    {
                      ++v50; /*0x4f0b4c*/
                      a5b = v30; /*0x4f0b5c*/
                      if ( !sub_4CBC20(v29, a2, a3, a4, a5b, a6, a7) ) /*0x4f0b72*/
                        return; /*0x4f0b72*/
                    }
                  }
                }
              }
LABEL_51:
              v8 = (signed int)v49; /*0x4f0b95*/
            }
            v7 = v52; /*0x4f0b9d*/
            --v8; /*0x4f0ba4*/
            v34 = (int)&v53->vtbl + 1 < v52; /*0x4f0ba7*/
            v49 = (TESObjectCELL *)v8; /*0x4f0ba9*/
            v53 = (TESObjectCELL *)((char *)v53 + 1); /*0x4f0bad*/
          }
          while ( v34 ); /*0x4f0a60*/
        }
        v53 = 0; /*0x4f0bb7*/
        if ( v7 > 0 ) /*0x4f0bc1*/
        {
          do /*0x4f0bd0*/
          {
            if ( v8 > 0x7FFF || v9 > 0x7FFF || v8 < (int)0xFFFF8000 || v9 < (int)0xFFFF8000 ) /*0x4f0bfa*/
            {
              PrintError( /*0x4f0cf5*/
                "Trying to get exterior cell for invalid cell coordinate. Values must be between %i and %i.",
                0xFFFF8000,
                0x7FFF);
            }
            else
            {
              v35 = (__int16)v8; /*0x4f0c04*/
              v36 = (_DWORD *)v51[0xC]; /*0x4f0c07*/
              v37 = (unsigned __int16)v9 | (v35 << 0x10); /*0x4f0c12*/
              v38 = *(_DWORD **)(v36[2] + 4 * (*(int (__thiscall **)(_DWORD *, int))(*v36 + 4))(v36, v37)); /*0x4f0c1f*/
              if ( v38 ) /*0x4f0c24*/
              {
                while ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v36 + 8))(v36, v37, v38[1]) ) /*0x4f0c40*/
                {
                  v38 = (_DWORD *)*v38; /*0x4f0c42*/
                  if ( !v38 ) /*0x4f0c46*/
                    goto LABEL_70; /*0x4f0c46*/
                }
                v39 = (TESObjectCELL *)v38[2]; /*0x4f0c4d*/
                if ( v39 ) /*0x4f0c52*/
                {
                  if ( a3 == dbl_A3A5B0 || a3 > sub_4C9DA0((int)v39, a2) ) /*0x4f0c80*/
                  {
                    v40 = argC; /*0x4f0c86*/
                    if ( argC == dbl_A3A5B0 /*0x4f0caf*/
                      || (v41 = sub_4C9DA0((int)v39, a4), v42 = argC < v41, v43 = argC == v41, v40 = argC, !v42 && !v43) )
                    {
                      ++v50; /*0x4f0cbc*/
                      a5c = v40; /*0x4f0ccc*/
                      if ( !sub_4CBC20(v39, a2, a3, a4, a5c, a6, a7) ) /*0x4f0ce2*/
                        return; /*0x4f0ce2*/
                    }
                  }
                }
              }
LABEL_70:
              v8 = (signed int)v49; /*0x4f0d01*/
            }
            v7 = v52; /*0x4f0d09*/
            --v9; /*0x4f0d10*/
            v53 = (TESObjectCELL *)((char *)v53 + 1); /*0x4f0d15*/
          }
          while ( (int)v53 < v52 ); /*0x4f0bd0*/
        }
      }
      while ( v50 ); /*0x4f0d24*/
      v44 = (TESObjectCELL *)v51[0xD]; /*0x4f0d2e*/
      if ( v44 ) /*0x4f0d33*/
        sub_4CBC20(v44, a2, a3, a4, argC, a6, a7); /*0x4f0d59*/
    }
  }
}
