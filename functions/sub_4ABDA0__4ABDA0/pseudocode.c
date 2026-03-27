void __thiscall sub_4ABDA0(TESForm *this, void *a2)
{
  TESForm *v3; // eax
  TESForm *v4; // ebp
  float *v5; // eax
  float *v6; // eax

  v3 = (TESForm *)OblivionDynamicCast(
                    a2,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &TESCombatStyle `RTTI Type Descriptor',
                    0);
  v4 = v3;
  if ( v3 )
  {
    TESForm_CopyAllComponentsFrom(this, v3);
    qmemcpy(this + 1, &v4[1], 0x7Cu);
    if ( *(_DWORD *)&v4[6].member.type )
    {
      if ( !*((_DWORD *)this + 0x25) )
      {
        v5 = (float *)FormHeapAlloc(0x54u);
        if ( v5 )
          v6 = sub_4A9BF0(v5);
        else
          v6 = 0;
        *((_DWORD *)this + 0x25) = v6;
      }
      qmemcpy(*((void **)this + 0x25), *(const void **)&v4[6].member.type, 0x54u);
    }
    else
    {
      if ( *((_DWORD *)this + 0x25) )
        FormHeapFree(*((_DWORD *)this + 0x25));
      *((_DWORD *)this + 0x25) = 0;
    }
  }
}
