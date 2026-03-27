char __thiscall sub_6B7D30(const char ***this)
{
  TESSaveLoad *v2; // ecx
  _BYTE *v3; // ebp
  int v4; // edx
  const char ***i; // esi
  int *v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v10; // edi
  size_t v12; // [esp-4h] [ebp-28h]
  size_t v13; // [esp-4h] [ebp-28h]
  char Src; // [esp+12h] [ebp-12h] BYREF
  char v15; // [esp+13h] [ebp-11h] BYREF
  int v16; // [esp+14h] [ebp-10h] BYREF
  int v17; // [esp+18h] [ebp-Ch] BYREF
  int v18; // [esp+1Ch] [ebp-8h] BYREF
  int v19; // [esp+20h] [ebp-4h] BYREF

  v2 = SaveLoad_CurrentSavegame;
  LODWORD(v12) = 1;
  Src = 0;
  v3 = (_BYTE *)v2->unk000[5];
  SaveLoad_SaveData((int)v2, &Src, v12);
  for ( i = this; i; i = (const char ***)i[1] )
  {
    if ( !i[1] && !*i )
      break;
    sub_6B84A0(*i);
    ++Src;
  }
  *v3 = Src;
  v6 = (int *)*(this + 2);
  v15 = 0xFF;
  if ( v6 )
    v15 = sub_6B7C60(this, v4, *v6);
  LODWORD(v13) = 1;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, &v15, v13);
  v7 = (int)*(this + 3);
  v16 = 0;
  if ( v7 )
    v16 = *(_DWORD *)(v7 + 0xC);
  SaveLoad_SaveFormID(SaveLoad_CurrentSavegame, (int)&v16, 4u);
  v8 = (int)*(this + 4);
  v17 = 0;
  if ( v8 )
    v17 = *(_DWORD *)(v8 + 0xC);
  SaveLoad_SaveFormID(SaveLoad_CurrentSavegame, (int)&v17, 4u);
  v9 = (int)*(this + 5);
  v18 = 0;
  if ( v9 )
    v18 = *(_DWORD *)(v9 + 0xC);
  SaveLoad_SaveFormID(SaveLoad_CurrentSavegame, (int)&v18, 4u);
  v10 = (int)*(this + 6);
  v19 = 0;
  if ( v10 )
    v19 = *(_DWORD *)(v10 + 0xC);
  return SaveLoad_SaveFormID(SaveLoad_CurrentSavegame, (int)&v19, 4u);
}
