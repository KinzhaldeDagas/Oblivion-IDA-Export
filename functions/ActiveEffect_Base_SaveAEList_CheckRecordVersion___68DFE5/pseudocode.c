int __cdecl ActiveEffect_Base_SaveAEList_::CheckRecordVersion_(int a1, int a2, int a3, int a4, _WORD *a5)
{
  if ( sub_45A170() )
    return ActiveEffect_Base_SaveAEList_::SetOldHeader(a1, a2, a3, a4, a5);
  else
    return ActiveEffect_Base_SaveAEList_::Epilogue();
}
