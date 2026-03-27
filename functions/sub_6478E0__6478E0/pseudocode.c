TESForm::ModReferenceList *__thiscall sub_6478E0(float *this, int a2, int a3)
{
  TESForm::ModReferenceList *result; // eax
  void (__thiscall ***v5)(_DWORD, int); // ecx
  int *v6; // edi
  unsigned int v7; // ebp

  sub_60D810(this, a2, a3);
  result = (TESForm::ModReferenceList *)SaveLoad_CurrentSavegame->unk030[5];
  if ( result == (TESForm::ModReferenceList *)0x1FFFF000 || result == (TESForm::ModReferenceList *)0x7FFFF000 )
  {
    v5 = *((void (__thiscall ****)(_DWORD, int))this + 0xD);
    if ( v5 )
      (**v5)(v5, 1);
    *(this + 0xD) = 0.0;
    *(this + 0xE) = 0.0;
    v6 = (int *)(this + 0xF);
    while ( *((_DWORD *)this + 0x10) || *v6 )
    {
      v7 = *v6;
      BSSimpleList_Remove((_DWORD *)this + 0xF, *v6);
      if ( v7 )
        FormHeapFree(v7);
    }
    result = (TESForm::ModReferenceList *)BSSimpleList_Clear((_DWORD *)this + 0x13);
    *(this + 5) = flt_A30634;
    *(this + 0x22) = 0.0;
    *(this + 0x11) = 0.0;
    *(this + 0xA) = 0.0;
    *(this + 0x12) = 0.0;
    *((_BYTE *)this + 0x84) = 0;
    *(this + 0x23) = 0.0;
    *(this + 0xB) = 0.0;
    *(this + 0xC) = 0.0;
    *(this + 6) = 0.0;
    *((_BYTE *)this + 0x1C) = 0;
    *((_BYTE *)this + 0x1D) = 0;
    *((_BYTE *)this + 0x1F) = 0;
    *((_BYTE *)this + 0x20) = 0;
    *(this + 9) = 0.0;
    *((_BYTE *)this + 0x1E) = 0;
  }
  if ( (a2 & 0x400000) != 0 )
    return (TESForm::ModReferenceList *)AVCollection_Clear((_DWORD *)this + 0x1C);
  return result;
}
