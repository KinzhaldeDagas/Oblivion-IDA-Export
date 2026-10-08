char __userpurge sub_721610@<al>(NiRenderer *this@<ecx>, size_t Size)
{
  unsigned int *v3; // esi
  int (__cdecl *v4)(unsigned int, size_t *, int, _DWORD *, int); // eax
  NiObject *v5; // eax
  int v6; // edi
  NiObject *v7; // eax
  unsigned int v9; // [esp-14h] [ebp-34h]
  _DWORD v10[2]; // [esp+Ch] [ebp-14h] BYREF
  unsigned int v11; // [esp+1Ch] [ebp-4h]

  v3 = (unsigned int *)Size; /*0x721637*/
  sub_7008A0(this, Size); /*0x72163c*/
  if ( v3[0x36] >= 0x500000B ) /*0x72164d*/
  {
    LOBYTE(v5) = sub_713620(v3, (int)&this->members.accumulator); /*0x721716*/
  }
  else
  {
    sub_712A20(v3); /*0x721653*/
    v9 = v3[0x87]; /*0x72166c*/
    v4 = *(int (__cdecl **)(unsigned int, size_t *, int, _DWORD *, int))(v9 + 4); /*0x72166d*/
    v10[0] = 4; /*0x721670*/
    LOBYTE(v5) = v4(v9, &Size, 4, v10, 1); /*0x721678*/
    if ( (_DWORD)Size ) /*0x721682*/
    {
      if ( this ) /*0x72168a*/
      {
        LOBYTE(v5) = (*(int (__thiscall **)(NiRenderer *))&this->__vftable->gap0[4])(this) == (_DWORD)&stru_B3FD44; /*0x72169e*/
        if ( (_BYTE)v5 ) /*0x7216a3*/
        {
          v6 = FormHeapAlloc(Size); /*0x7216b4*/
          sub_6D7C20((signed int)v3, v6, Size); /*0x7216b8*/
          v7 = (NiObject *)FormHeapAlloc(0x14u); /*0x7216bf*/
          v10[1] = v7; /*0x7216c7*/
          v11 = 0; /*0x7216cd*/
          if ( v7 ) /*0x7216d5*/
            v5 = sub_4C15F0(v7, Size, v6); /*0x7216df*/
          else
            v5 = 0; /*0x7216e6*/
          v11 = 0xFFFFFFFF; /*0x7216ea*/
          if ( v5 ) /*0x7216f2*/
            LOBYTE(v5) = (*(char (__thiscall **)(unsigned int *, NiObject *))(*v3 + 0x24))(v3, v5); /*0x7216fc*/
        }
      }
    }
  }
  return (char)v5; /*0x7216fe*/
}
