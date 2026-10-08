void __thiscall ExtraFollower::~ExtraFollower(ExtraFollower *this)
{
  _DWORD *v2; // esi
  int v3; // edi

  v2 = *((_DWORD **)this + 3); /*0x429ba4*/
  *(_DWORD *)this = &ExtraFollower::`vftable'; /*0x429ba7*/
  if ( v2[1] ) /*0x429bad*/
  {
    do /*0x429bc8*/
    {
      v3 = *(_DWORD *)(v2[1] + 4); /*0x429bb7*/
      FormHeapFree(v2[1]); /*0x429bbb*/
      v2[1] = v3; /*0x429bc5*/
    }
    while ( v3 ); /*0x429bc8*/
  }
  *v2 = 0; /*0x429bcb*/
  FormHeapFree(*((_DWORD *)this + 3)); /*0x429bd5*/
  *(_DWORD *)this = &BSExtraData::`vftable'; /*0x429bde*/
}
