void __userpurge sub_595FC0(int a1@<ecx>, double a2@<st2>, double a3@<st1>, int a4, int a5)
{
  PlayerCharacterVtbl *vtbl; // edi
  signed __int16 ExtraCount; // ax

  if ( a4 == 0x1F )
  {
    sub_595F30(a1, a2, a3);
  }
  else if ( a4 == 0x20 )
  {
    vtbl = TESDataHandler_g_PlayerRef->vtbl;
    ExtraCount = ExtraDataList_GetExtraCount((ExtraDataList *)(*(_DWORD *)(a1 + 0x30) + 0x44));
    ((void (__thiscall *)(PlayerCharacter *, _DWORD, _DWORD, _DWORD))vtbl->super.Unk_B3)(
      TESDataHandler_g_PlayerRef,
      *(_DWORD *)(a1 + 0x30),
      ExtraCount,
      0);
    sub_595F30(a1, a2, a3);
  }
}
