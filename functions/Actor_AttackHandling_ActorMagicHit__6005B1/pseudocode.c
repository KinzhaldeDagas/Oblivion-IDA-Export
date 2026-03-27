int __userpurge Actor_AttackHandling_::ActorMagicHit@<eax>(int a1@<edi>, int a2@<esi>, int a3, int a4, int a5)
{
  (*(void (__cdecl **)(int))(*(_DWORD *)a2 + 0x3A8))(a1);
  return Actor_AttackHandling_::Done(a3, a4, a5);
}
