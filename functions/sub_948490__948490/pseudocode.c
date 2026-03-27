BOOL __thiscall sub_948490(_DWORD *this)
{
  void *v2; // ecx
  _DWORD **v3; // ecx
  char v5; // [esp+7h] [ebp-1h] BYREF

  v2 = (void *)*(this + 1);
  if ( v2 )
  {
    sub_918440(v2, 1);
    sub_9181B0((_DWORD **)*(this + 1), 0xB);
  }
  v3 = (_DWORD **)*(this + 1);
  return !v3 || !*(_BYTE *)sub_918060(v3, (int)&v5);
}
