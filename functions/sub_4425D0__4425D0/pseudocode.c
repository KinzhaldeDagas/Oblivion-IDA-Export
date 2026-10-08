void __thiscall sub_4425D0(TES *this)
{
  void (__thiscall ***v2)(void *, int); // esi

  if ( g_TESDataHandler ) /*0x4425d0*/
  {
    this->gridCellArray->Fn_02(this->gridCellArray); /*0x4425e4*/
    (*(void (__thiscall **)(GridDistantArray *))(*(_DWORD *)this->gridDistantArray + 8))(this->gridDistantArray); /*0x4425ee*/
    if ( g_CanopyShadowMap ) /*0x4425f0*/
    {
      v2 = (void (__thiscall ***)(void *, int))g_CanopyShadowMap; /*0x4425f9*/
      if ( !InterlockedDecrement((volatile LONG *)g_CanopyShadowMap + 1) ) /*0x4425ff*/
      {
        if ( v2 ) /*0x44260b*/
          (**v2)(v2, 1); /*0x442615*/
      }
      g_CanopyShadowMap = 0; /*0x442617*/
    }
    g_bCanopyShadowMapPending = 1; /*0x442621*/
    sub_7C4D90(); /*0x442629*/
  }
}
