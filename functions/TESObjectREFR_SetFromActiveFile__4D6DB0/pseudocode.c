UInt32 __thiscall TESObjectREFR_SetFromActiveFile(TESChildCELL *this, TESForm *a2)
{
  void *v3; // eax

  if ( (*(_DWORD *)(this + 2) & 0x4000) == 0 )
  {
    if ( (_BYTE)a2 )
    {
      v3 = (void *)(**((int (__thiscall ***)(TESChildCELL *))this + 6))(this + 6);
      if ( v3 )
        (*(void (__thiscall **)(void *, int))(*(_DWORD *)v3 + 0x90))(v3, 1);
    }
  }
  return TESForm_SetFromActiveFile((TESForm *)this, a2);
}
