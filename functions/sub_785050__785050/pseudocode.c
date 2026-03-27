// positive sp value has been detected, the output may be wrong!
void __thiscall __noreturn sub_785050(int this, int a2, char *a3, unsigned int a4, _DWORD *a5)
{
  int v6; // edx
  int v7; // ecx
  int v8; // edx
  int v9; // ecx
  int v10; // edx
  int v11; // edi
  unsigned int v12; // ecx
  int v13; // eax
  int v14; // eax
  unsigned int v15; // ecx
  int v16; // eax
  _DWORD *v17; // eax
  _DWORD *v18; // ecx
  _DWORD *v19; // eax
  _DWORD *v20; // eax
  char *v21; // edi
  int v22; // eax
  unsigned int v23; // ebx
  _DWORD *v24; // ecx
  int v25; // ebx
  _DWORD *v26; // [esp-10h] [ebp-54h]
  int v27; // [esp-Ch] [ebp-50h]
  int v28; // [esp-4h] [ebp-48h] BYREF
  _DWORD v29[6]; // [esp+10h] [ebp-34h] BYREF
  int v30; // [esp+28h] [ebp-1Ch]
  int v31; // [esp+2Ch] [ebp-18h]
  int v32; // [esp+30h] [ebp-14h]
  int *v33; // [esp+34h] [ebp-10h]
  unsigned int v34; // [esp+40h] [ebp-4h]
  char *v35; // [esp+54h] [ebp+10h]
  _DWORD *v36; // [esp+58h] [ebp+14h]
  _DWORD *v37; // [esp+58h] [ebp+14h]

  v33 = &v28;
  v32 = this;
  v6 = a5[1];
  v29[0] = *a5;
  v7 = a5[2];
  v29[1] = v6;
  v8 = a5[3];
  v29[2] = v7;
  v9 = a5[4];
  v29[3] = v8;
  v10 = a5[5];
  v29[4] = v9;
  v29[5] = v10;
  v11 = *(_DWORD *)(v32 + 4);
  v12 = 0;
  v34 = 0;
  if ( v11 )
    v12 = (*(_DWORD *)(this + 0xC) - v11) / 0x18;
  if ( a4 )
  {
    if ( v11 )
      v13 = (*(_DWORD *)(this + 8) - v11) / 0x18;
    else
      v13 = 0;
    if ( 0xFFFFFFFF - v13 < a4 )
      sub_790B90();
    if ( v11 )
      v14 = (*(_DWORD *)(this + 8) - v11) / 0x18;
    else
      v14 = 0;
    if ( v12 >= a4 + v14 )
    {
      v24 = *(_DWORD **)(this + 8);
      v37 = v24;
      if ( ((char *)v24 - a3) / 0x18 >= a4 )
      {
        v25 = 0x18 * a4;
        v35 = (char *)&v24[0xFFFFFFFA * a4];
        *(_DWORD *)(this + 8) = sub_7849C0(v35, v24, v24);
        sub_7905A0(a3, v35, v37);
        sub_784140(a3, &a3[v25], v29);
      }
      else
      {
        sub_7849C0(a3, v24, &a3[0x18 * a4]);
        v27 = a4 - (*(_DWORD *)(this + 8) - (int)a3) / 0x18;
        v26 = *(_DWORD **)(this + 8);
        LOBYTE(v34) = 3;
        sub_790A70(v26, v27, v29);
        *(_DWORD *)(this + 8) += 0x18 * a4;
        sub_784140(a3, (_DWORD *)(*(_DWORD *)(this + 8) - 0x18 * a4), v29);
      }
    }
    else
    {
      if ( 0xFFFFFFFF - (v12 >> 1) >= v12 )
        v15 = (v12 >> 1) + v12;
      else
        v15 = 0;
      if ( v11 )
        v16 = (*(_DWORD *)(this + 8) - v11) / 0x18;
      else
        v16 = 0;
      if ( v15 < a4 + v16 )
        v15 = a4 + sub_783FE0((_DWORD *)this);
      v30 = 0x18 * v15;
      v17 = (_DWORD *)FormHeapAlloc(0x18 * v15);
      v18 = *(_DWORD **)(this + 4);
      LOBYTE(v31) = 0;
      v36 = v17;
      LOBYTE(v34) = 1;
      v19 = sub_7847F0(v18, a3, v17);
      v20 = (_DWORD *)sub_790A70(v19, a4, v29);
      sub_7847F0(a3, *(_DWORD **)(this + 8), v20);
      v21 = *(char **)(this + 4);
      v22 = 0;
      v34 = 0;
      if ( v21 )
        v22 = (*(_DWORD *)(this + 8) - (int)v21) / 0x18;
      v23 = v22 + a4;
      if ( v21 )
      {
        sub_7849F0(v21, *(char **)(this + 8));
        FormHeapFree(*(_DWORD *)(this + 4));
      }
      *(_DWORD *)(this + 0xC) = &v36[v30 / 4u];
      *(_DWORD *)(this + 8) = &v36[6 * v23];
      *(_DWORD *)(this + 4) = v36;
    }
  }
  v34 = 0xFFFFFFFF;
  TESTexture::ClearComponentReferences(v29);
}
