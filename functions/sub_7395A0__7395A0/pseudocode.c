// Pass226/227: NiScreenSpaceCamera texture-array element setter; AddRefs/Releases NiScreenTexture pointers and updates array counts only.
LONG __thiscall sub_7395A0(_DWORD *this, unsigned int a2, LONG *a3)
{
  LONG result; // eax
  float v5; // ecx
  int v6; // edx
  int v7; // ecx
  int v8; // esi
  _DWORD *v9; // edi
  bool v10; // zf

  if ( (LOBYTE(MEMORY[0xB3F9B0][0x1EB]) & 1) == 0 ) /*0x7395b1*/
  {
    LODWORD(MEMORY[0xB3F9B0][0x1EB]) |= 1u; /*0x7395b3*/
    MEMORY[0xB3F9B0][0x1EA] = 0.0; /*0x7395be*/
    atexit(sub_A26B90); /*0x7395c8*/
  }
  result = a2; /*0x7395d4*/
  if ( a2 < *((unsigned __int16 *)this + 5) ) /*0x7395de*/
  {
    v5 = MEMORY[0xB3F9B0][0x1EA]; /*0x7395f8*/
    v6 = *(this + 1); /*0x739601*/
    if ( *a3 == LODWORD(MEMORY[0xB3F9B0][0x1EA]) ) /*0x739604*/
    {
      if ( *(_DWORD *)(v6 + 4 * a2) != LODWORD(v5) ) /*0x739614*/
        --*((_WORD *)this + 6); /*0x739616*/
    }
    else if ( *(_DWORD *)(v6 + 4 * a2) == LODWORD(v5) ) /*0x739609*/
    {
      ++*((_WORD *)this + 6); /*0x73960b*/
    }
  }
  else
  {
    *((_WORD *)this + 5) = a2 + 1; /*0x7395e3*/
    if ( *a3 != LODWORD(MEMORY[0xB3F9B0][0x1EA]) ) /*0x7395f0*/
      ++*((_WORD *)this + 6); /*0x7395f2*/
  }
  v7 = *(this + 1); /*0x73961c*/
  v8 = *(_DWORD *)(v7 + 4 * a2); /*0x73961f*/
  v9 = (_DWORD *)(v7 + 4 * a2); /*0x739625*/
  if ( v8 != *a3 ) /*0x739628*/
  {
    if ( v8 ) /*0x73962c*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v8 + 4)) ) /*0x739632*/
        (**(void (__thiscall ***)(int, int))v8)(v8, 1); /*0x739647*/
    }
    result = *a3; /*0x739649*/
    v10 = *a3 == 0; /*0x73964c*/
    *v9 = *a3; /*0x73964e*/
    if ( !v10 ) /*0x739650*/
      return InterlockedIncrement((volatile LONG *)(result + 4)); /*0x739656*/
  }
  return result; /*0x73965c*/
}
