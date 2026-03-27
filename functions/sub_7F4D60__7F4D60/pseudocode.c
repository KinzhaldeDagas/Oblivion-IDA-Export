NiProperty *__cdecl sub_7F4D60(int a1)
{
  void *v1; // eax
  NiAVObject *v2; // esi
  NiProperty *NiPropertyByID; // eax
  NiProperty *v4; // esi
  NiProperty *v5; // esi

  if ( !a1 )
    return 0;
  v1 = (void *)sub_7F4970();
  v2 = (NiAVObject *)sub_700900(v1);
  (*(void (__thiscall **)(int, NiAVObject *, _DWORD))(*(_DWORD *)a1 + 0x84))(a1, v2, 0);
  sub_7B8940(v2, 0x17u, 0, 1);
  NiPropertyByID = NiNode_GetNiPropertyByID((NiNode *)v2, 4);
  v4 = NiPropertyByID;
  if ( NiPropertyByID )
    NiPropertyByID = (NiProperty *)((*((int (__thiscall **)(NiProperty *))NiPropertyByID->vtbl + 0x15))(NiPropertyByID) == 0xD);
  v5 = NiPropertyByID != 0 ? v4 : 0;
  if ( !v5 )
    return 0;
  sub_7F4970();
  ++dword_B46900;
  return v5;
}
