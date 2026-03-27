_DWORD *__thiscall TESAIForm_CopyFrom(_BYTE *this, void *a2)
{
  _DWORD *result; // eax
  _DWORD *v4; // edi
  void (__thiscall *v5)(_BYTE *, int); // eax
  void (__thiscall *v6)(_BYTE *, int); // eax
  void (__thiscall *v7)(_BYTE *, int); // eax
  void (__thiscall *v8)(_BYTE *, int); // eax

  result = OblivionDynamicCast(
             a2,
             0,
             (struct _s_RTTICompleteObjectLocator *)&BaseFormComponent `RTTI Type Descriptor',
             &TESAIForm `RTTI Type Descriptor',
             0);
  v4 = result;
  if ( result )
  {
    v5 = *(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 0x10);
    *(this + 4) = *((_BYTE *)v4 + 4);
    v5(this, 0x100);
    v6 = *(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 0x10);
    *(this + 5) = *((_BYTE *)v4 + 5);
    v6(this, 0x100);
    v7 = *(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 0x10);
    *(this + 6) = *((_BYTE *)v4 + 6);
    v7(this, 0x100);
    v8 = *(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 0x10);
    *(this + 7) = *((_BYTE *)v4 + 7);
    v8(this, 0x100);
    *((_DWORD *)this + 2) = v4[2];
    if ( *((unsigned __int8 *)v4 + 0xC) <= 0x14u )
      *(this + 0xC) = *((_BYTE *)v4 + 0xC);
    *(this + 0xD) = *((_BYTE *)v4 + 0xD);
    return sub_568F30((_DWORD *)this + 4, v4 + 4);
  }
  return result;
}
