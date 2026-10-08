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

  if ( a1 ) /*0x88f709*/
  {
    v3 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 8))(a1); /*0x88f715*/
    v4 = (float *)v3; /*0x88f717*/
    if ( v3 ) /*0x88f71b*/
    {
      if ( *(_WORD *)(v3 + 0xB6) ) /*0x88f721*/
      {
        v5 = **(_DWORD **)(v3 + 0xB0); /*0x88f735*/
        if ( v5 ) /*0x88f739*/
        {
          if ( *(_WORD *)(v5 + 0xB6) ) /*0x88f73f*/
          {
            v6 = **(_DWORD **)(v5 + 0xB0); /*0x88f754*/
            if ( v6 ) /*0x88f758*/
            {
              v7 = sub_88F200(v5); /*0x88f764*/
              if ( v7 ) /*0x88f76b*/
              {
                v12 = 0.0 == *(float *)(v7 + 0x14); /*0x88f782*/
                if ( *(_DWORD *)(v6 + 0xA8) || 0.0 == *(float *)(v7 + 0x14) ) /*0x88f795*/
                {
                  v8 = *(void **)(v7 + 0x10); /*0x88f79d*/
                  if ( v8 && sub_607840(*(_DWORD **)(v7 + 0x10)) ) /*0x88f7a6*/
                  {
                    sub_4D6900(v8, &v14.pos.x); /*0x88f7b6*/
                    sub_4D6950(v8, v13); /*0x88f7c2*/
                    sub_47C600((NiTransform *)v13, &v14); /*0x88f7d0*/
                  }
                  else
                  {
                    qmemcpy(&v14, (const void *)(v6 + 0x64), sizeof(v14)); /*0x88f7e3*/
                  }
                  qmemcpy(v15, v4 + 0xC, sizeof(v15)); /*0x88f7fc*/
                  if ( a3 || !v12 ) /*0x88f804*/
                    v14.pos.z = v15[0xB]; /*0x88f80d*/
                  x = v14.pos.x; /*0x88f818*/
                  y = v14.pos.y; /*0x88f81c*/
                  z = v14.pos.z; /*0x88f820*/
                  *a2 = v14.pos.x; /*0x88f824*/
                  a2[1] = y; /*0x88f826*/
                  a2[2] = z; /*0x88f829*/
                  *a2 = *a2 - v4[0x15]; /*0x88f833*/
                  a2[1] = a2[1] - v4[0x16]; /*0x88f83b*/
                  a2[2] = a2[2] - v4[0x17]; /*0x88f844*/
                  v4[0x15] = x; /*0x88f847*/
                  v4[0x16] = y; /*0x88f84a*/
                  v4[0x17] = z; /*0x88f84d*/
                  qmemcpy(v4 + 0xC, &v14, 0x24u); /*0x88f85b*/
                  if ( a3 ) /*0x88f85f*/
                    (*(void (__thiscall **)(float *))(*(_DWORD *)v4 + 0x74))(v4); /*0x88f86e*/
                }
              }
            }
          }
        }
      }
    }
  }
}
