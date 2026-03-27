void __thiscall sub_47AC20(_DWORD **this, NiNode *a2)
{
  NiProperty *NiPropertyByID; // esi
  char *m_pcName; // esi
  int v5; // ecx
  int (__thiscall *v6)(int); // eax
  void *v7; // eax
  const char *v8; // ebx
  int i; // esi
  size_t v10; // [esp-4h] [ebp-1B8h]
  char *Str2[6]; // [esp+28h] [ebp-18Ch]
  _BYTE a1[356]; // [esp+40h] [ebp-174h] BYREF
  int v13; // [esp+1B0h] [ebp-4h]

  if ( a2 )
  {
    if ( a2->vtbl->super.super.Unk_03((NiObject *)a2) )
    {
      NiPropertyByID = NiNode_GetNiPropertyByID(a2, 2);
      NiNode_GetNiPropertyByID(a2, 6);
      if ( NiPropertyByID )
      {
        m_pcName = (char *)NiPropertyByID->members.m_pcName;
        if ( m_pcName )
        {
          if ( !_strcmp(m_pcName, "skin") )
          {
            ArrayConstructor(a1, 0x18u, 4, (int)sub_43EB30, (void (__thiscall *)(void *))sub_43ACE0);
            v5 = (int)*(this + 0x54);
            v6 = *(int (__thiscall **)(int))(*(_DWORD *)v5 + 0x170);
            v13 = 0;
            v7 = (void *)v6(v5);
            OblivionDynamicCast(
              v7,
              0,
              (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
              &TESNPC `RTTI Type Descriptor',
              0);
            v8 = a2->members.super.super.m_pcName;
            LOBYTE(v13) = 2;
            Str2[0] = "UpperBody";
            Str2[1] = "LowerBody";
            Str2[2] = "Hand";
            Str2[3] = "Foot";
            Str2[4] = "Arms";
            Str2[5] = "Tail";
            for ( i = 0; i < 6; ++i )
            {
              LODWORD(v10) = strlen(Str2[i]);
              if ( !_strnicmp(v8, Str2[i], v10) )
                break;
            }
            switch ( i )
            {
              case 0:
              case 1:
              case 2:
              case 3:
              case 4:
              case 5:
                JUMPOUT(0x47ADD5);
              default:
                JUMPOUT(0x47ADC0);
            }
          }
        }
      }
    }
  }
  JUMPOUT(0x47B048);
}
