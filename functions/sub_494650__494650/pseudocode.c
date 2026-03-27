_BYTE *__thiscall sub_494650(_BYTE *this, char a2)
{
  char *v3; // eax
  void (__stdcall *v4)(LPCSTR); // edi
  char *v5; // eax
  char *v6; // eax

  *(_DWORD *)this = &MessageHandler::`vftable';
  *(this + 4) = a2;
  v3 = sub_494480();
  v4 = (void (__stdcall *)(LPCSTR))DeleteFileA;
  DeleteFileA(v3);
  v5 = sub_4944F0();
  v4(v5);
  v6 = sub_494560();
  v4(v6);
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 3) = 0;
  *(this + 0x10) = 0;
  dword_B34D90 = (int)this;
  off_B27E60 = (int (__cdecl *)(_DWORD, _DWORD, _DWORD))nullsub_return0_0arg;
  dword_B40608 = (int (__cdecl *)(_DWORD, _DWORD))TESTexture::ClearComponentReferences;
  return this;
}
