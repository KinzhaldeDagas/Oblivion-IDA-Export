__int16 __thiscall sub_863400(void *this, int a2)
{
  void (__thiscall *v2)(void *, int, int, void **, _DWORD); // eax
  void *v4; // [esp+10h] [ebp-4h] BYREF

  v4 = this;
  v2 = *(void (__thiscall **)(void *, int, int, void **, _DWORD))(*(_DWORD *)this + 0x5C);
  v4 = 0;
  v2(this, a2, 0x2F, &v4, 0);
  return (__int16)v4;
}
