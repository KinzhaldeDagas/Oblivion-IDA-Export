void __usercall sub_61FC30(int a1@<ecx>, float a2@<edi>)
{
  int v2; // edi
  int v4; // eax
  int v5; // ecx
  MobileObject *v6; // edi
  int v7; // eax
  _WORD *v8; // eax
  __int16 AnimGroupFromField8Value; // ax
  _WORD *v10; // eax
  __int16 v11; // ax
  bool v12; // bl
  int *SafeFloatPointer; // eax
  int *v14; // esi
  int v15; // edi
  double v16; // st7
  void (__thiscall *v17)(int *, _DWORD); // eax
  _DWORD *v18; // ebx
  void (__thiscall **v19)(_DWORD *, int); // edi
  int v20; // eax
  int v21; // [esp+0h] [ebp-1Ch]
  float v22; // [esp+Ch] [ebp-10h]
  bool v23; // [esp+13h] [ebp-9h]
  float v24; // [esp+14h] [ebp-8h]
  float v25; // [esp+18h] [ebp-4h] BYREF

  v4 = *(_DWORD *)(a1 + 0x6C);
  if ( v4 == 7
    || (v5 = *(_DWORD *)(a1 + 0x70), v5 == 7)
    || v5 == 0xC
    || v4 == 8
    || v4 == 0xE
    || v4 == 0xC
    || v4 == 4 && *(_DWORD *)(a1 + 0x74)
    || !sub_6135F0(a1)
    || *(_DWORD *)(a1 + 0x1A8) < iAICombatMinDetection )
  {
    v25 = v22;
    if ( *(_BYTE *)(a1 + 0x17D) )
    {
      (*(void (__thiscall **)(_DWORD, int, float))(**(_DWORD **)(*(_DWORD *)(a1 + 0x3C) + 0x58) + 0xC4))(
        *(_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 0x58),
        1,
        COERCE_FLOAT(LODWORD(v25)));
      sub_5E05F0(*(Actor **)(a1 + 0x3C), 0x30);
      *(_BYTE *)(a1 + 0x17D) = 0;
    }
    if ( *(_DWORD *)(a1 + 0x1A8) < iAICombatMinDetection )
    {
      v2 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(a1 + 0x3C) + 0x58) + 0x4CC))(*(_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 0x58));
      if ( v2 == sub_6135F0(a1) )
        __asm { jmp     eax }
    }
  }
  else
  {
    if ( *(_BYTE *)(a1 + 0x17D) )
    {
      sub_61FAD0(a1, a2);
      return;
    }
    v6 = *(MobileObject **)(a1 + 0x3C);
    v21 = *(_DWORD *)(a1 + 0x180);
    v7 = sub_6135F0(a1);
    v24 = sub_61DDF0(v6, v7, &v25, v21);
    v8 = (_WORD *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 0x3C) + 0x164))(*(_DWORD *)(a1 + 0x3C));
    AnimGroupFromField8Value = ActorAnimData_GetAnimGroupFromField8Value(v8, 3);
    v23 = sub_51AC80(AnimGroupFromField8Value);
    v10 = (_WORD *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 0x3C) + 0x164))(*(_DWORD *)(a1 + 0x3C));
    v11 = ActorAnimData_GetAnimGroupFromField8Value(v10, 3);
    v12 = sub_51ACC0(v11);
    if ( *(_DWORD *)(a1 + 0x6C) >= 2u && *(_DWORD *)(a1 + 0x70) != 6 && (sub_5E05B0(*(_DWORD **)(a1 + 0x3C)) || v12) )
    {
      SafeFloatPointer = GameSetting_GetSafeFloatPointer((int *)&unk_B36DA0);
      v25 = dbl_A30DC8 * v24;
      v25 = fabs(v25);
      if ( *(float *)SafeFloatPointer <= (double)v25
        && !sub_612690(*(_DWORD *)(a1 + 0x70))
        && !v23
        && !sub_612CD0((_DWORD *)a1) )
      {
        *(_BYTE *)(a1 + 0x17D) = 1;
        return;
      }
      if ( sub_612690(*(_DWORD *)(a1 + 0x70)) )
      {
        v25 = fabs(v24);
        if ( v25 > (double)*(float *)&SrcStr )
          goto LABEL_25;
      }
      v18 = *(_DWORD **)(a1 + 0x3C);
      v19 = (void (__thiscall **)(_DWORD *, int))(*v18 + 0x1E4);
      v20 = sub_6135F0(a1);
      (*v19)(v18, v20);
    }
    else
    {
      if ( sub_612690(*(_DWORD *)(a1 + 0x70)) )
      {
LABEL_25:
        v14 = *(int **)(a1 + 0x3C);
        v15 = *v14;
        v16 = ((double (__thiscall *)(int *))*(_DWORD *)(*v14 + 0x1E0))(v14);
        v17 = *(void (__thiscall **)(int *, _DWORD))(v15 + 0x1E8);
        v25 = v16 + v24;
        v17(v14, LODWORD(v25));
        return;
      }
      v25 = v24 * dbl_A30DC8;
      v25 = fabs(v25);
      if ( v25 >= (double)flt_A31C80 )
        *(_BYTE *)(a1 + 0x17D) = 1;
    }
  }
}
