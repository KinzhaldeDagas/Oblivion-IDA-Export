TESObjectREFR *__thiscall sub_4D1E40(_DWORD *this, int a2)
{
  TESObjectREFR *result; // eax
  TESObjectREFRVtbl *vtbl; // edi
  int CopyFrom_high; // esi
  int v5; // eax

  result = (TESObjectREFR *)*(this + 0x15); /*0x4d1e40*/
  if ( result && *(_WORD *)&result[2].member.super.pad[1] ) /*0x4d1e49*/
  {
    result = (TESObjectREFR *)result[2].vtbl; /*0x4d1e53*/
    vtbl = result->vtbl; /*0x4d1e59*/
  }
  else
  {
    vtbl = 0; /*0x4d1e5d*/
  }
  CopyFrom_high = HIWORD(vtbl->super.CopyFrom); /*0x4d1e5f*/
  if ( HIWORD(vtbl->super.CopyFrom) ) /*0x4d1e5f*/
  {
    do /*0x4d1ea7*/
    {
      if ( HIWORD(vtbl->super.CopyFrom) > (unsigned int)--CopyFrom_high ) /*0x4d1e7c*/
        v5 = *((_DWORD *)vtbl->super.Unk_2C + CopyFrom_high); /*0x4d1e88*/
      else
        v5 = 0; /*0x4d1e7e*/
      result = (TESObjectREFR *)sub_4DC270(v5); /*0x4d1e8c*/
      if ( result ) /*0x4d1e96*/
        result = (TESObjectREFR *)((int (__thiscall *)(TESObjectREFR *, int))result->vtbl[1].super.Unk_16)(result, a2); /*0x4d1ea3*/
    }
    while ( CopyFrom_high ); /*0x4d1ea7*/
  }
  return result; /*0x4d1eaa*/
}
