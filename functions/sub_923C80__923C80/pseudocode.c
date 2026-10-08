int __cdecl sub_923C80(int a1, unsigned int a2, int a3, int a4)
{
  int result; // eax
  unsigned int v5; // esi
  unsigned int v6; // edi
  _DWORD *v7; // ecx
  _OWORD *v8; // [esp-Ch] [ebp-14h]

  result = a3; /*0x923c80*/
  v5 = a2; /*0x923c85*/
  v6 = a2 + 4 * a3; /*0x923c8a*/
  if ( a2 < v6 ) /*0x923c8f*/
  {
    do /*0x923ccc*/
    {
      v7 = *(_DWORD **)(*(_DWORD *)v5 + 0x50); /*0x923ca2*/
      v8 = (_OWORD *)(a4 + v7[2]); /*0x923caf*/
      v8[4] = v8[1]; /*0x923cb0*/
      v8[5] = v8[2]; /*0x923cbd*/
      result = (*(int (__thiscall **)(_DWORD *, int, int, _OWORD *))(*v7 + 0x18))(v7, a1, 0x3F800000, v8); /*0x923cc4*/
      v5 += 4; /*0x923cc7*/
    }
    while ( v5 < v6 ); /*0x923ccc*/
  }
  return result; /*0x923cd0*/
}
