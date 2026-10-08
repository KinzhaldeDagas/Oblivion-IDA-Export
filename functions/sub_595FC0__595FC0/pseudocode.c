void __userpurge sub_595FC0(
        int a1@<ecx>,
        double a2@<st2>,
        double a3@<st7>,
        double a4@<st6>,
        double a5@<st5>,
        double a6@<st4>,
        int a7,
        int a8)
{
  PlayerCharacterVtbl *vtbl; // edi
  signed __int16 ExtraCount; // ax

  if ( a7 == 0x1F ) /*0x595fca*/
  {
    sub_595F30(a1, a2, a3, a4, a5, a6); /*0x595fcc*/
  }
  else if ( a7 == 0x20 ) /*0x595fd8*/
  {
    vtbl = reference->vtbl; /*0x595fe3*/
    ExtraCount = ExtraDataList_GetExtraCount((ExtraDataList *)(*(_DWORD *)(a1 + 0x30) + 0x44)); /*0x595fea*/
    ((void (__thiscall *)(PlayerCharacter *, _DWORD, _DWORD, _DWORD))vtbl->super.Unk_B3)( /*0x596003*/
      reference,
      *(_DWORD *)(a1 + 0x30),
      ExtraCount,
      0);
    sub_595F30(a1, a2, a3, a4, a5, a6); /*0x596007*/
  }
}
