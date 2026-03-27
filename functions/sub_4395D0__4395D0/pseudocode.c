int __thiscall sub_4395D0(char *this)
{
  int v2; // eax
  volatile LONG ***v3; // esi
  char v4; // al
  NiAVObject *v5; // ebx
  double v6; // st7
  double v7; // st6
  double v8; // st7
  int v9; // eax
  int v10; // ecx
  char v11; // al
  float v13; // [esp+4h] [ebp-24h]
  float Radius; // [esp+14h] [ebp-14h]
  float v15; // [esp+18h] [ebp-10h] BYREF
  float v16[3]; // [esp+1Ch] [ebp-Ch] BYREF

  v2 = *((_DWORD *)this + 0xA);
  v3 = (volatile LONG ***)(this + 0x28);
  if ( v2 )
  {
    if ( (*(this + 0x34) & 2) != 0 )
      InterlockedIncrement((volatile LONG *)(v2 + 4));
    v4 = *(this + 0x34);
    if ( (v4 & 0x10) == 0 )
    {
      if ( (v4 & 4) != 0 )
      {
        if ( *((_DWORD *)this + 0xC) )
        {
          v5 = (NiAVObject *)sub_434B40(*v3);
          NiAVObject_UpdateNiAVObject(v5, 0.0, 0);
          Radius = v5->members.m_kWorldBound.Radius;
          v6 = Radius;
          if ( Radius < 0.001 )
          {
            Radius = sub_4DC4B0(v16, (*v3)[2])[2] * 0.5;
            v6 = Radius;
          }
          LODWORD(v15) = uGridsToLoad << 0xC;
          v7 = (double)(uGridsToLoad << 0xC);
          if ( (uGridsToLoad & 0x80000) != 0 )
            v7 = v7 + 4294967300.0;
          v15 = v7 * 0.5 - (v6 + 2048.0);
          if ( 0.0 == v6 || v15 <= *(float *)GameSetting_GetSafeFloatPointer(&dword_B05148) * Radius )
            v8 = v15;
          else
            v8 = *(float *)GameSetting_GetSafeFloatPointer(&dword_B05148) * Radius;
          v15 = v8;
          v13 = v15;
          v15 = v15 * flt_B05150;
          sub_4A02A0((float *)v5, v15, v13);
          sub_4A01B0(v5, *((_DWORD *)this + 0xC));
        }
      }
      sub_438730((int)(*v3)[2]);
      if ( !(*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD, volatile LONG **, _DWORD))(**(_DWORD **)ModelLoaderPtr
                                                                                        + 0xC))(
              *(_DWORD *)ModelLoaderPtr,
              *((_DWORD *)this + 8),
              *v3,
              0) )
      {
        v9 = *((_DWORD *)this + 8);
        v10 = *(_DWORD *)ModelLoaderPtr;
        v15 = 0.0;
        v11 = (*(int (__thiscall **)(int, int, float *))(*(_DWORD *)v10 + 4))(v10, v9, &v15);
        sub_435AB0(v3, v11 != 0 ? LODWORD(v15) : 0);
      }
    }
  }
  return (*(int (__thiscall **)(char *))(*(_DWORD *)this + 0x28))(this);
}
