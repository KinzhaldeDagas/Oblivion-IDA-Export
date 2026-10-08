// CULLING documentation correction 2026-09-27, Oblivion observation: NiSwitchNode selected index(+0xE0) chooses one child. When its selection/update stamp differs, native calls selected child UpdateDownwardPass before NiAVObject_Render. A replacement traversal could skip this update. Preserve native selection/update order; geometry callback readability alone does not prove bound freshness.
// GPU static-world LOD audit 2026-09-27: a plain/frozen switch uses cached signed +E0 directly; a null selected slot is NOT searched backward. For a non-null child, compare child update stamp array+F0[index] with current epoch+E8; mismatch writes the stamp and invokes child downward update using +E4 time before rendering. GPU selection alone cannot suppress these lazy update obligations.
int __thiscall NiSwitchNode_Render_(NiNode *this, NiCullingProcess *a2)
{
  int result; // eax
  NiAVObject *v4; // edi

  result = *((_DWORD *)this + 0x38); /*0x7243e3*/
  if ( result >= 0 ) /*0x7243eb*/
  {
    v4 = *((NiAVObject **)&this->members.children.data->vtbl + result); /*0x7243f4*/
    if ( v4 ) /*0x7243f9*/
    {
      if ( *(_DWORD *)(*((_DWORD *)this + 0x3C) + 4 * result) != *((_DWORD *)this + 0x3A) ) /*0x724410*/
      {
        NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)((char *)this + 0xEC), result, (_DWORD *)this + 0x3A); /*0x72441a*/
        ((void (__thiscall *)(NiAVObject *, _DWORD, bool))v4->vtbl->UpdateDownwardPass)( /*0x724440*/
          v4,
          *((float *)this + 0x39),
          (*(_BYTE *)(this + 1) & 2) != 0);
      }
      return NiAVObject_Render(v4, a2);         // Submit only the NiSwitchNode child selected by +0xE0. /*0x724449*/
    }
  }
  return result; /*0x72444f*/
}
