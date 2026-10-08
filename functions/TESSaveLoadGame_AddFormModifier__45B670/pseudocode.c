char __thiscall TESSaveLoadGame_AddFormModifier(_BYTE *this, _DWORD *a2, int a3)
{
  int v4; // eax
  _DWORD *v5; // ecx

  v4 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]); /*0x45b67f*/
  if ( *(_BYTE *)(v4 + 0x185) ) /*0x45b682*/
  {
    if ( !*(_BYTE *)(v4 + 0x184) && !*(_BYTE *)(MEMORY[0xB33A98] + 0xCD4) ) /*0x45b69a*/
    {
      v4 = a2[2] >> 0xE; /*0x45b6ab*/
      if ( (a2[2] & 0x4000) == 0 ) /*0x45b6b0*/
      {
        LOBYTE(v4) = sub_45A500(this); /*0x45b6b4*/
        if ( (_BYTE)v4 ) /*0x45b6bb*/
        {
          if ( (*((_DWORD *)this + 6) & 8) != 0 ) /*0x45b6c6*/
          {
            v5 = *((_DWORD **)this + 1); /*0x45b6c8*/
            if ( v5 ) /*0x45b6cd*/
              LOBYTE(v4) = (unsigned __int8)sub_452C20(v5, a2, a3); /*0x45b6d5*/
          }
        }
        else
        {
          LOBYTE(v4) = (unsigned __int8)sub_452C20(*(_DWORD **)this, a2, a3); /*0x45b6e7*/
        }
      }
    }
  }
  return v4; /*0x45b6db*/
}
