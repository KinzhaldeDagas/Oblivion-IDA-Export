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

  v1 = *(_WORD *)(a1 + 0xB6); /*0x480635*/
  if ( !v1 ) /*0x48063f*/
    return 0; /*0x480641*/
  v3 = v1; /*0x480646*/
  while ( 1 )
  {
    if ( *(unsigned __int16 *)(a1 + 0xB6) > (unsigned int)--v3 )
    {
      v4 = *(_DWORD *)(*(_DWORD *)(a1 + 0xB0) + 4 * v3); /*0x48065e*/
      if ( v4 )
      {
        v5 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 8))(v4); /*0x48066a*/
        if ( v5 )
        {
          if ( *(_WORD *)(v5 + 0xB6) )
          {
            v6 = **(NiNode ***)(v5 + 0xB0); /*0x480680*/
            if ( v6 )
            {
              NiPropertyByID = NiNode_GetNiPropertyByID(v6, 4); /*0x480688*/
              v8 = NiPropertyByID; /*0x48068d*/
              if ( NiPropertyByID )
              {
                v9 = (*((int (__thiscall **)(NiProperty *))NiPropertyByID->vtbl + 0x15))(NiPropertyByID) >= 5 /*0x48069f*/
                  && (*((int (__thiscall **)(NiProperty *))v8->vtbl + 0x15))(v8) <= 0xA;
                result = v9 ? (unsigned int)v8 : 0;
                if ( result ) /*0x4806be*/
                  break; /*0x4806be*/
              }
            }
          }
        }
      }
    }
    if ( !v3 ) /*0x4806c2*/
      return sub_480560(a1); /*0x4806c5*/
  }
  return result; /*0x480643*/
}
