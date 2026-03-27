void __thiscall sub_683DF0(float *this, _DWORD *a2)
{
  int v4; // ebx
  float *v5; // ebp
  char *v6; // eax
  float *v7; // eax
  float *v8; // ebp
  char *v9; // eax
  float *v10; // eax
  float v11; // [esp+14h] [ebp-10h]
  float v12; // [esp+14h] [ebp-10h]
  float v13; // [esp+18h] [ebp-Ch] BYREF
  float v14; // [esp+1Ch] [ebp-8h]
  float v15; // [esp+20h] [ebp-4h]
  float v16; // [esp+28h] [ebp+4h]

  v4 = *((_DWORD *)this + 0x12) + 1;
  if ( a2 && sub_42B410((BSExtraData *)(this + 5)) )
  {
    if ( v4 == 1 )
    {
      if ( !*((_DWORD *)this + 0xC) )
        goto LABEL_18;
      v8 = (float *)(*(int (__thiscall **)(_DWORD *))(*a2 + 0x174))(a2);
      v9 = (char *)sub_42B410((BSExtraData *)(this + 5));
      v10 = (float *)sub_6899C0(v9);
      v13 = *v10 - *v8;
      v14 = v10[1] - v8[1];
      v15 = v10[2] - v8[2];
      v12 = sub_683CB0(&v13) - dbl_A74C90;
      v16 = 1.0;
      if ( Actor_IsSwimming(a2) )
        v16 = fConstant_2;
      if ( sub_5E0510(a2) )
        v16 = v16 * dbl_A31C70;
      sub_680E70(*((float **)this + 0xC), v12);
      sub_680D20(*((float **)this + 0xC), v12);
      TESLeveledList_SetChanceNone(*((_BYTE **)this + 0xC), 3);
      goto LABEL_17;
    }
    if ( v4 == 2 && *((_DWORD *)this + 0xC) )
    {
      v5 = (float *)(*(int (__thiscall **)(_DWORD *))(*a2 + 0x174))(a2);
      v6 = (char *)sub_42B410((BSExtraData *)(this + 5));
      v7 = (float *)sub_6899C0(v6);
      v13 = *v7 - *v5;
      v14 = v7[1] - v5[1];
      v15 = v7[2] - v5[2];
      v11 = sub_683CB0(&v13) + dbl_A74C90;
      v16 = 1.0;
      if ( Actor_IsSwimming(a2) )
        v16 = fConstant_2;
      if ( sub_5E0510(a2) )
        v16 = v16 * dbl_A31C70;
      sub_680E70(*((float **)this + 0xC), v11);
      sub_680D20(*((float **)this + 0xC), v11);
      TESLeveledList_SetChanceNone(*((_BYTE **)this + 0xC), 4);
LABEL_17:
      sub_680CD0(*((float **)this + 0xC), 0.0);
      sub_680CE0(*((float **)this + 0xC), v16);
      sub_680D00(*((float **)this + 0xC), 0.0);
      *(this + 7) = flt_A32048;
      *(this + 9) = 0.0;
      *(this + 8) = 0.0;
    }
  }
LABEL_18:
  *((_DWORD *)this + 0x12) = v4;
  if ( v4 >= 3 )
    (*(void (__thiscall **)(float *, int))(*(_DWORD *)this + 0x30))(this, 1);
}
