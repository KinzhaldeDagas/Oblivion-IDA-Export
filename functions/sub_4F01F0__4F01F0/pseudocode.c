void __thiscall sub_4F01F0(_DWORD *this, TESObjectREFR *a2)
{
  TESObjectREFR *v2; // esi
  float *v4; // eax
  int v5; // ebx
  _DWORD *v6; // ebp
  TESObjectREFR *v7; // edi

  v2 = a2;
  if ( a2 )
  {
    if ( (a2->member.super.flags & 0x4000) == 0 )
    {
      NiEnterCriticalSection((struct _RTL_CRITICAL_SECTION *)&stru_B36100, (int)&unk_A2F830);
      if ( sub_4F00C0(v2) )
      {
        v4 = v2->vtbl->GetPos(v2);
        v5 = sub_4EFE40(v4);
        v6 = this + 0x19;
        a2 = 0;
        NiTMap_GetAt(v6, v5, &a2);
        v7 = a2;
        if ( a2 )
        {
          BSSimpleList_Remove(a2, (int)v2);
          if ( !*(_DWORD *)&v7->member.super.type && !v7->vtbl )
          {
            FormHeapFree((unsigned int)v7);
            NiTMap_RemoveAt(v6, v5);
          }
        }
        NiLeaveCriticalSection_0(&stru_B36100);
      }
      else
      {
        BSSimpleList_Remove(this + 0x1D, (int)v2);
        NiLeaveCriticalSection_0(&stru_B36100);
      }
    }
  }
}
