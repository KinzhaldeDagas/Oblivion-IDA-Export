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

  v3 = (TESForm *)OblivionDynamicCast( /*0x4ee217*/
                    a2,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &TESWeather `RTTI Type Descriptor',
                    0);
  v4 = v3; /*0x4ee21c*/
  if ( v3 ) /*0x4ee223*/
  {
    TESForm_CopyAllComponentsFrom(this, v3); /*0x4ee22d*/
    for ( i = 0; i < 2; i = (i + 1) % 3u ) /*0x4ee232*/
      (*(void (__thiscall **)(char *, int))(*((_DWORD *)this + 3 * i + 6) + 8))( /*0x4ee248*/
        (char *)this + 0xC * i + 0x18,
        (int)&v4[1] + 0xC * i);
    (*(void (__thiscall **)(TESForm *, TESForm *))(*((_DWORD *)this + 0xC) + 8))(this + 2, v4 + 2); /*0x4ee26b*/
    *((_DWORD *)this + 0x12) = v4[3].vtbl; /*0x4ee270*/
    *((_DWORD *)this + 0x13) = *(_DWORD *)&v4[3].member.type; /*0x4ee276*/
    *((_DWORD *)this + 0x14) = v4[3].member.flags; /*0x4ee27c*/
    *((_WORD *)this + 0x2A) = v4[3].member.refID; /*0x4ee283*/
    *((_BYTE *)this + 0x56) = BYTE2(v4[3].member.refID); /*0x4ee28a*/
    qmemcpy((char *)this + 0x68, &v4[4].member.flags, 0xA0u); /*0x4ee298*/
    *((_DWORD *)this + 0x16) = v4[3].member.modlist.data; /*0x4ee29d*/
    *((_DWORD *)this + 0x17) = v4[3].member.modlist.next; /*0x4ee2a3*/
    *((_DWORD *)this + 0x18) = v4[4].vtbl; /*0x4ee2a9*/
    *((_DWORD *)this + 0x19) = *(_DWORD *)&v4[4].member.type; /*0x4ee2af*/
    v6 = (char *)this + 0x110; /*0x4ee2b2*/
    v7 = this + 0xB; /*0x4ee2c3*/
    qmemcpy(v6, &v4[0xB].member.flags, 0x38u); /*0x4ee2c9*/
    if ( *(_DWORD *)&v7->member.type ) /*0x4ee2cb*/
    {
      do /*0x4ee2e5*/
      {
        v8 = *(_DWORD *)(*(_DWORD *)&v7->member.type + 4); /*0x4ee2d4*/
        FormHeapFree(*(_DWORD *)&v7->member.type); /*0x4ee2d8*/
        *(_DWORD *)&v7->member.type = v8; /*0x4ee2e2*/
      }
      while ( v8 ); /*0x4ee2e5*/
    }
    v9 = &v4[0xB] == 0; /*0x4ee2e7*/
    v10 = v4 + 0xB; /*0x4ee2e7*/
    v7->vtbl = 0; /*0x4ee2ed*/
    if ( !v9 ) /*0x4ee2f3*/
    {
      do /*0x4ee358*/
      {
        if ( !v10->vtbl ) /*0x4ee2f5*/
          break; /*0x4ee2f9*/
        v11 = (TESFormVtbl *)FormHeapAlloc(8u); /*0x4ee302*/
        if ( v11 ) /*0x4ee309*/
        {
          ClearComponentReferences = v10->vtbl->super.ClearComponentReferences; /*0x4ee30e*/
          v13 = v7; /*0x4ee313*/
          v11->super.InitializeComponent = v10->vtbl->super.InitializeComponent; /*0x4ee315*/
          for ( v11->super.ClearComponentReferences = ClearComponentReferences; /*0x4ee31a*/
                *(_DWORD *)&v13->member.type;
                v13 = *(TESForm **)&v13->member.type )
          {
            ; /*0x4ee320*/
          }
          if ( v13->vtbl ) /*0x4ee329*/
          {
            v14 = (TESFormVtbl **)FormHeapAlloc(8u); /*0x4ee330*/
            if ( v14 ) /*0x4ee33a*/
            {
              *v14 = v11; /*0x4ee33c*/
              v14[1] = 0; /*0x4ee33e*/
              *(_DWORD *)&v13->member.type = v14; /*0x4ee345*/
            }
            else
            {
              *(_DWORD *)&v13->member.type = 0; /*0x4ee34c*/
            }
          }
          else
          {
            v13->vtbl = v11; /*0x4ee351*/
          }
        }
        v10 = *(TESForm **)&v10->member.type; /*0x4ee353*/
      }
      while ( v10 ); /*0x4ee358*/
    }
  }
}
