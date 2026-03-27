void __thiscall sub_707E90(char **this, NiGeometry *a2, _DWORD **a3)
{
  int v4; // ebx
  volatile LONG *v5; // eax

  sub_700300(this, (NiObjectNET *)a2, (int)a3);
  a2->member.super.m_flags = *((_WORD *)this + 0xC);
  qmemcpy(&a2->member.super.m_localTransform, this + 0xC, sizeof(a2->member.super.m_localTransform));
  if ( *(this + 0x29) )
    sub_707E40((NiNode *)a2, (LONG)(this + 0x26), a3);
  v4 = (int)*(this + 0x2A);
  if ( v4 )
  {
    v5 = (volatile LONG *)(*(int (__thiscall **)(int, _DWORD **))(*(_DWORD *)v4 + 0x18))(v4, a3);
    sub_435CE0((NiAVObject *)a2, v5);
  }
}
