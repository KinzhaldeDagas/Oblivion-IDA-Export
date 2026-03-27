double __usercall sub_6218D0@<st0>(int a1@<ecx>, char a2@<dil>, double result@<st0>)
{
  int *v5; // edi
  TESObjectREFR *v6; // eax
  double v7; // st6
  bool v8; // al
  bool v9; // bl
  double v10; // st6
  double v11; // st5
  bool v12; // al
  char v13; // al
  int v14; // ecx
  int *v15; // eax
  float v16; // [esp+0h] [ebp-24h]
  float v18; // [esp+14h] [ebp-10h]
  float v19; // [esp+18h] [ebp-Ch]
  float v20; // [esp+18h] [ebp-Ch]
  char v21; // [esp+1Ch] [ebp-8h]
  float v22; // [esp+20h] [ebp-4h]

  if ( *(_DWORD *)(a1 + 0x6C) == 3 )
  {
    v21 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(a1 + 0x3C) + 0x58) + 0x2C0))(*(_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 0x58));
    if ( !sub_5E05B0(*(_DWORD **)(a1 + 0x3C)) )
    {
      sub_619920(a1, 0);
      *(float *)(a1 + 0x54) = flt_A30634;
      *(_BYTE *)(a1 + 0x58) = 0;
      return result;
    }
    if ( *(float *)(a1 + 0x184) < 0.0 )
    {
      v5 = *(int **)(a1 + 0x3C);
      v6 = (TESObjectREFR *)sub_6135F0(a1);
      result = TESObjectREFR_GetDistanceBetween_(v5, (TESObjectREFR *)v5, v6, 0, a2);
      *(float *)(a1 + 0x184) = 0.0;
    }
    v18 = *(float *)(a1 + 0x184);
    v22 = sub_615520(a1);
    v7 = v18;
    v8 = 1;
    if ( *(float *)(a1 + 0x54) > 0.0 )
    {
      v19 = v7 - *(float *)(a1 + 0x54);
      v20 = fabs(v19);
      if ( v20 <= (double)*(float *)&dword_A46C30 )
        v8 = 0;
    }
    v9 = 0;
    if ( !v8 )
    {
      if ( sub_5E05B0(*(_DWORD **)(a1 + 0x3C)) )
      {
        if ( *(_BYTE *)(a1 + 0x58) )
        {
          v9 = *(float *)(a1 + 0xFC) < *(float *)(a1 + 0x44) - *(float *)(a1 + 0xF8);
        }
        else
        {
          v10 = *(float *)(a1 + 0x44);
          *(_BYTE *)(a1 + 0x58) = 1;
          *(float *)(a1 + 0xF8) = v10;
          *(float *)(a1 + 0xFC) = 1.0;
          *(float *)(a1 + 0x100) = flt_A30634;
        }
      }
      v7 = v18;
    }
    if ( (v21 & 2) != 0 )
    {
      if ( fCombatMinEngageDistance > v7 )
      {
        *(float *)(a1 + 0x54) = v7;
        sub_6213D0(a1);
        return result;
      }
      (*(void (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(*(_DWORD *)(a1 + 0x3C) + 0x58) + 0x2C4))(
        *(_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 0x58),
        2,
        0);
      sub_619920(a1, 0);
      goto LABEL_24;
    }
    if ( *(_BYTE *)(a1 + 0x58) || *(float *)(a1 + 0xFC) < *(float *)(a1 + 0x44) - *(float *)(a1 + 0xF8) )
    {
      v11 = v22;
      if ( v22 >= v7 )
      {
        sub_619920(a1, 0);
LABEL_24:
        *(float *)(a1 + 0x54) = flt_A30634;
        *(_BYTE *)(a1 + 0x58) = 0;
        return result;
      }
      v16 = v7;
      if ( sub_613440((void **)a1, v16, v22, 0) && !v9
        || (v12 = sub_612690(*(_DWORD *)(a1 + 0x70))) && !*(_DWORD *)(a1 + 0x74) )
      {
        *(float *)(a1 + 0x54) = v18;
        return result;
      }
      *(float *)(a1 + 0x54) = flt_A30634;
      *(_BYTE *)(a1 + 0x58) = 0;
      if ( v12 )
      {
        v13 = sub_614290(a1);
        v14 = a1;
        if ( !v13 )
        {
          sub_6160B0((Actor **)a1);
          sub_61FE90((float *)a1, v11, result);
          return result;
        }
      }
      else
      {
        if ( !sub_614290(a1) )
        {
          v15 = sub_5E0F50(*(void **)(a1 + 0x3C));
          if ( (*(unsigned __int8 (__thiscall **)(int *, int))(*v15 + 0x16C))(v15, 0x80) )
          {
            sub_6160B0((Actor **)a1);
            sub_61FEF0((float *)a1, v11, result);
            return result;
          }
        }
        v14 = a1;
      }
      sub_61D320(v14);
    }
  }
  return result;
}
