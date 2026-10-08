int __thiscall sub_8ACF60(int *this, int a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int result; // eax

  v3 = *(this + 0x1F); /*0x8acf63*/
  if ( v3 >= 0 ) /*0x8acf6d*/
    (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int))(*(_DWORD *)a2 + 4))( /*0x8acf94*/
      a2,
      "Manifold",
      8,
      *(this + 0x1D),
      0x30 * *(this + 0x1E),
      0x30 * (v3 & 0x3FFFFFFF));
  v4 = *(this + 0x25); /*0x8acf97*/
  if ( v4 >= 0 ) /*0x8acf9f*/
    (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int))(*(_DWORD *)a2 + 4))( /*0x8acfc6*/
      a2,
      "OverlapsPntr",
      8,
      *(this + 0x23),
      4 * *(this + 0x24),
      4 * v4);
  v5 = *(this + 0x28); /*0x8acfc9*/
  if ( v5 >= 0 ) /*0x8acfd1*/
    (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int))(*(_DWORD *)a2 + 4))( /*0x8acff8*/
      a2,
      "Manifold",
      8,
      *(this + 0x26),
      4 * *(this + 0x27),
      4 * v5);
  result = *(this + 0x22); /*0x8acffb*/
  if ( result >= 0 ) /*0x8ad003*/
    return (*(int (__thiscall **)(int, const char *, int, _DWORD, int, int))(*(_DWORD *)a2 + 4))( /*0x8ad02a*/
             a2,
             "ListnrPntr",
             8,
             *(this + 0x20),
             4 * *(this + 0x21),
             4 * result);
  return result; /*0x8ad02d*/
}
