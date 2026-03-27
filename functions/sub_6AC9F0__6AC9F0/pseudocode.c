int __thiscall sub_6AC9F0(_DWORD *this, int a2)
{
  _DWORD *v3; // ecx
  int v5; // [esp+4h] [ebp-4h] BYREF

  v3 = (_DWORD *)*(this + 0xC0);
  v5 = 0;
  NiTMap_GetAt(v3, a2, &v5);
  a2 = v5;
  if ( v5 )
    return sub_6AA9C0(this, (int)&a2);
  else
    return 0x80004005;
}
