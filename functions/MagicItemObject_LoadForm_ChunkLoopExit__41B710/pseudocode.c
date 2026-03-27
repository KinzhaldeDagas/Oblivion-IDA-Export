void __userpurge MagicItemObject_LoadForm_::ChunkLoopExit(int a1@<edi>, int a2@<ebp>, int a3)
{
  if ( a1 == 0xFFFFFFCC )
    MagicItemObject_LoadForm_::GetItemName(a2, 0xFFFFFFCC, a3);
  else
    MagicItemObject_LoadForm_::EffectLoopBody((_DWORD *)(a1 + 0x34), 0, a2, a1, a3);
}
