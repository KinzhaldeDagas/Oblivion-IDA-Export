// Low-level position writer: stores target at object+0xA0 and updates Havok transform when shape data exists.
void __thiscall sub_8ABAC0(int this, _OWORD *a2, float a3)
{
  int v4; // eax
  float v5; // [esp+0h] [ebp-38h]
  _BYTE v6[32]; // [esp+18h] [ebp-20h] BYREF

  v4 = *(_DWORD *)(this + 8); /*0x8abad2*/
  *(_OWORD *)(this + 0xA0) = *a2; /*0x8abad8*/
  if ( v4 ) /*0x8abadf*/
  {
    v5 = *(float *)(*(_DWORD *)(v4 + 0x74) + 8) * kHeadBodyNormalMatchRadius + a3; /*0x8abafe*/
    (*(void (__stdcall **)(int, _DWORD, _BYTE *))(**(_DWORD **)(this + 0x14) + 0xC))(this + 0x70, LODWORD(v5), v6); /*0x8abb02*/
    sub_8DE950((_DWORD *)this, (int)v6); /*0x8abb0a*/
  }
}
