int __thiscall sub_62B5C0(float *this, int a2)
{
  unsigned __int8 (__thiscall *v3)(float *); // edx
  int result; // eax
  int v5; // ebp
  BSSimpleList_VoidPtr *v6; // eax
  BSSimpleList_VoidPtr *v7; // ebx
  double v8; // st7
  bool v9; // zf
  int v10; // ebp
  _DWORD *v11; // ebx
  TESObjectCELL *ParentCell; // eax
  float *v13; // eax
  int v14; // ebx
  TESObjectCELL *v15; // eax
  TESWorldSpace *v16; // [esp+24h] [ebp-18h]
  TESWorldSpace *WorldSpace; // [esp+28h] [ebp-14h]
  float v18; // [esp+28h] [ebp-14h]

  if ( !*((_DWORD *)this + 0xB)
    && ((*(void (__thiscall **)(float *, int))(*(_DWORD *)this + 0x558))(this, a2), !*((_DWORD *)this + 0xB))
    || (Actor_SetAlerted((_DWORD **)a2, 1),
        v3 = *(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)this + 0xC0),
        *(this + 0x7A) = *(this + 0x7A) + flt_B33E9C,
        v3(this))
    && *((_BYTE *)this + 0xD0)
    || fSearchPackageTimer < (double)*(this + 0x7A) )
  {
    (*(void (__thiscall **)(float *, int, int))(*(_DWORD *)this + 0x188))(this, a2, 1);
    Actor_SetAlerted((_DWORD **)a2, 0);
    result = (*(int (__thiscall **)(float *, _DWORD))(*(_DWORD *)this + 0xBC))(this, 0);
    *(this + 0x7A) = 0.0;
    return result;
  }
  v5 = *((_DWORD *)this + 0xB);
  if ( *(this + 0x67) <= 0.0 && Actor_IsNPC(*((Actor **)this + 0xB)) )
  {
    v6 = (BSSimpleList_VoidPtr *)TESTopic::GEtTopic(4, 3);
    v7 = v6;
    if ( v6 )
    {
      if ( v6 != (BSSimpleList_VoidPtr *)0xFFFFFFD8 && !BSSimpleList_IsEmpty(v6 + 5) )
      {
        *(_DWORD *)(a2 + 0xE4) = v5;
        (*(void (__thiscall **)(float *, int, BSSimpleList_VoidPtr *, _DWORD, _DWORD, int))(*(_DWORD *)this + 0x1A4))(
          this,
          a2,
          v7,
          0,
          0,
          1);
      }
    }
    v8 = flt_A35AA4;
  }
  else
  {
    v8 = *(this + 0x67) - flt_B33E9C;
  }
  v9 = *((_BYTE *)this + 0xD0) == 0;
  *(this + 0x67) = v8;
  if ( !v9 )
  {
    (*(void (__thiscall **)(float *, int))(*(_DWORD *)this + 0xBC))(this, 1);
    v10 = *(_DWORD *)this;
    v11 = (_DWORD *)(*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 0xB) + 0x174))(*((_DWORD *)this + 0xB));
    WorldSpace = TESObjectREFR_GetWorldSpace(*((TESObjectREFR **)this + 0xB));
    ParentCell = TESObjectREFR_GetParentCell(*((TESObjectREFR **)this + 0xB));
    result = (*(int (__thiscall **)(float *, int, _DWORD, _DWORD, _DWORD, TESObjectCELL *, TESWorldSpace *))(v10 + 0x3DC))(
               this,
               a2,
               *v11,
               v11[1],
               v11[2],
               ParentCell,
               WorldSpace);
    if ( !(_BYTE)result )
      return result;
    v13 = (float *)(*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 0xB) + 0x174))(*((_DWORD *)this + 0xB));
    *(this + 0x35) = *v13;
    *(this + 0x36) = v13[1];
    *(this + 0x37) = v13[2];
  }
  (*(void (__thiscall **)(float *, int, int))(*(_DWORD *)this + 0x238))(this, a2, 0x201);
  v14 = *(_DWORD *)this;
  v18 = flt_A44BA4;
  v16 = TESObjectREFR_GetWorldSpace(*((TESObjectREFR **)this + 0xB));
  v15 = TESObjectREFR_GetParentCell(*((TESObjectREFR **)this + 0xB));
  return (*(int (__thiscall **)(float *, int, float *, TESObjectCELL *, TESWorldSpace *, _DWORD))(v14 + 0x414))(
           this,
           a2,
           this + 0x35,
           v15,
           v16,
           LODWORD(v18));
}
