// Preselects SkillsMenu rows for its current mode. Mode 0 reads exactly seven ClassMenu skill AVs at +0x68..+0x80; mode 1 reads two attributes; mode 2 reads specialization. Selected rows use tile trait 0xFB1==2.
void __thiscall SkillsMenu_PreselectClassMenuValues(void *this)
{
  int v2; // ecx
  int v3; // eax
  int v4; // eax
  int i; // esi
  _DWORD *v6; // edi
  Tile *v7; // esi
  double Float; // st7
  int v9; // eax
  _DWORD *v10; // ecx
  double v11; // st7
  float a2; // [esp+0h] [ebp-1Ch]
  _DWORD v13[2]; // [esp+14h] [ebp-8h] BYREF

  if ( *((_DWORD *)this + 0xA) ) /*0x5d5d4c*/
  {
    v2 = *((_DWORD *)this + 0x13); /*0x5d5d58*/
    if ( v2 ) /*0x5d5d5d*/
    {
      v3 = *((_DWORD *)this + 0xF); /*0x5d5d63*/
      v13[0] = 0; /*0x5d5d69*/
      v13[1] = 0; /*0x5d5d71*/
      if ( v3 ) /*0x5d5d79*/
      {
        v4 = v3 - 1; /*0x5d5d7b*/
        if ( v4 ) /*0x5d5d7e*/
        {
          if ( v4 == 1 ) /*0x5d5d83*/
            BSSimpleList_PushFront(v13, *(_DWORD *)(v2 + 0x5C) + 1); /*0x5d5d90*/
        }
        else
        {
          BSSimpleList_PushFront(v13, *(_DWORD *)(v2 + 0x60) + 1); /*0x5d5da2*/
          BSSimpleList_PushFront(v13, *(_DWORD *)(*((_DWORD *)this + 0x13) + 0x64) + 1); /*0x5d5db5*/
        }
      }
      else
      {
        for ( i = 0x68; i < 0x84; i += 4 ) /*0x5d5dbc*/
          BSSimpleList_PushFront(v13, *(_DWORD *)(i + *((_DWORD *)this + 0x13)) + 1); /*0x5d5dcf*/
      }
      v6 = *(_DWORD **)(*((_DWORD *)this + 0xA) + 0x34); /*0x5d5de2*/
      while ( v6 ) /*0x5d5de7*/
      {
        v7 = (Tile *)v6[2]; /*0x5d5df0*/
        v6 = (_DWORD *)*v6; /*0x5d5df8*/
        if ( v7 ) /*0x5d5dfa*/
        {
          Float = Tile_GetFloat(v7, 0xFB0); /*0x5d5e03*/
          v9 = Double_To_SInt32(Float) + 1; /*0x5d5e0d*/
          v10 = v13; /*0x5d5e10*/
          while ( *v10 != v9 ) /*0x5d5e16*/
          {
            v10 = (_DWORD *)v10[1]; /*0x5d5e18*/
            if ( !v10 ) /*0x5d5e1d*/
            {
              v11 = 1.0; /*0x5d5e1f*/
              goto LABEL_16; /*0x5d5e1f*/
            }
          }
          if ( *((_DWORD *)this + 0xF) == 2 ) /*0x5d5e40*/
            *((_DWORD *)this + 0x12) = v7; /*0x5d5e42*/
          v11 = fConstant_2; /*0x5d5e45*/
LABEL_16:
          a2 = v11; /*0x5d5e21*/
          Tile_SetFloat(v7, (_DWORD *)0xFB1, a2); /*0x5d5e2c*/
        }
      }
    }
  }
}
