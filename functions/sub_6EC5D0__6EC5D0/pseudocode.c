void __thiscall sub_6EC5D0(void *this, int a2, int a3)
{
  int v3; // esi
  NiRTTI *v5; // eax
  char v6; // al

  v3 = a2; /*0x6ec5d1*/
  if ( a2 ) /*0x6ec5da*/
  {
    v5 = (NiRTTI *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 4))(a2); /*0x6ec5e3*/
    if ( v5 ) /*0x6ec5e7*/
    {
      while ( v5 != &stru_B3E7E8 ) /*0x6ec5f5*/
      {
        v5 = v5->parent; /*0x6ec5f7*/
        if ( !v5 ) /*0x6ec5fc*/
          goto LABEL_5; /*0x6ec5fc*/
      }
      v6 = 1; /*0x6ec62a*/
    }
    else
    {
LABEL_5:
      v6 = 0; /*0x6ec5fe*/
    }
    v3 &= -(v6 != 0); /*0x6ec606*/
  }
  (*(void (__thiscall **)(void *, int *))(*(_DWORD *)this + 0xA8))(this, &a2); /*0x6ec617*/
  sub_6E80F0(v3, a2); /*0x6ec620*/
}
