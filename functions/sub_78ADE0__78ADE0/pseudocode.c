void __thiscall sub_78ADE0(unsigned int *this, int a2, char *a3, unsigned int a4, const void *a5)
{
  int v6; // ecx
  unsigned int v7; // edi
  int v9; // eax
  int v10; // eax
  unsigned int v11; // edi
  int v12; // eax
  char *v13; // eax
  char *v14; // eax
  int v15; // eax
  int v16; // esi
  char *v17; // ecx
  unsigned int v18; // eax
  char *v19; // esi
  char *v20; // [esp-20h] [ebp-5Ch]
  char *v21; // [esp-Ch] [ebp-48h]
  int v22; // [esp-8h] [ebp-44h]
  int v23; // [esp+0h] [ebp-3Ch] BYREF
  char v24[28]; // [esp+10h] [ebp-2Ch] BYREF
  int *v25; // [esp+2Ch] [ebp-10h]
  int v26; // [esp+38h] [ebp-4h]
  int v27; // [esp+4Ch] [ebp+10h]
  char *v28; // [esp+50h] [ebp+14h]
  unsigned int v29; // [esp+50h] [ebp+14h]

  v25 = &v23;
  qmemcpy(v24, a5, sizeof(v24));
  v6 = *(this + 1);
  if ( v6 )
    v7 = (int)(*(this + 3) - v6) / 0x1C;
  else
    v7 = 0;
  if ( a4 )
  {
    if ( v6 )
      v9 = (int)(*(this + 2) - *(this + 1)) / 0x1C;
    else
      v9 = 0;
    if ( 0x9249249 - v9 < a4 )
      sub_790B90();
    if ( *(this + 1) )
      v10 = (int)(*(this + 2) - *(this + 1)) / 0x1C;
    else
      v10 = 0;
    if ( v7 >= a4 + v10 )
    {
      v17 = (char *)*(this + 2);
      v27 = (int)v17;
      if ( (v17 - a3) / 0x1C >= a4 )
      {
        v18 = 0x1C * a4;
        v19 = &v17[0xFFFFFFE4 * a4];
        v29 = v18;
        *(this + 2) = (unsigned int)sub_788ED0(&v17[-v18], v17, v17);
        sub_788B60(a3, v19, v27);
        sub_788AB0(a3, &a3[v29], v24);
      }
      else
      {
        sub_788ED0(a3, v17, &a3[0x1C * a4]);
        v22 = a4 - (int)(*(this + 2) - (_DWORD)a3) / 0x1C;
        v21 = (char *)*(this + 2);
        v26 = 2;
        sub_788E90(v21, v22, v24);
        *(this + 2) += 0x1C * a4;
        sub_788AB0(a3, (char *)(*(this + 2) - 0x1C * a4), v24);
      }
    }
    else
    {
      if ( 0x9249249 - (v7 >> 1) >= v7 )
        v11 = (v7 >> 1) + v7;
      else
        v11 = 0;
      if ( *(this + 1) )
        v12 = (int)(*(this + 2) - *(this + 1)) / 0x1C;
      else
        v12 = 0;
      if ( v11 < a4 + v12 )
        v11 = a4 + sub_7876C0(this);
      v28 = (char *)sub_787740((char *)v11);
      v20 = (char *)*(this + 1);
      v26 = 0;
      v13 = sub_788630(v20, a3, v28);
      v14 = sub_788E90(v13, a4, v24);
      sub_788630(a3, (char *)*(this + 2), v14);
      v15 = *(this + 1);
      if ( v15 )
        v15 = (int)(*(this + 2) - v15) / 0x1C;
      v16 = v15 + a4;
      if ( *(this + 1) )
        FormHeapFree(*(this + 1));
      *(this + 3) = (unsigned int)&v28[0x1C * v11];
      *(this + 2) = (unsigned int)&v28[0x1C * v16];
      *(this + 1) = (unsigned int)v28;
    }
  }
}
