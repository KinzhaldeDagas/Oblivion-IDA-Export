char __thiscall TESObjectREF_UpdateLights(TESChildCELL *this)
{
  ExtraDataList *v2; // ebx
  float *v3; // ebp
  TESForm *v4; // edi
  float *v5; // eax

  v2 = (ExtraDataList *)(this + 0x11);
  v3 = (float *)sub_41E650((ExtraDataList *)(this + 0x11));
  v4 = 0;
  if ( *(_BYTE *)((*((int (__thiscall **)(TESChildCELL *))this->vtbl + 0x5C))(this) + 4) == kFormType_Light )
    v4 = (TESForm *)(*((int (__thiscall **)(TESChildCELL *))this->vtbl + 0x5C))(this);
  if ( v3 )
  {
    if ( v4 )
      sub_4B22E0((float *)v4, v3, 0);
  }
  v5 = (float *)sub_41E670(v2);
  if ( v5 )
  {
    if ( v4 )
      LOBYTE(v5) = sub_4B22E0((float *)v4, v5, 0);
  }
  return (char)v5;
}
