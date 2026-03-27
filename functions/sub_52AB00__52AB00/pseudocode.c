int __thiscall sub_52AB00(TESForm *this)
{
  TESForm *v2; // ebp
  unsigned int v3; // edi

  v2 = (TESForm *)((char *)this + 0x24);
  this->vtbl = (TESFormVtbl *)&TESQuest::`vftable'{for `TESQuest'};
  *((_DWORD *)this + 6) = &TESQuest::`vftable'{for `TESScriptableForm'};
  *((_DWORD *)this + 9) = &TESQuest::`vftable'{for `TESIcon'};
  *((_DWORD *)this + 0xC) = &TESQuest::`vftable'{for `TESFullName'};
  sub_56A750((void **)this + 0x14);
  sub_529760((BSSimpleList_VoidPtr *)this);
  sub_5297C0((char *)this);
  v3 = *((_DWORD *)this + 0x16);
  if ( v3 )
  {
    ScriptEventList_destr__(*((ScriptEventList **)this + 0x16));
    FormHeapFree(v3);
    *((_DWORD *)this + 0x16) = 0;
  }
  j_TESForm_ClearComponentReferences(this);
  FormHeapFree(*((_DWORD *)this + 0x18));
  *((_DWORD *)this + 0x18) = 0;
  *((_WORD *)this + 0x33) = 0;
  *((_WORD *)this + 0x32) = 0;
  sub_56A7A0((char *)this + 0x50);
  FormHeapFree(*((_DWORD *)this + 0xD));
  *((_DWORD *)this + 0xD) = 0;
  *((_WORD *)this + 0x1D) = 0;
  *((_WORD *)this + 0x1C) = 0;
  TESTexture_destr(v2);
  return TESForm_destr(this);
}
