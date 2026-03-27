void __thiscall sub_450430(unsigned int *this)
{
  unsigned int v2; // edi
  int v3; // ebp
  unsigned int *v4; // eax

  v2 = *(this + 0xA1);
  if ( v2 )
  {
    v3 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
    do
    {
      if ( *(_BYTE *)(v3 + 0x184) )
      {
        TESFile_CloseGroupRecord((int)this);
      }
      else
      {
        v4 = (unsigned int *)*(this + 0xA2);
        if ( v4 )
        {
          *(this + 0xA2) = v4[1];
          *(this + 0xA1) = *v4;
          FormHeapFree((unsigned int)v4);
        }
        else
        {
          *(this + 0xA1) = 0;
        }
        FormHeapFree(v2);
      }
      v2 = *(this + 0xA1);
    }
    while ( v2 );
  }
}
