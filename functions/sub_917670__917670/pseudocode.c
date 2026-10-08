int __thiscall sub_917670(int *this, int a2)
{
  int v3; // eax
  int v4; // eax

  (**(void (__thiscall ***)(int, const char *, int, int *))a2)(a2, "CvxVerts", 1, this); /*0x917684*/
  v3 = *(this + 0xE); /*0x917686*/
  if ( v3 >= 0 ) /*0x91768b*/
    (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int))(*(_DWORD *)a2 + 4))( /*0x9176b2*/
      a2,
      "Verts",
      1,
      *(this + 0xC),
      0x30 * *(this + 0xD),
      0x30 * (v3 & 0x3FFFFFFF));
  v4 = *(this + 0x12); /*0x9176b5*/
  if ( v4 >= 0 ) /*0x9176ba*/
    (*(void (__thiscall **)(int, const char *, int, _DWORD, int, int))(*(_DWORD *)a2 + 4))( /*0x9176db*/
      a2,
      "Verts",
      1,
      *(this + 0x10),
      0x10 * *(this + 0x11),
      0x10 * v4);
  return (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x14))(a2); /*0x9176e5*/
}
