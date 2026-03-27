void __userpurge sub_4F03F0(
        _DWORD *this@<ecx>,
        double st5_0@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        TESObjectCELL *a5)
{
  TESObjectCELL *v5; // edi
  unsigned __int16 YCoordinate; // si
  __int16 XCoordinate; // ax
  TESObjectCELL *i; // esi
  TESObjectREFR **v10; // esi
  TESObjectREFR *v11; // ebx
  float *v12; // eax

  v5 = a5;
  if ( a5 )
  {
    NiEnterCriticalSection((struct _RTL_CRITICAL_SECTION *)&stru_B36100, (int)&unk_A2F830);
    YCoordinate = TESObjectCELL_GetYCoordinate(v5);
    XCoordinate = TESObjectCELL_GetXCoordinate(v5);
    a5 = 0;
    NiTMap_GetAt(this + 0x19, (XCoordinate << 0x10) | YCoordinate, &a5);
    for ( i = a5; i; i = *(TESObjectCELL **)&i->members.super.type )
    {
      if ( !*(_DWORD *)&i->members.super.type && !i->vtbl )
        break;
      sub_4D35D0(v5, st5_0, a3, a4, (TESObjectREFR *)i->vtbl);
    }
    v10 = (TESObjectREFR **)(this + 0x1D);
    if ( this != (_DWORD *)0xFFFFFF8C )
    {
      do
      {
        if ( !v10[1] && !*v10 )
          break;
        v11 = *v10;
        if ( TESObjectREFR_GetParentCell(*v10) != v5 )
        {
          v12 = v11->vtbl->GetPos(v11);
          if ( sub_4CC540((int)v5, v12) )
            sub_4D35D0(v5, st5_0, a3, a4, v11);
        }
        v10 = (TESObjectREFR **)v10[1];
      }
      while ( v10 );
    }
    NiLeaveCriticalSection_0(&stru_B36100);
  }
}
