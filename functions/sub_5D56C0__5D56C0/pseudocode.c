int __cdecl sub_5D56C0(unsigned int a1, unsigned int a2)
{
  const unsigned __int8 *Name; // esi
  const unsigned __int8 *v3; // eax

  Name = (const unsigned __int8 *)ActorValue_GetName(a2);
  v3 = (const unsigned __int8 *)ActorValue_GetName(a1);
  return _mbscmp(v3, Name);
}
