int __thiscall sub_906540(_DWORD *this, int a2, int a3, int a4)
{
  int v4; // esi
  int result; // eax
  int v6; // ecx
  int i; // [esp+Ch] [ebp-4h]

  v4 = *(this + 3);
  result = v4 + 0xC * *(this + 4);
  for ( i = result; v4 != result; v4 += 0xC )
  {
    v6 = *(_DWORD *)(v4 + 8);
    if ( v6 )
    {
      (*(void (__thiscall **)(int, int, int, int))(*(_DWORD *)v6 + 0x24))(v6, a2, a3, a4);
      result = i;
    }
  }
  return result;
}
