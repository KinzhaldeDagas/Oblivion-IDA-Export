BSExtraData *__usercall sub_670F50@<eax>(
        TESObjectREFR *a1@<ecx>,
        double a2@<st7>,
        double a3@<st4>,
        double a4@<st3>,
        double a5@<st2>,
        double a6@<st1>,
        double a7@<st6>,
        double a8@<st5>)
{
  BSExtraData *result; // eax
  int v10; // esi
  int v11; // eax
  void (__thiscall *v12)(NiAVObject *, NiMatrix33 *, NiPoint3 *, bool); // ebx
  float v13; // ebp
  float *v14; // eax
  double v15; // st7
  TESWorldSpace *WorldSpace; // eax
  TESObjectCELL *ParentCell; // eax
  TESObjectCELL *v18; // esi
  float v19; // [esp+10h] [ebp-2Ch]
  float v20; // [esp+14h] [ebp-28h]
  int v21; // [esp+18h] [ebp-24h]
  int v22; // [esp+1Ch] [ebp-20h]
  int v23; // [esp+20h] [ebp-1Ch]
  float v24; // [esp+24h] [ebp-18h]
  float v25; // [esp+2Ch] [ebp-10h]
  float v26[3]; // [esp+30h] [ebp-Ch] BYREF

  result = sub_420190(&a1->member.baseExtraList);
  v10 = (int)result;
  if ( result )
  {
    if ( result[2].vtbl )
    {
      sub_675D50(a1, 0);
      sub_4D76F0(*(_BYTE **)(v10 + 0x18));
      v12 = *(void (__thiscall **)(NiAVObject *, NiMatrix33 *, NiPoint3 *, bool))v11;
      v13 = *(float *)(v11 + 4);
      v25 = *(float *)(v11 + 8);
      v24 = *(float *)v11;
      v14 = (float *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v10 + 0x18) + 0x174))(*(_DWORD *)(v10 + 0x18));
      v19 = v14[1] - v13;
      v20 = v14[2] - v25;
      v26[0] = *v14 - v24;
      v26[1] = v19;
      v26[2] = v20;
      *(float *)&v21 = 0.0;
      *(float *)&v22 = 0.0;
      v15 = sub_683CB0(v26);
      *(float *)&v23 = v15;
      WorldSpace = TESObjectREFR_GetWorldSpace(*(TESObjectREFR **)(v10 + 0x18));
      if ( WorldSpace )
      {
        sub_66F370(
          a2,
          a3,
          a4,
          a5,
          a6,
          a7,
          v15,
          v12,
          (NiAVObject *(__thiscall *)(NiAVObject *, const char *))LODWORD(v13),
          (void *(__thiscall *)(NiAVObject *))LODWORD(v25),
          v21,
          v22,
          v23,
          WorldSpace,
          0);
        return (BSExtraData *)sub_4D8E60((int *)a1, 0);
      }
      else
      {
        ParentCell = TESObjectREFR_GetParentCell(*(TESObjectREFR **)(v10 + 0x18));
        v18 = ParentCell;
        if ( ParentCell )
        {
          if ( TESObjectCELL_IsInterior(ParentCell) )
            sub_66EAF0(
              a1,
              v15,
              a4,
              a5,
              a6,
              a2,
              a3,
              a7,
              a8,
              v12,
              (NiAVObject *(__thiscall *)(NiAVObject *, const char *))LODWORD(v13),
              (void *(__thiscall *)(NiAVObject *))LODWORD(v25),
              v21,
              v22,
              v23,
              v18,
              0);
        }
        return (BSExtraData *)sub_4D8E60((int *)a1, 0);
      }
    }
  }
  return result;
}
