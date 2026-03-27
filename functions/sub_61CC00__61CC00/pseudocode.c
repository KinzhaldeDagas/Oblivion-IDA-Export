void __usercall sub_61CC00(int a1@<ecx>, char a2@<dil>)
{
  int v3; // ecx
  bool v4; // bl
  int *v5; // edi
  TESObjectREFR *v6; // eax
  float *v7; // eax
  Actor **v8; // eax
  char v9; // bl
  int v10; // eax
  _DWORD *v11; // eax
  Actor **v12; // eax
  int v13; // eax
  float v15; // [esp+14h] [ebp-10h]
  float v16; // [esp+14h] [ebp-10h]
  float v17; // [esp+18h] [ebp-Ch]
  float v18; // [esp+1Ch] [ebp-8h]
  float v19; // [esp+20h] [ebp-4h]

  v3 = *(_DWORD *)(a1 + 0x6C);
  if ( v3 != 0xE && v3 != 0x10 )
    return;
  v4 = *(float *)(a1 + 0xD8) < *(float *)(a1 + 0x44) - *(float *)(a1 + 0xD4);
  v5 = *(int **)(a1 + 0x3C);
  if ( v3 != 0x10 )
  {
    if ( *(float *)(a1 + 0xD8) >= *(float *)(a1 + 0x44) - *(float *)(a1 + 0xD4) )
      v9 = (*(int (__stdcall **)(int *, _DWORD, int))(*(_DWORD *)v5[0x16] + 0x240))(v5, *(float *)(a1 + 0x170), 0x201);
    else
      v9 = 1;
    v10 = (*(int (__thiscall **)(int))(*(_DWORD *)v5[0x16] + 0x184))(v5[0x16]);
    if ( !v10
      || *(_BYTE *)(v10 + 0x20) != 0xC
      || !v9 && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v5[0x16] + 0xC8))(v5[0x16]) )
    {
      return;
    }
LABEL_23:
    if ( (*(int (__thiscall **)(int *))(*v5 + 0x330))(v5) )
    {
      v11 = (_DWORD *)(*(int (__thiscall **)(int *))(*v5 + 0x330))(v5);
      sub_612DA0(v11, 9);
      v12 = (Actor **)(*(int (__thiscall **)(int *))(*v5 + 0x330))(v5);
      sub_6160B0(v12);
      v13 = (*(int (__thiscall **)(int *))(*v5 + 0x330))(v5);
      sub_619920(v13, 0);
    }
    return;
  }
  if ( *(float *)(a1 + 0x184) < 0.0 )
  {
    v6 = (TESObjectREFR *)sub_6135F0(a1);
    *(float *)(a1 + 0x184) = TESObjectREFR_GetDistanceBetween_(v5, (TESObjectREFR *)v5, v6, 0, a2);
  }
  if ( *(float *)(a1 + 0x170) <= (double)*(float *)(a1 + 0x184) )
    goto LABEL_23;
  if ( !byte_B333B8 )
  {
    v7 = (float *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 0x3C) + 0x174))(*(_DWORD *)(a1 + 0x3C));
    v17 = *(float *)(a1 + 0x198) - *v7;
    v18 = *(float *)(a1 + 0x19C) - v7[1];
    v19 = *(float *)(a1 + 0x1A0) - v7[2];
    v15 = v18 * v18 + v17 * v17 + v19 * v19;
    if ( v15 >= flt_B372C8 * flt_B372C8 )
      sub_614BB0(a1);
  }
  if ( v4 || (*(_BYTE *)(a1 + 0x192) & 2) != 0 )
  {
    if ( (*(_BYTE *)(a1 + 0x192) & 2) != 0 )
    {
      v8 = (Actor **)(*(int (__thiscall **)(int *))(*v5 + 0x330))(v5);
      sub_6160B0(v8);
    }
    v16 = *(float *)(a1 + 0xDC);
    if ( sub_5E5850((TESObjectREFR *)*(_DWORD *)(a1 + 0x3C), 7) < v16 )
    {
      *(float *)(a1 + 0xD4) = *(float *)(a1 + 0x44);
      *(float *)(a1 + 0xD8) = v16;
      *(float *)(a1 + 0xDC) = flt_A30634;
      sub_619920(a1, 0xE);
      return;
    }
    goto LABEL_23;
  }
}
