LONG __stdcall sub_707E40(NiNode *a1, LONG a2, _DWORD **a3)
{
  LONG result; // eax
  int v4; // edi
  void *v5; // esi
  BSShaderProperty *v6; // eax

  result = a2; /*0x707e40*/
  v4 = *(_DWORD *)(a2 + 8); /*0x707e45*/
  while ( v4 ) /*0x707e4a*/
  {
    v5 = *(void **)(v4 + 8); /*0x707e57*/
    v4 = *(_DWORD *)(v4 + 4); /*0x707e62*/
    result = (*(int (__thiscall **)(void *))(*(_DWORD *)v5 + 0x4C))(v5); /*0x707e67*/
    if ( result < 0xA ) /*0x707e6c*/
    {
      v6 = (BSShaderProperty *)sub_700710(v5, a3); /*0x707e71*/
      result = sub_405680(a1, v6); /*0x707e79*/
    }
  }
  return result; /*0x707e85*/
}
