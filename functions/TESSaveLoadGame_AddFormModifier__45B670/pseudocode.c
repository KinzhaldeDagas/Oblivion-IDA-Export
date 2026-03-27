char __thiscall TESSaveLoadGame_AddFormModifier(_BYTE *this, _DWORD *a2, int a3)
{
  int v4; // eax
  _DWORD *v5; // ecx

  v4 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
  if ( *(_BYTE *)(v4 + 0x185) )
  {
    if ( !*(_BYTE *)(v4 + 0x184) && !*(_BYTE *)(TESDataHandler + 0xCD4) )
    {
      v4 = a2[2] >> 0xE;
      if ( (a2[2] & 0x4000) == 0 )
      {
        LOBYTE(v4) = sub_45A500(this);
        if ( (_BYTE)v4 )
        {
          if ( (*((_DWORD *)this + 6) & 8) != 0 )
          {
            v5 = *((_DWORD **)this + 1);
            if ( v5 )
              LOBYTE(v4) = (unsigned __int8)sub_452C20(v5, a2, a3);
          }
        }
        else
        {
          LOBYTE(v4) = (unsigned __int8)sub_452C20(*(_DWORD **)this, a2, a3);
        }
      }
    }
  }
  return v4;
}
