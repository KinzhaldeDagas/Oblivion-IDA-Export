char __thiscall sub_4762B0(AnimSequenceSingle *this, UInt32 a2, TESObjectREFR *a3, UInt32 a4)
{
  IOTask *v8; // eax
  IOTask *v9; // eax
  IOTask *v10; // eax

  if ( (SaveLoad_CurrentSavegame->flags & 0x800) != 0 )
  {
    v10 = (IOTask *)FormHeapAlloc(0x2Cu);
    if ( v10 )
    {
      v9 = sub_474C50(v10, a2, a4, 0, a3, 1);
      goto LABEL_7;
    }
LABEL_6:
    v9 = 0;
    goto LABEL_7;
  }
  v8 = (IOTask *)FormHeapAlloc(0x2Cu);
  if ( !v8 )
    goto LABEL_6;
  v9 = sub_474C50(v8, a2, a4, 0, a3, 0);
LABEL_7:
  *((_DWORD *)this + 0x34) = v9;
  return sub_4753F0(this);
}
