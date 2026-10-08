int __thiscall sub_7261D0(int this, unsigned int a2)
{
  int result; // eax
  int v4; // ecx

  result = a2; /*0x7261d0*/
  if ( a2 < *(unsigned __int16 *)(this + 0x26) ) /*0x7261dd*/
  {
    v4 = *(_DWORD *)(*(_DWORD *)(this + 0x20) + 4 * a2); /*0x7261e2*/
    if ( v4 ) /*0x7261e7*/
    {
      result = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v4 + 8))(v4, 0, 0); /*0x7261f2*/
      ++*(_DWORD *)(this + 8); /*0x7261f4*/
    }
  }
  return result; /*0x7261f8*/
}
