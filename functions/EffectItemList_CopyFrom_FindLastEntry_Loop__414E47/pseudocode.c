int __userpurge EffectItemList_CopyFrom_::FindLastEntry_Loop@<eax>(int a1@<ebx>, int a2@<esi>, int a3)
{
  do
    a2 = *(_DWORD *)(a2 + 4);
  while ( *(_DWORD *)(a2 + 4) != a1 );
  return EffectItemList_CopyFrom_::AppendNewEffectItem(a3);
}
