__int16 __usercall sub_4A3020@<ax>(int a1@<esi>)
{
  TESSaveLoad *v1; // ecx
  _WORD *v2; // ebx
  int v3; // eax
  int *v4; // esi
  int v5; // eax
  bool v6; // zf
  size_t v8; // [esp-8h] [ebp-18h]
  size_t v9; // [esp-4h] [ebp-14h]
  int Src; // [esp+4h] [ebp-Ch] BYREF
  int v11; // [esp+8h] [ebp-8h] BYREF
  float v12; // [esp+Ch] [ebp-4h] BYREF

  v1 = SaveLoad_CurrentSavegame;
  LODWORD(v9) = 2;
  Src = 0;
  v2 = (_WORD *)v1->unk000[5];
  SaveLoad_SaveData((int)v1, &Src, v9);
  v3 = *(_DWORD *)(TESDataHandler + 0xBC);
  if ( v3 )
  {
    HIDWORD(v8) = a1;
    v4 = (int *)(v3 + 4);
    if ( v3 == 0xFFFFFFFC )
    {
      *v2 = Src;
    }
    else
    {
      while ( v4[1] || *v4 )
      {
        v5 = *v4;
        v6 = *v4 == 0;
        v12 = 0.0;
        v11 = 0;
        if ( !v6 )
        {
          v11 = *(_DWORD *)(v5 + 0xC);
          v12 = *(float *)(v5 + 0x28);
        }
        SaveLoad_SaveFormID(SaveLoad_CurrentSavegame, (int)&v11, 4u);
        LODWORD(v8) = 4;
        LOWORD(v3) = (unsigned __int16)SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, &v12, v8);
        ++Src;
        v4 = (int *)v4[1];
        if ( !v4 )
        {
          *v2 = Src;
          return v3;
        }
      }
      LOWORD(v3) = Src;
      *v2 = Src;
    }
  }
  else
  {
    *v2 = Src;
  }
  return v3;
}
