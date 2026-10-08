char __cdecl sub_4DACF0(Atmosphere *a1, int a2)
{
  Atmosphere *v2; // ebp
  int v3; // edi
  char *PointerAtOffset08; // eax
  char *v5; // ebx
  const char *v6; // esi
  char *v7; // esi
  _DWORD *v8; // ecx
  bool v9; // zf
  float Src[3]; // [esp+10h] [ebp-1Ch] BYREF
  float source[4]; // [esp+1Ch] [ebp-10h] BYREF

  v2 = a1; /*0x4dacf9*/
  a2 = *(_DWORD *)(a2 + 0xC); /*0x4dad04*/
  v3 = a2; /*0x4dacff*/
  PointerAtOffset08 = (char *)Shared_GetPointerAtOffset08(a1); /*0x4dad08*/
  v5 = PointerAtOffset08; /*0x4dad10*/
  if ( v2 != *(Atmosphere **)(v3 + 0x10) ) /*0x4dad12*/
  {
    if ( PointerAtOffset08 ) /*0x4dad16*/
    {
      v6 = *((const char **)PointerAtOffset08 + 2); /*0x4dad18*/
      if ( v6 ) /*0x4dad1d*/
      {
        if ( !strcmp(v6, "Arrow") ) /*0x4dad2d*/
          return (char)PointerAtOffset08; /*0x4dad2d*/
        v3 = a2; /*0x4dad33*/
      }
    }
  }
  if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(v3 + 8) + 0x190))(*(_DWORD *)(v3 + 8)) /*0x4dad57*/
    && v5
    && (PointerAtOffset08 = (char *)(*(int (__thiscall **)(char *))(*(_DWORD *)v5 + 4))(v5)) != 0 )
  {
    while ( PointerAtOffset08 != &MEMORY[0xB33E90][0x13F8] ) /*0x4dad65*/
    {
      PointerAtOffset08 = *((char **)PointerAtOffset08 + 1); /*0x4dad6b*/
      if ( !PointerAtOffset08 ) /*0x4dad70*/
        goto LABEL_11; /*0x4dad70*/
    }
  }
  else
  {
LABEL_11:
    PointerAtOffset08 = (char *)v2->unk10; /*0x4dad72*/
    if ( PointerAtOffset08 ) /*0x4dad77*/
    {
      PointerAtOffset08 = (char *)NiRTTI_Cast((BSStringT *)&stru_BA7D84, (NiObject *)v2->unk10); /*0x4dad83*/
      v7 = PointerAtOffset08; /*0x4dad88*/
      if ( PointerAtOffset08 ) /*0x4dad8f*/
      {
        if ( v2 != *(Atmosphere **)(v3 + 0x10) ) /*0x4dad98*/
        {
          sub_4D6900(PointerAtOffset08, Src); /*0x4dada1*/
          sub_4D6950(v7, source); /*0x4dadad*/
          SaveLoad_SaveData(g_TESSaveLoadGame, Src, 0xCu); /*0x4dadbf*/
          SaveLoad_SaveData(g_TESSaveLoadGame, source, 0x10u); /*0x4dadd1*/
        }
        v8 = *((_DWORD **)v7 + 2); /*0x4dadd6*/
        if ( v8 ) /*0x4daddb*/
          LOBYTE(PointerAtOffset08) = *sub_8A63F0(v8, &a1) != 0; /*0x4dadea*/
        else
          LOBYTE(PointerAtOffset08) = 0; /*0x4dadef*/
        v9 = (*(_BYTE *)v3 & 4) == 0; /*0x4dadf1*/
        LOBYTE(a2) = (_BYTE)PointerAtOffset08; /*0x4dadf4*/
        if ( !v9 ) /*0x4dadf8*/
          LOBYTE(PointerAtOffset08) = (unsigned __int8)SaveLoad_SaveData(g_TESSaveLoadGame, &a2, 1u); /*0x4dae07*/
        if ( (_BYTE)a2 ) /*0x4dae11*/
        {
          sub_4D98E0(v7, Src); /*0x4dae1a*/
          sub_4D9920(v7, source); /*0x4dae26*/
          SaveLoad_SaveData(g_TESSaveLoadGame, Src, 0xCu); /*0x4dae38*/
          LOBYTE(PointerAtOffset08) = (unsigned __int8)SaveLoad_SaveData(g_TESSaveLoadGame, source, 0xCu); /*0x4dae4a*/
        }
      }
    }
  }
  return (char)PointerAtOffset08; /*0x4dae4f*/
}
