void __thiscall sub_43F6E0(int this)
{
  unsigned int v5; // edi
  unsigned int v6; // edi

  v5 = *(_DWORD *)(this + 0x54); /*0x43f6e4*/
  if ( v5 ) /*0x43f6e9*/
  {
    sub_49CFB0(*(int **)(this + 0x54)); /*0x43f6ed*/
    FormHeapFree(v5); /*0x43f6f3*/
  }
  v6 = *(_DWORD *)(this + 0x58); /*0x43f6fb*/
  if ( v6 ) /*0x43f700*/
  {
    sub_49E500(*(_DWORD **)(this + 0x58)); /*0x43f704*/
    FormHeapFree(v6); /*0x43f70a*/
  }
  *(_DWORD *)(this + 0x58) = 0; /*0x43f713*/
}
