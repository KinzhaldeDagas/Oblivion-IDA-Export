void __thiscall sub_4F0120(_DWORD *this, TESObjectREFR *a2)
{
  TESObjectREFR *v2; // esi
  float *v4; // eax
  int v5; // edi
  _DWORD *v6; // ebx
  TESObjectREFR *v7; // ebp
  TESObjectREFR *v8; // eax

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
        if ( !a2 )
        {
          v8 = (TESObjectREFR *)FormHeapAlloc(8u);
          if ( v8 )
          {
            v8->vtbl = 0;
            *(_DWORD *)&v8->member.super.type = 0;
          }
          else
          {
            v8 = 0;
          }
          v7 = v8;
          NiTMap_SetAt(v6, v5, (int)v8);
        }
        BSSimpleList_PushFront(v7, (int)v2);
        NiLeaveCriticalSection_0(&stru_B36100);
      }
      else
      {
        BSSimpleList_PushFront(this + 0x1D, (int)v2);
        NiLeaveCriticalSection_0(&stru_B36100);
      }
    }
  }
}
