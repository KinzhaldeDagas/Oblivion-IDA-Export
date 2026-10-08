void __thiscall sub_6D15D0(unsigned __int16 *this, _DWORD *a2)
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
  NiAVObject *PointerAtOffset08; // eax
  unsigned int v15; // eax
  unsigned int v16; // ebx
  unsigned int v17; // edi
  unsigned int i; // edi
  int v19; // eax
  float v20; // [esp+24h] [ebp-4h] BYREF

  j_NiTimeController_LinkObject(this, a2); /*0x6d15dc*/
  v3 = sub_7124A0(a2); /*0x6d15e3*/
  v4 = *((_DWORD *)this + 0x14); /*0x6d15e8*/
  v5 = v3; /*0x6d15eb*/
  if ( v4 != v3 ) /*0x6d15ef*/
  {
    if ( v4 ) /*0x6d15f3*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) ) /*0x6d15f9*/
        (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x6d160f*/
    }
    *((_DWORD *)this + 0x14) = v5; /*0x6d1613*/
    if ( v5 ) /*0x6d1616*/
      InterlockedIncrement((volatile LONG *)(v5 + 4)); /*0x6d161c*/
  }
  v6 = *((_DWORD *)this + 0x14); /*0x6d1622*/
  if ( !v6 || (v7 = *(float *)(v6 + 8), v7 == 0.0) ) /*0x6d162e*/
    sub_6D10F0(this, 0.0); /*0x6d1637*/
  else
    sub_6D10F0(this, v7); /*0x6d1631*/
  if ( a2[0x36] < 0xA010068u && (v8 = *((_DWORD *)this + 0x14)) != 0 ) /*0x6d164d*/
  {
    v9 = *(_DWORD *)(v8 + 8); /*0x6d164f*/
    v10 = 0; /*0x6d1652*/
    if ( v9 ) /*0x6d1656*/
    {
      v11 = 0; /*0x6d165c*/
      do /*0x6d168c*/
      {
        v12 = *((_DWORD *)this + 0x14); /*0x6d1660*/
        if ( v10 >= *(_DWORD *)(v12 + 8) ) /*0x6d1666*/
          v13 = 0; /*0x6d166f*/
        else
          v13 = (Atmosphere *)(v11 + *(_DWORD *)(v12 + 0x10)); /*0x6d166b*/
        PointerAtOffset08 = Shared_GetPointerAtOffset08(v13); /*0x6d1671*/
        (*(void (__thiscall **)(unsigned __int16 *, NiAVObject *, unsigned int))(*(_DWORD *)this + 0x84))( /*0x6d1682*/
          this,
          PointerAtOffset08,
          v10++);
        v11 += 0xC; /*0x6d1687*/
      }
      while ( v10 < v9 ); /*0x6d168c*/
    }
  }
  else
  {
    v15 = sub_7124D0(a2); /*0x6d1692*/
    v16 = v15; /*0x6d1697*/
    if ( v15 ) /*0x6d169b*/
    {
      sub_4CA040(this + 0x20, v15); /*0x6d16a3*/
      v17 = 0; /*0x6d16a8*/
      v20 = 0.0; /*0x6d16b0*/
      do /*0x6d16c6*/
        sub_4CA210((int)(this + 0x20), v17++, &v20); /*0x6d16bc*/
      while ( v17 < v16 ); /*0x6d16c6*/
      for ( i = 0; i < v16; ++i ) /*0x6d16cc*/
      {
        v19 = sub_7124A0(a2); /*0x6d16d4*/
        (*(void (__thiscall **)(unsigned __int16 *, int, unsigned int))(*(_DWORD *)this + 0x84))(this, v19, i); /*0x6d16e5*/
      }
    }
  }
  if ( *((_DWORD *)this + 0x14) ) /*0x6d16ee*/
  {
    if ( a2[0x36] <= 0x401000Cu ) /*0x6d1702*/
      (*(void (__thiscall **)(unsigned __int16 *, _DWORD, _DWORD))(*(_DWORD *)this + 0x9C))( /*0x6d171e*/
        this,
        *((float *)this + 5),
        *((float *)this + 6));
  }
}
