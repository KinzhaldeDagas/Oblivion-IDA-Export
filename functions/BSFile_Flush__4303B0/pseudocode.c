void __thiscall BSFile_Flush(int this)
{
  if ( *(_BYTE *)(this + 0x24) ) /*0x4303b3*/
  {
    if ( *(_DWORD *)(this + 0x1C) ) /*0x4303b9*/
    {
      NiFile_Flush(this); /*0x4303bf*/
      fclose(*(FILE **)(this + 0x1C)); /*0x4303c8*/
    }
  }
  FormHeapFree(*(_DWORD *)(this + 0x18)); /*0x4303d4*/
  *(_DWORD *)(this + 0x18) = 0; /*0x4303dc*/
  *(_DWORD *)(this + 0x1C) = 0; /*0x4303e3*/
}
