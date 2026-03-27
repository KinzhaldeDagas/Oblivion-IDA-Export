double __userpurge sub_5ED730@<st0>(TESObjectREFR *this@<ecx>, double result@<st0>, int a3)
{
  TESObjectCELL *ParentCell; // eax
  int v5; // eax
  int v6; // eax
  char *v7; // eax
  float v8; // [esp+14h] [ebp+4h]
  float v9; // [esp+14h] [ebp+4h]

  if ( *((_DWORD *)this + 0x16) )
  {
    if ( !TESObjectREFR_GetParentCell(this)
      || (ParentCell = TESObjectREFR_GetParentCell(this), !TESObjectCELL_IsInterior(ParentCell))
      || (result = *(float *)(((int (__usercall *)@<eax>(TESObjectREFR *@<ecx>, double@<st0>))this->vtbl->GetPos)(
                                this,
                                result)
                            + 8),
          v8 = result - *(float *)((*(int (__thiscall **)(int))(*(_DWORD *)a3 + 0x174))(a3) + 8),
          v9 = fabs(v8),
          v9 <= (double)flt_A430CC) )
    {
      v5 = *((_DWORD *)this + 0x16);
      if ( (!v5 || (v6 = *(_DWORD *)(v5 + 8)) == 0 || (*(_DWORD *)(v6 + 0x1C) & 0x1000) == 0)
        && !this->vtbl->IsDead(this, 0)
        && (!*((_DWORD *)this + 0x16)
         || (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 0x16) + 0x36C))(*((_DWORD *)this + 0x16)) != 9)
        && !sub_5E6FA0(this)
        && (this->vtbl->GetSleepState(this) == kSitSleep_Sitting || this->vtbl->GetSleepState(this) == kSitSleep_None) )
      {
        if ( !sub_5E0380((Actor *)this) || (v7 = (char *)sub_5E0380((Actor *)this), !sub_567770(v7)) )
          (*(void (__thiscall **)(_DWORD))(**((_DWORD **)this + 0x16) + 0x15C))(*((_DWORD *)this + 0x16));
      }
    }
  }
  return result;
}
