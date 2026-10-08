void __cdecl sub_88A870(int a1, _DWORD *a2)
{
  _DWORD *v2; // ebx
  NiObject *v3; // eax
  int v4; // ebp
  NiAVObject *v5; // eax

  v2 = *(_DWORD **)(a1 + 0x10); /*0x88a87b*/
  if ( v2 ) /*0x88a880*/
  {
    if ( a2[6] ) /*0x88a886*/
      *(_WORD *)(a1 + 0xC) |= 0x40u; /*0x88a88c*/
    else
      *(_WORD *)(a1 + 0xC) &= ~0x40u; /*0x88a893*/
    v3 = NiRTTI_Cast((BSStringT *)&MEMORY[0xBA7A20], (NiObject *)a1); /*0x88a89f*/
    if ( v3 ) /*0x88a8a9*/
    {
      if ( a2[5] ) /*0x88a8ab*/
        LOWORD(v3[1].members.m_uiRefCount) &= ~0x100u; /*0x88a8b9*/
      else
        LOWORD(v3[1].members.m_uiRefCount) |= 0x100u; /*0x88a8b1*/
    }
    if ( (a2[3] & 1) != 0 ) /*0x88a8c4*/
    {
      *(_WORD *)(a1 + 0xC) |= 4u; /*0x88a8ca*/
      *(_WORD *)(a1 + 0xC) |= 8u; /*0x88a8d6*/
    }
    else
    {
      *(_WORD *)(a1 + 0xC) &= ~4u; /*0x88a95c*/
    }
    if ( byte_B2E2D8 ) /*0x88a8da*/
      sub_889C20(v2, (int)a2); /*0x88a8e5*/
    v4 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*a2 + 0x58))(*a2); /*0x88a8f9*/
    if ( (*(int (__thiscall **)(_DWORD *))(*v2 + 0x58))(v2) != v4 ) /*0x88a905*/
    {
      if ( *a2 ) /*0x88a907*/
        (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*a2 + 0x58))(*a2); /*0x88a912*/
      (*(void (__thiscall **)(_DWORD *, _DWORD))(*v2 + 0x5C))(v2, *a2); /*0x88a91e*/
      if ( *a2 ) /*0x88a920*/
        (*(void (__thiscall **)(_DWORD))(*(_DWORD *)*a2 + 0x58))(*a2); /*0x88a92b*/
    }
    v5 = Shared_GetPointerAtOffset08((Atmosphere *)a1); /*0x88a92f*/
    v5->vtbl->UpdateWorldData(v5); /*0x88a93b*/
    if ( *(_BYTE *)(*a2 + 0x1A) ) /*0x88a93f*/
      (*(void (__thiscall **)(int, int))(*(_DWORD *)a1 + 0x7C))(a1, 1); /*0x88a94e*/
  }
  a2[3] &= ~1u; /*0x88a950*/
  ++a2[5]; /*0x88a954*/
}
