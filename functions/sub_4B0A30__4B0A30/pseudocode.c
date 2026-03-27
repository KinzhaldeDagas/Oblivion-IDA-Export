NiNode *__userpurge sub_4B0A30@<eax>(_DWORD *a1@<ecx>, double a2@<st0>, TESObjectREFR *a3)
{
  NiNode *v4; // eax
  NiNode *v5; // eax
  NiNode *v6; // edi
  NiNode *v7; // eax
  NiNode *v8; // esi

  if ( strlen((const char *)(*(int (__thiscall **)(_DWORD *))(a1[0xC] + 0x14))(a1 + 0xC)) )
  {
    v4 = (NiNode *)sub_4B3310(a1, a2, a3);
  }
  else
  {
    v5 = (NiNode *)FormHeapAlloc(0xDCu);
    if ( v5 )
      v4 = NiNode::NiNode(v5, 0);
    else
      v4 = 0;
  }
  v6 = v4;
  if ( !v4 || v4->vtbl->super.super.Unk_02((NiObject *)v4) )
    return v6;
  v7 = (NiNode *)FormHeapAlloc(0xDCu);
  if ( v7 )
    v8 = NiNode::NiNode(v7, 0);
  else
    v8 = 0;
  ((void (__thiscall *)(NiNode *, NiNode *, _DWORD))v8->vtbl->AddObject)(v8, v6, 0);
  return v8;
}
