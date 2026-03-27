int __thiscall sub_77B140(_DWORD **this, int a2, int a3, _DWORD *a4, char a5)
{
  int result; // eax
  int *v6; // esi

  result = *(unsigned __int16 *)(2 * a3 + 0xB427E0);
  if ( (unsigned __int16)result < 8u )
  {
    result = (unsigned __int16)result + 8 * a2;
    v6 = (int *)(this + 2 * result + 0x248);
    if ( (_DWORD *)*v6 != a4 )
      result = (*(int (__stdcall **)(_DWORD, int, int, _DWORD *))(**(this + 0x3FE) + 0x10C))(
                 *(this + 0x3FE),
                 a2,
                 a3,
                 a4);
    if ( a5 )
    {
      result = *v6;
      v6[1] = *v6;
    }
    *v6 = (int)a4;
  }
  return result;
}
