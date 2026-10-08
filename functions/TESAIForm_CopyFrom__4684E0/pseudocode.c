_DWORD *__thiscall TESAIForm_CopyFrom(_BYTE *this, void *a2)
{
  _DWORD *result; // eax
  _DWORD *v4; // edi
  void (__thiscall *v5)(_BYTE *, int); // eax
  void (__thiscall *v6)(_BYTE *, int); // eax
  void (__thiscall *v7)(_BYTE *, int); // eax
  void (__thiscall *v8)(_BYTE *, int); // eax

  result = OblivionDynamicCast( /*0x4684f7*/
             a2,
             0,
             (struct _s_RTTICompleteObjectLocator *)&BaseFormComponent `RTTI Type Descriptor',
             &TESAIForm `RTTI Type Descriptor',
             0);
  v4 = result; /*0x4684fc*/
  if ( result ) /*0x468503*/
  {
    v5 = *(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 0x10); /*0x46850f*/
    *(this + 4) = *((_BYTE *)v4 + 4); /*0x468512*/
    v5(this, 0x100); /*0x46851c*/
    v6 = *(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 0x10); /*0x468524*/
    *(this + 5) = *((_BYTE *)v4 + 5); /*0x468527*/
    v6(this, 0x100); /*0x468531*/
    v7 = *(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 0x10); /*0x468539*/
    *(this + 6) = *((_BYTE *)v4 + 6); /*0x46853c*/
    v7(this, 0x100); /*0x468546*/
    v8 = *(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 0x10); /*0x46854e*/
    *(this + 7) = *((_BYTE *)v4 + 7); /*0x468551*/
    v8(this, 0x100); /*0x46855b*/
    *((_DWORD *)this + 2) = v4[2]; /*0x468560*/
    if ( *((unsigned __int8 *)v4 + 0xC) <= 0x14u ) /*0x468570*/
      *(this + 0xC) = *((_BYTE *)v4 + 0xC); /*0x468574*/
    *(this + 0xD) = *((_BYTE *)v4 + 0xD); /*0x468581*/
    return sub_568F30((_DWORD *)this + 4, v4 + 4); /*0x468584*/
  }
  return result; /*0x468589*/
}
