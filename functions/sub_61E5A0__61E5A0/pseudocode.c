void __userpurge sub_61E5A0(
        int a1@<ecx>,
        int a2@<ebp>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        float a6,
        float a7)
{
  int v8; // eax
  _WORD *v9; // eax
  __int16 AnimGroupFromField8Value; // ax
  int v11; // edi
  int v12; // eax
  _DWORD **v13; // eax
  _DWORD **v14; // eax
  _DWORD **v15; // eax
  _DWORD **v16; // eax
  _DWORD *v17; // eax
  int v18; // ebx
  int v19; // eax
  int v20; // edi
  int *v21; // eax
  int v22; // eax
  void *v23; // edi
  int v24; // ebp
  char v25; // al
  float v26; // edx
  int v27; // eax
  int *v28; // eax
  _DWORD **v29; // edi
  int v30; // eax
  int *v31; // eax
  double v32; // st7
  double v33; // st5
  bool v34; // c0
  bool v35; // c3
  double v36; // st5
  double v37; // st4
  double v38; // st5
  int v39; // [esp-8h] [ebp-3Ch]
  int v40; // [esp-4h] [ebp-38h]
  int v41; // [esp+0h] [ebp-34h]
  float v42; // [esp+8h] [ebp-2Ch]
  char v43; // [esp+8h] [ebp-2Ch]
  char v45; // [esp+10h] [ebp-24h]
  int v46; // [esp+10h] [ebp-24h]
  int v47; // [esp+24h] [ebp-10h]
  int v48; // [esp+28h] [ebp-Ch]
  int v49; // [esp+28h] [ebp-Ch]
  bool IsBlocking; // [esp+2Ch] [ebp-8h]
  double v51; // [esp+2Ch] [ebp-8h]
  float v52; // [esp+38h] [ebp+4h]
  float v53; // [esp+3Ch] [ebp+8h]

  if ( *(_DWORD *)(a1 + 0x74) == 3 )
  {
    if ( sub_6135F0(a1) )
    {
      if ( *(_BYTE *)(a1 + 0xC4) )
      {
        v8 = *(_DWORD *)(a1 + 0x70);
        if ( v8 != 2
          && v8 != 4
          && !(*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 0x3C) + 0x25C))(*(_DWORD *)(a1 + 0x3C)) )
        {
          if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(a1 + 0x3C) + 0x58) + 0x2DC))(*(_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 0x58)) )
          {
            if ( !(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 0x3C) + 0x164))(*(_DWORD *)(a1 + 0x3C))
              || (v9 = (_WORD *)(*(int (__usercall **)@<eax>(_DWORD@<ecx>, double@<st0>, double@<st1>))(**(_DWORD **)(a1 + 0x3C) + 0x164))(
                                  *(_DWORD *)(a1 + 0x3C),
                                  a5,
                                  a4),
                  AnimGroupFromField8Value = ActorAnimData_GetAnimGroupFromField8Value(v9, 3),
                  !sub_51ACC0(AnimGroupFromField8Value)) )
            {
              if ( !Actor_IsNPC(*(Actor **)(a1 + 0x3C)) || !Actor_IsSwimming(*(_DWORD **)(a1 + 0x3C)) )
              {
                if ( *(_BYTE *)(a1 + 0x158) )
                {
                  v11 = *(_DWORD *)(a1 + 0x3C);
                  v12 = sub_6135F0(a1);
                  if ( sub_6131D0(v11, v12, 0) )
                  {
                    v13 = (_DWORD **)sub_6135F0(a1);
                    LOBYTE(v48) = sub_5E5640(v13);
                    v14 = (_DWORD **)sub_6135F0(a1);
                    LOBYTE(v47) = Actor_GetCurrentAction(v14) == 3;
                    v15 = (_DWORD **)sub_6135F0(a1);
                    if ( Actor_GetCurrentAction(v15) != 7 )
                    {
                      v16 = (_DWORD **)sub_6135F0(a1);
                      Actor_GetCurrentAction(v16);
                    }
                    v17 = (_DWORD *)sub_6135F0(a1);
                    v18 = v48;
                    IsBlocking = Actor_IsBlocking(v17);
                    v19 = sub_61E0F0(a1, a3, a4, a6, a6, a7, v48, v47, 1);
                    v49 = v19;
                    if ( v19 != 0xFF )
                    {
                      if ( sub_6134C0((void **)a1, v19) )
                      {
                        v20 = GetRandomLargeInteger_(0) % 0x64;
                        v21 = sub_5E0F50(*(void **)(a1 + 0x3C));
                        if ( v20 < (*(char (__thiscall **)(int *))(*v21 + 0x160))(v21) )
                        {
                          v22 = sub_6135F0(a1);
                          v23 = *(void **)(a1 + 0x3C);
                          v24 = *(_DWORD *)(a1 + 0x70);
                          v25 = (*(int (__usercall **)@<eax>(int@<ecx>, bool, int, double@<st0>, double@<st1>))(*(_DWORD *)v22 + 0x19C))(
                                  v22,
                                  IsBlocking,
                                  a2,
                                  a6,
                                  a4);
                          LOBYTE(v26) = v24 == 0;
                          v45 = v25;
                          v42 = v26;
                          v40 = (*(int (__thiscall **)(void *))(*(_DWORD *)v23 + 0x284))(v23);
                          sub_613780((void **)a1);
                          v39 = v27;
                          v28 = sub_5E0F50(v23);
                          sub_546800(v28, v39, v40, 7, *(float *)&v18, v42, *(float *)&v49, v45);
                          v29 = *(_DWORD ***)(a1 + 0x3C);
                          v30 = (*(int (__thiscall **)(_DWORD *, int, int))(*v29[0x16] + 0xF8))(v29[0x16], 1, v18);
                          LOBYTE(v30) = v30 != 0;
                          v46 = v30;
                          v43 = ((int (__thiscall *)(_DWORD **))(*v29)[0xA1])(v29);
                          v41 = ((int (__thiscall *)(_DWORD **))(*v29)[0xA1])(v29);
                          v31 = sub_5E0F50(v29);
                          v32 = sub_546D40(v31, v41, 0xF, v43, COERCE_FLOAT(7));
                          v52 = a3;
                          v51 = fCostant_100 - (v52 + a7);
                          v33 = *(float *)GameSetting_GetSafeFloatPointer((int *)&fCombatMaxHoldScore);
                          v34 = v51 < v33;
                          v35 = v51 == v33;
                          v36 = v51;
                          if ( v34 || v35 )
                            v36 = *(float *)GameSetting_GetSafeFloatPointer((int *)&fCombatMaxHoldScore);
                          if ( v52 < (double)a7 )
                          {
                            v37 = v36;
                            v38 = a7;
                            v53 = v37;
                            if ( v53 < v38 )
                            {
                              sub_612BD0(a1, v18, v46, a4, v32, v49, 0);
                              sub_619920(a1, 0);
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}
