char __thiscall sub_6DDB50(int this, int a2)
{
  int v3; // eax
  int v4; // ebp
  float *v5; // esi
  int v6; // edi
  bool v7; // zf
  int v8; // ebp
  _DWORD *v9; // ebx
  char v11[4]; // [esp+28h] [ebp-38h] BYREF
  int v12; // [esp+2Ch] [ebp-34h] BYREF
  int v13[3]; // [esp+30h] [ebp-30h] BYREF
  int v14[9]; // [esp+3Ch] [ebp-24h] BYREF

  v3 = *(_DWORD *)(this + 0x4C);
  if ( v3 )
  {
    v4 = *(_DWORD *)(v3 + 0x10);
    v5 = *(float **)(v3 + 0xC);
    v6 = *(_DWORD *)(v3 + 8);
    if ( v5 )
    {
      v3 = *(_DWORD *)(this + 0x48);
      if ( v3 )
      {
        v7 = *(_DWORD *)(v3 + 0xC) == 0;
        v11[0] = *(_BYTE *)(v3 + 0x14);
        if ( !v7 )
        {
          LOBYTE(v3) = sub_6C36B0((float *)this, *(float *)&a2);
          if ( !(_BYTE)v3 )
          {
            *(float *)&a2 = sub_6BB270(*(float *)(this + 0x28), v5, v4, v6, (int *)(this + 0x44), v11[0]);
            sub_6DD710(this, *(float *)&a2, (unsigned int *)v11, &v12, (float *)&a2);
            v8 = v12;
            if ( (*(_BYTE *)(this + 0x3C) & 0x20) != 0 )
            {
              sub_6DC940((_DWORD *)this, *(unsigned int *)v11, v12, *(float *)&a2, (float *)v14);
              qmemcpy((void *)(*(_DWORD *)(this + 0x30) + 0x30), v14, 0x24u);
            }
            sub_6DC8E0((_DWORD *)this, (int)v13, *(int *)v11, v8, *(float *)&a2);
            LOBYTE(v3) = v13[0];
            v9 = (_DWORD *)(*(_DWORD *)(this + 0x30) + 0x54);
            *v9 = v13[0];
            v9[1] = v13[1];
            v9[2] = v13[2];
          }
        }
      }
    }
  }
  return v3;
}
