void __thiscall TESObjectLAND::~TESObjectLAND(TESForm *this)
{
  bool v2; // zf
  unsigned int *v3; // esi
  int v4; // ecx
  int v5; // esi

  this->vtbl = (TESFormVtbl *)&TESObjectLAND::`vftable'{for `TESObjectLAND'};
  *((_DWORD *)this + 6) = &TESObjectLAND::`vftable'{for `TESChildCell'};
  sub_4C6280((unsigned int **)this);
  v2 = dword_B35BE0-- == 1;
  if ( v2 )
  {
    FormHeapFree(dword_B35BC8);
    FormHeapFree((unsigned int)dword_B35BCC);
    FormHeapFree(dword_B35BD0);
    FormHeapFree(dword_B35BD4);
    FormHeapFree(dword_B35BD8);
    v3 = (unsigned int *)dword_B35BB8;
    do
      FormHeapFree(*v3++);
    while ( (int)v3 < (int)&dword_B35BC8 );
    v4 = dword_B35BE4;
    v2 = dword_B35BE4 == 0;
    byte_B35BDC = 0;
    if ( !v2 )
      (*(void (__thiscall **)(int, int))(*(_DWORD *)v4 + 0x10))(v4, 1);
    v5 = dword_B35BEC;
    v2 = dword_B35BEC == 0;
    dword_B35BE4 = 0;
    if ( !v2 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v5 + 4)) )
      {
        if ( v5 )
          (**(void (__thiscall ***)(int, int))v5)(v5, 1);
      }
      dword_B35BEC = 0;
    }
  }
  j_TESForm_ClearComponentReferences(this);
  TESForm_destr(this);
}
