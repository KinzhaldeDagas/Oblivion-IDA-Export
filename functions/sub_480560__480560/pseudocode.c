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

  v1 = *(_WORD *)(a1 + 0xB6); /*0x480566*/
  v2 = 0; /*0x48056d*/
  v11 = 0; /*0x480572*/
  if ( !v1 ) /*0x480576*/
    return 0; /*0x480578*/
  v4 = v1; /*0x48057f*/
  for ( i = 0; i < v4; ++i )
  {
    if ( v2 ) /*0x480592*/
      break; /*0x480592*/
    if ( *(unsigned __int16 *)(a1 + 0xB6) > i )
    {
      v6 = *(_DWORD *)(a1 + 0xB0); /*0x4805a3*/
      v7 = *(NiNode **)(v6 + 4 * i); /*0x4805a9*/
      if ( v7 )
      {
        if ( v7->vtbl->super.super.Unk_02(*(_DWORD *)(v6 + 4 * i)) )
        {
          v11 = sub_480560((int)v7); /*0x4805c6*/
        }
        else if ( v7->vtbl->super.super.Unk_03((NiObject *)v7) )
        {
          NiPropertyByID = NiNode_GetNiPropertyByID(v7, 4); /*0x4805dd*/
          v9 = NiPropertyByID; /*0x4805e2*/
          if ( NiPropertyByID )
          {
            v10 = (*((int (__thiscall **)(NiProperty *))NiPropertyByID->vtbl + 0x15))(NiPropertyByID) >= 5 /*0x4805f4*/
               && (*((int (__thiscall **)(NiProperty *))v9->vtbl + 0x15))(v9) <= 0xA;
            result = v10 ? (unsigned int)v9 : 0;
            if ( result ) /*0x480613*/
              return result; /*0x480613*/
          }
        }
      }
    }
    v2 = v11; /*0x480615*/
  }
  return v2; /*0x48057a*/
}
