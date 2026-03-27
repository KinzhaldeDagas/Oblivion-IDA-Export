void __thiscall sub_619C90(_DWORD *this)
{
  _DWORD *v2; // eax
  unsigned int v3; // ecx
  ObjectType v4; // edi
  _DWORD *v5; // ebx
  int v6; // eax
  _DWORD *v7; // eax

  v2 = (_DWORD *)*(this + 0x10);
  v3 = 0;
  if ( v2 )
  {
    do
    {
      if ( *v2 )
        ++v3;
      v2 = (_DWORD *)v2[1];
    }
    while ( v2 );
    if ( v3 > 1 )
    {
      v4.form = sub_569E60((TargetData *)*(this + 0xA)).form;
      sub_5B27A0((EntryData *)*(this + 0x10), (int (__cdecl *)(tListVoid *, tListVoid *))sub_614190);
      if ( sub_6135F0((int)this) )
      {
        v5 = (_DWORD *)*(this + 0xA);
        v6 = sub_6135F0((int)this);
        TeSPackage_TargetData_SetTargetREFR(v5, v6);
        if ( sub_6135F0((int)this) != v4.objectCode )
        {
          v7 = sub_613640(this, (int)v4.form);
          if ( v7 )
          {
            if ( (double)(int)v7[1] != flt_A30634 )
            {
              v7[1] += dword_B36C70;
              sub_5B27A0((EntryData *)*(this + 0x10), (int (__cdecl *)(tListVoid *, tListVoid *))sub_614190);
            }
          }
        }
      }
    }
  }
}
