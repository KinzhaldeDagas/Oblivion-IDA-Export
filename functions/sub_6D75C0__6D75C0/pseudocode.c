void __thiscall sub_6D75C0(char **this, unsigned int *a2, _DWORD **a3)
{
  unsigned int v4; // ebx
  int v5; // edi
  unsigned int v6; // ecx
  int *v7; // eax
  unsigned int v8; // edi

  sub_7214A0(this, a2, a3);
  v4 = 0;
  a2[3] = (unsigned int)*(this + 3);
  if ( *(this + 3) && (char *)(*((int (__thiscall **)(char **))*this + 1))(this) == dword_B3DA08 )
  {
    v5 = (int)*(this + 3);
    v6 = (unsigned __int64)(unsigned int)v5 >> 0x1D != 0 ? 0xFFFFFFFF : 8 * v5;
    v7 = (int *)FormHeapAlloc(__CFADD__(v6, 4) ? 0xFFFFFFFF : v6 + 4);
    if ( v7 )
    {
      v4 = (unsigned int)(v7 + 1);
      *v7 = v5;
      ArrayConstructor(v7 + 1, 8u, v5, (int)sub_6D73E0, sub_6EC6B0);
    }
    v8 = 0;
    a2[4] = v4;
    if ( *(this + 3) )
    {
      do
      {
        *(float *)(8 * v8 + a2[4]) = *(float *)&(*(this + 4))[8 * v8];
        sub_6EC6C0((_DWORD *)(8 * v8 + a2[4]), *(char **)&(*(this + 4))[8 * v8 + 4]);
        ++v8;
      }
      while ( v8 < (unsigned int)*(this + 3) );
    }
  }
  else
  {
    a2[4] = 0;
  }
}
