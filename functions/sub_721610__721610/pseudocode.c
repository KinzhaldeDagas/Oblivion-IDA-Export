char __userpurge sub_721610@<al>(NiRenderer *this@<ecx>, size_t Size)
{
  unsigned int *v3; // esi
  int (__cdecl *v4)(unsigned int, size_t *, int, _DWORD *, int); // eax
  _DWORD *v5; // eax
  int v6; // edi
  _DWORD *v7; // eax
  unsigned int v9; // [esp-14h] [ebp-34h]
  _DWORD v10[2]; // [esp+Ch] [ebp-14h] BYREF
  unsigned int v11; // [esp+1Ch] [ebp-4h]

  v3 = (unsigned int *)Size;
  sub_7008A0(this, Size);
  if ( v3[0x36] >= 0x500000B )
  {
    LOBYTE(v5) = sub_713620(v3, (int)&this->members.accumulator);
  }
  else
  {
    sub_712A20(v3);
    v9 = v3[0x87];
    v4 = *(int (__cdecl **)(unsigned int, size_t *, int, _DWORD *, int))(v9 + 4);
    v10[0] = 4;
    LOBYTE(v5) = v4(v9, &Size, 4, v10, 1);
    if ( (_DWORD)Size )
    {
      if ( this )
      {
        LOBYTE(v5) = (*(int (__thiscall **)(NiRenderer *))&this->__vftable->gap0[4])(this) == (_DWORD)dword_B3FD44;
        if ( (_BYTE)v5 )
        {
          v6 = FormHeapAlloc(Size);
          sub_6D7C20((signed int)v3, v6, Size);
          v7 = (_DWORD *)FormHeapAlloc(0x14u);
          v10[1] = v7;
          v11 = 0;
          if ( v7 )
            v5 = sub_4C15F0(v7, Size, v6);
          else
            v5 = 0;
          v11 = 0xFFFFFFFF;
          if ( v5 )
            LOBYTE(v5) = (*(char (__thiscall **)(unsigned int *, _DWORD *))(*v3 + 0x24))(v3, v5);
        }
      }
    }
  }
  return (char)v5;
}
