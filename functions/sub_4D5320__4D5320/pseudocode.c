TESObjectREFR *__thiscall sub_4D5320(ExtraDataList *this, int a2)
{
  TESObjectREFR *result; // eax
  int v4; // ecx

  if ( (*((_BYTE *)this + 0x24) & 1) != 0 ) /*0x4d5327*/
    result = (TESObjectREFR *)sub_424180(this + 2); /*0x4d532c*/
  else
    result = (TESObjectREFR *)MEMORY[0xB35C24]; /*0x4d5333*/
  v4 = *((_DWORD *)this + 0x15); /*0x4d533a*/
  if ( result ) /*0x4d533d*/
  {
    if ( v4 ) /*0x4d5341*/
    {
      ((void (__thiscall *)(TESObjectREFR *, int, int))result->vtbl->super.Unk_26)(result, v4, a2); /*0x4d5354*/
      return sub_4D1E40(this, a2); /*0x4d5359*/
    }
  }
  return result; /*0x4d535f*/
}
