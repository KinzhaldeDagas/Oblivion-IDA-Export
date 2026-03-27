int __thiscall sub_550480(_DWORD *this)
{
  int v1; // eax
  int *v2; // eax
  int v4; // [esp+8h] [ebp-4h] BYREF

  v4 = 0;
  v1 = *(this + 2);
  if ( v1 )
  {
    v2 = (int *)(v1 + 0x1C);
  }
  else
  {
    v4 = 0;
    v2 = &v4;
  }
  return *v2;
}
