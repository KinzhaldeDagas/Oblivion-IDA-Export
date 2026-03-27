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

  v51 = this;
  if ( a6 )
  {
    v7 = 0;
    v8 = Double_To_SInt32(*a2) >> 0xC;
    v9 = Double_To_SInt32(a2[1]) >> 0xC;
    CellAtCellCoord = (TESObjectCELL *)TESWorldSpace::GetCellAtCellCoord((TESWorldSpace *)v51, v8, v9);
    if ( !CellAtCellCoord || sub_4CBC20(CellAtCellCoord, a2, a3, a4, argC, a6, a7) )
    {
      do
      {
        v7 += 2;
        --v8;
        v11 = 0;
        --v9;
        v49 = (TESObjectCELL *)v8;
        v52 = v7;
        v50 = 0;
        if ( v7 > 0 )
        {
          do
          {
            if ( v8 > 0x7FFF || v9 > 0x7FFF || v8 < (int)0xFFFF8000 || v9 < (int)0xFFFF8000 )
            {
              PrintError(
                "Trying to get exterior cell for invalid cell coordinate. Values must be between %i and %i.",
                0xFFFF8000,
                0x7FFF);
            }
            else
            {
              v12 = (_DWORD *)v51[0xC];
              v49 = 0;
              if ( NiTMap_GetAt(v12, (unsigned __int16)v9 | ((__int16)v8 << 0x10), &v49) )
              {
                v13 = v49;
                if ( v49 )
                {
                  if ( a3 == dbl_A3A5B0 || a3 > sub_4C9DA0((int)v49, a2) )
                  {
                    v14 = argC;
                    if ( argC == dbl_A3A5B0
                      || (v15 = sub_4C9DA0((int)v13, a4), v16 = argC < v15, v17 = argC == v15, v14 = argC, !v16 && !v17) )
                    {
                      ++v50;
                      a5 = v14;
                      if ( !sub_4CBC20(v13, a2, a3, a4, a5, a6, a7) )
                        return;
                    }
                  }
                }
              }
            }
            v7 = v52;
            ++v8;
            ++v11;
            v49 = (TESObjectCELL *)v8;
          }
          while ( v11 < v52 );
        }
        v18 = 0;
        if ( v7 > 0 )
        {
          do
          {
            if ( v8 > 0x7FFF || v9 > 0x7FFF || v8 < (int)0xFFFF8000 || v9 < (int)0xFFFF8000 )
            {
              PrintError(
                "Trying to get exterior cell for invalid cell coordinate. Values must be between %i and %i.",
                0xFFFF8000,
                0x7FFF);
            }
            else
            {
              v19 = (_DWORD *)v51[0xC];
              v53 = 0;
              if ( NiTMap_GetAt(v19, (unsigned __int16)v9 | ((__int16)v8 << 0x10), &v53) )
              {
                v20 = v53;
                if ( v53 )
                {
                  if ( a3 == dbl_A3A5B0 || a3 > sub_4C9DA0((int)v53, a2) )
                  {
                    v21 = argC;
                    if ( argC == dbl_A3A5B0
                      || (v22 = sub_4C9DA0((int)v20, a4), v23 = argC < v22, v24 = argC == v22, v21 = argC, !v23 && !v24) )
                    {
                      ++v50;
                      a5a = v21;
                      if ( !sub_4CBC20(v20, a2, a3, a4, a5a, a6, a7) )
                        return;
                    }
                  }
                }
              }
            }
            v7 = v52;
            ++v18;
            ++v9;
          }
          while ( v18 < v52 );
        }
        v53 = 0;
        if ( v7 > 0 )
        {
          do
          {
            if ( v8 > 0x7FFF || v9 > 0x7FFF || v8 < (int)0xFFFF8000 || v9 < (int)0xFFFF8000 )
            {
              PrintError(
                "Trying to get exterior cell for invalid cell coordinate. Values must be between %i and %i.",
                0xFFFF8000,
                0x7FFF);
            }
            else
            {
              v25 = (__int16)v8;
              v26 = (_DWORD *)v51[0xC];
              v27 = (unsigned __int16)v9 | (v25 << 0x10);
              v28 = *(_DWORD **)(v26[2] + 4 * (*(int (__thiscall **)(_DWORD *, int))(*v26 + 4))(v26, v27));
              if ( v28 )
              {
                while ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v26 + 8))(v26, v27, v28[1]) )
                {
                  v28 = (_DWORD *)*v28;
                  if ( !v28 )
                    goto LABEL_51;
                }
                v29 = (TESObjectCELL *)v28[2];
                if ( v29 )
                {
                  if ( a3 == dbl_A3A5B0 || a3 > sub_4C9DA0((int)v29, a2) )
                  {
                    v30 = argC;
                    if ( argC == dbl_A3A5B0
                      || (v31 = sub_4C9DA0((int)v29, a4), v32 = argC < v31, v33 = argC == v31, v30 = argC, !v32 && !v33) )
                    {
                      ++v50;
                      a5b = v30;
                      if ( !sub_4CBC20(v29, a2, a3, a4, a5b, a6, a7) )
                        return;
                    }
                  }
                }
              }
LABEL_51:
              v8 = (signed int)v49;
            }
            v7 = v52;
            --v8;
            v34 = (int)&v53->vtbl + 1 < v52;
            v49 = (TESObjectCELL *)v8;
            v53 = (TESObjectCELL *)((char *)v53 + 1);
          }
          while ( v34 );
        }
        v53 = 0;
        if ( v7 > 0 )
        {
          do
          {
            if ( v8 > 0x7FFF || v9 > 0x7FFF || v8 < (int)0xFFFF8000 || v9 < (int)0xFFFF8000 )
            {
              PrintError(
                "Trying to get exterior cell for invalid cell coordinate. Values must be between %i and %i.",
                0xFFFF8000,
                0x7FFF);
            }
            else
            {
              v35 = (__int16)v8;
              v36 = (_DWORD *)v51[0xC];
              v37 = (unsigned __int16)v9 | (v35 << 0x10);
              v38 = *(_DWORD **)(v36[2] + 4 * (*(int (__thiscall **)(_DWORD *, int))(*v36 + 4))(v36, v37));
              if ( v38 )
              {
                while ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v36 + 8))(v36, v37, v38[1]) )
                {
                  v38 = (_DWORD *)*v38;
                  if ( !v38 )
                    goto LABEL_70;
                }
                v39 = (TESObjectCELL *)v38[2];
                if ( v39 )
                {
                  if ( a3 == dbl_A3A5B0 || a3 > sub_4C9DA0((int)v39, a2) )
                  {
                    v40 = argC;
                    if ( argC == dbl_A3A5B0
                      || (v41 = sub_4C9DA0((int)v39, a4), v42 = argC < v41, v43 = argC == v41, v40 = argC, !v42 && !v43) )
                    {
                      ++v50;
                      a5c = v40;
                      if ( !sub_4CBC20(v39, a2, a3, a4, a5c, a6, a7) )
                        return;
                    }
                  }
                }
              }
LABEL_70:
              v8 = (signed int)v49;
            }
            v7 = v52;
            --v9;
            v53 = (TESObjectCELL *)((char *)v53 + 1);
          }
          while ( (int)v53 < v52 );
        }
      }
      while ( v50 );
      v44 = (TESObjectCELL *)v51[0xD];
      if ( v44 )
        sub_4CBC20(v44, a2, a3, a4, argC, a6, a7);
    }
  }
}
