LONG __stdcall sub_707E40(NiNode *a1, LONG a2, _DWORD **a3)
{
  LONG result; // eax
  int v4; // edi
  void *v5; // esi
  BSShaderProperty *v6; // eax

  result = a2;
  v4 = *(_DWORD *)(a2 + 8);
  while ( v4 )
  {
    v5 = *(void **)(v4 + 8);
    v4 = *(_DWORD *)(v4 + 4);
    result = (*(int (__thiscall **)(void *))(*(_DWORD *)v5 + 0x4C))(v5);
    if ( result < 0xA )
    {
      v6 = (BSShaderProperty *)sub_700710(v5, a3);
      result = sub_405680(a1, v6);
    }
  }
  return result;
}
