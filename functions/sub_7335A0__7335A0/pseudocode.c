_DWORD *__thiscall sub_7335A0(_DWORD *this, _DWORD *a2)
{
  _DWORD *result; // eax
  unsigned int v4; // edi
  _DWORD *v5; // esi
  int v6; // ebx
  _DWORD *v7; // ecx
  _DWORD *v8; // [esp+Ch] [ebp+4h]

  v4 = 0;
  v8 = (_DWORD *)a2[1];
  result = v8;
  if ( v8 )
  {
    v5 = this + 3;
    do
    {
      v6 = *(_DWORD *)(*a2 + 4 * v4);
      result = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*v5 + 4))(v5);
      result[2] = v6;
      *result = 0;
      result[1] = v5[2];
      v7 = (_DWORD *)v5[2];
      if ( v7 )
        *v7 = result;
      else
        v5[1] = result;
      ++v5[3];
      ++v4;
      v5[2] = result;
    }
    while ( v4 < (unsigned int)v8 );
  }
  return result;
}
