void __thiscall sub_4D6E60(char *this, int a2)
{
  int v2; // eax
  ExtraDataList *v4; // ecx

  v2 = a2;
  if ( !a2 )
    v2 = sub_4533F0(SaveLoad_CurrentSavegame, (int)this, 0);
  v4 = (ExtraDataList *)(this + 0x44);
  if ( (v2 & 0x40000) != 0 )
    sub_41F830(v4, 8);
  else
    sub_41F830(v4, 8);
}
