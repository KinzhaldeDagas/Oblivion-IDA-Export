void __userpurge sub_4D90D0(_DWORD *this@<ecx>, char a2@<bpl>, const char *a3)
{
  if ( !sub_45A500(g_TESSaveLoadGame) || !ExtraDataList_GetLastFinishedSequence((ExtraDataList *)(this + 0x11)) ) /*0x4d90e5*/
    sub_424DE0((ExtraDataList *)(this + 0x11), a2, a3); /*0x4d90f6*/
}
