int __thiscall sub_4D4970(ExtraDataList *this, float a2)
{
  BSExtraDataVtbl *v3; // eax
  int v4; // edi
  int i; // esi
  int result; // eax
  int v7; // ecx

  dword_B35C04 = 0;
  if ( (*((_BYTE *)this + 0x24) & 1) != 0 && *((_BYTE *)this + 0x26) == 6 )
  {
    v3 = sub_424180(this + 2);
    if ( v3 )
      (*((void (__thiscall **)(BSExtraDataVtbl *))v3->Destructor + 0x20))(v3);
  }
  v4 = 0;
  for ( i = 8; i < 0x18; i += 4 )
  {
    result = *((_DWORD *)this + 0x15);
    if ( result
      && *(unsigned __int16 *)(result + 0xB6) > (unsigned int)(v4 + 2)
      && (result = *(_DWORD *)(i + *(_DWORD *)(result + 0xB0))) != 0
      && *(_WORD *)(result + 0xB6) > 3u )
    {
      v7 = *(_DWORD *)(*(_DWORD *)(result + 0xB0) + 0xC);
    }
    else
    {
      v7 = 0;
    }
    if ( v7 )
    {
      if ( (*(_BYTE *)(v7 + 0x18) & 1) == 0 )
        result = sub_7073A0((_DWORD **)v7, a2);
    }
    ++v4;
  }
  return result;
}
