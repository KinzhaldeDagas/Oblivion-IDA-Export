void __stdcall sub_765370(int a1, int a2, int a3)
{
  __int16 v4; // ax
  char v5; // bl
  unsigned int v6; // edx
  unsigned int v7; // ebp
  unsigned int v8; // edi
  int v9; // eax
  char v10; // cl
  char v11; // [esp+8h] [ebp+4h]

  if ( a1 )
  {
    if ( (*(_WORD *)(a1 + 0x2E) & 0xF000) == 0x4000 )
    {
      v4 = *(_WORD *)(a1 + 8);
      v11 = *(_BYTE *)(a1 + 0x30);
      v5 = v11;
      if ( v11 )
      {
        v6 = 0;
        v7 = 0;
        v8 = 0;
        v9 = 0;
        v10 = 0;
        if ( (v11 & 1) != 0 )
          v6 = *(_DWORD *)(a1 + 0x1C);
        if ( (v11 & 2) != 0 )
          v7 = *(_DWORD *)(a1 + 0x20);
        if ( (v11 & 4) != 0 )
          v8 = *(_DWORD *)(a1 + 0x24);
        if ( (v11 & 8) != 0 )
        {
          v9 = *(_DWORD *)(a1 + 0x28);
          v10 = *(_BYTE *)(a1 + 0x2C) & 0x3F;
        }
        sub_728890((unsigned int *)a1, *(_WORD *)(a1 + 8), v6, v7, v8, v9, v10, *(_WORD *)(a1 + 0x2C) & 0xF000);
        v5 = v11;
      }
      else
      {
        sub_728890((unsigned int *)a1, v4, 0, 0, 0, 0, 0, *(_WORD *)(a1 + 0x2C) & 0xF000);
      }
      if ( a3 )
      {
        if ( (v5 & 0x20) == 0 )
          sub_72EFB0(*(_DWORD **)(a2 + 8));
      }
      else if ( (v5 & 0x10) == 0 )
      {
        if ( NiRTTI::IsObjectOfRTTIType((NiRTTI *)dword_B3FD2C, (NiObject *)a1) )
        {
          sub_71FC80((unsigned int *)a1, *(_WORD *)(a1 + 0x40), 0);
        }
        else if ( NiRTTI::IsObjectOfRTTIType((NiRTTI *)dword_B3FD0C, (NiObject *)a1) )
        {
          sub_71A040((void *)a1, *(_WORD *)(a1 + 0x44), *(_WORD **)(a1 + 0x48), 0);
        }
      }
    }
  }
}
