char __thiscall sub_64ABD0(void *this, int a2)
{
  TESObjectREFR *v3; // esi
  TESWorldSpace *WorldSpace; // eax
  TESObjectCELL *ParentCell; // [esp+4h] [ebp-14h]
  _DWORD *v7; // [esp+8h] [ebp-10h]
  float v8; // [esp+Ch] [ebp-Ch]

  v3 = (TESObjectREFR *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x380))(a2);
  if ( !v3 )
    return 0;
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)a2 + 0x384))(a2, 0);
  ((void (__thiscall *)(TESObjectREFR *, _DWORD))v3->vtbl[2].super.Unk_0F)(v3, 0);
  v7 = (_DWORD *)((int (__thiscall *)(TESObjectREFR *, _DWORD))v3->vtbl->GetPos)(v3, v3->member.rot.z);
  ParentCell = TESObjectREFR_GetParentCell(v3);
  WorldSpace = TESObjectREFR_GetWorldSpace(v3);
  sub_4D7A20(v3, (BSExtraDataVtbl *)WorldSpace, (BSExtraDataVtbl *)ParentCell, v7, v8);
  (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 0x188))(this, a2);
  return 1;
}
