int __thiscall sub_88DBE0(_DWORD *this)
{
  int v2; // ebx
  int i; // esi
  int result; // eax

  v2 = *(this + 0x29); /*0x88dbe5*/
  for ( i = 0; i < v2; ++i ) /*0x88dbef*/
    result = (*(int (__thiscall **)(_DWORD *, int))(*this + 0x34))(this, i); /*0x88dbf9*/
  return result; /*0x88dc02*/
}
