int __usercall TESContainer_CopyContentsFrom@<eax>(int ecx0@<ecx>, int a2@<ebx>, int a3@<ebp>, int a4)
{
  if ( !a4 )
    return TESContainer_CopyContentsFrom_::Done(0);
  if ( a4 == 0xFFFFFFF8 )
    return TESContainer_CopyContentsFrom_::Done_(0xFFFFFFF8);
  return TESContainer_CopyContentsFrom_::ItemLoop(a2, a3, ecx0, (int **)(a4 + 8), a4);
}
