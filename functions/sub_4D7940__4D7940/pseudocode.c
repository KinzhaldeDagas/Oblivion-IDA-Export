void __thiscall sub_4D7940(_DWORD *this, BSExtraDataVtbl *a2)
{
  int v3; // eax

  if ( !a2
    || a2[3].CompareTo
    && *(_BYTE *)((*((int (__thiscall **)(BSExtraDataVtbl *))a2->Destructor + 0x5C))(a2) + 4) == 0x24
    && (v3 = (*((int (__thiscall **)(BSExtraDataVtbl *))a2->Destructor + 0x5C))(a2)) != 0
    && *(_BYTE *)(v3 + 0x104) == 4 )
  {
    sub_420860((ExtraDataList *)(this + 0x11), a2);
  }
}
