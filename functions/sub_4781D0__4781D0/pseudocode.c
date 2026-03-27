IOTask **__thiscall sub_4781D0(_DWORD *this, IOTask **a2, unsigned __int8 a3, volatile LONG *a4)
{
  int v4; // eax

  v4 = *(this + 0x18);
  if ( !v4 || v4 == 0xFFFFFFFF )
  {
    *a2 = 0;
    return a2;
  }
  else
  {
    sub_43BAF0((_DWORD **)ModelLoaderPtr, a2, (UInt32)this, a3, a4);
    return a2;
  }
}
