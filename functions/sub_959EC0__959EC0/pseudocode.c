// Verified NiPick context destructor: clears/releases hit records, frees the record-pointer array, and releases its retained root object.
void __thiscall NiPickContext_dtor(_WORD *this)
{
  int v2; // esi
  unsigned int v3; // [esp-4h] [ebp-8h]

  sub_959CA0(this); /*0x959ec3*/
  v3 = *((_DWORD *)this + 7); /*0x959ecb*/
  *((_DWORD *)this + 6) = &NiTArray<NiPick::Record *>::`vftable'; /*0x959ecc*/
  FormHeapFree(v3); /*0x959ed3*/
  v2 = *((_DWORD *)this + 5); /*0x959ed8*/
  if ( v2 ) /*0x959ee0*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v2 + 4)) ) /*0x959ee6*/
      (**(void (__thiscall ***)(int, int))v2)(v2, 1); /*0x959efc*/
  }
}
