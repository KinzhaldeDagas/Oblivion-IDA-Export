NiNode *__thiscall sub_4A0F90(char **this, _DWORD **a2)
{
  NiNode *v3; // eax
  NiNode *v4; // esi
  NiNodeVtbl *vtbl; // eax

  v3 = (NiNode *)FormHeapAlloc(0xF0u);
  v4 = 0;
  if ( v3 )
    v4 = sub_4A0F30(v3);
  sub_70AC60(this, (int)v4, a2);
  vtbl = v4->vtbl;
  v4[1].members.super.super.super.m_uiRefCount = *((UInt32 *)this + 0x38);
  v4[1].members.super.super.m_pcName = *((const char **)this + 0x39);
  LOBYTE(v4[1].members.super.super.m_extraDataList) = *((_BYTE *)this + 0xEC);
  LOBYTE(v4[1].vtbl) = *((_BYTE *)this + 0xDC);
  vtbl->super.UpdateWorldBound((NiAVObject *)v4);
  v4->vtbl->super.Unk_14((NiAVObject *)v4);
  return v4;
}
