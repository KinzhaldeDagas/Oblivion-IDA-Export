char __userpurge sub_4C79A0@<al>(
        int this@<ecx>,
        char bp0@<bpl>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        char a6)
{
  char v7; // bl
  int v8; // eax
  char v10; // al
  char v11; // [esp+Ch] [ebp+4h]

  if ( sub_57BAC0(bp0, a3, a4, a5) )
    v7 = 0;
  else
    v7 = a6;
  v8 = *(_DWORD *)(this + 0x1C);
  if ( (v8 & 8) != 0 )
  {
    if ( **(_DWORD **)(this + 0x24) )
      return 1;
LABEL_6:
    if ( v7 )
      sub_4C5640(this);
    return 1;
  }
  if ( (v8 & 0x400) == 0 && ((v8 & 7) == 0 || !TESForm_GetOverrideFile((TESForm *)this, 0xFFFFFFFF)) )
  {
    sub_4C64E0((TESObjectCELL **)this);
    goto LABEL_6;
  }
  sub_4C64E0((TESObjectCELL **)this);
  v10 = sub_4C4C80(this);
  *(_DWORD *)(this + 0x1C) |= 8u;
  v11 = v10;
  if ( v7 )
    sub_4C5640(this);
  return v11;
}
