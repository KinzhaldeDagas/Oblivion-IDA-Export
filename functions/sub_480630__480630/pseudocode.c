int __cdecl sub_480630(int a1)
{
  unsigned __int16 v1; // ax
  int result; // eax
  int v3; // edi
  int v4; // ecx
  int v5; // eax
  NiNode *v6; // ecx
  NiProperty *NiPropertyByID; // eax
  NiProperty *v8; // esi
  BOOL v9; // eax

  v1 = *(_WORD *)(a1 + 0xB6);
  if ( !v1 )
    return 0;
  v3 = v1;
  while ( 1 )
  {
    if ( *(unsigned __int16 *)(a1 + 0xB6) > (unsigned int)--v3 )
    {
      v4 = *(_DWORD *)(*(_DWORD *)(a1 + 0xB0) + 4 * v3);
      if ( v4 )
      {
        v5 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 8))(v4);
        if ( v5 )
        {
          if ( *(_WORD *)(v5 + 0xB6) )
          {
            v6 = **(NiNode ***)(v5 + 0xB0);
            if ( v6 )
            {
              NiPropertyByID = NiNode_GetNiPropertyByID(v6, 4);
              v8 = NiPropertyByID;
              if ( NiPropertyByID )
              {
                v9 = (*((int (__thiscall **)(NiProperty *))NiPropertyByID->vtbl + 0x15))(NiPropertyByID) >= 5
                  && (*((int (__thiscall **)(NiProperty *))v8->vtbl + 0x15))(v8) <= 0xA;
                result = v9 ? (unsigned int)v8 : 0;
                if ( result )
                  break;
              }
            }
          }
        }
      }
    }
    if ( !v3 )
      return sub_480560(a1);
  }
  return result;
}
