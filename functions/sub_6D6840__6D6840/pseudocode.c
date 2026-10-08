// Oblivion NiTransformInterpolator binary save. Saves base state, writes cached 0x20-byte transform +0x0C, and writes the NiTransformData object reference +0x2C. The three key cursors are transient and not serialized.
int __thiscall NiTransformInterpolator_SaveBinary(char *this, signed int a2)
{
  j_j_nullsub_3(a2); /*0x6d6849*/
  sub_6CBA90(this + 0xC, a2); /*0x6d6852*/
  return (*(int (__thiscall **)(signed int, _DWORD))(*(_DWORD *)a2 + 0x2C))(a2, *((_DWORD *)this + 0xB)); /*0x6d6864*/
}
