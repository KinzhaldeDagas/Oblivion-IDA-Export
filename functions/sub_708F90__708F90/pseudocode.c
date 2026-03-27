_DWORD *__thiscall sub_708F90(unsigned __int16 *this, _DWORD *a2)
{
  unsigned __int16 *v2; // esi
  _DWORD *result; // eax
  _DWORD *v4; // ebx
  _DWORD *v5; // edi
  int (__thiscall *v6)(_DWORD *); // edx
  _DWORD *v7; // esi
  int v8; // ecx

  v2 = this;
  result = sub_7081B0(this, a2);
  if ( a2[0x36] >= 0xA00010Eu )
  {
    result = (_DWORD *)sub_7124D0(a2);
    v4 = result;
    while ( v4 )
    {
      v4 = (_DWORD *)((char *)v4 + 0xFFFFFFFF);
      result = (_DWORD *)sub_7124A0(a2);
      v5 = result;
      if ( result )
      {
        v6 = *(int (__thiscall **)(_DWORD *))(*((_DWORD *)v2 + 0x33) + 4);
        v7 = v2 + 0x66;
        result = (_DWORD *)v6(v7);
        result[2] = v5;
        result[1] = 0;
        *result = v7[1];
        v8 = v7[1];
        if ( v8 )
          *(_DWORD *)(v8 + 4) = result;
        else
          v7[2] = result;
        ++v7[3];
        v7[1] = result;
        v2 = this;
      }
    }
  }
  return result;
}
