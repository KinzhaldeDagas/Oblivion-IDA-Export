int *__thiscall sub_6E35A0(int *this, int *a2, float a3, float a4)
{
  int v5; // eax
  void (__thiscall ***v6)(_DWORD, int); // ebp
  unsigned int v7; // eax
  int v8; // ecx
  int v10; // [esp+28h] [ebp-1Ch] BYREF
  int v11; // [esp+2Ch] [ebp-18h] BYREF
  int v12; // [esp+30h] [ebp-14h]
  int v13; // [esp+34h] [ebp-10h] BYREF
  int v14; // [esp+40h] [ebp-4h]

  v14 = 0; /*0x6e35d0*/
  v12 = 0; /*0x6e35d4*/
  v5 = *sub_700790(this, &v13); /*0x6e35dd*/
  *a2 = v5; /*0x6e35e5*/
  if ( v5 ) /*0x6e35e7*/
    InterlockedIncrement((volatile LONG *)(v5 + 4)); /*0x6e35ed*/
  v6 = (void (__thiscall ***)(_DWORD, int))v13; /*0x6e35f3*/
  v14 = 0; /*0x6e35f9*/
  v12 = 1; /*0x6e35fd*/
  if ( v13 ) /*0x6e3605*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(v13 + 4)) ) /*0x6e360b*/
    {
      if ( v6 ) /*0x6e3617*/
        (**v6)(v6, 1); /*0x6e3622*/
    }
  }
  v7 = *(this + 2); /*0x6e3624*/
  if ( v7 ) /*0x6e3629*/
  {
    v8 = *(this + 4); /*0x6e3634*/
    v11 = 0; /*0x6e3643*/
    v10 = 0; /*0x6e364b*/
    NiAnimationKey_CopyRangeRebased(0, v8, (float *)*(this + 3), v7, a3, a4, (int **)&v11, &v10); /*0x6e3659*/
    sub_6E3540((_DWORD *)*a2, v11, v10, *(this + 4)); /*0x6e3671*/
  }
  return a2; /*0x6e3678*/
}
