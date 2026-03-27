char __thiscall sub_6098C0(_DWORD *this, int *a2)
{
  NiNode *v3; // eax
  MobileObject *v4; // eax
  MobileObject *v5; // esi
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // ecx
  int v12; // ecx
  int v13; // eax

  (*(void (__thiscall **)(_DWORD *))(*this + 0x1C8))(this);
  v3 = (NiNode *)(*(int (__thiscall **)(_DWORD *))(*this + 0x154))(this);
  sub_88D070(v3, 1, 1, 0);
  v4 = (MobileObject *)OblivionDynamicCast(
                         *(void **)(*(this + 0x17) + 0x28),
                         0,
                         (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                         &Actor `RTTI Type Descriptor',
                         0);
  v5 = v4;
  if ( v4 && MobileObject_GetCharProxy(v4) )
  {
    v6 = *((_DWORD *)MobileObject_GetCharProxy(v5) + 0xD9);
    if ( v6 )
    {
      v7 = *(_DWORD *)(v6 + 8);
      if ( v7 && (v8 = v7 + 0x14) != 0 )
        v9 = HIWORD(*(_DWORD *)(v8 + 0x1C));
      else
        v9 = 0;
    }
    else
    {
      v9 = 0;
    }
  }
  else
  {
    v9 = dword_B3B7D4;
    if ( !dword_B3B7D4 )
    {
      v9 = (unsigned __int16)(dword_B2EB3C + 1);
      dword_B2EB3C = v9;
      if ( !v9 )
      {
        v9 = 0xA;
        dword_B2EB3C = 0xA;
      }
      dword_B3B7D4 = v9;
    }
  }
  v10 = (v9 << 0x10) | 4;
  if ( a2 )
  {
    v11 = a2[2];
    if ( v11 )
    {
      v12 = v11 + 0x14;
      if ( v12 )
        *(_DWORD *)(v12 + 0x1C) = v10;
    }
  }
  (*(void (__thiscall **)(int *))(*a2 + 0x80))(a2);
  sub_4D9960(a2, (float *)(*(this + 0x17) + 0x1C));
  v13 = sub_47FA60((int *)a2[2]);
  if ( v13 )
    *(_WORD *)(v13 + 0xC) |= 0xCu;
  return 1;
}
