int __thiscall sub_954AF0(_DWORD *this, int a2, int a3, int a4)
{
  _DWORD *v4; // edi
  _DWORD *v5; // ecx
  unsigned int v6; // eax
  int v7; // esi
  signed int *v8; // edi
  _DWORD *v9; // ebx
  _DWORD **v11; // [esp+Ch] [ebp-8h]
  int v12; // [esp+10h] [ebp-4h]

  v4 = this;
  v5 = (_DWORD *)*(this + 4);
  v12 = v5[3];
  v6 = **(_DWORD **)(a2 + 0xB8) - *(_DWORD *)(a4 + 0x34);
  v11 = (_DWORD **)v4;
  if ( v6 >= 0x20 )
  {
    if ( v6 >= 0x100 )
    {
      if ( v6 >= 0x10000 )
      {
        if ( v6 >= 0x1000000 )
          sub_9567C0(v5, 0x53, v6);
        else
          sub_956670(v5, 0x52, v6);
      }
      else
      {
        sub_9565E0(v5, 0x51, v6);
      }
    }
    else
    {
      sub_956580(v5, 0x50, v6);
    }
  }
  else
  {
    sub_956550(v5, 0x30, v6);
  }
  v7 = 0;
  if ( *(int *)(a2 + 0x2C) > 0 )
  {
    v8 = (signed int *)(a2 + 0x30);
    v9 = (_DWORD *)(a3 + 0x44);
    do
    {
      if ( *v8 )
      {
        if ( *v9 )
          sub_9548D0(v11, v7, *v8);
      }
      ++v7;
      ++v9;
      ++v8;
    }
    while ( v7 < *(_DWORD *)(a2 + 0x2C) );
    v4 = v11;
  }
  return *(_DWORD *)(v4[4] + 0xC) - v12;
}
