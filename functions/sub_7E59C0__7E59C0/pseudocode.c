void __thiscall sub_7E59C0(void *this, NiNode *a2)
{
  NiNode *v3; // esi
  int v4; // eax
  int v5; // eax
  int v6; // edi
  unsigned int i; // esi
  NiProperty *NiPropertyByID; // eax
  int v9; // eax
  NiProperty *v10; // eax
  size_t v11; // [esp-4h] [ebp-20h]

  v3 = a2;
  if ( a2 )
  {
    v4 = (int)a2->vtbl->super.super.GetType((NiObject *)a2);
    if ( v4 )
    {
      while ( (char *)v4 != dword_B3FD54 )
      {
        v4 = *(_DWORD *)(v4 + 4);
        if ( !v4 )
          goto LABEL_5;
      }
      NiPropertyByID = NiNode_GetNiPropertyByID(v3, 4);
      if ( NiPropertyByID )
      {
        v9 = (*((int (__thiscall **)(NiProperty *))NiPropertyByID->vtbl + 1))(NiPropertyByID);
        if ( v9 )
        {
          while ( (char *)v9 != dword_B4618C )
          {
            v9 = *(_DWORD *)(v9 + 4);
            if ( !v9 )
              return;
          }
          v10 = NiNode_GetNiPropertyByID(v3, 2);
          if ( !v10 || !sub_8AA350((float *)&v10[1].members.m_extraDataList, (float *)&dword_B3FA90) )
          {
            a2 = v3;
            InterlockedIncrement((volatile LONG *)&v3->members);
            NiTArray_AddItem((int)this + 0x110, (LONG *)&a2);
            if ( !InterlockedDecrement((volatile LONG *)&v3->members) )
              v3->vtbl->super.super.super.Destructor((NiRefObject *)v3, 1);
          }
        }
      }
    }
    else
    {
LABEL_5:
      v5 = (int)v3->vtbl->super.super.Unk_02((NiObject *)v3);
      v6 = v5;
      if ( v5 )
      {
        LODWORD(v11) = 3;
        if ( strncmp(*(const char **)(v5 + 8), off_A738A4, v11) )
        {
          for ( i = 0; *(unsigned __int16 *)(v6 + 0xB6) > i; sub_7E59C0(
                                                               this,
                                                               *(_DWORD *)(*(_DWORD *)(v6 + 0xB0) + 4 * i++)) )
            ;
        }
      }
    }
  }
}
