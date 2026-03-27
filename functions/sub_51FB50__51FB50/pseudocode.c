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

  v3 = OblivionDynamicCast(
         a2,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         &TESFaction `RTTI Type Descriptor',
         0);
  if ( v3 )
  {
    TESForm_CopyAllComponentsFrom(this, a2);
    *((_BYTE *)this + 0x34) = v3[0x34];
    *((float *)this + 0xE) = *((float *)v3 + 0xE);
    sub_51FB00((int *)this);
    v4 = v3 + 0x3C == 0;
    v5 = v3 + 0x3C;
    v6 = (TESForm *)((char *)this + 0x3C);
    a2a = (TESForm *)((char *)this + 0x3C);
    if ( !v4 )
    {
      while ( *((_DWORD *)v5 + 1) || *(_DWORD *)v5 )
      {
        v7 = (_WORD *)FormHeapAlloc(0x1Cu);
        v8 = v7 ? (BSStringT *)sub_51F570(v7) : 0;
        BSStringT_Set(v8, **(const char ***)v5, 0);
        BSStringT_Set(v8 + 1, *(const char **)(*(_DWORD *)v5 + 8), 0);
        (*((void (__thiscall **)(BSStringT *, int))v8[2].m_data + 2))(v8 + 2, *(_DWORD *)v5 + 0x10);
        p_member = (TESForm **)&v6->member;
        if ( *(_DWORD *)&v6->member.type )
        {
          v10 = (int)&v6->member;
          do
          {
            v6 = *(TESForm **)v10;
            v4 = *(_DWORD *)(*(_DWORD *)v10 + 4) == 0;
            v10 = *(_DWORD *)v10 + 4;
          }
          while ( !v4 );
        }
        if ( v6->vtbl )
        {
          v11 = (BSStringT **)FormHeapAlloc(8u);
          if ( v11 )
          {
            *v11 = v8;
            v11[1] = 0;
            *(_DWORD *)&v6->member.type = v11;
          }
          else
          {
            *(_DWORD *)&v6->member.type = 0;
          }
        }
        else
        {
          v6->vtbl = (TESFormVtbl *)v8;
        }
        v12 = *p_member;
        if ( v12 )
          a2a = v12;
        v5 = *((char **)v5 + 1);
        if ( !v5 )
          break;
        v6 = a2a;
      }
    }
  }
}
