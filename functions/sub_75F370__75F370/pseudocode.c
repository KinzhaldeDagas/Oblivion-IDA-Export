void __thiscall sub_75F370(void *this, int a2, int a3)
{
  int v3; // esi
  NiRTTI *v5; // eax
  char v6; // al

  v3 = a2; /*0x75f371*/
  if ( a2 ) /*0x75f37a*/
  {
    v5 = (NiRTTI *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 4))(a2); /*0x75f383*/
    if ( v5 ) /*0x75f387*/
    {
      while ( v5 != &stru_B3E7E8 ) /*0x75f395*/
      {
        v5 = v5->parent; /*0x75f397*/
        if ( !v5 ) /*0x75f39c*/
          goto LABEL_5; /*0x75f39c*/
      }
      v6 = 1; /*0x75f3ca*/
    }
    else
    {
LABEL_5:
      v6 = 0; /*0x75f39e*/
    }
    v3 &= -(v6 != 0); /*0x75f3a6*/
  }
  (*(void (__thiscall **)(void *, int *))(*(_DWORD *)this + 0xAC))(this, &a2); /*0x75f3b7*/
  sub_6E80F0(v3, a2); /*0x75f3c0*/
}
