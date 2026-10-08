void __thiscall sub_6FB4E0(NiRenderer *this, float Size)
{
  float v2; // ebp
  void (__cdecl *v4)(int, float *, int, int *, int); // eax
  unsigned int v5; // ebx
  unsigned __int16 *p_propertyState; // esi
  unsigned int v7; // edi
  int v8; // [esp-14h] [ebp-34h]
  size_t v9; // [esp-4h] [ebp-24h]
  int v10; // [esp+Ch] [ebp-14h] BYREF
  Unk128 v11; // [esp+10h] [ebp-10h] BYREF

  v2 = Size; /*0x6fb4e5*/
  *(float *)&v9 = Size; /*0x6fb4ea*/
  sub_721610(this, v9); /*0x6fb4ed*/
  v8 = *(_DWORD *)(LODWORD(v2) + 0x21C); /*0x6fb506*/
  v4 = *(void (__cdecl **)(int, float *, int, int *, int))(v8 + 4); /*0x6fb507*/
  v10 = 4; /*0x6fb50a*/
  v4(v8, &Size, 4, &v10, 1); /*0x6fb512*/
  v5 = 0; /*0x6fb518*/
  if ( Size != 0.0 ) /*0x6fb51f*/
  {
    p_propertyState = (unsigned __int16 *)&this->members.propertyState; /*0x6fb521*/
    sub_6FB0D0(p_propertyState, LODWORD(Size)); /*0x6fb527*/
    v11.unkC = 0; /*0x6fb530*/
    v11.unkE = 0xFF; /*0x6fb535*/
    if ( Size != 0.0 ) /*0x6fb53a*/
    {
      do /*0x6fb578*/
      {
        sub_6FB3B0(&v11, v2); /*0x6fb545*/
        v7 = p_propertyState[5]; /*0x6fb54a*/
        if ( v7 >= p_propertyState[4] ) /*0x6fb554*/
          sub_6FB0D0(p_propertyState, v7 + p_propertyState[7]); /*0x6fb55f*/
        sub_6FAFA0(p_propertyState, v7, (int)&v11); /*0x6fb56c*/
        ++v5; /*0x6fb571*/
      }
      while ( v5 < LODWORD(Size) ); /*0x6fb578*/
    }
  }
}
