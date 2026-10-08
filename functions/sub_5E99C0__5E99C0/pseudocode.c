void __thiscall sub_5E99C0(TESObjectREFR *this, TESKey *a2, char a3, char a4)
{
  int *sound; // edi
  char *ItemUpDownSound; // eax
  UInt32 *v7; // eax
  int *v8; // esi
  int *v9; // eax

  if ( a2 && sub_578FE0() != 0x3EF ) /*0x5e99da*/
  {
    sound = (int *)MEMORY[0xB33398]->sound; /*0x5e99ea*/
    ItemUpDownSound = (char *)GetItemUpDownSound(a2, a3, a4); /*0x5e99f2*/
    if ( this == (TESObjectREFR *)reference ) /*0x5e99fd*/
    {
      v7 = PlaySound___(sound, ItemUpDownSound, 0x121, 0); /*0x5e9a09*/
      v8 = (int *)v7; /*0x5e9a0e*/
      if ( !v7 ) /*0x5e9a12*/
        return; /*0x5e9a12*/
      if ( !SoundHandle::IsPlaying(v7) ) /*0x5e9a16*/
        sub_6B7190(v8, 0); /*0x5e9a23*/
    }
    else
    {
      TESObjectREFR_PlayResolvedAnimSoundNote(this, ItemUpDownSound, 0, 0x102, 1); /*0x5e9a36*/
      v8 = v9; /*0x5e9a3b*/
    }
    if ( v8 ) /*0x5e9a3f*/
    {
      sub_6B73E0(v8); /*0x5e9a43*/
      FormHeapFree((unsigned int)v8); /*0x5e9a49*/
    }
  }
}
