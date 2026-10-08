void __thiscall sub_8A46C0(int *this, volatile LONG *a2)
{
  NiRTTI *v3; // eax
  NiRTTI *v4; // eax

  if ( a2 ) /*0x8a46ca*/
  {
    v3 = (NiRTTI *)(*(int (__thiscall **)(volatile LONG *))(*a2 + 4))(a2); /*0x8a46d3*/
    if ( v3 ) /*0x8a46d7*/
    {
      while ( v3 != &MEMORY[0xBA7D50] ) /*0x8a46e5*/
      {
        v3 = v3->parent; /*0x8a46e7*/
        if ( !v3 ) /*0x8a46ec*/
          goto LABEL_5; /*0x8a46ec*/
      }
    }
    else
    {
LABEL_5:
      v4 = (NiRTTI *)(*(int (__thiscall **)(volatile LONG *))(*a2 + 4))(a2); /*0x8a46ee*/
      if ( !v4 ) /*0x8a46f9*/
        return; /*0x8a46f9*/
      while ( v4 != &stru_BA7D04 ) /*0x8a4705*/
      {
        v4 = v4->parent; /*0x8a4707*/
        if ( !v4 ) /*0x8a470c*/
          return; /*0x8a470c*/
      }
    }
    InterlockedIncrement(a2 + 1); /*0x8a4720*/
    sub_8A4070(this + 4, (int)a2); /*0x8a4729*/
  }
}
