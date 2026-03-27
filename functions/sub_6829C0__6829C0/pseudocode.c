int __thiscall sub_6829C0(NiTMap_TESCELL *this)
{
  int *v2; // ebp
  unsigned int v3; // esi
  unsigned int v4; // eax
  _DWORD *v5; // edx
  NiTMap_Entry_TESCELL *v6; // eax
  int v7; // esi
  NiTMap_Entry_TESCELL *v9; // [esp+8h] [ebp-8h] BYREF
  void *v10; // [esp+Ch] [ebp-4h] BYREF

  sub_49F470(&stru_B3C000);
  v2 = (int *)(this + 4);
  if ( !*((_DWORD *)this + 0x10) )
  {
    v3 = *((_DWORD *)this + 5);
    v4 = 0;
    if ( v3 )
    {
      v5 = *((_DWORD **)this + 6);
      while ( !*v5 )
      {
        ++v4;
        ++v5;
        if ( v4 >= v3 )
          goto LABEL_6;
      }
      v6 = *(NiTMap_Entry_TESCELL **)(*((_DWORD *)this + 6) + 4 * v4);
    }
    else
    {
LABEL_6:
      v6 = 0;
    }
    v9 = v6;
    if ( v6 )
      sub_452600(this + 1, &v9, &v10, (TESObjectCELL **)this + 0x10);
    if ( !*v2 )
    {
      v9 = (NiTMap_Entry_TESCELL *)sub_6A9030((_DWORD *)this + 8);
      if ( v9 )
        sub_452600(this + 2, &v9, &v10, (TESObjectCELL **)this + 0x10);
    }
    v7 = *v2;
    if ( *v2 )
    {
      sub_42FA10((int)this, (int)"PathBuilder", 2);
      sub_42FC90(this, 0);
      *((_DWORD *)this + 0x11) = v7;
      sub_42FD10(this);
    }
  }
  return j_NiLeaveCriticalSection_0((LPCRITICAL_SECTION)&stru_B3C000);
}
