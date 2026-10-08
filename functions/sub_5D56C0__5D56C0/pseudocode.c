int __cdecl sub_5D56C0(unsigned int a1, unsigned int a2)
{
  const unsigned __int8 *Name; // esi
  const unsigned __int8 *v3; // eax

  Name = (const unsigned __int8 *)ActorValue_GetName(a2); /*0x5d56d0*/
  v3 = (const unsigned __int8 *)ActorValue_GetName(a1); /*0x5d56d2*/
  return _mbscmp(v3, Name); /*0x5d56e1*/
}
