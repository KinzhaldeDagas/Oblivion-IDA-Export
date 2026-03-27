TESForm *__thiscall sub_4A2ED0(_DWORD *this, TESForm *a1)
{
  TESForm *v3; // eax
  TESRegion *v4; // eax
  int v5; // ebx
  TESForm *v6; // ebp
  int *v7; // esi
  int v8; // edi
  int *v9; // eax

  v3 = a1;
  if ( !a1 )
  {
    v4 = (TESRegion *)FormHeapAlloc(0x2Cu);
    if ( v4 )
      v3 = (TESForm *)TESRegion::TESRegion(v4);
    else
      v3 = 0;
  }
  v5 = *(this + 7);
  v6 = v3;
  TESForm_CopyFrom(v3);
  sub_4A44D0((_DWORD *)*(this + 6), (int)v6[1].vtbl);
  for ( ; v5; v5 = *(_DWORD *)(v5 + 4) )
  {
    if ( !*(_DWORD *)v5 )
      break;
    v7 = *(int **)&v6[1].member.type;
    v8 = sub_4A77F0(*(_BYTE **)v5, 0);
    if ( v8 )
    {
      if ( *v7 )
      {
        v9 = (int *)FormHeapAlloc(8u);
        if ( v9 )
        {
          *v9 = *v7;
          v9[1] = 0;
        }
        else
        {
          v9 = 0;
        }
        v9[1] = v7[1];
        v7[1] = (int)v9;
      }
      *v7 = v8;
    }
  }
  return v6;
}
