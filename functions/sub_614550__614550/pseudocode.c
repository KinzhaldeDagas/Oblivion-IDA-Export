double __userpurge sub_614550@<st0>(int a1@<ecx>, float a2@<edi>, double result@<st0>, double a4@<st1>, int a5)
{
  int v6; // eax
  int v7; // eax
  unsigned __int8 AnimGroup; // al
  unsigned __int8 v9; // al
  int v10; // eax
  TESObjectREFR *v11; // ecx
  unsigned __int8 v12; // al
  int v13; // eax
  TESObjectREFR *v14; // ecx
  unsigned __int8 v15; // al
  char v16; // cl
  int v17; // eax
  float *v18; // eax
  int *SafeFloatPointer; // edi
  _DWORD *v20; // eax
  int v21; // ecx
  int *v22; // edi
  double v23; // st7
  int v24; // eax
  int v25; // edi
  double v26; // st6
  double v27; // st5
  double v28; // st4
  int v29; // eax
  NiTransform *v30; // eax
  NiTransform *v31; // eax
  NiTransform *v32; // eax
  NiTransform *v33; // eax
  bool v34; // zf
  char v35; // al
  char v36; // al
  char v37; // al
  char v38; // al
  float v39; // [esp+0h] [ebp-94h]
  float v41; // [esp+8h] [ebp-8Ch]
  _BYTE v42[20]; // [esp+Ch] [ebp-88h] BYREF
  float v43; // [esp+20h] [ebp-74h]
  NiPoint3 v44; // [esp+24h] [ebp-70h] BYREF
  NiPoint3 v45; // [esp+30h] [ebp-64h] BYREF
  NiPoint3 v46; // [esp+3Ch] [ebp-58h] BYREF
  _BYTE v47[8]; // [esp+4Ch] [ebp-48h] BYREF
  NiTransform v48; // [esp+54h] [ebp-40h] BYREF

  v6 = *(_DWORD *)(a1 + 0x3C);
  if ( v6 )
  {
    v7 = *(_DWORD *)(v6 + 0x58);
    if ( v7 )
    {
      if ( !(*(int (__thiscall **)(int))(*(_DWORD *)v7 + 8))(v7) )
      {
        if ( !*(_BYTE *)(a1 + 0x190) )
        {
          AnimGroup = Actor_LoadAnimGroup_(*(TESObjectREFR **)(a1 + 0x3C), 5, 0, 0);
          *(_BYTE *)(a1 + 0x194) = sub_51AA00(AnimGroup) == 5;
          v9 = Actor_LoadAnimGroup_(*(TESObjectREFR **)(a1 + 0x3C), 6, 0, 0);
          v10 = sub_51AA00(v9);
          v11 = *(TESObjectREFR **)(a1 + 0x3C);
          *(_BYTE *)(a1 + 0x195) = v10 == 6;
          v12 = Actor_LoadAnimGroup_(v11, 3, 0, 0);
          v13 = sub_51AA00(v12);
          v14 = *(TESObjectREFR **)(a1 + 0x3C);
          *(_BYTE *)(a1 + 0x196) = v13 == 3;
          v15 = Actor_LoadAnimGroup_(v14, 4, 0, 0);
          *(_BYTE *)(a1 + 0x197) = sub_51AA00(v15) == 4;
          *(_BYTE *)(a1 + 0x190) = 1;
        }
        v16 = *(_BYTE *)(a1 + 0x191);
        if ( v16 || (v17 = *(_DWORD *)(a1 + 0x6C), v17 != 4) && v17 != 7 && v17 != 9 && v17 != 8 )
        {
          if ( !v16 && !a5 )
          {
            v18 = (float *)(*(int (__usercall **)@<eax>(_DWORD@<ecx>, double@<st0>))(**(_DWORD **)(a1 + 0x3C) + 0x174))(
                             *(_DWORD *)(a1 + 0x3C),
                             result);
            sub_4121A0((float *)(a1 + 0x198), (float *)&v42[0x10], v18);
            SafeFloatPointer = GameSetting_GetSafeFloatPointer((int *)&flt_B372C8);
            result = sub_404C90((float *)&v42[0x10]);
            if ( *(float *)SafeFloatPointer > a4 )
LABEL_57:
              JUMPOUT(0x614A75);
          }
          v20 = (_DWORD *)(*(int (__usercall **)@<eax>(_DWORD@<ecx>, double@<st0>))(**(_DWORD **)(a1 + 0x3C) + 0x174))(
                            *(_DWORD *)(a1 + 0x3C),
                            result);
          *(_DWORD *)(a1 + 0x198) = *v20;
          v21 = *(_DWORD *)(a1 + 0x3C);
          *(_DWORD *)(a1 + 0x19C) = v20[1];
          *(_DWORD *)(a1 + 0x1A0) = v20[2];
          v39 = ((double (__thiscall *)(int))*(_DWORD *)(*(_DWORD *)v21 + 0x1E0))(v21);
          NiMatrix33_InitRotationTransform(&v48.rot.data[2][1], v39);
          v22 = *(int **)(a1 + 0x3C);
          v23 = *(float *)(*(int (__thiscall **)(int *, float *))(*v22 + 0x15C))(v22, &v48.rot.data[0][1]);
          v24 = *v22;
          *(double *)&v42[0xC] = v23;
          *(float *)v42 = *(double *)&v42[8]
                        - *(float *)(*(int (__thiscall **)(int *, float *))(v24 + 0x158))(v22, v48.rot.data[1]);
          if ( 0.0 == *(float *)v42 )
            *(float *)v42 = flt_A427E4;
          v25 = *(_DWORD *)(a1 + 0x3C);
          *(double *)&v42[4] = *(float *)((*(int (__thiscall **)(int, float *))(*(_DWORD *)v25 + 0x15C))(
                                            v25,
                                            &v48.rot.data[0][2])
                                        + 4);
          v41 = *(double *)v42
              - *(float *)((*(int (__thiscall **)(int, _BYTE *))(*(_DWORD *)v25 + 0x158))(v25, v47) + 4);
          if ( v41 == 0.0 )
          {
            v26 = a2;
            v41 = a2;
            v27 = a2;
          }
          else
          {
            v27 = v41;
            v26 = a2;
          }
          *(float *)v42 = v26 / v27;
          if ( *(float *)v42 > (double)flt_A3D65C && *(float *)v42 < (double)fConstant_2 )
          {
            if ( v27 < v26 )
            {
              v41 = v26;
              v27 = v41;
            }
            else
            {
              a2 = v27;
              v26 = a2;
              v41 = a2;
              v27 = a2;
            }
          }
          v28 = flt_A56670;
          if ( v28 < v26 )
          {
            a2 = flt_A56670;
            v26 = a2;
          }
          if ( v28 < v27 )
          {
            v41 = flt_A56670;
            v27 = v41;
          }
          v29 = *(_DWORD *)(a1 + 0x3C);
          v45.x = -v26;
          v45.y = 0.0;
          v45.z = 0.0;
          v46.y = 0.0;
          v46.z = 0.0;
          v44.x = 0.0;
          v44.z = 0.0;
          *(float *)&v42[0xC] = 0.0;
          v46.x = v26;
          v44.y = v27;
          *(float *)&v42[0x10] = -v27;
          v43 = 0.0;
          if ( ((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v29 + 0x58) + 0x2C0))(*(_DWORD *)(v29 + 0x58)) & 2) != 0 )
            *(float *)&v42[0x10] = *(float *)&v42[0x10] - v41;
          if ( ((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(a1 + 0x3C) + 0x58) + 0x2C0))(*(_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 0x58))
              & 1) != 0 )
            *(float *)&v42[0x10] = *(float *)&v42[0x10] + v41;
          if ( ((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(a1 + 0x3C) + 0x58) + 0x2C0))(*(_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 0x58))
              & 4) != 0 )
            *(float *)&v42[0xC] = *(float *)&v42[0xC] - a2;
          if ( ((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(a1 + 0x3C) + 0x58) + 0x2C0))(*(_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 0x58))
              & 8) != 0 )
            *(float *)&v42[0xC] = *(float *)&v42[0xC] + a2;
          v30 = sub_7101F0((NiTransform *)v48.rot.data[1], &v48, &v45);
          *(float *)v42 = *(float *)(a1 + 0x198) + v30->rot.data[0][0];
          *(float *)&v42[4] = *(float *)(a1 + 0x19C) + v30->rot.data[0][1];
          *(float *)&v42[8] = *(float *)(a1 + 0x1A0) + v30->rot.data[0][2];
          v45 = *(NiPoint3 *)v42;
          v31 = sub_7101F0((NiTransform *)v48.rot.data[1], &v48, &v46);
          *(float *)v42 = *(float *)(a1 + 0x198) + v31->rot.data[0][0];
          *(float *)&v42[4] = *(float *)(a1 + 0x19C) + v31->rot.data[0][1];
          *(float *)&v42[8] = *(float *)(a1 + 0x1A0) + v31->rot.data[0][2];
          v46 = *(NiPoint3 *)v42;
          v32 = sub_7101F0((NiTransform *)v48.rot.data[1], &v48, &v44);
          *(float *)v42 = *(float *)(a1 + 0x198) + v32->rot.data[0][0];
          *(float *)&v42[4] = *(float *)(a1 + 0x19C) + v32->rot.data[0][1];
          *(float *)&v42[8] = *(float *)(a1 + 0x1A0) + v32->rot.data[0][2];
          v44 = *(NiPoint3 *)v42;
          v33 = sub_7101F0((NiTransform *)v48.rot.data[1], &v48, (NiPoint3 *)&v42[0xC]);
          *(float *)v42 = *(float *)(a1 + 0x198) + v33->rot.data[0][0];
          *(float *)&v42[4] = *(float *)(a1 + 0x19C) + v33->rot.data[0][1];
          result = *(float *)(a1 + 0x1A0) + v33->rot.data[0][2];
          *(_QWORD *)&v42[0xC] = *(_QWORD *)v42;
          *(float *)&v42[8] = result;
          v34 = byte_B3C089 == 0;
          v43 = *(float *)&v42[8];
          if ( v34 )
          {
            switch ( a5 )
            {
              case 0:
                if ( *(_BYTE *)(a1 + 0x197) )
                  sub_5FA0A0(*(TESObjectREFR **)(a1 + 0x3C), (float *)&v42[0xC]);
                else
                  v35 = 0;
                sub_612910((_WORD *)(a1 + 0x190), 2, v35);
                return result;
              case 1:
                if ( *(_BYTE *)(a1 + 0x196) )
                  sub_5FA0A0(*(TESObjectREFR **)(a1 + 0x3C), &v44.x);
                else
                  v36 = 0;
                sub_612910((_WORD *)(a1 + 0x190), 1, v36);
                return result;
              case 2:
                if ( *(_BYTE *)(a1 + 0x194) )
                  sub_5FA0A0(*(TESObjectREFR **)(a1 + 0x3C), &v45.x);
                else
                  v37 = 0;
                sub_612910((_WORD *)(a1 + 0x190), 4, v37);
                return result;
              case 3:
                if ( *(_BYTE *)(a1 + 0x195) )
                  sub_5FA0A0(*(TESObjectREFR **)(a1 + 0x3C), &v46.x);
                else
                  v38 = 0;
                sub_612910((_WORD *)(a1 + 0x190), 8, v38);
                return result;
              default:
                goto LABEL_57;
            }
          }
          sub_612910((_WORD *)(a1 + 0x190), 4, *(_BYTE *)(a1 + 0x194) != 0);
          sub_612910((_WORD *)(a1 + 0x190), 8, *(_BYTE *)(a1 + 0x195) != 0);
          sub_612910((_WORD *)(a1 + 0x190), 1, *(_BYTE *)(a1 + 0x196) != 0);
          sub_612910((_WORD *)(a1 + 0x190), 2, *(_BYTE *)(a1 + 0x197) != 0);
          def_614A8C(a5);
        }
      }
    }
  }
  return result;
}
