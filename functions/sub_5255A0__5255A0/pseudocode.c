int __thiscall sub_5255A0(TESForm *this)
{
  int v2; // esi
  LONG (__stdcall *v3)(volatile LONG *); // ebp
  int v4; // esi
  UInt32 (__thiscall *GetSaveSize)(TESForm *, UInt32); // eax
  bool v6; // zf
  TESForm *v7; // eax
  int *v8; // eax
  TESForm *v9; // esi
  int v10; // ebx
  TESFormVtbl *vtbl; // eax
  int (__thiscall *v12)(char *, int); // eax
  int result; // eax
  int v14; // [esp-4h] [ebp-1Ch]
  int v15; // [esp+10h] [ebp-8h]

  *((_DWORD *)this + 0x3B) = 0;
  *((_DWORD *)this + 0x3C) = 0;
  *((_DWORD *)this + 0x3D) = 0;
  *((_DWORD *)this + 0x3E) = 0;
  *((_DWORD *)this + 0x3F) = 0;
  *((_BYTE *)this + 0x100) = 0;
  *((float *)this + 0x73) = 0.0;
  *((_DWORD *)this + 0x72) = 0;
  *((_DWORD *)this + 0x74) = 0;
  if ( !sub_45A500(SaveLoad_CurrentSavegame) )
  {
    v2 = *((_DWORD *)this + 0x76);
    v3 = InterlockedDecrement;
    if ( v2 )
    {
      if ( !v3((volatile LONG *)(v2 + 4)) )
        (**(void (__thiscall ***)(int, int))v2)(v2, 1);
      *((_DWORD *)this + 0x76) = 0;
    }
    sub_55E2A0((int *)this + 0x75, (int *)this + 0x76);
    v4 = *((_DWORD *)this + 0x77);
    if ( v4 )
    {
      if ( !v3((volatile LONG *)(v4 + 4)) )
        (**(void (__thiscall ***)(int, int))v4)(v4, 1);
      *((_DWORD *)this + 0x77) = 0;
    }
  }
  GetSaveSize = this->vtbl[1].GetSaveSize;
  *((_WORD *)this + 0xF0) = 0xFF;
  *((_DWORD *)this + 0x41) = 0;
  *((_DWORD *)this + 0x79) = 0;
  *((_DWORD *)this + 0x7A) = 0x19324B;
  v6 = GetSaveSize(this, 0x45) == 0;
  v7 = this + 0xF;
  if ( v6 )
    v7 = this + 0xB;
  v14 = (int)v7;
  v8 = (int *)sub_5538D0();
  sub_5528F0(v8, v14);
  v9 = (TESForm *)((char *)this + 0x114);
  v15 = 2;
  do
  {
    v10 = 2;
    do
    {
      if ( v9[0xFFFFFFFF].member.refID )
      {
        if ( !v9->vtbl || !((signed int)(*(_DWORD *)&v9->member.type - (unsigned int)v9->vtbl) >> 2) )
          _invalid_parameter_noinfo();
        _memset(v9->vtbl, 0, 4 * v9[0xFFFFFFFF].member.refID * (UInt32)v9[0xFFFFFFFF].member.modlist.data);
      }
      if ( v9[3].member.refID )
      {
        vtbl = v9[4].vtbl;
        if ( !vtbl || !((*(_DWORD *)&v9[4].member.type - (int)vtbl) >> 2) )
          _invalid_parameter_noinfo();
        _memset(v9[4].vtbl, 0, 4 * v9[3].member.refID * (UInt32)v9[3].member.modlist.data);
      }
      ++v9;
      --v10;
    }
    while ( v10 );
    --v15;
  }
  while ( v15 );
  *((_DWORD *)this + 0x3B) = 0x5050505;
  *((_DWORD *)this + 0x3C) = 0x5050505;
  *((_DWORD *)this + 0x3D) = 0x5050505;
  *((_DWORD *)this + 0x3E) = 0x5050505;
  *((_DWORD *)this + 0x3F) = 0x5050505;
  *((_BYTE *)this + 0x100) = 5;
  j_TESForm_InitializeComponents(this);
  v12 = *(int (__thiscall **)(char *, int))(*((_DWORD *)this + 9) + 0x50);
  *((_DWORD *)this + 0xA) &= ~0x200u;
  result = v12((char *)this + 0x24, 0x10);
  *((_DWORD *)this + 0x21) = 0x32;
  return result;
}
