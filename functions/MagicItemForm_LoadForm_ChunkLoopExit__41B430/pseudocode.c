void __userpurge MagicItemForm_LoadForm_::ChunkLoopExit(int a1@<edi>, int a2@<ebp>, int a3)
{
  if ( a1 == 0xFFFFFFD8 )
    MagicItemForm_LoadForm_::GetItemName(a2, 0xFFFFFFD8, a3);
  else
    MagicItemForm_LoadForm_::EffectLoopBody((_DWORD *)(a1 + 0x28), 0, a2, a1, a3);
}
