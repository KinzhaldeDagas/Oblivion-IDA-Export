void __thiscall sub_707E90(char **this, NiGeometry *a2, _DWORD **a3)
{
  int v4; // ebx
  volatile LONG *v5; // eax

  sub_700300(this, (NiObjectNET *)a2, (int)a3); /*0x707ea0*/
  a2->member.super.m_flags = *((_WORD *)this + 0xC); /*0x707ea9*/
  qmemcpy(&a2->member.super.m_localTransform, this + 0xC, sizeof(a2->member.super.m_localTransform)); /*0x707eb8*/
  if ( *(this + 0x29) ) /*0x707eba*/
    sub_707E40((NiNode *)a2, (LONG)(this + 0x26), a3); /*0x707ed2*/
  v4 = (int)*(this + 0x2A); /*0x707ed7*/
  if ( v4 ) /*0x707edf*/
  {
    v5 = (volatile LONG *)(*(int (__thiscall **)(int, _DWORD **))(*(_DWORD *)v4 + 0x18))(v4, a3); /*0x707eed*/
    sub_435CE0((NiAVObject *)a2, v5); /*0x707ef2*/
  }
}
