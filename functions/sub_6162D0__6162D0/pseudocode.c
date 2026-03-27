TESObjectREFR *__thiscall sub_6162D0(float *this, TESObjectREFR *a2)
{
  unsigned int *v3; // ecx
  char v4; // bl
  unsigned int v5; // eax
  unsigned int v6; // edi
  TESObjectREFR *result; // eax
  _DWORD *v8; // edi
  int v9; // eax
  _DWORD *v10; // edi
  int v11; // eax

  v3 = *((unsigned int **)this + 0x10);
  v4 = 0;
  if ( v3 )
  {
    do
    {
      v5 = v3[1];
      if ( !v5 && !*v3 )
        break;
      v6 = *v3;
      if ( *(TESObjectREFR **)*v3 == a2 )
      {
        BSSimpleList_Remove(v3, *v3);
        if ( a2 == (TESObjectREFR *)TESDataHandler_g_PlayerRef )
          sub_6136E0();
        FormHeapFree(v6);
        v4 = 1;
        break;
      }
      v3 = (unsigned int *)v3[1];
    }
    while ( v5 );
  }
  if ( sub_569E60(*((TargetData **)this + 0xA)).form == a2
    || (result = (TESObjectREFR *)sub_5697E0(*((_DWORD **)this + 9)), result == a2) )
  {
    v8 = *((_DWORD **)this + 0xA);
    v9 = sub_6135F0((int)this);
    TeSPackage_TargetData_SetTargetREFR(v8, v9);
    v10 = *((_DWORD **)this + 9);
    v11 = sub_6135F0((int)this);
    result = (TESObjectREFR *)TESPackage_LocationData_SetReference(v10, v11);
  }
  if ( v4 )
  {
    result = (TESObjectREFR *)TESDataHandler;
    if ( !*(_BYTE *)(TESDataHandler + 0xCD4) && !*((_BYTE *)this + 0x1A4) )
    {
      *(this + 0x50) = *(this + 0x11);
      *(this + 0x51) = flt_A2FAAC;
      *(this + 0x52) = flt_A30634;
    }
  }
  return result;
}
