double __userpurge sub_695400@<st0>(
        int a1@<ecx>,
        double a2@<st2>,
        double result@<st0>,
        float a4,
        float a5,
        float a6,
        int a7,
        Actor *a8,
        float a9)
{
  double v10; // st7
  double v11; // st6
  bool v12; // c0
  bool v13; // c3
  int v14; // eax
  float *v15; // edi
  NiTransform *v16; // eax
  float v17; // eax
  int v18; // eax
  int *v19; // ecx
  bhkCharacterProxy *CharProxy; // eax
  char v21; // bl
  bhkCharacterProxy *v22; // eax
  int v23; // edi
  _DWORD *v24; // ecx
  int v25; // eax
  int v26; // eax
  char *v27; // edi
  char *v28; // ebp
  int *v29; // eax
  TESObjectCELL *ParentCell; // eax
  int v31; // edi
  int v32; // eax
  int v33; // edi
  int v34; // eax
  char v35; // al
  int v36; // eax
  int v37; // edi
  float v38; // ebp
  int v39; // ecx
  int v40; // eax
  int *v41; // eax
  int *v42; // edi
  float *v43; // eax
  int v44; // [esp+10h] [ebp-40h]
  int v45; // [esp+14h] [ebp-3Ch]
  int v46; // [esp+18h] [ebp-38h]
  float v47; // [esp+40h] [ebp-10h]
  float v48; // [esp+44h] [ebp-Ch] BYREF
  float v49; // [esp+60h] [ebp+10h]

  if ( !a8 || !a8->vtbl->super.super.IsActor((TESObjectREFR *)a8) || !Actor_IsGhost(a8) )
  {
    v47 = (double)EffectItem_GetArea(*(_DWORD **)(a1 + 0x70)) * flt_B37ED0;
    v10 = v47;
    *(float *)(a1 + 0x84) = v47;
    v11 = flt_B37ED8;
    if ( v11 >= v47 )
    {
      v11 = flt_B37EE0;
      v12 = v11 < v10;
      v13 = v11 == v10;
      result = v11;
      if ( !v12 && !v13 )
        *(float *)(a1 + 0x84) = flt_B37EE0;
    }
    else
    {
      result = flt_B37ED8;
      *(float *)(a1 + 0x84) = flt_B37ED8;
    }
    TESObjectREFR_SetPosition((TESObjectREFR *)a1, a4, a5, a6);
    v14 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x154))(a1);
    v15 = (float *)v14;
    if ( v14 )
    {
      v16 = sub_7101F0((NiTransform *)(v14 + 0x64), (NiTransform *)&v48, (NiPoint3 *)&dword_B258DC);
      sub_69F880(a4, a5, a6, v16->rot.data[0][0], v16->rot.data[0][1], v16->rot.data[0][2], a7);
      if ( !LOBYTE(a9) )
      {
        v17 = *v15;
        v15[0x15] = a4;
        v15[0x16] = a5;
        v15[0x17] = a6;
        v18 = (*(int (__thiscall **)(float *, const char *))(LODWORD(v17) + 0x58))(v15, "AreaEffect");
        if ( v18 )
        {
          v49 = fabs(*(float *)(a1 + 0x84));
          result = v49;
          *(float *)(v18 + 0x60) = v49;
        }
      }
    }
    v19 = *(int **)(a1 + 0x88);
    if ( v19 )
      sub_6B7240(v19);
    CharProxy = MobileObject_GetCharProxy((MobileObject *)a1);
    v21 = LOBYTE(a9);
    if ( CharProxy )
    {
      if ( !LOBYTE(a9) )
      {
        if ( (*((_DWORD *)MobileObject_GetCharProxy((MobileObject *)a1) + 0x7D) & 0x8000) != 0 )
          (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 0x214))(a1);
        v22 = MobileObject_GetCharProxy((MobileObject *)a1);
        sub_57E270(v22, &a9);
        v23 = LODWORD(a9) | 0x4000;
        v24 = *((_DWORD **)MobileObject_GetCharProxy((MobileObject *)a1) + 0xD9);
        if ( v24 )
        {
          v25 = v24[2];
          if ( v25 )
          {
            v26 = v25 + 0x14;
            if ( v26 )
              *(_DWORD *)(v26 + 0x1C) = v23;
          }
          (*(void (__thiscall **)(_DWORD *))(*v24 + 0x80))(v24);
        }
      }
    }
    *(_DWORD *)(a1 + 0x80) = 2;
    if ( !v21 )
    {
      v27 = *(char **)(a1 + 0x6C);
      v28 = *(char **)(a1 + 0x68);
      v29 = (int *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x174))(a1);
      result = 1.0;
      v44 = *v29;
      v45 = v29[1];
      v46 = v29[2];
      ParentCell = TESObjectREFR_GetParentCell((TESObjectREFR *)a1);
      MagicCaster_TargetEffectHit__(v28, a2, 1.0, v11, v27, (int)ParentCell, v44, v45, v46, a1, (int)a8, 0, 1.0, 1.0);
    }
    v31 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x154))(a1);
    v32 = *(_DWORD *)(a1 + 0x74);
    if ( v32 )
    {
      if ( *(_DWORD *)(v32 + 0x98) == 0x47444946 )
        sub_481660((_BYTE *)v31);
    }
    if ( v31 )
    {
      v33 = *(_DWORD *)(v31 + 0xC);
      if ( v33 )
      {
        v34 = (*(int (__thiscall **)(int))(*(_DWORD *)v33 + 4))(v33);
        if ( v34 )
        {
          while ( (BSStringT *)v34 != &stru_B3CAC0 )
          {
            v34 = *(_DWORD *)(v34 + 4);
            if ( !v34 )
              goto LABEL_33;
          }
          v35 = 1;
        }
        else
        {
LABEL_33:
          v35 = 0;
        }
        v36 = v35 != 0 ? v33 : 0;
        v37 = v36;
        if ( v36 )
        {
          if ( NiTMap_GetAt((_DWORD *)(v36 + 0x58), (int)"SpecialIdle_AreaEffect", &a9) )
          {
            v38 = a9;
            if ( a9 != 0.0 )
            {
              sub_4715C0((_DWORD *)v37, 0.0);
              result = 1.0;
              sub_6C9BA0((_DWORD *)LODWORD(v38), 0, 0, 1.0, 0.0, 0, 0);
              *(_WORD *)(v37 + 8) |= 8u;
              *(float *)(LODWORD(v38) + 0x48) = -flt_A7DEB4;
              v39 = *(_DWORD *)(a1 + 0x8C);
              if ( v39 )
              {
                a9 = *(float *)(LODWORD(v38) + 0x30) * dbl_A31C70;
                MagicCaster_CastingVFX_ClearSomething___(v39, 0, a9);
              }
            }
          }
        }
      }
    }
    if ( OSGlobals->sound )
    {
      v40 = *(_DWORD *)(*(_DWORD *)(a1 + 0x74) + 0x8C);
      if ( v40 )
      {
        if ( !v21 )
        {
          OSGLobals_PlaySound(*(_DWORD *)(v40 + 0xC), 0x102, 1);
          v42 = v41;
          if ( v41 )
          {
            v43 = (float *)(*(int (__usercall **)@<eax>(int@<ecx>, double@<st0>))(*(_DWORD *)a1 + 0x174))(a1, result);
            result = *v43;
            sub_6B7360(v42, *v43, v43[1], v43[2]);
            sub_6B71C0(v42, 0);
            sub_6B73E0(v42);
            FormHeapFree((unsigned int)v42);
          }
        }
      }
    }
  }
  return result;
}
