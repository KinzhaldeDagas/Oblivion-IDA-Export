// MoonSugarEffect decode: builds shader cache filename from CacheOrNullString/FullPath, appends 'HDR.' when UseHDR is active, then appends requested .vso/.pso cache name.
void __cdecl sub_801210(char *a1, char *a2, const char *a3)
{
  char *v3; // ecx
  char *v4; // esi
  char v5; // dl
  char *v6; // ecx

  if ( a1 ) /*0x801217*/
  {
    if ( a2 ) /*0x801222*/
    {
      if ( a3 ) /*0x80122e*/
      {
        v3 = &MEMORY[0xB42D80]; /*0x80123b*/
        if ( !MEMORY[0xB42D80] ) /*0x801234*/
          v3 = &OB_RendererGlobalState_010201A0[0xCF]; /*0x801242*/
        v4 = (char *)(a1 - v3); /*0x80124a*/
        do /*0x80125a*/
        {
          v5 = *v3; /*0x801250*/
          v3[(_DWORD)v4] = *v3; /*0x801252*/
          ++v3; /*0x801255*/
        }
        while ( v5 ); /*0x80125a*/
        if ( OB_RendererGlobalState_010201A0[0x1D7] )// [Verified] When RendererGlobalState+0x1D7 is nonzero, append literal "HDR." to the shader cache/program name before the requested program filename. Combined with WinMain's HDR/non-HDR settings branch, this identifies the field as the HDR-mode selector. /*0x80125c*/
        {
          v6 = &a1[strlen(a1)]; /*0x801266*/
          *(_DWORD *)v6 = dword_A93478; /*0x801280*/
          v6[4] = byte_A9347C; /*0x801288*/
        }
        strcat(a1, a3); /*0x8012af*/
      }
    }
  }
}
