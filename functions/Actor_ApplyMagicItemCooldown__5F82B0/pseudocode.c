void __thiscall Actor_ApplyMagicItemCooldown(_DWORD *this, int a2)
{
  int v3; // esi

  if ( a2 ) /*0x5f82ba*/
  {
    if ( !Actor_GetMagicItemCooldown(this, a2) ) /*0x5f82bd*/
    {
      v3 = FormHeapAlloc(8u); /*0x5f82ce*/
      *(_DWORD *)v3 = a2; /*0x5f82d8*/
      *(float *)(v3 + 4) = dbl_A2F938 / TimeGlobals_GetTimeScale(&MEMORY[0xB332E0]) * dbl_A2F920; /*0x5f82f2*/
      BSSimpleList_PushBack(this + 0x27, v3); /*0x5f82f5*/
    }
  }
}
