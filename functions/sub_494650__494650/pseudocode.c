_BYTE *__thiscall sub_494650(_BYTE *this, char a2)
{
  char *v3; // eax
  void (__stdcall *v4)(LPCSTR); // edi
  char *v5; // eax
  char *v6; // eax

  *(_DWORD *)this = &MessageHandler::`vftable'; /*0x494658*/
  *(this + 4) = a2; /*0x49465e*/
  v3 = sub_494480(); /*0x494661*/
  v4 = (void (__stdcall *)(LPCSTR))DeleteFileA; /*0x494666*/
  DeleteFileA(v3); /*0x49466d*/
  v5 = sub_4944F0(); /*0x49466f*/
  v4(v5); /*0x494675*/
  v6 = sub_494560(); /*0x494677*/
  v4(v6); /*0x49467d*/
  *((_DWORD *)this + 2) = 0; /*0x494681*/
  *((_DWORD *)this + 3) = 0; /*0x494684*/
  *(this + 0x10) = 0; /*0x494687*/
  *(_DWORD *)&MEMORY[0xB33E90][0xF00] = this; /*0x49468b*/
  off_B27E60 = (int (__cdecl *)(_DWORD, _DWORD, _DWORD))nullsub_return0_0arg; /*0x494693*/
  unk_B40608 = (int (__cdecl *)(_DWORD, _DWORD))Shared_NoOpVirtual_60D0A0; /*0x49469d*/
  return this; /*0x49468a*/
}
