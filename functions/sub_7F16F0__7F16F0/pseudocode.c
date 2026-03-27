int __cdecl sub_7F16F0(int a1, int a2)
{
  (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int, CHAR *, int, int, float *, _DWORD))(*(_DWORD *)a1 + 0x18))(
    a1,
    "TreeData",
    0x10000007,
    0,
    a2,
    1,
    EmptyString,
    0x10,
    4,
    &flt_B467A0,
    0);
  return (*(int (__thiscall **)(int, const char *, int, _DWORD, int, int, CHAR *, int, int, void *, _DWORD))(*(_DWORD *)a1 + 0x18))(
           a1,
           "WindMatrices",
           0x10000009,
           0,
           a2 + 1,
           0x10,
           EmptyString,
           0x100,
           4,
           &WindMatrixes,
           0);
}
