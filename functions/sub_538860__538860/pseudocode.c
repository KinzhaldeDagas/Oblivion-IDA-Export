void __thiscall sub_538860(Ni2DBuffer **this, int a2)
{
  int v3; // esi
  NiRTTI *v4; // eax
  char v5; // al
  Ni2DBuffer *v6; // eax
  Ni2DBuffer *v7; // [esp-4h] [ebp-Ch]

  if ( a2 ) /*0x53886a*/
    v3 = *(_DWORD *)(a2 + 0xC); /*0x53886c*/
  else
    v3 = 0; /*0x538871*/
  if ( v3 )
  {
    v4 = (NiRTTI *)(*(int (__thiscall **)(int))(*(_DWORD *)v3 + 4))(v3); /*0x53887e*/
    if ( v4 ) /*0x538882*/
    {
      while ( v4 != &stru_BA7D84 ) /*0x538889*/
      {
        v4 = v4->parent; /*0x53888b*/
        if ( !v4 ) /*0x538890*/
          goto LABEL_8; /*0x538890*/
      }
      v5 = 1; /*0x5388c2*/
    }
    else
    {
LABEL_8:
      v5 = 0; /*0x538892*/
    }
    v6 = v5 != 0 ? (Ni2DBuffer *)v3 : 0;
    if ( v6 ) /*0x53889a*/
    {
      if ( v6->members.super.m_uiRefCount ) /*0x53889c*/
      {
        v7 = v6; /*0x5388ad*/
        InterlockedIncrement((volatile LONG *)&v6->members); /*0x5388af*/
        sub_67A760(this + 3, v7); /*0x5388b8*/
      }
    }
  }
}
