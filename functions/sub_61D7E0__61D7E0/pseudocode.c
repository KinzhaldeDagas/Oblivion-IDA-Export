void __usercall sub_61D7E0(int a1@<ecx>, char a2@<dil>, double a3@<st2>, double a4@<st0>, double a5@<st1>)
{
  int *v7; // eax
  int v8; // eax
  _WORD *v9; // eax
  __int16 AnimGroupFromField8Value; // ax
  bool v11; // al
  int v12; // ecx
  double v13; // st5
  char v14; // al
  double v15; // st5
  bool v16; // zf
  float v17; // [esp+4h] [ebp-8h]
  float v18; // [esp+4h] [ebp-8h]
  float v19; // [esp+4h] [ebp-8h]
  float v20; // [esp+8h] [ebp-4h]
  float v21; // [esp+8h] [ebp-4h]

  if ( *(_DWORD *)(a1 + 0x70) == 8 )
  {
    v7 = sub_5E0F50(*(void **)(a1 + 0x3C));
    (*(void (__thiscall **)(int *))(*v7 + 0x154))(v7);
    v17 = a3;
    if ( v17 <= 0.0 || (v8 = *(_DWORD *)(a1 + 0x6C), v8 != 0xE) && v8 != 0x10 )
    {
      v9 = (_WORD *)(*(int (__usercall **)@<eax>(_DWORD@<ecx>, double@<st0>, double@<st1>))(**(_DWORD **)(a1 + 0x3C)
                                                                                          + 0x164))(
                      *(_DWORD *)(a1 + 0x3C),
                      a4,
                      a5);
      AnimGroupFromField8Value = ActorAnimData_GetAnimGroupFromField8Value(v9, 1);
      v11 = sub_51AC80(AnimGroupFromField8Value);
      v12 = *(_DWORD *)(a1 + 0x8C);
      if ( v12 )
      {
        if ( *(float *)(a1 + 0x108) < *(float *)(a1 + 0x44) - *(float *)(a1 + 0x104) && !v11 )
        {
          v13 = 0.0;
          if ( v17 <= 0.0
            || v12 == *(_DWORD *)(a1 + 0x94)
            || v12 == *(_DWORD *)(a1 + 0x98)
            || v12 == *(_DWORD *)(a1 + 0x9C)
            || (v13 = sub_615980(a1, a2), v17 <= v13) )
          {
            v14 = sub_617340(a1, v13, a5, a4, *(int **)(a1 + 0x8C), 0);
            *(_BYTE *)(a1 + 0x1AD) = 0;
            if ( !v14 )
              return;
          }
          else
          {
            *(_BYTE *)(a1 + 0x1AD) = 1;
          }
          v18 = *(float *)(a1 + 0x44);
          v20 = *(float *)GameSetting_GetSafeFloatPointer((int *)&flt_B37288);
          *(float *)(a1 + 0x134) = v18;
          *(float *)(a1 + 0x138) = v20;
          *(float *)(a1 + 0x13C) = flt_A30634;
          v21 = *(float *)(a1 + 0x44);
          v19 = *(float *)GameSetting_GetSafeFloatPointer((int *)&unk_B372E8);
          *(float *)(a1 + 0x104) = v21;
          *(float *)(a1 + 0x108) = v19;
          v15 = flt_A30634;
          *(float *)(a1 + 0x10C) = flt_A30634;
          v16 = *(_DWORD *)(a1 + 0x70) == 0xD;
          *(_DWORD *)(a1 + 0x8C) = 0;
          if ( v16 )
            goto LABEL_22;
          goto LABEL_21;
        }
      }
      else if ( !v11
             && !(*(int (__thiscall **)(int))(*(_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 0x5C) + 0x30))(*(_DWORD *)(a1 + 0x3C) + 0x5C) )
      {
        if ( *(_DWORD *)(a1 + 0x70) == 0xD )
        {
LABEL_22:
          *(_DWORD *)(a1 + 0x70) = 0xD;
          sub_619920(a1, 0);
          return;
        }
        v15 = flt_A30634;
LABEL_21:
        *(float *)(a1 + 0x188) = v15;
        goto LABEL_22;
      }
    }
  }
}
