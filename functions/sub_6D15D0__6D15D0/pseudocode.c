void __thiscall sub_6D15D0(void *this, _DWORD *a2)
{
  int v3; // eax
  int v4; // edi
  int v5; // ebx
  int v6; // eax
  float v7; // eax
  int v8; // eax
  unsigned int v9; // ebp
  unsigned int v10; // edi
  int v11; // ebx
  int v12; // eax
  Atmosphere *v13; // ecx
  NiAVObject *v14; // eax
  unsigned int v15; // eax
  unsigned int v16; // ebx
  unsigned int v17; // edi
  unsigned int i; // edi
  int v19; // eax
  float v20; // [esp+24h] [ebp-4h] BYREF

  sub_754E90(a2);
  v3 = sub_7124A0(a2);
  v4 = *((_DWORD *)this + 0x14);
  v5 = v3;
  if ( v4 != v3 )
  {
    if ( v4 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) )
        (**(void (__thiscall ***)(int, int))v4)(v4, 1);
    }
    *((_DWORD *)this + 0x14) = v5;
    if ( v5 )
      InterlockedIncrement((volatile LONG *)(v5 + 4));
  }
  v6 = *((_DWORD *)this + 0x14);
  if ( !v6 || (v7 = *(float *)(v6 + 8), v7 == 0.0) )
    sub_6D10F0((unsigned __int16 *)this, 0.0);
  else
    sub_6D10F0((unsigned __int16 *)this, v7);
  if ( a2[0x36] < 0xA010068u && (v8 = *((_DWORD *)this + 0x14)) != 0 )
  {
    v9 = *(_DWORD *)(v8 + 8);
    v10 = 0;
    if ( v9 )
    {
      v11 = 0;
      do
      {
        v12 = *((_DWORD *)this + 0x14);
        if ( v10 >= *(_DWORD *)(v12 + 8) )
          v13 = 0;
        else
          v13 = (Atmosphere *)(v11 + *(_DWORD *)(v12 + 0x10));
        v14 = sub_452A60(v13);
        (*(void (__thiscall **)(void *, NiAVObject *, unsigned int))(*(_DWORD *)this + 0x84))(this, v14, v10++);
        v11 += 0xC;
      }
      while ( v10 < v9 );
    }
  }
  else
  {
    v15 = sub_7124D0(a2);
    v16 = v15;
    if ( v15 )
    {
      sub_4CA040((unsigned __int16 *)this + 0x20, v15);
      v17 = 0;
      v20 = 0.0;
      do
        sub_4CA210((int)this + 0x40, v17++, &v20);
      while ( v17 < v16 );
      for ( i = 0; i < v16; ++i )
      {
        v19 = sub_7124A0(a2);
        (*(void (__thiscall **)(void *, int, unsigned int))(*(_DWORD *)this + 0x84))(this, v19, i);
      }
    }
  }
  if ( *((_DWORD *)this + 0x14) )
  {
    if ( a2[0x36] <= 0x401000Cu )
      (*(void (__thiscall **)(void *, _DWORD, _DWORD))(*(_DWORD *)this + 0x9C))(
        this,
        *((float *)this + 5),
        *((float *)this + 6));
  }
}
