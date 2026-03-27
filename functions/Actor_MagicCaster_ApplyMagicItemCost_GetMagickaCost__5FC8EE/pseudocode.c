int __usercall Actor_MagicCaster_ApplyMagicItemCost_::GetMagickaCost@<eax>(
        void (__thiscall ***a1)(_DWORD)@<esi>,
        double a2@<st0>,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10)
{
  int v11; // [esp+10h] [ebp+8h]

  (*a1[3])(a1 + 3);
  *(float *)&v11 = a2;
  return Actor_MagicCaster_ApplyMagicItemCost_::CastToIngred(a1, 0.0, a3, v11, a5, a6, a7, a8, a9, a10);
}
