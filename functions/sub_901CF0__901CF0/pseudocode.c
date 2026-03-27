int __thiscall sub_901CF0(_DWORD *this, _WORD *a2, int a3, int a4)
{
  int v4; // ebp
  int v6; // edi
  int v7; // esi
  int v8; // ecx
  int result; // eax

  v4 = a3;
  if ( a3 > 0 )
  {
    v6 = a4;
    do
    {
      v7 = HIBYTE(*a2);
      a3 = (unsigned __int8)*a2;
      v8 = *(_DWORD *)(*(this + 4) + 8 * v7);
      result = (*(int (__thiscall **)(int, int *, int, int))(*(_DWORD *)v8 + 0x28))(v8, &a3, 1, v6);
      *(_DWORD *)(v6 + 0xC) = ((v7 << 8) + (*(_DWORD *)(v6 + 0xC) & 0xC0FFFFFF)) | 0x3F000000;
      ++a2;
      v6 += 0x10;
      --v4;
    }
    while ( v4 );
  }
  return result;
}
