int __thiscall sub_8CB330(int *this)
{
  int v2; // edi
  int *v3; // ebp
  int v4; // eax
  int v5; // edi
  _DWORD *ThreadLocalStoragePointer; // ebx
  int v7; // ecx
  int v8; // eax
  int v9; // ecx
  int result; // eax

  v2 = *(this + 0x18) - 1; /*0x8cb339*/
  v3 = this + 2; /*0x8cb33a*/
  *this = (int)&off_A99BD0; /*0x8cb33d*/
  *(this + 2) = (int)&off_A99BC4; /*0x8cb343*/
  *(this + 0x12) = (int)off_A99BBC; /*0x8cb34a*/
  *(this + 0x13) = (int)off_A99BA8; /*0x8cb351*/
  *(this + 0x14) = (int)off_A99B94; /*0x8cb358*/
  *(this + 0x15) = (int)off_A99B88; /*0x8cb35f*/
  for ( *(this + 0x16) = (int)off_A99B7C; v2 >= 0; --v2 ) /*0x8cb36d*/
    sub_8CAFF0(this, *(int **)(*(this + 0x17) + 4 * v2)); /*0x8cb379*/
  v4 = *(this + 0x1C); /*0x8cb381*/
  v5 = MEMORY[0xBA9DE4]; /*0x8cb386*/
  ThreadLocalStoragePointer = NtCurrentTeb()->ThreadLocalStoragePointer; /*0x8cb38c*/
  if ( v4 >= 0 ) /*0x8cb393*/
  {
    v7 = *(_DWORD *)(ThreadLocalStoragePointer[v5] + 0x19C); /*0x8cb398*/
    if ( !v7 ) /*0x8cb3a0*/
      v7 = unk_BA7D9C; /*0x8cb3a2*/
    sub_8A75D0(v7, (_DWORD *)*(this + 0x1A), 4 * v4, 0x14); /*0x8cb3b7*/
  }
  v8 = *(this + 0x19); /*0x8cb3bc*/
  if ( v8 >= 0 ) /*0x8cb3c1*/
  {
    v9 = *(_DWORD *)(ThreadLocalStoragePointer[v5] + 0x19C); /*0x8cb3c6*/
    if ( !v9 ) /*0x8cb3ce*/
      v9 = unk_BA7D9C; /*0x8cb3d0*/
    sub_8A75D0(v9, (_DWORD *)*(this + 0x17), 4 * v8, 0x14); /*0x8cb3e5*/
  }
  *(this + 0x16) = (int)&off_A99B58; /*0x8cb3ea*/
  *(this + 0x15) = (int)&off_A99B58; /*0x8cb3f1*/
  *(this + 0x14) = (int)&hkPhantomListener::`vftable'; /*0x8cb3f8*/
  *(this + 0x13) = (int)&hkEntityListener::`vftable'; /*0x8cb3ff*/
  *(this + 0x12) = (int)&off_A99B50; /*0x8cb408*/
  result = sub_8CB180(v3); /*0x8cb40f*/
  *this = (int)&hkBaseObject::`vftable'; /*0x8cb415*/
  return result; /*0x8cb414*/
}
