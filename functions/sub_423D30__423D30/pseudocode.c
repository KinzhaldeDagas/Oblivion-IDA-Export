BSExtraData *__thiscall sub_423D30(ExtraDataList *this, int a2)
{
  TESObjectCELL *v3; // eax
  BSExtraDataVtbl *v4; // esi
  TESWorldSpace *WorldSpace; // eax
  const char *v7; // eax
  int v8; // [esp-4h] [ebp-10h]

  v3 = (TESObjectCELL *)(**(int (__thiscall ***)(int))(a2 + 0x18))(a2 + 0x18); /*0x423d41*/
  v4 = (BSExtraDataVtbl *)v3; /*0x423d43*/
  if ( v3 ) /*0x423d47*/
  {
    WorldSpace = TESObjectCELL_GetWorldSpace(v3); /*0x423d4b*/
    if ( WorldSpace ) /*0x423d54*/
      return sub_423C90(this, (BSExtraDataVtbl *)WorldSpace); /*0x423d57*/
    else
      return sub_423C90(this, v4); /*0x423d63*/
  }
  else
  {
    v7 = (const char *)(*(int (__thiscall **)(int, _DWORD))(*(_DWORD *)a2 + 0xD4))(a2, *(_DWORD *)(a2 + 0xC)); /*0x423d7c*/
    return (BSExtraData *)PrintError("Reference %s %08X has no parent save cell", v7, v8); /*0x423d84*/
  }
}
