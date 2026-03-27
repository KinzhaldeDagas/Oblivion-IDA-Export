void __thiscall __noreturn sub_6EEBC0(_DWORD *this, int a2, char *a3, unsigned int a4, _DWORD *a5)
{
  int v6; // ecx
  unsigned int v7; // edi
  int v8; // eax
  int v9; // eax
  char *v10; // edi
  int v11; // eax
  unsigned int *v12; // eax
  _DWORD *v13; // ecx
  char *v14; // ecx
  _DWORD v15[6]; // [esp+0h] [ebp-68h] BYREF
  char *v16; // [esp+18h] [ebp-50h]
  unsigned int v17; // [esp+1Ch] [ebp-4Ch]
  int v18[3]; // [esp+20h] [ebp-48h] BYREF
  unsigned int v19; // [esp+2Ch] [ebp-3Ch]
  unsigned int v20; // [esp+3Ch] [ebp-2Ch]
  int v21; // [esp+4Ch] [ebp-1Ch]
  unsigned int v22; // [esp+50h] [ebp-18h]
  _DWORD *v23; // [esp+58h] [ebp-10h]
  int v24; // [esp+64h] [ebp-4h]

  v23 = v15;
  v16 = (char *)this;
  sub_6EDC20(v18, a5);
  v6 = *(this + 1);
  v7 = 0;
  v24 = 0;
  if ( v6 )
    v7 = (*(this + 3) - v6) / 0x34;
  if ( a4 )
  {
    if ( v6 )
      v8 = (*(this + 2) - v6) / 0x34;
    else
      v8 = 0;
    if ( 0x4EC4EC4 - v8 < a4 )
      sub_790B90();
    if ( v6 )
      v9 = (*(this + 2) - v6) / 0x34;
    else
      v9 = 0;
    if ( v7 < a4 + v9 )
    {
      if ( 0x4EC4EC4 - (v7 >> 1) >= v7 )
        v10 = (char *)((v7 >> 1) + v7);
      else
        v10 = 0;
      if ( v6 )
        v11 = (*(this + 2) - v6) / 0x34;
      else
        v11 = 0;
      if ( (unsigned int)v10 < a4 + v11 )
        v10 = (char *)(a4 + sub_54F6A0(this));
      v12 = sub_54F740(v10);
      v13 = (_DWORD *)*(this + 1);
      LOBYTE(v17) = 0;
      v15[4] = v12;
      v15[5] = v12;
      LOBYTE(v24) = 1;
      sub_6EE1C0(v13, a3, v12);
    }
    v14 = (char *)*(this + 2);
    v17 = (unsigned int)v14;
    if ( (v14 - a3) / 0x34 < a4 )
    {
      v17 = 0x34 * a4;
      sub_6EEB90(a3, v14, (unsigned int *)&a3[0x34 * a4]);
    }
    v16 = &v14[0xFFFFFFCC * a4];
    sub_6EEB90(v16, v14, (unsigned int *)v14);
  }
  if ( v22 >= 0x10 )
    FormHeapFree(v20);
  v22 = 0xF;
  v21 = 0;
  LOBYTE(v20) = 0;
  if ( v19 )
    FormHeapFree(v19);
}
