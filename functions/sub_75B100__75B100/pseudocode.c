int __thiscall sub_75B100(int *this, signed int a2)
{
  signed int v2; // edi
  bool v4; // cc
  int v6; // [esp+8h] [ebp-4h] BYREF

  v2 = a2;
  sub_752DC0((NiRenderer *)this, (unsigned int *)a2);
  v4 = *(_DWORD *)(v2 + 0xD8) <= 0xA010064u;
  a2 = 2;
  if ( v4 )
  {
    (*(void (__cdecl **)(_DWORD, int *, int, signed int *, int))(*(_DWORD *)(v2 + 0x21C) + 4))(
      *(_DWORD *)(v2 + 0x21C),
      &v6,
      2,
      &a2,
      1);
    return sub_75A870((int)this, v6);
  }
  else
  {
    (*(void (__cdecl **)(_DWORD, int *, int, signed int *, int))(*(_DWORD *)(v2 + 0x21C) + 4))(
      *(_DWORD *)(v2 + 0x21C),
      this + 6,
      2,
      &a2,
      1);
    return sub_75A870((int)this, *((_WORD *)this + 0xC));
  }
}
