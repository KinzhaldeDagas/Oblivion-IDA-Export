void __thiscall sub_77C8B0(int *this, int a2)
{
  NiAVObject *PointerAtOffset08; // eax
  int v4; // [esp+0h] [ebp-8h]

  if ( a2 ) /*0x77c8ba*/
  {
    InterlockedIncrement((volatile LONG *)(a2 + 4)); /*0x77c8c5*/
    PointerAtOffset08 = Shared_GetPointerAtOffset08((Atmosphere *)a2); /*0x77c8cd*/
    sub_77C5E0(*(this + 8), (int)PointerAtOffset08, a2, v4); /*0x77c8d6*/
  }
}
