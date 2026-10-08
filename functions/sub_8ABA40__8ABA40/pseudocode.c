void __thiscall sub_8ABA40(int this, _OWORD *a2)
{
  int v3; // edx
  float v4; // [esp+0h] [ebp-38h]
  _BYTE v5[32]; // [esp+18h] [ebp-20h] BYREF

  *(_OWORD *)(this + 0x70) = *a2; /*0x8aba53*/
  *(_OWORD *)(this + 0x80) = a2[1]; /*0x8aba5b*/
  *(_OWORD *)(this + 0x90) = a2[2]; /*0x8aba66*/
  *(_OWORD *)(this + 0xA0) = a2[3]; /*0x8aba71*/
  v3 = *(_DWORD *)(this + 8); /*0x8aba78*/
  if ( v3 ) /*0x8aba7e*/
  {
    v4 = *(float *)(*(_DWORD *)(v3 + 0x74) + 8) * kHeadBodyNormalMatchRadius; /*0x8aba97*/
    (*(void (__stdcall **)(_OWORD *, _DWORD, _BYTE *))(**(_DWORD **)(this + 0x14) + 0xC))(a2, LODWORD(v4), v5); /*0x8aba9b*/
    sub_8DE950((_DWORD *)this, (int)v5); /*0x8abaa3*/
  }
}
