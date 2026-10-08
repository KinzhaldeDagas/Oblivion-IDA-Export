int __cdecl sub_7D93E0(NiNode *a1, int a2, int a3)
{
  int result; // eax
  _DWORD *v4; // esi
  int v5; // edi
  unsigned int v6; // ebx
  unsigned int i; // esi

  if ( a1->vtbl->super.super.Unk_04((NiObject *)a1) ) /*0x7d93ec*/
  {
    result = (int)NiNode_GetNiPropertyByID(a1, 4); /*0x7d93f6*/
    v4 = (_DWORD *)result; /*0x7d93fb*/
    if ( result ) /*0x7d93ff*/
    {
      result = (*(int (__thiscall **)(int))(*(_DWORD *)result + 0x54))(result); /*0x7d940c*/
      if ( result >= 5 ) /*0x7d9411*/
      {
        result = (*(int (__thiscall **)(_DWORD *))(*v4 + 0x54))(v4); /*0x7d941e*/
        if ( result <= 0xA ) /*0x7d9423*/
        {
          if ( (_BYTE)a3 ) /*0x7d942e*/
          {
            result = a2; /*0x7d9430*/
            v4[7] |= a2; /*0x7d9434*/
          }
          else
          {
            v4[7] &= ~a2; /*0x7d9446*/
          }
          v4[9] = 0; /*0x7d9437*/
        }
      }
    }
  }
  else
  {
    result = (int)a1->vtbl->super.super.Unk_02(a1); /*0x7d9458*/
    v5 = result; /*0x7d945a*/
    if ( result ) /*0x7d945e*/
    {
      v6 = *(unsigned __int16 *)(result + 0xB6); /*0x7d9461*/
      for ( i = 0; i < v6; ++i ) /*0x7d9461*/
      {
        if ( *(unsigned __int16 *)(v5 + 0xB6) > i ) /*0x7d947c*/
        {
          result = *(_DWORD *)(*(_DWORD *)(v5 + 0xB0) + 4 * i); /*0x7d9484*/
          if ( result ) /*0x7d9489*/
            result = sub_7D93E0((NiNode *)result, a2, a3); /*0x7d9492*/
        }
      }
    }
  }
  return result; /*0x7d943e*/
}
