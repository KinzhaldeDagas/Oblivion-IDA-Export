char __thiscall sub_4C9530(const char **this)
{
  const char *v1; // eax
  char Str1[260]; // [esp+0h] [ebp-20Ch] BYREF
  char v4[260]; // [esp+104h] [ebp-108h] BYREF

  v1 = *(this + 7); /*0x4c9544*/
  if ( !v1 ) /*0x4c9549*/
    v1 = EmptyString; /*0x4c954b*/
  _sprintf(Str1, "%s\\Landscape\\%s", "Textures", v1); /*0x4c9560*/
  sub_47D8F0(Str1, v4); /*0x4c9572*/
  return QueuedTexture_QueueOrAttachPath(v4, 5u, 0);// Verified neighboring subsystem: landscape texture loading builds Textures\\Landscape\\<name>, normalizes the path, and uses the same QueuedTexture_QueueOrAttachPath helper with priority 5 and no parent. /*0x4c9591*/
}
