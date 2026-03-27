void __thiscall sub_4ECF90(int this)
{
  Ni2DBuffer *v2; // eax
  Ni2DBuffer *v3; // eax
  char v4[260]; // [esp+4h] [ebp-414h] BYREF
  int v5[65]; // [esp+108h] [ebp-310h] BYREF
  char Str1[260]; // [esp+20Ch] [ebp-20Ch] BYREF
  int v7[65]; // [esp+310h] [ebp-108h] BYREF

  if ( !*(_DWORD *)(this + 0x1C)
    || *(unsigned __int16 *)(*(_DWORD *)(this + 0x1C) + 0xC) == *(_DWORD *)(*(_DWORD *)(this + 0x1C) + 0x10) )
  {
    if ( *(_BYTE *)(this + 0x28) )
    {
      if ( *(_DWORD *)(this + 0xC) )
      {
        sub_436F30(this);
      }
      else
      {
        _sprintf(
          Str1,
          "Textures\\LandscapeLOD\\Generated\\%i.%02i.%02i.%i.dds",
          *(_DWORD *)(this + 0x2C),
          *(_DWORD *)(this + 0x30),
          *(_DWORD *)(this + 0x34),
          0x20);
        _sprintf(
          v4,
          "Textures\\LandscapeLOD\\Generated\\%i.%02i.%02i.%i_FN.dds",
          *(_DWORD *)(this + 0x2C),
          *(_DWORD *)(this + 0x30),
          *(_DWORD *)(this + 0x34),
          0x20);
        sub_47D8F0(Str1, (char *)v5);
        sub_47D8F0(v4, (char *)v7);
        v2 = (Ni2DBuffer *)(*(int (__thiscall **)(UInt32, int *, _DWORD))(*(_DWORD *)dword_B35300 + 4))(
                             dword_B35300,
                             v5,
                             0);
        NiSmartPointer_Set__((Ni2DBuffer **)(this + 0x40), v2);
        v3 = (Ni2DBuffer *)(*(int (__thiscall **)(UInt32, int *, _DWORD))(*(_DWORD *)dword_B35300 + 4))(
                             dword_B35300,
                             v7,
                             0);
        NiSmartPointer_Set__((Ni2DBuffer **)(this + 0x44), v3);
        (*((void (__thiscall **)(IOManager *, int))ioManager->vtbl + 0xF))(ioManager, this);
      }
    }
  }
}
