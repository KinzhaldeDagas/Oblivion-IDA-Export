bool __thiscall sub_7D2EA0(char *this, float *a2, float *a3)
{
  bool v6; // zf
  float v7; // edx
  float v8; // ecx
  float v9; // edx
  unsigned int v10; // edi
  NiFrustumPlanes *v11; // ebp
  signed int v12; // eax
  float v13; // [esp+8h] [ebp-1Ch]
  float v14; // [esp+Ch] [ebp-18h]
  float v15; // [esp+10h] [ebp-14h]
  NiBound v16; // [esp+14h] [ebp-10h] BYREF
  float v17; // [esp+28h] [ebp+4h]
  float v18; // [esp+28h] [ebp+4h]
  float v19; // [esp+28h] [ebp+4h]
  char v20; // [esp+2Ch] [ebp+8h]

  if ( !a3 )
    return 0;
  if ( (char *)(*(int (__thiscall **)(float *))(*(_DWORD *)a3 + 4))(a3) == dword_B3FCFC )
    return 1;
  v6 = *((_DWORD *)this + 0x53) == 0;
  v7 = a2[9];
  v16.Center.x = a2[8];
  v8 = a2[0xA];
  v16.Center.y = v7;
  v9 = a2[0xB];
  v20 = 1;
  v16.Center.z = v8;
  v16.Radius = v9;
  if ( v6 )
  {
    v13 = a3[0x22] - v16.Center.x;
    v14 = a3[0x23] - v16.Center.y;
    v15 = a3[0x24] - v16.Center.z;
    v17 = v14 * v14 + v13 * v13 + v15 * v15;
    v18 = sqrt(v17);
    v19 = v18 - v16.Radius;
    return a3[0x3E] > (double)v19;
  }
  else
  {
    v10 = 0;
    v11 = (NiFrustumPlanes *)(this + 0x150);
    do
    {
      if ( ((1 << v10) & *((_DWORD *)this + 0x6C)) != 0 )
      {
        v12 = sub_47DA70(&v16, v11);
        if ( v12 == 2 )
        {
          v20 = 0;
        }
        else if ( v12 == 1 )
        {
          *((_DWORD *)this + 0x6C) &= ~(1 << v10);
        }
      }
      ++v10;
      v11 = (NiFrustumPlanes *)((char *)v11 + 0x10);
    }
    while ( v10 < 6 );
    return v20;
  }
}
