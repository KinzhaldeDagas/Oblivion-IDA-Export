void __thiscall sub_42FC90(_DWORD *this, char a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax
  volatile LONG *v6; // edi

  if ( this ) /*0x42fc95*/
  {
    v3 = *(this + 3); /*0x42fc97*/
    if ( v3 ) /*0x42fc9c*/
    {
      if ( a2 ) /*0x42fca5*/
        NiEnterCriticalSection(*(struct _RTL_CRITICAL_SECTION **)(v3 + 4), (int)&unk_A2F830); /*0x42fcaf*/
      v4 = *(this + 2); /*0x42fcb4*/
      if ( v4 == 1 || v4 == 2 ) /*0x42fcbf*/
      {
        v5 = *(this + 3); /*0x42fcc1*/
        if ( v5 ) /*0x42fcc6*/
        {
          v6 = (volatile LONG *)(v5 + 0x2C); /*0x42fcc9*/
          if ( WaitForSingleObject(*(HANDLE *)(v5 + 0x34), 0xFFFFFFFF) != 0x102 ) /*0x42fcdd*/
            InterlockedDecrement(v6); /*0x42fce0*/
        }
        (*(void (__thiscall **)(_DWORD *))(*this + 8))(this); /*0x42fcee*/
        *(this + 2) = 0; /*0x42fcf0*/
      }
      if ( a2 ) /*0x42fcfa*/
        NiLeaveCriticalSection_0(*(LPCRITICAL_SECTION *)(*(this + 3) + 4)); /*0x42fd02*/
    }
  }
}
