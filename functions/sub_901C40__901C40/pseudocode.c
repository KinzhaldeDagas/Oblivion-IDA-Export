int __thiscall sub_901C40(_BYTE *this)
{
  char v2; // al
  int **v3; // ecx
  int v5; // [esp+0h] [ebp-4h]

  v2 = *(this + 0x84); /*0x901c43*/
  v3 = (int **)(this + 0x30); /*0x901c4b*/
  if ( v2 ) /*0x901c4e*/
    sub_939B60(v3, *((_DWORD *)this + 2)); /*0x901c55*/
  else
    sub_934100(v3, *((_DWORD *)this + 0x20), *((_DWORD *)this + 2), v5); /*0x901c73*/
  return (**(int (__thiscall ***)(_BYTE *, int))this)(this, 1); /*0x901c65*/
}
