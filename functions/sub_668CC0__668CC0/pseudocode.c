int __usercall sub_668CC0@<eax>(PlayerCharacter *a1@<ecx>, char a2@<bpl>, double a3@<st1>)
{
  if ( !((unsigned __int8 (__thiscall *)(LowProcess *))a1->super.super.super.process->GetUnk16C)(a1->super.super.super.process) /*0x668cd4*/
    && sub_57A310() )
  {
    sub_664E60(a1, a2, a3); /*0x668cdf*/
  }
  return ((int (__thiscall *)(LowProcess *, PlayerCharacter *))a1->super.super.super.process->Unk_C5)( /*0x668cf2*/
           a1->super.super.super.process,
           a1);
}
