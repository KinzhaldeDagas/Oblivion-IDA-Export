void __thiscall sub_4D8270(_BYTE *this, int a2)
{
  int v3; // eax
  ExtraDataList *v4; // ecx
  bool v5; // al
  bool v6; // zf
  int v7; // eax

  if ( a2 == 4 )
  {
    v3 = sub_4533F0(SaveLoad_CurrentSavegame, (int)this, 0);
    v4 = (ExtraDataList *)(this + 0x44);
    if ( (v3 & 0x40000) != 0 )
      v5 = !sub_41F830(v4, 8);
    else
      v5 = sub_41F830(v4, 8);
    v6 = !v5;
    v7 = *(_DWORD *)this;
    if ( !v6 )
    {
      (*(void (__thiscall **)(_BYTE *, int))(v7 + 0x44))(this, 0x80000);
      sub_423DF0((ExtraDataList *)(this + 0x44), 4);
      return;
    }
    (*(void (__thiscall **)(_BYTE *, int))(v7 + 0x40))(this, 0x80000);
  }
  sub_423DF0((ExtraDataList *)(this + 0x44), a2);
}
