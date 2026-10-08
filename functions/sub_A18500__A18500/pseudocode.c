void __cdecl sub_A18500()
{
  TESForm_ActiveFileFormList.vtable = &NiTLargeArray<TESForm *>::`vftable'; /*0xa18506*/
  FormHeapFree((unsigned int)TESForm_ActiveFileFormList.data); /*0xa18510*/
}
