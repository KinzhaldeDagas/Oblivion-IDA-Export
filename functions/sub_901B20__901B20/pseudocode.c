int __thiscall sub_901B20(_DWORD *this, int a2)
{
  int result; // eax
  int v4; // edi
  int v5; // ebp
  int v6; // esi
  int v7; // [esp+Ch] [ebp-8h] BYREF

  result = a2;
  v4 = 0;
  v5 = a2;
  if ( (int)*(this + 5) > 0 )
  {
    do
    {
      v6 = *(_DWORD *)(*(this + 4) + 8 * v4);
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v6 + 0x20))(v6, v5);
      (*(void (__thiscall **)(int, int *))(*(_DWORD *)v6 + 0x1C))(v6, &v7);
      v5 += 0x10 * v7;
      ++v4;
    }
    while ( v4 < *(this + 5) );
    return a2;
  }
  return result;
}
