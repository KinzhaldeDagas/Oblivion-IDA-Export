char __thiscall sub_4BE4E0(_DWORD *this)
{
  LONG (__stdcall *v2)(volatile LONG *); // ebp
  LONG v3; // eax
  int *v4; // esi
  int *v6; // [esp+14h] [ebp-24h] BYREF
  int v7; // [esp+18h] [ebp-20h] BYREF
  _DWORD v8[3]; // [esp+1Ch] [ebp-1Ch] BYREF
  int v9; // [esp+28h] [ebp-10h]
  int v10; // [esp+34h] [ebp-4h]

  v8[0] = &LockFreeMap<unsigned int,NiPointer<ExteriorCellLoaderTask>>::LockFreeMapIterator::`vftable'; /*0x4be50b*/
  v8[1] = 0; /*0x4be513*/
  v8[2] = 0; /*0x4be517*/
  LOBYTE(v9) = 0; /*0x4be51b*/
  v2 = InterlockedDecrement; /*0x4be51f*/
  v10 = 0; /*0x4be525*/
  do /*0x4be589*/
  {
    v6 = 0; /*0x4be530*/
    LOBYTE(v10) = 1; /*0x4be547*/
    LOBYTE(v3) = sub_642D90(this, (int)v8, &v7, (int *)&v6, 1); /*0x4be54c*/
    v4 = v6; /*0x4be553*/
    if ( (_BYTE)v3 ) /*0x4be557*/
    {
      if ( v6[3] >= 4 ) /*0x4be55d*/
        LOBYTE(v3) = (*(int (__thiscall **)(int *))(*v6 + 0x14))(v6); /*0x4be566*/
    }
    LOBYTE(v10) = 0; /*0x4be56a*/
    if ( v4 ) /*0x4be56e*/
    {
      v3 = v2(v4 + 2); /*0x4be574*/
      if ( !v3 ) /*0x4be578*/
        LOBYTE(v3) = (*(int (__thiscall **)(int *, int))*v4)(v4, 1); /*0x4be582*/
    }
  }
  while ( (v9 & 2) == 0 ); /*0x4be589*/
  return v3; /*0x4be58b*/
}
