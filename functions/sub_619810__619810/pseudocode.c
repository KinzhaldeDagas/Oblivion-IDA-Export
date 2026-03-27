double __usercall sub_619810@<st0>(int a1@<ecx>, double result@<st0>)
{
  _WORD *v5; // eax
  __int16 AnimGroupFromField8Value; // ax
  bool v7; // al
  int *v8; // ecx
  double v9; // st6
  double v10; // st5
  int v11; // eax
  float v12; // [esp+4h] [ebp-8h]
  float v13; // [esp+8h] [ebp-4h]

  if ( *(_DWORD *)(a1 + 0x70) == 9 )
  {
    v5 = (_WORD *)(*(int (__usercall **)@<eax>(_DWORD@<ecx>, double@<st0>))(**(_DWORD **)(a1 + 0x3C) + 0x164))(
                    *(_DWORD *)(a1 + 0x3C),
                    result);
    AnimGroupFromField8Value = ActorAnimData_GetAnimGroupFromField8Value(v5, 1);
    v7 = sub_51AC80(AnimGroupFromField8Value);
    v8 = *(int **)(a1 + 0x84);
    if ( v8 )
    {
      v9 = *(float *)(a1 + 0x44) - *(float *)(a1 + 0x104);
      v10 = *(float *)(a1 + 0x108);
      if ( v10 < v9 && !v7 )
      {
        if ( sub_617340(a1, v10, v9, result, v8, 0) )
        {
          v12 = *(float *)(a1 + 0x44);
          v13 = *(float *)GameSetting_GetSafeFloatPointer((int *)&unk_B372E8);
          *(float *)(a1 + 0x104) = v12;
          *(float *)(a1 + 0x108) = v13;
          *(float *)(a1 + 0x10C) = flt_A30634;
          v11 = *(_DWORD *)(a1 + 0x88);
          if ( v11 )
          {
            if ( v11 == *(_DWORD *)(a1 + 0x84) )
              *(_DWORD *)(a1 + 0x88) = 0;
          }
          *(_DWORD *)(a1 + 0x84) = 0;
        }
      }
    }
    else if ( !v7
           && !(*(int (__thiscall **)(int))(*(_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 0x5C) + 0x30))(*(_DWORD *)(a1 + 0x3C) + 0x5C) )
    {
      if ( *(_DWORD *)(a1 + 0x70) != 0xD )
        *(float *)(a1 + 0x188) = flt_A30634;
      *(_DWORD *)(a1 + 0x70) = 0xD;
    }
  }
  return result;
}
