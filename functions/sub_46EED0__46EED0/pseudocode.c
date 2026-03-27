void __thiscall sub_46EED0(char *this, char a2, int a3)
{
  char *v3; // esi
  UInt32 *v4; // edi
  TESForm *v5; // eax
  _DWORD *v6; // eax

  if ( (a2 & 8) != 0 )
  {
    v3 = this + 4;
    if ( this != (char *)0xFFFFFFFC )
    {
      do
      {
        v4 = *(UInt32 **)v3;
        if ( !*(_DWORD *)v3 || (v5 = TESForm_LookupByFormID(*v4), (*v4 = (UInt32)v5) != 0) )
        {
          v3 = *((char **)v3 + 1);
        }
        else
        {
          v6 = *((_DWORD **)v3 + 1);
          if ( v6 )
          {
            *((_DWORD *)v3 + 1) = v6[1];
            *(_DWORD *)v3 = *v6;
            FormHeapFree((unsigned int)v6);
          }
          else
          {
            *(_DWORD *)v3 = 0;
          }
          FormHeapFree((unsigned int)v4);
        }
      }
      while ( v3 );
    }
  }
}
