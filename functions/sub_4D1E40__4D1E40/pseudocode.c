TESObjectREFR *__thiscall sub_4D1E40(_DWORD *this, int a2)
{
  TESObjectREFR *result; // eax
  TESObjectREFRVtbl *vtbl; // edi
  int CopyFrom_high; // esi
  int v5; // eax

  result = (TESObjectREFR *)*(this + 0x15);
  if ( result && *(_WORD *)&result[2].member.super.pad[1] )
  {
    result = (TESObjectREFR *)result[2].vtbl;
    vtbl = result->vtbl;
  }
  else
  {
    vtbl = 0;
  }
  CopyFrom_high = HIWORD(vtbl->super.CopyFrom);
  if ( HIWORD(vtbl->super.CopyFrom) )
  {
    do
    {
      if ( HIWORD(vtbl->super.CopyFrom) > (unsigned int)--CopyFrom_high )
        v5 = *((_DWORD *)vtbl->super.Unk_2C + CopyFrom_high);
      else
        v5 = 0;
      result = (TESObjectREFR *)sub_4DC270(v5);
      if ( result )
        result = (TESObjectREFR *)((int (__thiscall *)(TESObjectREFR *, int))result->vtbl[1].super.Unk_16)(result, a2);
    }
    while ( CopyFrom_high );
  }
  return result;
}
