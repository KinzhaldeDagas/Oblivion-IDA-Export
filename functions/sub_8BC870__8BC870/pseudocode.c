int __thiscall sub_8BC870(int *this, int a2)
{
  int v3; // eax
  int result; // eax

  (*(void (__thiscall **)(int, const char *, int, _DWORD))(*(_DWORD *)a2 + 8))(a2, "Shape", 1, *(this + 5)); /*0x8bc887*/
  v3 = *(this + 0x10); /*0x8bc88a*/
  if ( v3 >= 0 ) /*0x8bc88f*/
    (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int))(*(_DWORD *)a2 + 4))( /*0x8bc8b0*/
      a2,
      "CollAgtPtr",
      8,
      *(this + 0xE),
      8 * *(this + 0xF),
      8 * v3);
  result = *(this + 0x13); /*0x8bc8b3*/
  if ( result >= 0 ) /*0x8bc8b8*/
    return (*(int (__thiscall **)(int, const char *, int, _DWORD, int, int))(*(_DWORD *)a2 + 4))( /*0x8bc8d9*/
             a2,
             "Properties",
             4,
             *(this + 0x11),
             0x10 * *(this + 0x12),
             0x10 * result);
  return result; /*0x8bc8dc*/
}
