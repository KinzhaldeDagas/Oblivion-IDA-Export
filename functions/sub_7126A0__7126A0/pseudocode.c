void __thiscall sub_7126A0(_DWORD *this)
{
  unsigned int i; // ebx
  int *v3; // esi
  NiRTTI *v4; // eax

  if ( *(this + 0x36) < 0x401000Cu ) /*0x7126ad*/
  {
    for ( i = 0; i < *(this + 0x7E); ++i ) /*0x7126b2*/
    {
      v3 = *(int **)(*(this + 0x7C) + 4 * i); /*0x7126c6*/
      if ( v3 ) /*0x7126cb*/
      {
        v4 = (NiRTTI *)(*(int (__thiscall **)(int *))(*v3 + 4))(v3); /*0x7126d4*/
        if ( v4 ) /*0x7126d8*/
        {
          while ( v4 != &stru_B3FA80 ) /*0x7126e5*/
          {
            v4 = v4->parent; /*0x7126e7*/
            if ( !v4 ) /*0x7126ec*/
              goto LABEL_10; /*0x7126ec*/
          }
          if ( !v3[7] ) /*0x7126f0*/
            sub_712640(v3); /*0x7126f9*/
        }
      }
LABEL_10:
      ; /*0x7126fe*/
    }
  }
}
