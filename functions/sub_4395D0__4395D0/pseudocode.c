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
  float a2; // [esp+18h] [ebp-10h] BYREF
  float v16[3]; // [esp+1Ch] [ebp-Ch] BYREF

  v2 = *((_DWORD *)this + 0xA); /*0x4395d7*/
  v3 = (volatile LONG ***)(this + 0x28); /*0x4395dc*/
  if ( v2 )
  {
    if ( (*(this + 0x34) & 2) != 0 ) /*0x4395e9*/
      InterlockedIncrement((volatile LONG *)(v2 + 4)); /*0x4395ef*/
    v4 = *(this + 0x34); /*0x4395f5*/
    if ( (v4 & 0x10) == 0 )
    {
      if ( (v4 & 4) != 0 ) /*0x439603*/
      {
        if ( *((_DWORD *)this + 0xC) ) /*0x439609*/
        {
          v5 = (NiAVObject *)sub_434B40(*v3); /*0x43961e*/
          NiAVObject_UpdateNiAVObject(v5, 0.0, 0); /*0x439626*/
          Radius = v5->members.m_kWorldBound.Radius; /*0x43962e*/
          v6 = Radius; /*0x439640*/
          if ( Radius < 0.001 ) /*0x439645*/
          {
            Radius = sub_4DC4B0(v16, (NiObjectNET *)(*v3)[2])[2] * 0.5; /*0x439665*/
            v6 = Radius; /*0x439669*/
          }
          LODWORD(a2) = uGridsToLoad << 0xC; /*0x439678*/
          v7 = (double)(uGridsToLoad << 0xC); /*0x43967c*/
          if ( (uGridsToLoad & 0x80000) != 0 ) /*0x439680*/
            v7 = v7 + 4294967300.0; /*0x439682*/
          a2 = v7 * 0.5 - (v6 + 2048.0); /*0x439698*/
          if ( 0.0 == v6 || a2 <= *(float *)GameSetting_GetSafeFloatPointer(&dword_B05148) * Radius ) /*0x4396c2*/
            v8 = a2; /*0x4396d6*/
          else
            v8 = *(float *)GameSetting_GetSafeFloatPointer(&dword_B05148) * Radius; /*0x4396d0*/
          a2 = v8; /*0x4396da*/
          v13 = a2; /*0x4396e7*/
          a2 = a2 * flt_B05150; /*0x4396f1*/
          sub_4A02A0((float *)v5, a2, v13); /*0x4396fc*/
          sub_4A01B0(v5, *((_DWORD *)this + 0xC)); /*0x439707*/
        }
      }
      sub_438730((int)(*v3)[2]); /*0x439718*/
      if ( !(*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD, volatile LONG **, _DWORD))(**(_DWORD **)MEMORY[0xB33A1C]
                                                                                        + 0xC))(
              *(_DWORD *)MEMORY[0xB33A1C],
              *((_DWORD *)this + 8),
              *v3,
              0) )
      {
        v9 = *((_DWORD *)this + 8); /*0x43973f*/
        v10 = *(_DWORD *)MEMORY[0xB33A1C]; /*0x439742*/
        a2 = 0.0; /*0x439748*/
        v11 = (*(int (__thiscall **)(int, int, float *))(*(_DWORD *)v10 + 4))(v10, v9, &a2); /*0x439757*/
        sub_435AB0(v3, v11 != 0 ? LODWORD(a2) : 0);
      }
    }
  }
  return (*(int (__thiscall **)(char *))(*(_DWORD *)this + 0x28))(this); /*0x439772*/
}
