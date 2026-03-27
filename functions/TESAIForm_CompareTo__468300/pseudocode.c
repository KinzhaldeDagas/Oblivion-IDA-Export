bool __thiscall TESAIForm_CompareTo(_DWORD *this, void *a2)
{
  _BYTE *v3; // eax

  v3 = OblivionDynamicCast(
         a2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&BaseFormComponent `RTTI Type Descriptor',
         &TESAIForm `RTTI Type Descriptor',
         0);
  return !v3
      || *((_BYTE *)this + 4) != v3[4]
      || *((_BYTE *)this + 5) != v3[5]
      || *((_BYTE *)this + 6) != v3[6]
      || *((_BYTE *)this + 7) != v3[7]
      || *(this + 2) != *((_DWORD *)v3 + 2)
      || *((unsigned __int8 *)this + 0xC) + 0xC != (unsigned __int8)v3[0xC] + 0xC
      || *((_BYTE *)this + 0xD) != v3[0xD]
      || sub_568FD0(this + 4, (_DWORD *)v3 + 4) != 0;
}
