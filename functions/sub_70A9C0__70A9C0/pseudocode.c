int __thiscall sub_70A9C0(_WORD *this)
{
  unsigned int i; // esi
  int v3; // ecx
  float v5[13]; // [esp+8h] [ebp-34h] BYREF

  for ( i = 0; i < (unsigned __int16)*(this + 0x5B); ++i )
  {
    v3 = *(_DWORD *)(*((_DWORD *)this + 0x2C) + 4 * i);
    if ( v3 )
      (*(void (__thiscall **)(int))(*(_DWORD *)v3 + 0x50))(v3);
  }
  sub_718A80((float *)this + 0x19, v5);
  return sub_72A820((float *)this + 0x33, (float *)this + 8, v5);
}
