int __thiscall sub_6AA9C0(_DWORD *this, unsigned int **a2)
{
  _DWORD *v3; // ecx
  int v4; // ebx
  unsigned int *v5; // edi
  int v7; // [esp-8h] [ebp-28h]
  int v8; // [esp+10h] [ebp-10h] BYREF
  unsigned int v9; // [esp+1Ch] [ebp-4h]

  v8 = 0; /*0x6aa9e6*/
  v3 = (_DWORD *)*(this + 0xC1); /*0x6aa9fc*/
  v7 = (*a2)[3]; /*0x6aaa02*/
  v9 = 0; /*0x6aaa03*/
  sub_4A1AB0(v3, v7, &v8); /*0x6aaa0b*/
  NiTMap_RemoveAt((_DWORD *)*(this + 0xC1), (*a2)[3]); /*0x6aaa1c*/
  v4 = v8; /*0x6aaa21*/
  if ( v8 ) /*0x6aaa27*/
    sub_6F9710(v8); /*0x6aaa2a*/
  NiTMap_RemoveAt((_DWORD *)*(this + 0xC0), (*a2)[3]); /*0x6aaa3e*/
  v5 = *a2; /*0x6aaa43*/
  if ( *a2 ) /*0x6aaa43*/
  {
    sub_6B6700(v5); /*0x6aaa4b*/
    FormHeapFree((unsigned int)v5); /*0x6aaa51*/
  }
  v9 = 0xFFFFFFFF; /*0x6aaa5b*/
  if ( v4 ) /*0x6aaa63*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) ) /*0x6aaa69*/
      (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x6aaa7b*/
  }
  return 0; /*0x6aaa7f*/
}
