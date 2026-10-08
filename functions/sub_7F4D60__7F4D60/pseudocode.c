NiProperty *__cdecl sub_7F4D60(int a1)
{
  NiObject *v1; // eax
  NiAVObject *v2; // esi
  NiProperty *NiPropertyByID; // eax
  NiProperty *v4; // esi
  NiProperty *v5; // esi

  if ( !a1 ) /*0x7f4d68*/
    return 0; /*0x7f4d68*/
  v1 = (NiObject *)sub_7F4970(); /*0x7f4d6a*/
  v2 = (NiAVObject *)NiObject_CloneWithPointerMap(v1); /*0x7f4d76*/
  (*(void (__thiscall **)(int, NiAVObject *, _DWORD))(*(_DWORD *)a1 + 0x84))(a1, v2, 0); /*0x7f4d85*/
  BSShaderManager_AssignShadersRecursive(v2, 0x17u, 0, 1); /*0x7f4d8e*/
  NiPropertyByID = NiNode_GetNiPropertyByID((NiNode *)v2, 4); /*0x7f4d9a*/
  v4 = NiPropertyByID; /*0x7f4d9f*/
  if ( NiPropertyByID ) /*0x7f4da3*/
    NiPropertyByID = (NiProperty *)((*((int (__thiscall **)(NiProperty *))NiPropertyByID->vtbl + 0x15))(NiPropertyByID) == 0xD); /*0x7f4db6*/
  v5 = NiPropertyByID != 0 ? v4 : 0;
  if ( !v5 ) /*0x7f4dc0*/
    return 0; /*0x7f4dd4*/
  sub_7F4970(); /*0x7f4dc2*/
  ++unk_B46900; /*0x7f4dc7*/
  return v5; /*0x7f4dce*/
}
