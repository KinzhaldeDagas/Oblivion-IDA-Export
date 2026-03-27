int __thiscall NiSwitchNode_Render_(NiNode *this, NiCullingProcess *a2)
{
  int result; // eax
  NiAVObject *v4; // edi

  result = *((_DWORD *)this + 0x38);
  if ( result >= 0 )
  {
    v4 = *((NiAVObject **)&this->members.children.data->vtbl + result);
    if ( v4 )
    {
      if ( *(_DWORD *)(*((_DWORD *)this + 0x3C) + 4 * result) != *((_DWORD *)this + 0x3A) )
      {
        NiTArray_SetAt((NiTArray_NiTexturingPropertyMap *)((char *)this + 0xEC), result, (_DWORD *)this + 0x3A);
        ((void (__thiscall *)(NiAVObject *, _DWORD, bool))v4->vtbl->UpdateDownwardPass)(
          v4,
          *((float *)this + 0x39),
          (*(_BYTE *)(this + 1) & 2) != 0);
      }
      return NiAVObject_Render(v4, a2);
    }
  }
  return result;
}
