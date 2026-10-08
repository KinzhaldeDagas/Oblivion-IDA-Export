int __thiscall sub_9573A0(_DWORD *this, int a2, unsigned int **a3)
{
  int v4; // edx
  int v5; // ebx
  int v6; // edi
  int v8; // [esp+14h] [ebp-4h]

  v4 = *(this + 7) - 1; /*0x9573af*/
  v8 = *(this + 6); /*0x9573b2*/
  *(this + 6) = *(_DWORD *)v8; /*0x9573b6*/
  *(this + 7) = v4; /*0x9573b9*/
  sub_956980((_DWORD *)v8); /*0x9573bc*/
  *(_BYTE *)(v8 + 4) = 1; /*0x9573c9*/
  *(_DWORD *)v8 = a2; /*0x9573cd*/
  *(_DWORD *)(v8 + 0xB8) = *a3; /*0x9573d6*/
  sub_956DD0((_DWORD **)this, a3, (_DWORD *)v8); /*0x9573dc*/
  v5 = 0; /*0x9573e1*/
  v6 = v8 + 0xC; /*0x9573e3*/
  do /*0x95740a*/
  {
    (*(void (__thiscall **)(_DWORD, int, _DWORD, unsigned int *, int, int))(*(_DWORD *)*(this + 0xA) + 0x14))( /*0x9573fe*/
      *(this + 0xA),
      v5 + *(this + 0xD),
      *a3,
      a3[1],
      v6,
      v6 + 4);
    v5 += 0x20; /*0x957401*/
    v6 += 8; /*0x957404*/
  }
  while ( v5 < 0x60 ); /*0x95740a*/
  return v8; /*0x957410*/
}
