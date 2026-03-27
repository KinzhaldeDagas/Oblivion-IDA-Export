double __usercall sub_622BD0@<st0>(int a1@<ecx>, char a2@<dil>, double result@<st0>)
{
  double v6; // st6
  int *v7; // edi
  TESObjectREFR *v8; // eax
  double v9; // st5
  double v10; // st6
  int v11; // eax
  double v12; // st5
  char v13; // al
  char v14; // al
  float v16; // [esp+4h] [ebp-Ch] BYREF
  float v17; // [esp+8h] [ebp-8h] BYREF
  float v18; // [esp+Ch] [ebp-4h] BYREF

  if ( *(_DWORD *)(a1 + 0x6C) == 0xA )
  {
    v6 = 0.0;
    if ( *(float *)(a1 + 0x184) < 0.0 )
    {
      v7 = *(int **)(a1 + 0x3C);
      v8 = (TESObjectREFR *)sub_6135F0(a1);
      result = TESObjectREFR_GetDistanceBetween_(v7, (TESObjectREFR *)v7, v8, 0, a2);
      *(float *)(a1 + 0x184) = 0.0;
      v6 = 0.0;
    }
    v9 = *(float *)(a1 + 0x184);
    v18 = *(float *)(a1 + 0x184);
    v16 = v6;
    v17 = v6;
    sub_6142D0((_DWORD *)a1, COERCE_FLOAT(&v16), COERCE_FLOAT(&v17));
    if ( *(_BYTE *)(a1 + 0x49) || *(_DWORD *)(a1 + 0x74) == 1 )
    {
      sub_6191B0(a1, v9, v6, result);
    }
    else
    {
      result = v18;
      v10 = v16;
      if ( v16 >= (double)v18 || (v9 = v17, v17 < result) )
      {
        if ( v10 >= result )
        {
          sub_621270(a1, v9, v10, result);
          v11 = *(_DWORD *)(a1 + 0x6C);
          if ( v11 != 0xA && v11 != 0xB )
            sub_619920(a1, 0);
        }
      }
      else
      {
        result = sub_6213D0(a1);
      }
      if ( !sub_6195B0((float *)a1) )
      {
        v12 = *(float *)(a1 + 0xD8);
        if ( v12 < *(float *)(a1 + 0x44) - *(float *)(a1 + 0xD4) )
        {
          ((void (__thiscall *)(int))loc_622820)(a1);
          if ( !v13 )
          {
            if ( sub_614290(a1) || (result = sub_6150E0((_DWORD *)a1, v12, result, 0), v14) )
            {
              sub_61D320(a1);
            }
            else
            {
              *(float *)(a1 + 0xD4) = *(float *)(a1 + 0x44);
              *(float *)(a1 + 0xD8) = *(float *)&dword_A46C30;
              *(float *)(a1 + 0xDC) = flt_A30634;
            }
            if ( !*(_DWORD *)(a1 + 0x80) )
              *(_DWORD *)(a1 + 0x80) = sub_616980((_DWORD *)a1, result, &v18, 4, *(unsigned __int8 *)(a1 + 0x17C));
          }
        }
      }
    }
  }
  return result;
}
