char **__thiscall sub_6F2610(char **this, char **a2)
{
  char *v4; // ebp
  unsigned int v5; // ecx
  int v7; // edi
  unsigned int v8; // eax
  char *v9; // eax
  char *v10; // edx
  unsigned int v11; // eax
  _DWORD *v12; // ecx
  char *v13; // eax
  unsigned int v14; // eax
  char *v15; // [esp+Ch] [ebp+4h]

  if ( this == a2 ) /*0x6f261a*/
    return this; /*0x6f261a*/
  v4 = a2[1]; /*0x6f2621*/
  if ( !v4 || (v5 = (a2[2] - v4) / 0xC) == 0 ) /*0x6f263d*/
  {
    sub_6F1630(this); /*0x6f2641*/
    return this; /*0x6f264b*/
  }
  v7 = (int)*(this + 1); /*0x6f264f*/
  if ( v7 ) /*0x6f2654*/
    v8 = (int)&(*(this + 2))[-v7] / 0xC; /*0x6f266d*/
  else
    v8 = 0; /*0x6f2656*/
  if ( v5 > v8 ) /*0x6f2671*/
  {
    if ( v7 ) /*0x6f26dd*/
      v11 = (int)&(*(this + 3))[-v7] / 0xC; /*0x6f26f6*/
    else
      v11 = 0; /*0x6f26df*/
    if ( v5 > v11 ) /*0x6f26fa*/
    {
      if ( v7 ) /*0x6f2724*/
        FormHeapFree((unsigned int)*(this + 1)); /*0x6f2727*/
      v14 = sub_6F1080(a2); /*0x6f2731*/
      if ( !sub_556FE0(this, v14) ) /*0x6f2740*/
        return this; /*0x6f2740*/
      v12 = *(this + 1); /*0x6f2742*/
      v13 = a2[1]; /*0x6f2745*/
    }
    else
    {
      v15 = &v4[0xC * sub_6F1080(this)]; /*0x6f270d*/
      sub_6F1350(v4, v15, v7); /*0x6f2711*/
      v12 = *(this + 2); /*0x6f2716*/
      v13 = v15; /*0x6f2719*/
    }
    *(this + 2) = (char *)sub_6F15A0(v13, a2[2], v12); /*0x6f2755*/
    return this; /*0x6f275a*/
  }
  sub_6F1240(v4, a2[2], v7); /*0x6f268d*/
  v9 = a2[1]; /*0x6f2692*/
  if ( v9 ) /*0x6f269a*/
    v10 = &(*(this + 1))[0xC * ((a2[2] - v9) / 0xC)]; /*0x6f26cd*/
  else
    v10 = *(this + 1); /*0x6f26a3*/
  *(this + 2) = v10; /*0x6f26a7*/
  return this; /*0x6f2649*/
}
