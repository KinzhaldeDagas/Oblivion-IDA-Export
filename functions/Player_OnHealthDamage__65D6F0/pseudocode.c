int __userpurge Player_OnHealthDamage@<eax>(
        Actor *a1@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double st7_0@<st0>,
        int a5,
        int a6)
{
  Actor_OnHealthDamage(a1, a2, a3, st7_0, a5, a6);
  return ((int (__thiscall *)(Actor *, _DWORD))a1->vtbl->super.super.IsDead)(a1, 0);
}
