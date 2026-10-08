BOOL __thiscall sub_948490(_DWORD *this)
{
  void *v2; // ecx
  _DWORD **v3; // ecx
  char v5; // [esp+7h] [ebp-1h] BYREF

  v2 = (void *)*(this + 1); /*0x948494*/
  if ( v2 ) /*0x948499*/
  {
    sub_918440(v2, 1); /*0x94849d*/
    sub_9181B0((_DWORD **)*(this + 1), 0xB); /*0x9484a7*/
  }
  v3 = (_DWORD **)*(this + 1); /*0x9484ac*/
  return !v3 || !*(_BYTE *)sub_918060(v3, (int)&v5); /*0x9484b1*/
}
