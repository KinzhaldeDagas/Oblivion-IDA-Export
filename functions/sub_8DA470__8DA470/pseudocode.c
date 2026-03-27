int __thiscall sub_8DA470(_DWORD *this, int a2)
{
  int v3; // eax

  (**(void (__thiscall ***)(int, _DWORD, int, _DWORD *))a2)(a2, 0, 2, this);
  v3 = *(this + 0x704);
  if ( v3 )
  {
    (*(void (__thiscall **)(int, const char *, int, int, int, _DWORD))(*(_DWORD *)a2 + 4))(
      a2,
      "DebugTable",
      4,
      v3,
      0xC00,
      0);
    (*(void (__thiscall **)(int, const char *, int, _DWORD, int, _DWORD))(*(_DWORD *)a2 + 4))(
      a2,
      "DebugTable",
      4,
      *(this + 0x705),
      0xC00,
      0);
    (*(void (__thiscall **)(int, const char *, int, _DWORD, int, _DWORD))(*(_DWORD *)a2 + 4))(
      a2,
      "DebugTable",
      4,
      *(this + 0x706),
      0xC00,
      0);
    (*(void (__thiscall **)(int, const char *, int, _DWORD, int, _DWORD))(*(_DWORD *)a2 + 4))(
      a2,
      "DebugTable",
      4,
      *(this + 0x707),
      0xC00,
      0);
  }
  return (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x14))(a2);
}
