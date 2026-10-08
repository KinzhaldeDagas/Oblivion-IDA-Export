// Verified module cleanup releases the shared odd-Z PathGrid point marker-template reference with InterlockedDecrement.
void __cdecl TESPathGridPoint_ReleaseOddZMarkerTemplate()
{
  void (__thiscall ***v0)(_DWORD, int); // esi

  v0 = (void (__thiscall ***)(_DWORD, int))g_PathGridPointMarkerTemplateOddZ; /*0xa1bd31*/
  if ( g_PathGridPointMarkerTemplateOddZ ) /*0xa1bd39*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(g_PathGridPointMarkerTemplateOddZ + 4)) ) /*0xa1bd3f*/
    {
      if ( v0 ) /*0xa1bd4b*/
        (**v0)(v0, 1); /*0xa1bd55*/
    }
  }
}
