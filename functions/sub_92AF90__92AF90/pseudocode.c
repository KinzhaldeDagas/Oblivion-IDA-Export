_BYTE *__thiscall sub_92AF90(_DWORD *this, _BYTE *a2, int a3, int a4, int a5, int a6, int a7)
{
  int v8; // esi
  int v9; // ebx
  int v10; // eax

  v8 = *(this + 4) - 1; /*0x92af99*/
  if ( v8 < 0 ) /*0x92af9a*/
  {
LABEL_5:
    *a2 = 1; /*0x92afd0*/
    return a2; /*0x92afd0*/
  }
  else
  {
    v9 = a7; /*0x92af9c*/
    while ( 1 ) /*0x92afa7*/
    {
      v10 = *(_DWORD *)(*(this + 3) + 4 * v8); /*0x92afa7*/
      if ( !*(_BYTE *)(**(int (__thiscall ***)(int, int *, int, int, int, int, int))(v10 + 0xC))( /*0x92afc8*/
                        v10 + 0xC,
                        &a7,
                        a3,
                        a4,
                        a5,
                        a6,
                        v9) )
        break; /*0x92afc8*/
      if ( --v8 < 0 ) /*0x92afce*/
        goto LABEL_5; /*0x92afce*/
    }
    *a2 = 0; /*0x92afe5*/
    return a2; /*0x92afde*/
  }
}
