void __cdecl sub_88A870(int a1, _DWORD *a2)
{
  _DWORD *v2; // ebx
  NiObject *v3; // eax
  int v4; // ebp
  NiAVObject *v5; // eax

  v2 = *(_DWORD **)(a1 + 0x10);
  if ( v2 )
  {
    if ( a2[6] )
      *(_WORD *)(a1 + 0xC) |= 0x40u;
    else
      *(_WORD *)(a1 + 0xC) &= ~0x40u;
    v3 = NiRTTI_Cast((BSStringT *)dword_BA7A20, (NiObject *)a1);
    if ( v3 )
    {
      if ( a2[5] )
        LOWORD(v3[1].members.m_uiRefCount) &= ~0x100u;
      else
        LOWORD(v3[1].members.m_uiRefCount) |= 0x100u;
    }
    if ( (a2[3] & 1) != 0 )
    {
      *(_WORD *)(a1 + 0xC) |= 4u;
      *(_WORD *)(a1 + 0xC) |= 8u;
    }
    else
    {
      *(_WORD *)(a1 + 0xC) &= ~4u;
    }
    if ( byte_B2E2D8 )
      sub_889C20(v2, (int)a2);
    v4 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*a2 + 0x58))(*a2);
    if ( (*(int (__thiscall **)(_DWORD *))(*v2 + 0x58))(v2) != v4 )
    {
      if ( *a2 )
        (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*a2 + 0x58))(*a2);
      (*(void (__thiscall **)(_DWORD *, _DWORD))(*v2 + 0x5C))(v2, *a2);
      if ( *a2 )
        (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*a2 + 0x58))(*a2);
    }
    v5 = sub_452A60((Atmosphere *)a1);
    v5->vtbl->UpdateWorldData(v5);
    if ( *(_BYTE *)(*a2 + 0x1A) )
      (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 0x7C))(a1, 1);
  }
  a2[3] &= ~1u;
  ++a2[5];
}
