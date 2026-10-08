char __thiscall sub_7ABD00(_DWORD *this, int a2, int a3, float a4)
{
  _DWORD *v5; // eax
  int v6; // ecx
  int v7; // eax
  double v8; // st7
  int v9; // ecx
  int v10; // edi
  _DWORD *v11; // eax
  int v12; // ecx
  float v14; // [esp+18h] [ebp+Ch]

  v5 = (_DWORD *)*(this + 0x88C); /*0x7abd04*/
  if ( v5 ) /*0x7abd13*/
  {
    while ( 1 ) /*0x7abd18*/
    {
      v6 = v5[2]; /*0x7abd18*/
      v5 = (_DWORD *)*v5; /*0x7abd1c*/
      if ( v6 ) /*0x7abd1e*/
      {
        if ( *(_DWORD *)(v6 + 0x10) == a2 ) /*0x7abd23*/
          break; /*0x7abd23*/
      }
      if ( !v5 ) /*0x7abd27*/
        goto LABEL_5; /*0x7abd27*/
    }
    *(_DWORD *)v6 = *(_DWORD *)a3; /*0x7abd77*/
    *(_DWORD *)(v6 + 4) = *(_DWORD *)(a3 + 4); /*0x7abd7c*/
    *(_DWORD *)(v6 + 8) = *(_DWORD *)(a3 + 8); /*0x7abd83*/
    *(float *)(v6 + 0xC) = *(float *)(a3 + 0xC); /*0x7abd8d*/
    *(_BYTE *)(v6 + 0x1A) = LOBYTE(a4); /*0x7abd91*/
    LOBYTE(v11) = LOBYTE(a4); /*0x7abd89*/
  }
  else
  {
LABEL_5:
    v7 = FormHeapAlloc(0x20u); /*0x7abd29*/
    if ( v7 ) /*0x7abd36*/
    {
      v8 = *(float *)(a3 + 0xC); /*0x7abd3e*/
      *(_DWORD *)v7 = *(_DWORD *)a3; /*0x7abd41*/
      v14 = v8; /*0x7abd43*/
      *(_DWORD *)(v7 + 4) = *(_DWORD *)(a3 + 4); /*0x7abd4e*/
      v9 = *(_DWORD *)(a3 + 8); /*0x7abd51*/
      *(float *)(v7 + 0xC) = v14; /*0x7abd54*/
      *(_DWORD *)(v7 + 8) = v9; /*0x7abd57*/
      *(_DWORD *)(v7 + 0x10) = a2; /*0x7abd5a*/
      *(_DWORD *)(v7 + 0x14) = 0; /*0x7abd5d*/
      *(_BYTE *)(v7 + 0x18) = 0; /*0x7abd60*/
      *(_BYTE *)(v7 + 0x19) = 0; /*0x7abd63*/
      *(_BYTE *)(v7 + 0x1A) = 1; /*0x7abd66*/
      *(_DWORD *)(v7 + 0x1C) = 0; /*0x7abd6a*/
      v10 = v7; /*0x7abd6d*/
    }
    else
    {
      v10 = 0; /*0x7abd98*/
    }
    v11 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(*(this + 0x88B) + 4))(this + 0x88B); /*0x7abdab*/
    v11[2] = v10; /*0x7abdad*/
    v11[1] = 0; /*0x7abdb0*/
    *v11 = *(this + 0x88C); /*0x7abdb6*/
    v12 = *(this + 0x88C); /*0x7abdb8*/
    if ( v12 ) /*0x7abdbe*/
    {
      *(_DWORD *)(v12 + 4) = v11; /*0x7abdc0*/
      ++*(this + 0x88E); /*0x7abdc3*/
    }
    else
    {
      ++*(this + 0x88E); /*0x7abdd0*/
      *(this + 0x88D) = v11; /*0x7abdd4*/
    }
    *(this + 0x88C) = v11; /*0x7abdc7*/
  }
  return (char)v11; /*0x7abd90*/
}
