void __thiscall sub_43C9B0(_DWORD **this)
{
  TESForm *v2; // ebp
  int v3; // eax
  int v4; // edi
  int *v5; // eax
  IOTask *v6; // ebx
  int v7; // eax
  int v8; // ecx
  char v9; // al
  int v10; // [esp+14h] [ebp-14h] BYREF
  IOTask *v11; // [esp+18h] [ebp-10h] BYREF
  unsigned int v12; // [esp+24h] [ebp-4h]

  v2 = (TESForm *)(*(int (__thiscall **)(_DWORD))(**(this + 8) + 0x170))(*(this + 8)); /*0x43c9ec*/
  sub_435580(v2, (TESObjectREFR *)*(this + 8)); /*0x43c9f3*/
  v4 = v3; /*0x43c9f8*/
  if ( v3 )
  {
    if ( strlen((const char *)(*(int (__thiscall **)(int))(*(_DWORD *)v3 + 0x14))(v3)) )
    {
      v5 = (int *)sub_43B990(&v11, v2, BYTE2(*(this + 4)), (volatile LONG *)this, (TESObjectREFR *)*(this + 8)); /*0x43ca43*/
      v12 = 0; /*0x43ca4e*/
      sub_4348B0((int *)this + 9, v5); /*0x43ca56*/
      v12 = 0xFFFFFFFF; /*0x43ca61*/
      if ( v11 ) /*0x43ca69*/
      {
        v6 = v11; /*0x43ca6b*/
        if ( !InterlockedDecrement((volatile LONG *)&v11->members.unk08) ) /*0x43ca71*/
          (*(void (__thiscall **)(IOTask *, int))v6->vtbl)(v6, 1); /*0x43ca87*/
      }
      if ( !*(this + 9) )
      {
        v7 = (*(int (__thiscall **)(int))(*(_DWORD *)v4 + 0x14))(v4); /*0x43ca96*/
        v8 = *(_DWORD *)MEMORY[0xB33A1C]; /*0x43ca9e*/
        v10 = 0; /*0x43caa4*/
        v9 = (*(int (__thiscall **)(int, int, int *))(*(_DWORD *)v8 + 4))(v8, v7, &v10); /*0x43cab3*/
        sub_435AB0(this + 0xA, v9 != 0 ? v10 : 0);
      }
    }
  }
}
