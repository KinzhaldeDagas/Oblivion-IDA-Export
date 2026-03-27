void __thiscall sub_4AD9E0(_BYTE *this, NiNode *a2, int a3)
{
  NiProperty *NiPropertyByID; // esi
  BOOL v5; // eax
  _DWORD *v6; // ebx
  const char *m_pcName; // esi
  int v8; // eax
  int v9; // edi
  int v10; // eax
  int v11; // esi
  _DWORD *i; // eax

  if ( a2 )
  {
    if ( a2->vtbl->super.super.Unk_03((NiObject *)a2) )
    {
      NiPropertyByID = NiNode_GetNiPropertyByID(a2, 4);
      v5 = NiPropertyByID
        && (*((int (__thiscall **)(NiProperty *))NiPropertyByID->vtbl + 0x15))(NiPropertyByID) >= 5
        && (*((int (__thiscall **)(NiProperty *))NiPropertyByID->vtbl + 0x15))(NiPropertyByID) <= 0xA;
      v6 = v5 ? (_DWORD *)NiPropertyByID : 0;
      if ( v6 )
      {
        if ( (*(this + 0x18) & 0x20) == 0
          || (m_pcName = NiNode_GetNiPropertyByID(a2, 2)->members.m_pcName) == 0
          || !strcmp(m_pcName, "skin") )
        {
          sub_7D7A70(v6, a3);
        }
      }
    }
    else
    {
      v8 = (int)a2->vtbl->super.super.Unk_02((NiObject *)a2);
      v9 = v8;
      if ( v8 )
      {
        v10 = *(unsigned __int16 *)(v8 + 0xB6);
        v11 = 0;
        if ( *(_WORD *)(v9 + 0xB6) )
        {
          if ( v10 )
            goto LABEL_17;
          for ( i = 0; ; i = *(_DWORD **)(*(_DWORD *)(v9 + 0xB0) + 4 * v11) )
          {
            sub_4AD9E0(this, i, a3);
            if ( *(unsigned __int16 *)(v9 + 0xB6) <= (unsigned int)++v11 )
              break;
LABEL_17:
            ;
          }
        }
      }
    }
  }
}
