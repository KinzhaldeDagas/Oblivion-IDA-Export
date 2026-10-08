char __usercall CureEffect_Apply@<al>(int this@<ecx>, int a2@<esi>)
{
  int v2; // eax

  v2 = *(_DWORD *)(this + 0x3C); /*0x692aa0*/
  if ( v2 == 0xFFFFFFFF ) /*0x692aa6*/
    return (unsigned __int8)CureEffect_Apply_::CureMagicItemType(this); /*0x692aa7*/
  else
    return CureEffect_Apply_::CureEffect(v2, this, a2); /*0x692aa6*/
}
