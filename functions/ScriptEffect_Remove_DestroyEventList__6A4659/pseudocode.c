int __usercall ScriptEffect_Remove_::DestroyEventList@<eax>(ScriptEffect *a1@<esi>)
{
  unsigned int v1; // edi

  v1 = *((_DWORD *)a1 + 0xF);
  if ( v1 )
  {
    ScriptEventList_destr__(*((ScriptEventList **)a1 + 0xF));
    FormHeapFree(v1);
    *((_DWORD *)a1 + 0xF) = 0;
  }
  return ScriptEffect_Remove_::DOne();
}
