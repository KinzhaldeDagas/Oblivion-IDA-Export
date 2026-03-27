void __thiscall sub_628630(#239 *this, Actor *a2, char a3)
{
  int v4; // eax
  bool v5; // c0
  bool v6; // c3

  v4 = *((_DWORD *)this + 0xAF);
  if ( v4 != 6 && v4 != 5 && (double)a2->vtbl->GetActorValue(a2, kActorVal_Invisibility) <= 0.0 )
  {
    v5 = *((float *)this + 0xB0) > 1.0;
    v6 = 1.0 == *((float *)this + 0xB0);
    *((_DWORD *)this + 0xB1) = 0;
    *((_DWORD *)this + 0xAF) = 2 * (a3 != 0) + 1;
    if ( v5 || v6 )
      *((float *)this + 0xB0) = 0.0;
  }
}
