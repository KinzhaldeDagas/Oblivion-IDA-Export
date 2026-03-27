void __thiscall sub_4EE200(TESForm *this, void *a2)
{
  TESForm *v3; // eax
  TESForm *v4; // ebp
  signed int i; // esi
  char *v6; // edi
  TESForm *v7; // ebx
  int v8; // esi
  bool v9; // zf
  TESForm *v10; // ebp
  TESFormVtbl *v11; // edi
  void (__thiscall *ClearComponentReferences)(BaseFormComponent *); // ecx
  TESForm *v13; // esi
  TESFormVtbl **v14; // eax

  v3 = (TESForm *)OblivionDynamicCast(
                    a2,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &TESWeather `RTTI Type Descriptor',
                    0);
  v4 = v3;
  if ( v3 )
  {
    TESForm_CopyAllComponentsFrom(this, v3);
    for ( i = 0; i < 2; i = (i + 1) % 3u )
      (*(void (__thiscall **)(char *, int))(*((_DWORD *)this + 3 * i + 6) + 8))(
        (char *)this + 0xC * i + 0x18,
        (int)&v4[1] + 0xC * i);
    (*(void (__thiscall **)(TESForm *, TESForm *))(*((_DWORD *)this + 0xC) + 8))(this + 2, v4 + 2);
    *((_DWORD *)this + 0x12) = v4[3].vtbl;
    *((_DWORD *)this + 0x13) = *(_DWORD *)&v4[3].member.type;
    *((_DWORD *)this + 0x14) = v4[3].member.flags;
    *((_WORD *)this + 0x2A) = v4[3].member.refID;
    *((_BYTE *)this + 0x56) = BYTE2(v4[3].member.refID);
    qmemcpy((char *)this + 0x68, &v4[4].member.flags, 0xA0u);
    *((_DWORD *)this + 0x16) = v4[3].member.modlist.data;
    *((_DWORD *)this + 0x17) = v4[3].member.modlist.next;
    *((_DWORD *)this + 0x18) = v4[4].vtbl;
    *((_DWORD *)this + 0x19) = *(_DWORD *)&v4[4].member.type;
    v6 = (char *)this + 0x110;
    v7 = this + 0xB;
    qmemcpy(v6, &v4[0xB].member.flags, 0x38u);
    if ( *(_DWORD *)&v7->member.type )
    {
      do
      {
        v8 = *(_DWORD *)(*(_DWORD *)&v7->member.type + 4);
        FormHeapFree(*(_DWORD *)&v7->member.type);
        *(_DWORD *)&v7->member.type = v8;
      }
      while ( v8 );
    }
    v9 = &v4[0xB] == 0;
    v10 = v4 + 0xB;
    v7->vtbl = 0;
    if ( !v9 )
    {
      do
      {
        if ( !v10->vtbl )
          break;
        v11 = (TESFormVtbl *)FormHeapAlloc(8u);
        if ( v11 )
        {
          ClearComponentReferences = v10->vtbl->super.ClearComponentReferences;
          v13 = v7;
          v11->super.InitializeComponent = v10->vtbl->super.InitializeComponent;
          for ( v11->super.ClearComponentReferences = ClearComponentReferences;
                *(_DWORD *)&v13->member.type;
                v13 = *(TESForm **)&v13->member.type )
          {
            ;
          }
          if ( v13->vtbl )
          {
            v14 = (TESFormVtbl **)FormHeapAlloc(8u);
            if ( v14 )
            {
              *v14 = v11;
              v14[1] = 0;
              *(_DWORD *)&v13->member.type = v14;
            }
            else
            {
              *(_DWORD *)&v13->member.type = 0;
            }
          }
          else
          {
            v13->vtbl = v11;
          }
        }
        v10 = *(TESForm **)&v10->member.type;
      }
      while ( v10 );
    }
  }
}
