void __userpurge TESAttributes_LoadModified(int this@<ecx>, void *Dst, size_t Size)
{
  if ( ((unsigned __int8)Dst & 8) != 0 )
  {
    LODWORD(Size) = 8;
    SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, (void *)(this + 4), Size);
  }
}
