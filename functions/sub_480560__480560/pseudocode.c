int __cdecl sub_480560(int a1)
{
  unsigned __int16 v1; // ax
  int v2; // ecx
  int result; // eax
  unsigned int v4; // ebp
  unsigned int i; // edi
  int v6; // ecx
  NiNode *v7; // esi
  NiProperty *NiPropertyByID; // eax
  NiProperty *v9; // esi
  BOOL v10; // eax
  int v11; // [esp+4h] [ebp-4h]

  v1 = *(_WORD *)(a1 + 0xB6);
  v2 = 0;
  v11 = 0;
  if ( !v1 )
    return 0;
  v4 = v1;
  for ( i = 0; i < v4; ++i )
  {
    if ( v2 )
      break;
    if ( *(unsigned __int16 *)(a1 + 0xB6) > i )
    {
      v6 = *(_DWORD *)(a1 + 0xB0);
      v7 = *(NiNode **)(v6 + 4 * i);
      if ( v7 )
      {
        if ( v7->vtbl->super.super.Unk_02(*(_DWORD *)(v6 + 4 * i)) )
        {
          v11 = sub_480560((int)v7);
        }
        else if ( v7->vtbl->super.super.Unk_03((NiObject *)v7) )
        {
          NiPropertyByID = NiNode_GetNiPropertyByID(v7, 4);
          v9 = NiPropertyByID;
          if ( NiPropertyByID )
          {
            v10 = (*((int (__thiscall **)(NiProperty *))NiPropertyByID->vtbl + 0x15))(NiPropertyByID) >= 5
               && (*((int (__thiscall **)(NiProperty *))v9->vtbl + 0x15))(v9) <= 0xA;
            result = v10 ? (unsigned int)v9 : 0;
            if ( result )
              return result;
          }
        }
      }
    }
    v2 = v11;
  }
  return v2;
}
