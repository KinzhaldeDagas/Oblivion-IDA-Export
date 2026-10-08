float *__thiscall sub_6CC890(float *this, float *a2)
{
  int v3; // ebx
  int v4; // eax
  bool v5; // zf

  v3 = *(_DWORD *)this; /*0x6cc894*/
  if ( *(_DWORD *)this != *(_DWORD *)a2 ) /*0x6cc89d*/
  {
    if ( v3 ) /*0x6cc8a1*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) ) /*0x6cc8a7*/
        (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x6cc8bd*/
    }
    v4 = *(_DWORD *)a2; /*0x6cc8bf*/
    v5 = *(_DWORD *)a2 == 0; /*0x6cc8c1*/
    *this = *a2; /*0x6cc8c3*/
    if ( !v5 ) /*0x6cc8c5*/
      InterlockedIncrement((volatile LONG *)(v4 + 4)); /*0x6cc8cb*/
  }
  *(this + 1) = a2[1]; /*0x6cc8d6*/
  *(this + 2) = a2[2]; /*0x6cc8dc*/
  *((_BYTE *)this + 0xC) = *((_BYTE *)a2 + 0xC); /*0x6cc8e2*/
  *(this + 4) = a2[4]; /*0x6cc8e8*/
  *(this + 5) = a2[5]; /*0x6cc8ef*/
  return this; /*0x6cc8f2*/
}
