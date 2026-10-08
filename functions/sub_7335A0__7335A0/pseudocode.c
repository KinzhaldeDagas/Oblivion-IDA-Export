_DWORD *__thiscall sub_7335A0(_DWORD *this, _DWORD *a2)
{
  _DWORD *result; // eax
  unsigned int v4; // edi
  _DWORD *v5; // esi
  int v6; // ebx
  _DWORD *v7; // ecx
  _DWORD *v8; // [esp+Ch] [ebp+4h]

  v4 = 0; /*0x7335a9*/
  v8 = (_DWORD *)a2[1]; /*0x7335ad*/
  result = v8; /*0x7335a5*/
  if ( v8 ) /*0x7335b1*/
  {
    v5 = this + 3; /*0x7335b5*/
    do /*0x7335f2*/
    {
      v6 = *(_DWORD *)(*a2 + 4 * v4); /*0x7335bd*/
      result = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v5 + 4))(v5); /*0x7335c5*/
      result[2] = v6; /*0x7335c7*/
      *result = 0; /*0x7335ca*/
      result[1] = v5[2]; /*0x7335d3*/
      v7 = (_DWORD *)v5[2]; /*0x7335d6*/
      if ( v7 ) /*0x7335db*/
        *v7 = result; /*0x7335dd*/
      else
        v5[1] = result; /*0x7335e1*/
      ++v5[3]; /*0x7335e4*/
      ++v4; /*0x7335e8*/
      v5[2] = result; /*0x7335ef*/
    }
    while ( v4 < (unsigned int)v8 ); /*0x7335f2*/
  }
  return result; /*0x7335f6*/
}
