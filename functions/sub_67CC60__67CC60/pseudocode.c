bool __thiscall sub_67CC60(TESObjectREFR ****this)
{
  TESObjectREFR ***v1; // edi
  TESObjectREFR **v2; // ebp
  TESObjectREFR *v3; // esi
  bool v4; // bl
  int v5; // eax
  TESObjectREFR *v6; // eax
  _DWORD *flags; // esi
  TESObjectREFR ***v8; // eax
  TESObjectREFR ***v9; // eax
  unsigned int v10; // ecx
  bool v12; // [esp+7h] [ebp-5h]

  if ( !*this )
    return 1;
  v12 = 1;
  v1 = *this;
  do
  {
    v2 = *v1;
    if ( !*v1 )
      break;
    v3 = *v2;
    if ( v12 )
      v12 = ((unsigned __int8 (__thiscall *)(TESObjectREFR *, _DWORD))v3->vtbl[1].GetSleepState)(v3, 0) == 0;
    v4 = 0;
    if ( sub_5E6CD0(v3, 1) )
    {
      v5 = (*((int (__thiscall **)(_DWORD *))v3[1].vtbl->super.super.InitializeComponent + 0x61))(&v3[1].vtbl->super.super.InitializeComponent);
      if ( *(_BYTE *)(v5 + 0x50) )
      {
        v6 = sub_628140((int *)v5, v3);
        v4 = flt_B37028 < TesObjectREF_GetDistance(v3, v6, 0);
      }
    }
    if ( v3 != (TESObjectREFR *)TESDataHandler_g_PlayerRef
      && (v3->vtbl->IsDead(v3, 0)
       || (flags = (_DWORD *)v3->member.super.flags, ((unsigned __int8)flags & 0x20) != 0)
       || ((unsigned __int16)flags & 0x800) != 0
       || v4) )
    {
      v8 = (TESObjectREFR ***)v1[1];
      if ( v8 )
      {
        v1[1] = v8[1];
        *v1 = *v8;
        FormHeapFree((unsigned int)v8);
      }
      else
      {
        *v1 = 0;
      }
      FormHeapFree((unsigned int)v2);
      v1 = *this;
    }
    else
    {
      v1 = (TESObjectREFR ***)v1[1];
    }
  }
  while ( v1 );
  if ( v12 )
    return 0;
  v9 = *this;
  if ( !*this )
    return 0;
  v10 = 0;
  do
  {
    if ( *v9 )
      ++v10;
    v9 = (TESObjectREFR ***)v9[1];
  }
  while ( v9 );
  return v10 > 1;
}
