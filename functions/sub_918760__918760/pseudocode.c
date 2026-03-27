_BYTE *__thiscall sub_918760(int *this, int a2)
{
  int v3; // ebx
  int v4; // esi
  int v5; // ebp
  int v6; // ecx

  v3 = *(this + 0xC);
  v4 = 0;
  if ( v3 > 0 )
  {
    v5 = a2;
    do
    {
      v6 = *(_DWORD *)(*(this + 0xB) + 4 * v4);
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v6 + 0x14))(v6, v5);
      ++v4;
    }
    while ( v4 < v3 );
  }
  return sub_947FA0(this + 6, &a2, (_DWORD **)*(this + 2));
}
