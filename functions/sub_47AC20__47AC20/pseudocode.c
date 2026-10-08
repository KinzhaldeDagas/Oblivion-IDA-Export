void __thiscall sub_47AC20(_DWORD **this, NiNode *a2)
{
  NiProperty *NiPropertyByID; // esi
  const char *m_pcName; // esi
  int v5; // ecx
  int (__thiscall *v6)(int); // eax
  void *v7; // eax
  const char *v8; // ebx
  int i; // esi
  size_t v10; // [esp-4h] [ebp-1B8h]
  char *Str2[6]; // [esp+28h] [ebp-18Ch]
  char a1[356]; // [esp+40h] [ebp-174h] BYREF
  int v13; // [esp+1B0h] [ebp-4h]

  if ( a2 ) /*0x47ac68*/
  {
    if ( a2->vtbl->super.super.Unk_03((NiObject *)a2) ) /*0x47ac75*/
    {
      NiPropertyByID = NiNode_GetNiPropertyByID(a2, 2); /*0x47ac8c*/
      NiNode_GetNiPropertyByID(a2, 6); /*0x47ac8e*/
      if ( NiPropertyByID ) /*0x47ac99*/
      {
        m_pcName = NiPropertyByID->members.m_pcName; /*0x47ac9f*/
        if ( m_pcName ) /*0x47aca4*/
        {
          if ( !CRT_StricmpLocaleDispatch(m_pcName, "skin") ) /*0x47acb0*/
          {
            ArrayConstructor( /*0x47acd3*/
              a1,
              0x18u,
              4,
              (void (__thiscall *)(char *))FaceGenMatrix_Construct,
              (void (__thiscall *)(void *))FaceGenMatrix_Destruct);
            v5 = (int)*(this + 0x54); /*0x47acd8*/
            v6 = *(int (__thiscall **)(int))(*(_DWORD *)v5 + 0x170); /*0x47ace0*/
            v13 = 0; /*0x47acf2*/
            v7 = (void *)v6(v5); /*0x47acf9*/
            OblivionDynamicCast( /*0x47acfc*/
              v7,
              0,
              (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
              &TESNPC `RTTI Type Descriptor',
              0);
            v8 = a2->members.super.super.m_pcName; /*0x47ad10*/
            LOBYTE(v13) = 2; /*0x47ad13*/
            Str2[0] = "UpperBody"; /*0x47ad1b*/
            Str2[1] = "LowerBody"; /*0x47ad23*/
            Str2[2] = "Hand"; /*0x47ad2b*/
            Str2[3] = "Foot"; /*0x47ad33*/
            Str2[4] = "Arms"; /*0x47ad3b*/
            Str2[5] = "Tail"; /*0x47ad43*/
            for ( i = 0; i < 6; ++i ) /*0x47ad53*/
            {
              LODWORD(v10) = strlen(Str2[i]); /*0x47ad5b*/
              if ( !_strnicmp(v8, Str2[i], v10) ) /*0x47ad6e*/
                break; /*0x47ad78*/
            }
            switch ( i ) /*0x47ad87*/
            {
              case 0: /*0x47ad87*/
              case 1: /*0x47ad87*/
              case 2: /*0x47ad87*/
              case 3: /*0x47ad87*/
              case 4: /*0x47ad87*/
              case 5: /*0x47ad87*/
                JUMPOUT(0x47ADD5); /*0x47add5*/
              default:
                JUMPOUT(0x47ADC0); /*0x47adc0*/
            }
          }
        }
      }
    }
  }
  JUMPOUT(0x47B048); /*0x47b048*/
}
