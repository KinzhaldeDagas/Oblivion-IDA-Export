void __thiscall sub_42FC90(_DWORD *this, char a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // eax
  volatile LONG *v6; // edi

  if ( this )
  {
    v3 = *(this + 3);
    if ( v3 )
    {
      if ( a2 )
        NiEnterCriticalSection(*(struct _RTL_CRITICAL_SECTION **)(v3 + 4), (int)&unk_A2F830);
      v4 = *(this + 2);
      if ( v4 == 1 || v4 == 2 )
      {
        v5 = *(this + 3);
        if ( v5 )
        {
          v6 = (volatile LONG *)(v5 + 0x2C);
          if ( WaitForSingleObject(*(HANDLE *)(v5 + 0x34), 0xFFFFFFFF) != 0x102 )
            InterlockedDecrement(v6);
        }
        (*(void (__thiscall **)(_DWORD *))(*this + 8))(this);
        *(this + 2) = 0;
      }
      if ( a2 )
        NiLeaveCriticalSection_0(*(LPCRITICAL_SECTION *)(*(this + 3) + 4));
    }
  }
}
