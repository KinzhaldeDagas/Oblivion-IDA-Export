void __thiscall sub_49F5F0(float *this, float a2)
{
  int v3; // edi
  size_t v4; // [esp+4h] [ebp-10h]
  size_t v5; // [esp+4h] [ebp-10h]
  size_t v6; // [esp+4h] [ebp-10h]
  size_t v7; // [esp+4h] [ebp-10h]
  size_t v8; // [esp+4h] [ebp-10h]
  float Dst; // [esp+10h] [ebp-4h] BYREF
  float v10; // [esp+18h] [ebp+4h]

  LODWORD(v4) = 4;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &Dst, v4);
  LODWORD(v5) = 4;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, this + 0x11, v5);
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) < 0x71u )
  {
    LODWORD(v6) = 4;
    SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &Dst, v6);
  }
  LODWORD(v6) = 4;
  *(this + 0x12) = Dst - a2;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, this + 0xD, v6);
  LODWORD(v7) = 4;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, this + 0xE, v7);
  LODWORD(v8) = 4;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, this + 0x15, v8);
  v3 = *((_DWORD *)this + 0x11);
  *(this + 0x13) = -flt_A7DEB4;
  *(this + 0x14) = -flt_A7DEB4;
  if ( (unsigned int)(v3 - 1) <= 2 )
  {
    v10 = *(this + 0x12) + a2;
    sub_6C5FC0((int)this, v10, 1);
  }
}
