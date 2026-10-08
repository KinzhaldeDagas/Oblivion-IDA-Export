// Oblivion NiTransformInterpolator binary load. Loads base state, reads cached 0x20-byte transform at +0x0C, resolves the streamed NiTransformData object reference, and replaces +0x2C with balanced refcounts. The three key cursors are not loaded.
LONG __thiscall NiTransformInterpolator_LoadBinary(char *this, _DWORD *a2)
{
  LONG result; // eax
  int v4; // edi
  LONG v5; // ebx

  sub_6EC2B0((int)a2); /*0x6d67ba*/
  sub_6CB990(this + 0xC, (signed int)a2); /*0x6d67c3*/
  result = sub_712A90(a2); /*0x6d67ca*/
  v4 = *((_DWORD *)this + 0xB); /*0x6d67cf*/
  v5 = result; /*0x6d67d2*/
  if ( v4 != result ) /*0x6d67d6*/
  {
    if ( v4 ) /*0x6d67da*/
    {
      result = InterlockedDecrement((volatile LONG *)(v4 + 4)); /*0x6d67e0*/
      if ( !result ) /*0x6d67e8*/
        result = (**(int (__thiscall ***)(int, int))v4)(v4, 1); /*0x6d67f6*/
    }
    *((_DWORD *)this + 0xB) = v5; /*0x6d67fa*/
    if ( v5 ) /*0x6d67fd*/
      return InterlockedIncrement((volatile LONG *)(v5 + 4)); /*0x6d6803*/
  }
  return result; /*0x6d6809*/
}
