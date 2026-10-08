char __thiscall TESTopic_SaveFormRecord(char *this, Data *a2)
{
  char *v3; // eax
  int v4; // ebx
  unsigned int v5; // ebp
  unsigned int v6; // esi
  TESForm *v7; // edi
  int v8; // eax
  char *i; // [esp+4h] [ebp-4h]

  (*(void (__thiscall **)(char *))(*(_DWORD *)this + 0x24))(this); /*0x52edb9*/
  TESFile_WriteFormRecord(a2, (int)this); /*0x52edc0*/
  v3 = this + 0x28; /*0x52edc5*/
  if ( this != (char *)0xFFFFFFD8 ) /*0x52edca*/
  {
    while ( 1 ) /*0x52edd5*/
    {
      v4 = *(_DWORD *)v3; /*0x52edd5*/
      if ( !*(_DWORD *)v3 ) /*0x52edd5*/
        break; /*0x52edd5*/
      v5 = *(_DWORD *)(v4 + 0x10); /*0x52eddb*/
      v6 = 0; /*0x52ede1*/
      for ( i = *((char **)v3 + 1); v6 < v5; ++v6 ) /*0x52ede9*/
      {
        v7 = *(TESForm **)(*(_DWORD *)(v4 + 8) + 4 * v6); /*0x52edf3*/
        if ( v7 ) /*0x52edf8*/
        {
          LOBYTE(v8) = TESFile_GetIsMaster(a2); /*0x52edfe*/
          TESDataHandler_SaveForm((Data **)g_TESDataHandler, v7, v8); /*0x52ee0b*/
        }
      }
      if ( !i ) /*0x52ee1c*/
        break; /*0x52ee1c*/
      v3 = i; /*0x52edd1*/
    }
  }
  return 1; /*0x52ee23*/
}
