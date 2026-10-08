_DWORD *__thiscall sub_9104B0(int *this, int a2, int *a3)
{
  sub_8F0F70(a2, a3, 0, 0); /*0x9104c3*/
  sub_8F0F20(*(this + 4), *(this + 5), (int)a3); /*0x9104d1*/
  (*(void (__thiscall **)(_DWORD, int, int *))(*(_DWORD *)*(this + 3) + 0x1C))(*(this + 3), a2, a3); /*0x9104e0*/
  sub_8F0F70(a2, a3, 0, 0); /*0x9104e9*/
  return sub_8F0F50((int)a3); /*0x9104f7*/
}
