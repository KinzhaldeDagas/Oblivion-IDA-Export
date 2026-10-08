int __thiscall sub_6D1480(float *this, int a2, int *a3)
{
  int v4; // eax
  int v5; // ebp
  int result; // eax
  void *v7; // ecx
  void (__thiscall **v8)(int, _DWORD **, int); // esi
  _DWORD **v9; // [esp-Ch] [ebp-18h]

  NiInterpController_CopyMembers(this, a2, a3); /*0x6d148f*/
  *(_WORD *)(a2 + 0x3C) = *((_WORD *)this + 0x1E); /*0x6d1498*/
  v4 = *((_DWORD *)this + 0x14); /*0x6d149c*/
  if ( v4 ) /*0x6d14a1*/
    sub_6D11F0((unsigned __int16 *)a2, v4, *(_DWORD *)(a2 + 0x30) != 0); /*0x6d14ae*/
  if ( unk_B3CE18 ) /*0x6d14b3*/
  {
    *((_BYTE *)this + 0x5A) = 1; /*0x6d14bc*/
    *(_BYTE *)(a2 + 0x5A) = 1; /*0x6d14c0*/
  }
  v5 = 0; /*0x6d14cb*/
  result = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 0x74))(this); /*0x6d14cd*/
  if ( (_WORD)result ) /*0x6d14d2*/
  {
    do /*0x6d1517*/
    {
      v7 = *(void **)(*((_DWORD *)this + 0x15) + 4 * (unsigned __int16)v5); /*0x6d14db*/
      if ( v7 ) /*0x6d14e1*/
      {
        v8 = (void (__thiscall **)(int, _DWORD **, int))(*(_DWORD *)a2 + 0x84); /*0x6d14ea*/
        v9 = sub_700710(v7, (_DWORD **)a3); /*0x6d14f5*/
        (*v8)(a2, v9, v5); /*0x6d14f8*/
      }
      else
      {
        (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)a2 + 0x84))(a2, 0, v5); /*0x6d1506*/
      }
      ++v5; /*0x6d150f*/
      result = (*(int (__thiscall **)(float *))(*(_DWORD *)this + 0x74))(this); /*0x6d1512*/
    }
    while ( (unsigned __int16)v5 < (unsigned __int16)result ); /*0x6d1517*/
  }
  return result; /*0x6d151a*/
}
