bool *__thiscall sub_927370(int *this, bool *a2, int a3, int a4)
{
  unsigned int v4; // eax
  int v5; // ebx
  int v6; // edi
  int v7; // esi
  _DWORD *v8; // ecx

  v4 = a3 + *(_DWORD *)(a3 + 0x10);
  if ( v4 <= a4 + *(_DWORD *)(a4 + 0x10) )
  {
    v5 = a4 + *(_DWORD *)(a4 + 0x10);
  }
  else
  {
    v5 = a3 + *(_DWORD *)(a3 + 0x10);
    v4 = a4 + *(_DWORD *)(a4 + 0x10);
  }
  v6 = *(this + 6);
  v7 = 0;
  if ( v6 <= 0 )
  {
LABEL_9:
    v7 = 0xFFFFFFFF;
  }
  else
  {
    v8 = (_DWORD *)*(this + 5);
    while ( *v8 != v5 || v8[1] != v4 )
    {
      ++v7;
      v8 += 2;
      if ( v7 >= v6 )
        goto LABEL_9;
    }
  }
  *a2 = v7 < 0;
  return a2;
}
