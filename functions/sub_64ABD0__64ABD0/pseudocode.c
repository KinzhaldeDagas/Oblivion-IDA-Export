char __thiscall sub_64ABD0(void *this, int a2)
{
  TESObjectREFR *v3; // esi
  TESWorldSpace *WorldSpace; // eax
  BSExtraDataVtbl *DwordAtOffset40; // [esp+4h] [ebp-14h]
  _DWORD *v7; // [esp+8h] [ebp-10h]
  float v8; // [esp+Ch] [ebp-Ch]

  v3 = (TESObjectREFR *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x380))(a2); /*0x64abe5*/
  if ( !v3 ) /*0x64abe9*/
    return 0; /*0x64abed*/
  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)a2 + 0x384))(a2, 0); /*0x64abff*/
  ((void (__thiscall *)(TESObjectREFR *, _DWORD))v3->vtbl[2].super.Unk_0F)(v3, 0); /*0x64ac0d*/
  v7 = (_DWORD *)((int (__thiscall *)(TESObjectREFR *, _DWORD))v3->vtbl->GetPos)(v3, v3->member.rot.z); /*0x64ac22*/
  DwordAtOffset40 = (BSExtraDataVtbl *)Shared_GetDwordAtOffset40(v3); /*0x64ac2a*/
  WorldSpace = TESObjectREFR_GetWorldSpace(v3); /*0x64ac2d*/
  TESObjectREFR_SetStartLocation(v3, (BSExtraDataVtbl *)WorldSpace, DwordAtOffset40, v7, v8); /*0x64ac35*/
  (*(void (__thiscall **)(void *, int))(*(_DWORD *)this + 0x188))(this, a2); /*0x64ac47*/
  return 1; /*0x64abeb*/
}
