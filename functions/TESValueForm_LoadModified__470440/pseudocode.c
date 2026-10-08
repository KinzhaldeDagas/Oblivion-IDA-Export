void __userpurge TESValueForm_LoadModified(int this@<ecx>, void *Dst, size_t Size)
{
  if ( ((unsigned __int8)Dst & 8) != 0 ) /*0x470445*/
    SaveLoad_LoadData(g_TESSaveLoadGame, (void *)(this + 4), 4u); /*0x47045c*/
}
