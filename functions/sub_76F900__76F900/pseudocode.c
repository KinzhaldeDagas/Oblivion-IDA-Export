int sub_76F900()
{
  int v0; // ecx
  unsigned int i; // edi
  unsigned int v2; // esi
  int j; // eax
  int v4; // ecx
  _WORD *v5; // edx
  int result; // eax
  int v7; // esi
  _DWORD *v8; // ecx
  int v9; // edi
  unsigned int v10; // [esp-4h] [ebp-14h]

  v0 = dword_B42700;
  for ( i = 0; i < *(unsigned __int16 *)(v0 + 0xA); ++i )
  {
    v2 = *(_DWORD *)(*(_DWORD *)(v0 + 4) + 4 * i);
    if ( v2 )
    {
      for ( j = 0; (unsigned __int16)j < *(_WORD *)(v2 + 0xE); *(_DWORD *)(*(_DWORD *)(v2 + 8) + 4 * v4) = 0 )
        v4 = (unsigned __int16)j++;
      *(_WORD *)(v2 + 0xE) = 0;
      *(_WORD *)(v2 + 0x10) = 0;
      v10 = *(_DWORD *)(v2 + 8);
      *(_DWORD *)(v2 + 4) = &NiTArray<unsigned int (__cdecl *)(NiD3DShaderDeclaration::PackingParameters &)>::`vftable';
      FormHeapFree(v10);
      FormHeapFree(v2);
      v0 = dword_B42700;
    }
  }
  v5 = (_WORD *)(v0 + 0xA);
  result = 0;
  v7 = v0;
  if ( *(_WORD *)(v0 + 0xA) )
  {
    v8 = (_DWORD *)(v0 + 4);
    do
    {
      v9 = (unsigned __int16)result++;
      *(_DWORD *)(*v8 + 4 * v9) = 0;
    }
    while ( (unsigned __int16)result < *v5 );
  }
  *(_WORD *)(v7 + 0xC) = 0;
  *v5 = 0;
  if ( dword_B42700 )
    return (**(int (__thiscall ***)(int, int))dword_B42700)(dword_B42700, 1);
  return result;
}
