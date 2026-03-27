void __thiscall sub_4D7880(char *this, int a2)
{
  ExtraDataList *v3; // edi
  int v4; // eax
  char v5; // al

  v3 = (ExtraDataList *)(this + 0x44);
  if ( this != (char *)0xFFFFFFBC
    && *(_BYTE *)((*(int (__thiscall **)(char *))(*(_DWORD *)this + 0x170))(this) + 4) == 0x1E )
  {
    v4 = (*(int (__thiscall **)(char *))(*(_DWORD *)this + 0x170))(this);
    if ( v4 )
    {
      v5 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v4 + 0x124))(v4, a2);
      sub_423BD0(v3, v5);
    }
  }
}
