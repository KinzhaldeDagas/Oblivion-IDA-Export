void __thiscall sub_51FB50(TESForm *this, TESForm *a2)
{
  _BYTE *v3; // edi
  bool v4; // zf
  char *v5; // edi
  TESForm *v6; // ebx
  _WORD *v7; // eax
  BSStringT *v8; // esi
  TESForm **p_member; // ebp
  int v10; // eax
  BSStringT **v11; // eax
  TESForm *v12; // ebp
  TESForm *a2a; // [esp+28h] [ebp+4h]

  v3 = OblivionDynamicCast( /*0x51fb8f*/
         a2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         &TESFaction `RTTI Type Descriptor',
         0);
  if ( v3 )
  {
    TESForm_CopyAllComponentsFrom(this, a2); /*0x51fb9f*/
    *((_BYTE *)this + 0x34) = v3[0x34]; /*0x51fba7*/
    *((float *)this + 0xE) = *((float *)v3 + 0xE); /*0x51fbb7*/
    sub_51FB00((int *)this); /*0x51fbba*/
    v4 = v3 + 0x3C == 0; /*0x51fbbf*/
    v5 = v3 + 0x3C; /*0x51fbbf*/
    v6 = (TESForm *)((char *)this + 0x3C); /*0x51fbc2*/
    a2a = (TESForm *)((char *)this + 0x3C); /*0x51fbc5*/
    if ( !v4 )
    {
      while ( *((_DWORD *)v5 + 1) || *(_DWORD *)v5 )
      {
        v7 = (_WORD *)FormHeapAlloc(0x1Cu); /*0x51fbe6*/
        v8 = v7 ? (BSStringT *)sub_51F570(v7) : 0;
        BSStringT_Set(v8, **(const char ***)v5, 0); /*0x51fc1c*/
        BSStringT_Set(v8 + 1, *(const char **)(*(_DWORD *)v5 + 8), 0); /*0x51fc2c*/
        (*((void (__thiscall **)(BSStringT *, int))v8[2].m_data + 2))(v8 + 2, *(_DWORD *)v5 + 0x10); /*0x51fc40*/
        p_member = (TESForm **)&v6->member; /*0x51fc46*/
        if ( *(_DWORD *)&v6->member.type ) /*0x51fc42*/
        {
          v10 = (int)&v6->member; /*0x51fc4b*/
          do /*0x51fc59*/
          {
            v6 = *(TESForm **)v10; /*0x51fc50*/
            v4 = *(_DWORD *)(*(_DWORD *)v10 + 4) == 0; /*0x51fc52*/
            v10 = *(_DWORD *)v10 + 4; /*0x51fc56*/
          }
          while ( !v4 ); /*0x51fc59*/
        }
        if ( v6->vtbl ) /*0x51fc5b*/
        {
          v11 = (BSStringT **)FormHeapAlloc(8u); /*0x51fc62*/
          if ( v11 ) /*0x51fc6c*/
          {
            *v11 = v8; /*0x51fc6e*/
            v11[1] = 0; /*0x51fc70*/
            *(_DWORD *)&v6->member.type = v11; /*0x51fc77*/
          }
          else
          {
            *(_DWORD *)&v6->member.type = 0; /*0x51fc7e*/
          }
        }
        else
        {
          v6->vtbl = (TESFormVtbl *)v8; /*0x51fc83*/
        }
        v12 = *p_member; /*0x51fc85*/
        if ( v12 ) /*0x51fc8a*/
          a2a = v12; /*0x51fc8c*/
        v5 = *((char **)v5 + 1); /*0x51fc90*/
        if ( !v5 ) /*0x51fc95*/
          break; /*0x51fc95*/
        v6 = a2a; /*0x51fbd1*/
      }
    }
  }
}
