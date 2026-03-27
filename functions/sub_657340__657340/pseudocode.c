unsigned int __thiscall sub_657340(void *this, _DWORD *Dst)
{
  _DWORD *v3; // esi
  unsigned int result; // eax
  int (__thiscall ***v5)(_DWORD, int); // ebx
  _DWORD *v6; // ebx
  int v7; // eax
  TESSaveLoad *v8; // ecx
  void *v9; // edx
  size_t v10; // [esp-4h] [ebp-30h]
  size_t v11; // [esp-4h] [ebp-30h]
  size_t v12; // [esp-4h] [ebp-30h]
  size_t v13; // [esp-4h] [ebp-30h]
  size_t v14; // [esp-4h] [ebp-30h]
  size_t v15; // [esp-4h] [ebp-30h]
  size_t v16; // [esp-4h] [ebp-30h]
  size_t v17; // [esp-4h] [ebp-30h]
  size_t v18; // [esp-4h] [ebp-30h]
  unsigned int v19; // [esp+Ch] [ebp-20h] BYREF
  int v20; // [esp+10h] [ebp-1Ch] BYREF
  NiPoint3 a2; // [esp+14h] [ebp-18h] BYREF
  float v22[3]; // [esp+20h] [ebp-Ch] BYREF

  v3 = *(_DWORD **)(*(int (__thiscall **)(void *, unsigned int *))(*(_DWORD *)this + 0x18C))(this, &v19);
  result = v19;
  if ( v19 )
  {
    v5 = (int (__thiscall ***)(_DWORD, int))v19;
    result = InterlockedDecrement((volatile LONG *)(v19 + 4));
    if ( !result )
      result = (**v5)(v5, 1);
  }
  if ( v3 )
  {
    v6 = Dst;
    result = (*(int (__thiscall **)(_DWORD *, _DWORD))(*Dst + 0x198))(Dst, 0);
    if ( !(_BYTE)result )
    {
      LODWORD(v10) = 4;
      SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &Dst, v10);
      LODWORD(v11) = 4;
      v3[0x7B] = Dst;
      SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, v3 + 0xA8, v11);
      LODWORD(v12) = 4;
      SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &v20, v12);
      v7 = v20;
      v3[0x7D] = 0;
      v3[0x7D] |= v7;
      if ( (v7 & 0x800) != 0 && LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x23u )
      {
        LODWORD(v13) = 0xC;
        SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &a2, v13);
        if ( (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x36C))(this) )
        {
          if ( (*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x380))(this) )
          {
            if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *))(*v6 + 0x190))(v6)
              || !(*(int (__thiscall **)(_DWORD *))(*v6 + 0x380))(v6) )
            {
              a2 = *(NiPoint3 *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x380))(this);
            }
          }
        }
        sub_452A10((bhkCharacterProxy *)v3, &a2);
      }
      if ( !(*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x36C))(this) )
        sub_65AC20(v6, 0);
      LODWORD(v13) = 0x10;
      SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, v3 + 0xB8, v13);
      LODWORD(v14) = 0x10;
      SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, v3 + 0xBC, v14);
      LODWORD(v15) = 0xC;
      SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, v22, v15);
      sub_64B3A0(v3, v22);
      result = (*(int (__thiscall **)(_DWORD *))(*v6 + 0x190))(v6);
      if ( (_BYTE)result )
      {
        LODWORD(v16) = 4;
        SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, v3 + 0xC7, v16);
        v8 = SaveLoad_CurrentSavegame;
        v9 = v3 + 0xC8;
      }
      else
      {
        v8 = SaveLoad_CurrentSavegame;
        if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) < 0x20u )
        {
LABEL_21:
          if ( Dst == (_DWORD *)2 )
          {
            result = v3[0x7D];
            if ( (result & 0x100) != 0 || (result >>= 9, (result & 1) != 0) )
              *((float *)v3 + 0xC8) = 0.0;
          }
          if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x77u )
          {
            LODWORD(v16) = 4;
            SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, v3 + 0xCB, v16);
            LODWORD(v18) = 4;
            return (unsigned int)SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, v3 + 0xCC, v18);
          }
          return result;
        }
        v9 = v3 + 0xCA;
      }
      LODWORD(v16) = 4;
      SaveLoad_LoadData((int)v8, v9, v16);
      LODWORD(v17) = 4;
      result = (unsigned int)SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, v3 + 0xC9, v17);
      goto LABEL_21;
    }
  }
  return result;
}
