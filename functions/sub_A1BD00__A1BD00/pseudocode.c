// Verified module cleanup releases the shared even-Z PathGrid point marker-template reference with InterlockedDecrement.
void __cdecl TESPathGridPoint_ReleaseEvenZMarkerTemplate()
{
  void (__thiscall ***v0)(_DWORD, int); // esi

  v0 = (void (__thiscall ***)(_DWORD, int))g_PathGridPointMarkerTemplateEvenZ; /*0xa1bd01*/
  if ( g_PathGridPointMarkerTemplateEvenZ ) /*0xa1bd09*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(g_PathGridPointMarkerTemplateEvenZ + 4)) ) /*0xa1bd0f*/
    {
      if ( v0 ) /*0xa1bd1b*/
        (**v0)(v0, 1); /*0xa1bd25*/
    }
  }
}
