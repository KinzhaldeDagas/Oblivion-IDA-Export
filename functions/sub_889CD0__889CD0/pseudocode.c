int __thiscall sub_889CD0(_DWORD *this)
{
  int v1; // ecx

  v1 = *(this + 0x14);
  if ( v1 && *(_BYTE *)(v1 + 0x18) == 1 )
    return v1 + *(_DWORD *)(v1 + 0x10);
  else
    return 0;
}
