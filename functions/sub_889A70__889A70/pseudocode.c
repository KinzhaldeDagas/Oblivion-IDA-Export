void __thiscall sub_889A70(bhkWorld *this, int a2)
{
  int v3; // ebx
  _WORD *v4; // esi
  int v5; // ecx
  bool v6; // zf
  _WORD *v7; // eax
  UInt32 v8; // eax
  int v9; // esi
  _DWORD *v10; // eax
  _DWORD v11[11]; // [esp-4h] [ebp-2Ch] BYREF

  if ( a2 )
  {
    v3 = a2 - 0xA0;
    if ( a2 != 0xA0 )
    {
      *(_BYTE *)(v3 + 0x94) = 1;
      v4 = (_WORD *)(*(int (__thiscall **)(int, int, int, _DWORD, _DWORD))(*(_DWORD *)dword_BA7D98 + 0x10))(
                      dword_BA7D98,
                      0x2C0,
                      0x2C,
                      v11[3],
                      v11[4]);
      v4[2] = 0x2C0;
      v11[9] = v4;
      sub_89A230(v3, 0x7595);
      *(_DWORD *)v4 = &ahkWorld::`vftable';
      *((_DWORD *)v4 + 0xAC) = 0;
      v6 = dword_BA7904 == 0;
      v11[0xA] = 0xFFFFFFFF;
      if ( !v6 )
      {
        v11[2] = 1;
        v11[1] = 0;
        v11[0] = v5;
        LOBYTE(v11[0]) = 1;
        v7 = (_WORD *)dword_BA7904;
        v11[7] = v11;
        sub_89D340(v4, v7, 1, 0, 1);
      }
      this->__vftable[1].super.Destructor((NiRefObject *)this, (bool)v4);
      if ( v4[2] )
      {
        if ( !--v4[3] )
          (**(void (__thiscall ***)(_WORD *, int))v4)(v4, 1);
      }
      this->__vftable[1].DumpAttributes(this, 0);
      v8 = this->__vftable[1].Unk_03(this);
      if ( v8 )
        sub_8BBC60(*(int **)(v8 + 0x7C));
      v9 = dword_BA7A00;
      if ( dword_BA7A00 )
      {
        v10 = (_DWORD *)this->__vftable[1].Unk_03(this);
        if ( v10 )
          sub_899D60(v10, v9);
      }
    }
  }
}
