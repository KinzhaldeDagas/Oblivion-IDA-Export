// Pass225: NiScreenTexture post-load resolver; resolves queued object ref and assigns/refcounts +0x14 texturing property.
LONG __thiscall sub_73DFC0(_DWORD *this, _DWORD *a2)
{
  LONG result; // eax
  int v4; // esi
  LONG v5; // ebx

  nullsub_returnvVoid_1arg((int)a2); /*0x73dfca*/
  result = sub_7124A0(a2); /*0x73dfd1*/
  v4 = *(this + 5); /*0x73dfd6*/
  v5 = result; /*0x73dfd9*/
  if ( v4 != result ) /*0x73dfdd*/
  {
    if ( v4 ) /*0x73dfe1*/
    {
      result = InterlockedDecrement((volatile LONG *)(v4 + 4)); /*0x73dfe7*/
      if ( !result ) /*0x73dfef*/
        result = (**(int (__thiscall ***)(int, int))v4)(v4, 1); /*0x73dffd*/
    }
    *(this + 5) = v5; /*0x73e001*/
    if ( v5 ) /*0x73e004*/
      return InterlockedIncrement((volatile LONG *)(v5 + 4)); /*0x73e00a*/
  }
  return result; /*0x73e010*/
}
