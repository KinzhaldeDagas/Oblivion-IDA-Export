TESObjectREFR *__thiscall sub_4D5320(ExtraDataList *this, int a2)
{
  TESObjectREFR *result; // eax
  int v4; // ecx

  if ( (*((_BYTE *)this + 0x24) & 1) != 0 )
    result = (TESObjectREFR *)sub_424180(this + 2);
  else
    result = (TESObjectREFR *)bhkWorldM;
  v4 = *((_DWORD *)this + 0x15);
  if ( result )
  {
    if ( v4 )
    {
      ((void (__thiscall *)(TESObjectREFR *, int, int))result->vtbl->super.Unk_26)(result, v4, a2);
      return sub_4D1E40(this, a2);
    }
  }
  return result;
}
