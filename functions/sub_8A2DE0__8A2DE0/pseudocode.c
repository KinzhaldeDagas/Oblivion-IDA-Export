void __thiscall sub_8A2DE0(int *this, int a2)
{
  _DWORD **v3; // ecx
  float *v4; // eax
  float *v5; // edi
  int v6; // eax

  sub_89F580(this, a2); /*0x8a2df0*/
  if ( *(this + 2) ) /*0x8a2df5*/
  {
    bhkRefObject_UpdateHavokObject(this); /*0x8a2e01*/
    sub_8AA1A0(*(this + 2), a2 + 0x20); /*0x8a2e0d*/
    bhkRefObject_UpdateHavokObject(this); /*0x8a2e14*/
    v3 = (_DWORD **)*(this + 2); /*0x8a2e19*/
    if ( v3 ) /*0x8a2e1e*/
    {
      v4 = (float *)sub_8A98D0(v3); /*0x8a2e20*/
      v5 = v4; /*0x8a2e25*/
      if ( v4 ) /*0x8a2e29*/
      {
        *(float *)(a2 + 0xB0) = sub_89DA90(v4); /*0x8a2e32*/
        *(_OWORD *)(a2 + 0xA0) = *((_OWORD *)v5 + 9); /*0x8a2e3f*/
        *(float *)(a2 + 0xB4) = v5[0x32]; /*0x8a2e4c*/
        *(float *)(a2 + 0xB8) = v5[0x33]; /*0x8a2e5c*/
        (*(void (__thiscall **)(float *, int))(*(_DWORD *)v5 + 0x28))(v5, a2 + 0x70); /*0x8a2e69*/
        *(_OWORD *)(a2 + 0xA0) = *((_OWORD *)v5 + 9); /*0x8a2e72*/
      }
    }
    v6 = *(this + 2); /*0x8a2e79*/
    if ( v6 ) /*0x8a2e7e*/
    {
      if ( v6 != 0xFFFFFFEC ) /*0x8a2e83*/
      {
        *(float *)(a2 + 0xC4) = sub_4D6A70(this); /*0x8a2e8c*/
        *(float *)(a2 + 0xC8) = sub_8A2D20(this); /*0x8a2e99*/
      }
    }
  }
}
