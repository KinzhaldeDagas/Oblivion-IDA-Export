// DestroyEventList chunk: destruct and FormHeapFree the ScriptEventList at +0x3C, then null the field.
void __usercall ScriptEffect_Remove_::DestroyEventList(ScriptEffect *a1@<esi>)
{
  unsigned int v1; // edi

  v1 = *((_DWORD *)a1 + 0xF); /*0x6a4659*/
  if ( v1 ) /*0x6a465e*/
  {
    ScriptEventList_destr__(*((ScriptEventList **)a1 + 0xF)); /*0x6a4662*/
    FormHeapFree(v1); /*0x6a4668*/
    *((_DWORD *)a1 + 0xF) = 0; /*0x6a4670*/
  }
  ScriptEffect_Remove_::DOne(); /*0x6a465e*/
}
