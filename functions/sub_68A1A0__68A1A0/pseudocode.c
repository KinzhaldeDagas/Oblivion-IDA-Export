void __thiscall sub_68A1A0(_DWORD *this)
{
  int v1; // ecx
  TESObjectREFR *v2; // ecx

  v1 = *(this + 1);
  if ( v1 )
  {
    if ( !*(_BYTE *)(v1 + 4) )
    {
      v2 = *(TESObjectREFR **)v1;
      if ( v2 )
        TESObjectREFR_GetWorldSpace(v2);
    }
  }
}
