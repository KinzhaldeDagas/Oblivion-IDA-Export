void __thiscall sub_4B1600(void *this, TESObjectREFR *a2, int a3)
{
  TESForm *v3; // edi
  TESObjectCELL *ParentCell; // eax
  bool v5; // zf
  unsigned __int8 *v6; // eax
  double v7; // rt0
  int v8; // eax
  int v9; // edi
  int v10; // ebx
  int v11; // ecx
  int v12; // esi
  int v13; // eax
  char v14; // al
  int v15; // esi
  int *v16; // ebx
  const char *v17; // eax
  NiLight *v18; // eax
  int v19; // edx
  int v20; // eax
  int v21; // eax
  double v22; // st7
  char v23; // bl
  DWORD CurrentThreadId; // eax
  _DWORD *ShadowSceneNode; // eax
  double v26; // st7
  size_t _8; // [esp+8h] [ebp-160h]
  float v29; // [esp+2Ch] [ebp-13Ch]
  double v30; // [esp+30h] [ebp-138h]
  float v31; // [esp+30h] [ebp-138h]
  float v32; // [esp+30h] [ebp-138h]
  float v33; // [esp+38h] [ebp-130h]
  float v34; // [esp+3Ch] [ebp-12Ch]
  float v35; // [esp+40h] [ebp-128h]
  float v36; // [esp+50h] [ebp-118h]
  char Dest[260]; // [esp+54h] [ebp-114h] BYREF
  unsigned int v38; // [esp+164h] [ebp-4h]

  if ( a2 && a3 )
  {
    v3 = a2->vtbl->GetBaseForm(a2);
    if ( (*((_BYTE *)this + 0x7C) & 0x20) != 0
      || TESObjectREFR_GetParentCell(a2)
      && (v30 = a2->vtbl->GetPos(a2)[2],
          ParentCell = TESObjectREFR_GetParentCell(a2),
          TESObjectCELL_GetWaterHeight(ParentCell) > v30) )
    {
      if ( v3->member.type == kFormType_Light )
      {
        if ( sub_4DE320(a3) )
        {
          sub_46AB60(a2, 1);
          sub_4B1580(a3);
        }
      }
      v5 = !a2->vtbl->IsActor(a2);
      v6 = (unsigned __int8 *)this;
      if ( v5 && (*((_BYTE *)this + 0x7C) & 0x20) != 0 )
        return;
    }
    else
    {
      v6 = (unsigned __int8 *)this;
    }
    v7 = dbl_A3DDD8;
    v33 = (double)v6[0x78] / v7;
    v34 = (double)v6[0x79] / v7;
    v35 = (double)v6[0x7A] / v7;
    if ( (v6[0x7C] & 4) != 0 )
    {
      v29 = -v33;
      v36 = -v34;
      v31 = -v35;
      v33 = v29;
      v34 = v36;
      v35 = v31;
    }
    v8 = (*(int (__thiscall **)(int, const char *))(*(_DWORD *)a3 + 0x58))(a3, "AttachLight");
    if ( !v8 || (v9 = (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 8))(v8)) == 0 )
      v9 = a3;
    v10 = 0;
    if ( *(_WORD *)(v9 + 0xB6) )
    {
      while ( 1 )
      {
        v11 = *(_DWORD *)(v9 + 0xB0);
        v12 = *(_DWORD *)(v11 + 4 * v10);
        if ( v12 )
        {
          v13 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v12 + 4))(*(_DWORD *)(v11 + 4 * v10));
          if ( v13 )
          {
            while ( (char *)v13 != dword_B3FD80 )
            {
              v13 = *(_DWORD *)(v13 + 4);
              if ( !v13 )
                goto LABEL_23;
            }
            v14 = 1;
          }
          else
          {
LABEL_23:
            v14 = 0;
          }
          v15 = v14 != 0 ? v12 : 0;
          if ( v15 )
            break;
        }
        if ( *(unsigned __int16 *)(v9 + 0xB6) <= (unsigned int)++v10 )
          goto LABEL_26;
      }
      v16 = (int *)this;
    }
    else
    {
LABEL_26:
      v16 = (int *)this;
      v17 = (const char *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 0xD4))(this);
      HIDWORD(_8) = "%s PtLight";
      LODWORD(_8) = 0x104;
      _snprintf(Dest, _8, v17);
      v18 = (NiLight *)FormHeapAlloc(0x114u);
      v15 = (int)v18;
      v38 = 0;
      if ( v18 )
      {
        NiLight::NiLight(v18);
        *(float *)(v15 + 0x108) = 0.0;
        *(_DWORD *)v15 = &NiPointLight::`vftable';
        *(float *)(v15 + 0x10C) = 1.0;
        *(float *)(v15 + 0x110) = 0.0;
      }
      else
      {
        v15 = 0;
      }
      v38 = 0xFFFFFFFF;
      NiObjectNET_SetName((NiObjectNET *)v15, Dest);
      (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v9 + 0x84))(v9, v15, 1);
      NiAVObject_UpdateNiAVObject((NiAVObject *)v9, 0.0, 0);
    }
    sub_4DD130((PlayerCharacter *)a2, v15);
    *(_DWORD *)(v15 + 0xE0) = dword_B3FA90;
    *(_DWORD *)(v15 + 0xE4) = dword_B3FA94;
    v19 = dword_B3FA98;
    v20 = ++*(_DWORD *)(v15 + 0xB8);
    *(_DWORD *)(v15 + 0xE8) = v19;
    *(_DWORD *)(v15 + 0xF8) = dword_B3FA90;
    *(_DWORD *)(v15 + 0xFC) = dword_B3FA94;
    v21 = v20 + 1;
    *(_DWORD *)(v15 + 0x100) = dword_B3FA98;
    *(_DWORD *)(v15 + 0xB8) = v21;
    v22 = (double)v16[0x1D];
    if ( v16[0x1D] < 0 )
      v22 = v22 + flt_A2FC78;
    v32 = v22;
    v23 = 0;
    *(float *)(v15 + 0xF8) = v32;
    *(float *)(v15 + 0xFC) = v32;
    *(float *)(v15 + 0xEC) = v33;
    *(float *)(v15 + 0x100) = v32;
    *(float *)(v15 + 0xF0) = v34;
    *(float *)(v15 + 0xF4) = v35;
    *(_DWORD *)(v15 + 0xB8) = v21 + 2;
    if ( byte_B43384 )
    {
      EnterCriticalSection(&stru_B43400);
      CurrentThreadId = GetCurrentThreadId();
      ++dword_B4347C;
      dword_B43478 = CurrentThreadId;
      v23 = 1;
    }
    ShadowSceneNode = (_DWORD *)GetShadowSceneNode(0);
    sub_7C6AE0(ShadowSceneNode, v15, 0);
    if ( v23 )
    {
      v5 = dword_B4347C-- == 1;
      if ( v5 )
        dword_B43478 = 0;
      LeaveCriticalSection(&stru_B43400);
    }
    sub_4B1210(*((_DWORD *)this + 0x1D), v15);
    v26 = *((float *)this + 0x22);
    ++*(_DWORD *)(v15 + 0xB8);
    *(float *)(v15 + 0xDC) = v26;
  }
}
