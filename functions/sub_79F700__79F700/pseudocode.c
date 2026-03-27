void __thiscall __noreturn sub_79F700(_DWORD *this, int a2, int a3, unsigned int a4, int a5)
{
  char v6; // al
  int v7; // ecx
  int v8; // edx
  double v9; // st7
  double v10; // st7
  int v11; // ecx
  unsigned int v12; // ebx
  int v13; // eax
  int v14; // eax
  char *v15; // ebx
  int v16; // eax
  _DWORD *v17; // eax
  int v18; // ecx
  _DWORD *v19; // ecx
  int v20; // [esp+0h] [ebp-58h] BYREF
  int v21; // [esp+10h] [ebp-48h] BYREF
  unsigned int v22; // [esp+14h] [ebp-44h]
  float v23; // [esp+20h] [ebp-38h]
  float v24; // [esp+24h] [ebp-34h]
  char v25; // [esp+28h] [ebp-30h]
  float v26; // [esp+2Ch] [ebp-2Ch]
  float v27; // [esp+30h] [ebp-28h]
  float v28; // [esp+34h] [ebp-24h]
  int v29; // [esp+38h] [ebp-20h]
  int v30; // [esp+3Ch] [ebp-1Ch]
  int v31; // [esp+40h] [ebp-18h]
  _DWORD *v32; // [esp+44h] [ebp-14h]
  int *v33; // [esp+48h] [ebp-10h]
  int v34; // [esp+54h] [ebp-4h]

  v33 = &v20;
  v32 = this;
  sub_79AD70(&v21, a5);
  v6 = *(_BYTE *)(a5 + 0x18);
  v23 = *(float *)(a5 + 0x10);
  v7 = *(_DWORD *)(a5 + 0x28);
  v8 = *(_DWORD *)(a5 + 0x2C);
  v24 = *(float *)(a5 + 0x14);
  v9 = *(float *)(a5 + 0x1C);
  v25 = v6;
  v26 = v9;
  v29 = v7;
  v10 = *(float *)(a5 + 0x20);
  v30 = v8;
  v27 = v10;
  v28 = *(float *)(a5 + 0x24);
  v11 = *(this + 1);
  v12 = 0;
  v34 = 0;
  if ( v11 )
    v12 = (*(this + 3) - v11) / 0x30;
  if ( a4 )
  {
    if ( v11 )
      v13 = (*(this + 2) - v11) / 0x30;
    else
      v13 = 0;
    if ( 0x5555555 - v13 < a4 )
      sub_790B90(a4);
    if ( v11 )
      v14 = (*(this + 2) - v11) / 0x30;
    else
      v14 = 0;
    if ( v12 < a4 + v14 )
    {
      if ( 0x5555555 - (v12 >> 1) >= v12 )
        v15 = (char *)((v12 >> 1) + v12);
      else
        v15 = 0;
      if ( v11 )
        v16 = (*(this + 2) - v11) / 0x30;
      else
        v16 = 0;
      if ( (unsigned int)v15 < a4 + v16 )
        v15 = (char *)(a4 + sub_799F10(this));
      v17 = sub_799FA0(v15);
      v18 = *(this + 1);
      LOBYTE(v31) = 0;
      LOBYTE(v34) = 1;
      sub_79C2E0(v18, a3, v17);
    }
    v19 = (_DWORD *)*(this + 2);
    if ( ((int)v19 - a3) / 0x30 < a4 )
      sub_79EA70(this, a3, (int)v19, (_DWORD *)(a3 + 0x30 * a4));
    sub_79EA70(this, (int)&v19[0xFFFFFFF4 * a4], (int)v19, v19);
  }
  if ( v22 )
    FormHeapFree(v22);
}
