char __cdecl sub_478220(NiObjectNET *a1, int a2, int a3, TESObjectREFR *a4)
{
  NiExtraData *ExtraData; // eax
  int v5; // eax
  int v6; // eax

  ExtraData = NiObjectNET_GetExtraData(a1, dword_A7D0EC);
  if ( ExtraData )
  {
    ExtraData = (NiExtraData *)((unsigned int)ExtraData[1].__vftable >> 4);
    if ( ((unsigned __int8)ExtraData & 1) != 0 )
    {
      if ( a4 )
      {
        if ( a3 == 0xE )
        {
          v5 = ((int (__thiscall *)(TESObjectREFR *))a4->vtbl->Unk_5A)(a4);
          if ( v5 )
          {
            v6 = *(_DWORD *)(v5 + 0x130);
            if ( v6 )
              sub_4B1600((void *)(v6 - 0x30), a4, a2);
          }
        }
      }
      LOBYTE(ExtraData) = sub_4E26F0(a2);
    }
  }
  return (char)ExtraData;
}
