void __cdecl sub_88F700(int a1, float *a2, char a3)
{
  int v3; // eax
  float *v4; // ebp
  int v5; // eax
  int v6; // edi
  int v7; // ecx
  void *v8; // esi
  float x; // ecx
  float y; // esi
  float z; // edi
  bool v12; // [esp+3h] [ebp-79h]
  float v13[4]; // [esp+4h] [ebp-78h] BYREF
  NiTransform v14; // [esp+14h] [ebp-68h] BYREF
  float v15[13]; // [esp+48h] [ebp-34h] BYREF

  if ( a1 )
  {
    v3 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 8))(a1);
    v4 = (float *)v3;
    if ( v3 )
    {
      if ( *(_WORD *)(v3 + 0xB6) )
      {
        v5 = **(_DWORD **)(v3 + 0xB0);
        if ( v5 )
        {
          if ( *(_WORD *)(v5 + 0xB6) )
          {
            v6 = **(_DWORD **)(v5 + 0xB0);
            if ( v6 )
            {
              v7 = sub_88F200(v5);
              if ( v7 )
              {
                v12 = 0.0 == *(float *)(v7 + 0x14);
                if ( *(_DWORD *)(v6 + 0xA8) || 0.0 == *(float *)(v7 + 0x14) )
                {
                  v8 = *(void **)(v7 + 0x10);
                  if ( v8 && sub_607840(*(_DWORD **)(v7 + 0x10)) )
                  {
                    sub_4D6900(v8, &v14.pos.x);
                    sub_4D6950(v8, v13);
                    sub_47C600((NiTransform *)v13, &v14);
                  }
                  else
                  {
                    qmemcpy(&v14, (const void *)(v6 + 0x64), sizeof(v14));
                  }
                  qmemcpy(v15, v4 + 0xC, sizeof(v15));
                  if ( a3 || !v12 )
                    v14.pos.z = v15[0xB];
                  x = v14.pos.x;
                  y = v14.pos.y;
                  z = v14.pos.z;
                  *a2 = v14.pos.x;
                  a2[1] = y;
                  a2[2] = z;
                  *a2 = *a2 - v4[0x15];
                  a2[1] = a2[1] - v4[0x16];
                  a2[2] = a2[2] - v4[0x17];
                  v4[0x15] = x;
                  v4[0x16] = y;
                  v4[0x17] = z;
                  qmemcpy(v4 + 0xC, &v14, 0x24u);
                  if ( a3 )
                    (*(void (__thiscall **)(float *))(*(_DWORD *)v4 + 0x74))(v4);
                }
              }
            }
          }
        }
      }
    }
  }
}
