void __thiscall sub_4ABDA0(TESForm *this, void *a2)
{
  TESForm *v3; // eax
  TESForm *v4; // ebp
  float *v5; // eax
  float *v6; // eax

  v3 = (TESForm *)OblivionDynamicCast( /*0x4abdb7*/
                    a2,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &TESCombatStyle `RTTI Type Descriptor',
                    0);
  v4 = v3; /*0x4abdbc*/
  if ( v3 ) /*0x4abdc3*/
  {
    TESForm_CopyAllComponentsFrom(this, v3); /*0x4abdce*/
    qmemcpy(this + 1, &v4[1], 0x7Cu); /*0x4abdde*/
    if ( *(_DWORD *)&v4[6].member.type ) /*0x4abde0*/
    {
      if ( !*((_DWORD *)this + 0x25) ) /*0x4abde9*/
      {
        v5 = (float *)FormHeapAlloc(0x54u); /*0x4abdf4*/
        if ( v5 ) /*0x4abdfe*/
          v6 = sub_4A9BF0(v5); /*0x4abe02*/
        else
          v6 = 0; /*0x4abe09*/
        *((_DWORD *)this + 0x25) = v6; /*0x4abe0b*/
      }
      qmemcpy(*((void **)this + 0x25), *(const void **)&v4[6].member.type, 0x54u); /*0x4abe22*/
    }
    else
    {
      if ( *((_DWORD *)this + 0x25) ) /*0x4abe2b*/
        FormHeapFree(*((_DWORD *)this + 0x25)); /*0x4abe36*/
      *((_DWORD *)this + 0x25) = 0; /*0x4abe3f*/
    }
  }
}
