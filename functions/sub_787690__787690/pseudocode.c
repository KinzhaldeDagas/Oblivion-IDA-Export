// CSpeedTreeRT::SetTextureFlip(bool): stores the process-global texture-flip flag at 0xB4297D. Source-level return is void; any AL value is incidental.
void __cdecl CSpeedTreeRT__SetTextureFlip(bool enabled)
{
  CSpeedTreeRT__s_textureFlip = enabled; /*0x787694*/
}
