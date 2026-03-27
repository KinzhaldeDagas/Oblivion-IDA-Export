void __thiscall sub_5D5D40(_DWORD *this)
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

  if ( *(this + 0xA) )
  {
    v2 = *(this + 0x13);
    if ( v2 )
    {
      v3 = *(this + 0xF);
      v13[0] = 0;
      v13[1] = 0;
      if ( v3 )
      {
        v4 = v3 - 1;
        if ( v4 )
        {
          if ( v4 == 1 )
            BSSimpleList_PushFront(v13, *(_DWORD *)(v2 + 0x5C) + 1);
        }
        else
        {
          BSSimpleList_PushFront(v13, *(_DWORD *)(v2 + 0x60) + 1);
          BSSimpleList_PushFront(v13, *(_DWORD *)(*(this + 0x13) + 0x64) + 1);
        }
      }
      else
      {
        for ( i = 0x68; i < 0x84; i += 4 )
          BSSimpleList_PushFront(v13, *(_DWORD *)(i + *(this + 0x13)) + 1);
      }
      v6 = *(_DWORD **)(*(this + 0xA) + 0x34);
      while ( v6 )
      {
        v7 = (Tile *)v6[2];
        v6 = (_DWORD *)*v6;
        if ( v7 )
        {
          Float = Tile_GetFloat(v7, 0xFB0);
          v9 = Double_To_SInt32(Float) + 1;
          v10 = v13;
          while ( *v10 != v9 )
          {
            v10 = (_DWORD *)v10[1];
            if ( !v10 )
            {
              v11 = 1.0;
              goto LABEL_16;
            }
          }
          if ( *(this + 0xF) == 2 )
            *(this + 0x12) = v7;
          v11 = fConstant_2;
LABEL_16:
          a2 = v11;
          Tile_SetFloat(v7, (_DWORD *)0xFB1, a2);
        }
      }
    }
  }
}
