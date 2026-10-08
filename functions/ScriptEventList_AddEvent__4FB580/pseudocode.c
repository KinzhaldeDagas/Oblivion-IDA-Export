char __userpurge ScriptEventList_AddEvent@<al>(_DWORD *this@<ecx>, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int *v7; // edi
  char result; // al

  v7 = (int *)*(this + 2); /*0x4fb581*/
  result = 0; /*0x4fb584*/
  if ( v7 ) /*0x4fb588*/
    return ScriptEventList_AddEvent_::EventLoop((int)this, a2, v7, 0, a2, a3, a4, a5, a6, a7); /*0x4fb596*/
  return result; /*0x4fb58a*/
}
