void __stdcall sub_4ADAD0(NiNode *a1, int a2)
{
  NiProperty *NiPropertyByID; // esi
  BOOL v3; // eax
  _DWORD *v4; // eax
  int v5; // eax
  int v6; // edi
  int v7; // eax
  int v8; // esi
  _DWORD *i; // eax

  if ( a1 )
  {
    if ( a1->vtbl->super.super.Unk_03((NiObject *)a1) )
    {
      NiPropertyByID = NiNode_GetNiPropertyByID(a1, 4);
      v3 = NiPropertyByID
        && (*((int (__thiscall **)(NiProperty *))NiPropertyByID->vtbl + 0x15))(NiPropertyByID) >= 5
        && (*((int (__thiscall **)(NiProperty *))NiPropertyByID->vtbl + 0x15))(NiPropertyByID) <= 0xA;
      v4 = v3 ? (_DWORD *)NiPropertyByID : 0;
      if ( v4 )
      {
        if ( v4[0x38] == a2 )
          sub_7D7A70(v4, 0);
      }
    }
    else
    {
      v5 = (int)a1->vtbl->super.super.Unk_02((NiObject *)a1);
      v6 = v5;
      if ( v5 )
      {
        v7 = *(unsigned __int16 *)(v5 + 0xB6);
        v8 = 0;
        if ( *(_WORD *)(v6 + 0xB6) )
        {
          if ( v7 )
            goto LABEL_15;
          for ( i = 0; ; i = *(_DWORD **)(*(_DWORD *)(v6 + 0xB0) + 4 * v8) )
          {
            sub_4ADAD0(i, a2);
            if ( *(unsigned __int16 *)(v6 + 0xB6) <= (unsigned int)++v8 )
              break;
LABEL_15:
            ;
          }
        }
      }
    }
  }
}
