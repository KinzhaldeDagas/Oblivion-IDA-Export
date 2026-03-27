void __thiscall sub_8AB7B0(NiRenderer *this, signed int a2)
{
  signed int v2; // edi
  void (__cdecl *v4)(int, unsigned int *, int, float *, int); // eax
  int v5; // ebp
  int v6; // eax
  unsigned int v7; // edi
  int v8; // [esp-14h] [ebp-38h]
  unsigned int v9; // [esp+10h] [ebp-14h] BYREF
  float v10; // [esp+14h] [ebp-10h] BYREF
  float v11[3]; // [esp+18h] [ebp-Ch] BYREF

  v2 = a2;
  sub_715F40(this, a2);
  v8 = *(_DWORD *)(a2 + 0x21C);
  v4 = *(void (__cdecl **)(int, unsigned int *, int, float *, int))(v8 + 4);
  LODWORD(v10) = 4;
  v4(v8, &v9, 4, &v10, 1);
  sub_8AA480(&this->members.pad014[0xB], v9);
  v5 = 0;
  if ( v9 )
  {
    v10 = 0.0 / fCostant_100;
    while ( 1 )
    {
      v6 = *(_DWORD *)(v2 + 0x21C);
      v11[0] = flt_A30634;
      v11[2] = v10;
      v11[1] = v10;
      (*(void (__cdecl **)(int, float *, int, _DWORD, _DWORD))(v6 + 4))(v6, v11, 0xC, 0, 0);
      v7 = this->members.pad014[0xE];
      if ( v7 >= this->members.pad014[0xD] )
        sub_8AA480(&this->members.pad014[0xB], v7 + this->members.pad014[0x10]);
      sub_8AA710(&this->members.pad014[0xB], v7, (int)v11);
      this->members.pad014[0xA] = 0;
      sub_8AABE0((int)this);
      if ( ++v5 >= v9 )
        break;
      v2 = a2;
    }
  }
}
