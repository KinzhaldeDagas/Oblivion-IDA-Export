char __stdcall sub_46AED0(int a1, unsigned __int16 a2)
{
  unsigned __int16 v2; // ax
  size_t v4; // [esp-4h] [ebp-8h]

  v2 = *(_WORD *)(a1 + 4);
  if ( !v2 && !a2 || a2 + v2 > 0xFFFF )
    return 0;
  *(_WORD *)(a1 + 4) = a2 + v2;
  LODWORD(v4) = a2 + TESForm_Static_FormRecordSize;
  TESForm_Static_FormRecordSize = v4;
  TESForm_Static_FormRecordBuffer = MemoryHeap_Reallocate(
                                      (void (__thiscall ***)(void *, int))&FormHeap,
                                      TESForm_Static_FormRecordBuffer,
                                      v4);
  return 1;
}
