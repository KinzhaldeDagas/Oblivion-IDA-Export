void __thiscall ExtraTresPassPackage::~ExtraTresPassPackage(ExtraTresPassPackage *this)
{
  unsigned int *v2; // ecx
  int v3; // ecx

  *(_DWORD *)this = &ExtraTresPassPackage::`vftable'; /*0x42a228*/
  v2 = *((unsigned int **)this + 3); /*0x42a22e*/
  if ( v2 ) /*0x42a23b*/
  {
    sub_566830(v2, 1); /*0x42a23f*/
    if ( sub_45A500(g_TESSaveLoadGame) ) /*0x42a24a*/
    {
      TESSaveLoadGame_DeleteForm(g_TESSaveLoadGame, *((TESForm **)this + 3)); /*0x42a25d*/
    }
    else
    {
      v3 = *((_DWORD *)this + 3); /*0x42a264*/
      if ( v3 ) /*0x42a269*/
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v3 + 0x10))(v3, 1); /*0x42a272*/
    }
  }
  *(_DWORD *)this = &BSExtraData::`vftable'; /*0x42a274*/
}
