char __cdecl sub_4DACF0(Atmosphere *a1, int a2)
{
  Atmosphere *v2; // ebp
  int v3; // edi
  char *unk10; // eax
  char *v5; // ebx
  const char *v6; // esi
  char *v7; // esi
  _DWORD *v8; // ecx
  bool v9; // zf
  size_t v11; // [esp-4h] [ebp-30h]
  size_t v12; // [esp-4h] [ebp-30h]
  size_t v13; // [esp-4h] [ebp-30h]
  float Src[3]; // [esp+10h] [ebp-1Ch] BYREF
  float v15[4]; // [esp+1Ch] [ebp-10h] BYREF

  v2 = a1;
  a2 = *(_DWORD *)(a2 + 0xC);
  v3 = a2;
  unk10 = (char *)sub_452A60(a1);
  v5 = unk10;
  if ( v2 != *(Atmosphere **)(v3 + 0x10) )
  {
    if ( unk10 )
    {
      v6 = *((const char **)unk10 + 2);
      if ( v6 )
      {
        if ( !strcmp(v6, "Arrow") )
          return (char)unk10;
        v3 = a2;
      }
    }
  }
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(v3 + 8) + 0x190))(*(_DWORD *)(v3 + 8))
    && v5
    && (unk10 = (char *)(*(int (__thiscall **)(char *))(*(_DWORD *)v5 + 4))(v5)) != 0 )
  {
    while ( unk10 != dword_B35288 )
    {
      unk10 = *((char **)unk10 + 1);
      if ( !unk10 )
        goto LABEL_11;
    }
  }
  else
  {
LABEL_11:
    unk10 = (char *)v2->unk10;
    if ( unk10 )
    {
      unk10 = (char *)NiRTTI_Cast((BSStringT *)dword_BA7D84, (NiObject *)v2->unk10);
      v7 = unk10;
      if ( unk10 )
      {
        if ( v2 != *(Atmosphere **)(v3 + 0x10) )
        {
          sub_4D6900(unk10, Src);
          sub_4D6950(v7, v15);
          LODWORD(v11) = 0xC;
          SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, Src, v11);
          LODWORD(v12) = 0x10;
          SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, v15, v12);
        }
        v8 = *((_DWORD **)v7 + 2);
        if ( v8 )
          LOBYTE(unk10) = *sub_8A63F0(v8, &a1) != 0;
        else
          LOBYTE(unk10) = 0;
        v9 = (*(_BYTE *)v3 & 4) == 0;
        LOBYTE(a2) = (_BYTE)unk10;
        if ( !v9 )
        {
          LODWORD(v11) = 1;
          LOBYTE(unk10) = (unsigned __int8)SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, &a2, v11);
        }
        if ( (_BYTE)a2 )
        {
          sub_4D98E0(v7, Src);
          sub_4D9920(v7, v15);
          LODWORD(v11) = 0xC;
          SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, Src, v11);
          LODWORD(v13) = 0xC;
          LOBYTE(unk10) = (unsigned __int8)SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, v15, v13);
        }
      }
    }
  }
  return (char)unk10;
}
