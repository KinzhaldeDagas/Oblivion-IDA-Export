int __cdecl sub_7D93E0(NiNode *a1, int a2, int a3)
{
  int result; // eax
  unsigned __int16 *v4; // esi
  int v5; // edi
  unsigned int v6; // ebx
  unsigned int i; // esi

  if ( a1->vtbl->super.super.Unk_04((NiObject *)a1) )
  {
    result = (int)NiNode_GetNiPropertyByID(a1, 4);
    v4 = (unsigned __int16 *)result;
    if ( result )
    {
      result = (*(int (__thiscall **)(int))(*(_DWORD *)result + 0x54))(result);
      if ( result >= 5 )
      {
        result = (*(int (__thiscall **)(unsigned __int16 *))(*(_DWORD *)v4 + 0x54))(v4);
        if ( result <= 0xA )
        {
          if ( (_BYTE)a3 )
          {
            result = a2;
            *((_DWORD *)v4 + 7) |= a2;
          }
          else
          {
            *((_DWORD *)v4 + 7) &= ~a2;
          }
          *((_DWORD *)v4 + 9) = 0;
        }
      }
    }
  }
  else
  {
    result = (int)a1->vtbl->super.super.Unk_02((NiObject *)a1);
    v5 = result;
    if ( result )
    {
      v6 = *(unsigned __int16 *)(result + 0xB6);
      for ( i = 0; i < v6; ++i )
      {
        if ( *(unsigned __int16 *)(v5 + 0xB6) > i )
        {
          result = *(_DWORD *)(*(_DWORD *)(v5 + 0xB0) + 4 * i);
          if ( result )
            result = (int)sub_7D93E0((_DWORD *)result, (unsigned __int16 *)a2, a3);
        }
      }
    }
  }
  return result;
}
