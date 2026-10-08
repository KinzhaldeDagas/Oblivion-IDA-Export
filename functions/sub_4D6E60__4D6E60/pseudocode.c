void __thiscall sub_4D6E60(char *this, int a2)
{
  int v2; // eax
  ExtraDataList *v4; // ecx

  v2 = a2; /*0x4d6e60*/
  if ( !a2 ) /*0x4d6e69*/
    v2 = sub_4533F0(g_TESSaveLoadGame, (int)this, 0); /*0x4d6e73*/
  v4 = (ExtraDataList *)(this + 0x44); /*0x4d6e7f*/
  if ( (v2 & 0x40000) != 0 ) /*0x4d6e82*/
    ExtraDataList_TestActionFlagBits(v4, 8u); /*0x4d6e84*/
  else
    ExtraDataList_TestActionFlagBits(v4, 8u); /*0x4d6e94*/
}
