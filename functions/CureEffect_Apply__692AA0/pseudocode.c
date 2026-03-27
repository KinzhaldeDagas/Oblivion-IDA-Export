char __usercall CureEffect_Apply@<al>(int this@<ecx>, int a2@<esi>)
{
  int v2; // eax

  v2 = *(_DWORD *)(this + 0x3C);
  if ( v2 == 0xFFFFFFFF )
    return (unsigned __int8)CureEffect_Apply_::CureMagicItemType(this);
  else
    return CureEffect_Apply_::CureEffect(v2, this, a2);
}
