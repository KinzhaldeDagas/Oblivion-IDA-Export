void __thiscall __noreturn sub_7A1040(_DWORD *this, int a2, char *a3, unsigned int a4, int a5)
{
  int v6; // ecx
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // eax
  char *v10; // ebx
  int v11; // eax
  int v12; // eax
  _DWORD *v13; // eax
  _DWORD *v14; // ecx
  char *v15; // eax
  _DWORD *v16; // esi
  int v17; // [esp+0h] [ebp-38h] BYREF
  int v18; // [esp+10h] [ebp-28h] BYREF
  _DWORD *v19; // [esp+14h] [ebp-24h]
  _DWORD *v20; // [esp+18h] [ebp-20h]
  char *v21; // [esp+20h] [ebp-18h]
  _DWORD *v22; // [esp+24h] [ebp-14h]
  int *v23; // [esp+28h] [ebp-10h]
  int v24; // [esp+34h] [ebp-4h]

  v23 = &v17;
  v22 = this;
  sub_79EE40(&v18, a5);
  v6 = *(this + 1);
  v7 = 0;
  v24 = 0;
  if ( v6 )
    v8 = (*(this + 3) - v6) >> 4;
  else
    v8 = 0;
  if ( a4 )
  {
    if ( v6 )
      v7 = (*(this + 2) - v6) >> 4;
    if ( 0xFFFFFFF - v7 < a4 )
      sub_790B90(a4);
    if ( v6 )
      v9 = (*(this + 2) - v6) >> 4;
    else
      v9 = 0;
    if ( v8 < a4 + v9 )
    {
      if ( 0xFFFFFFF - (v8 >> 1) >= v8 )
        v10 = (char *)((v8 >> 1) + v8);
      else
        v10 = 0;
      if ( v6 )
        v11 = (*(this + 2) - v6) >> 4;
      else
        v11 = 0;
      if ( (unsigned int)v10 < a4 + v11 )
      {
        if ( v6 )
          v12 = (*(this + 2) - v6) >> 4;
        else
          v12 = 0;
        v10 = (char *)(v12 + a4);
      }
      v13 = (_DWORD *)sub_794550(v10);
      v14 = (_DWORD *)*(this + 1);
      LOBYTE(v21) = 0;
      LOBYTE(v24) = 1;
      sub_7A0D40(v14, a3, v13);
    }
    v15 = (char *)*(this + 2);
    v21 = v15;
    if ( (v15 - a3) >> 4 < a4 )
      sub_7A0FD0(a3, v15, &a3[0x10 * a4]);
    sub_7A0FD0(&v15[0xFFFFFFF0 * a4], v15, v15);
  }
  v16 = v19;
  if ( v19 )
  {
    sub_79E150(v19, v20);
    FormHeapFree((unsigned int)v16);
  }
}
