int __thiscall sub_6D1480(float *this, int a2, int *a3)
{
  int v4; // eax
  int v5; // ebp
  int result; // eax
  void *v7; // ecx
  void (__thiscall **v8)(int, int, int); // esi
  int v9; // [esp-Ch] [ebp-18h]

  sub_6D0530(this, a2, a3);
  *(_WORD *)(a2 + 0x3C) = *((_WORD *)this + 0x1E);
  v4 = *((_DWORD *)this + 0x14);
  if ( v4 )
    sub_6D11F0((unsigned __int16 *)a2, v4, *(_DWORD *)(a2 + 0x30) != 0);
  if ( byte_B3CE18 )
  {
    *((_BYTE *)this + 0x5A) = 1;
    *(_BYTE *)(a2 + 0x5A) = 1;
  }
  v5 = 0;
  result = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 0x74))(this);
  if ( (_WORD)result )
  {
    do
    {
      v7 = *(void **)(*((_DWORD *)this + 0x15) + 4 * (unsigned __int16)v5);
      if ( v7 )
      {
        v8 = (void (__thiscall **)(int, int, int))(*(_DWORD *)a2 + 0x84);
        v9 = sub_700710(v7, (_DWORD **)a3);
        (*v8)(a2, v9, v5);
      }
      else
      {
        (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)a2 + 0x84))(a2, 0, v5);
      }
      ++v5;
      result = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 0x74))(this);
    }
    while ( (unsigned __int16)v5 < (unsigned __int16)result );
  }
  return result;
}
