int __thiscall sub_560220(_DWORD *this, float *a2)
{
  _DWORD *v2; // ebx
  int v3; // edi
  float v4; // ecx
  float v5; // eax
  double v6; // st7
  _DWORD *v7; // ecx
  double v8; // st7
  __int16 v9; // bp
  __int16 v10; // bx
  void *v11; // ecx
  int v12; // edi
  int v13; // ebp
  _DWORD *v14; // ecx
  void *v15; // eax
  float v17; // [esp+4h] [ebp-178h]
  float v18; // [esp+8h] [ebp-174h]
  char v19; // [esp+28h] [ebp-154h]
  char v20; // [esp+28h] [ebp-154h]
  char v21; // [esp+28h] [ebp-154h]
  __int16 v23; // [esp+2Ch] [ebp-150h]
  int v24; // [esp+30h] [ebp-14Ch] BYREF
  float v25; // [esp+34h] [ebp-148h]
  float v26; // [esp+38h] [ebp-144h]
  float v27; // [esp+3Ch] [ebp-140h]
  float v28; // [esp+40h] [ebp-13Ch]
  int v29[30]; // [esp+44h] [ebp-138h] BYREF
  char v30; // [esp+BCh] [ebp-C0h]
  float v31; // [esp+C0h] [ebp-BCh]
  int v32; // [esp+C4h] [ebp-B8h]
  char v33; // [esp+F8h] [ebp-84h]
  float v34; // [esp+FCh] [ebp-80h]
  int v35; // [esp+100h] [ebp-7Ch]
  char v36; // [esp+134h] [ebp-48h]
  float v37; // [esp+140h] [ebp-3Ch]
  unsigned int v38; // [esp+178h] [ebp-4h]

  v2 = this;
  sub_7879A0((float *)v29);
  v3 = 0;
  v38 = 0;
  v24 = 0;
  if ( a2 )
  {
    if ( (*(int (__thiscall **)(float *))(*(_DWORD *)a2 + 0x9C))(a2) )
    {
      if ( v2[3] )
      {
        if ( byte_B125E8 )
        {
          if ( *(_BYTE *)(sub_55F7E0(1) + 0x20) )
          {
            v4 = a2[0x23];
            v5 = a2[0x22];
            v28 = a2[0x24];
            v27 = v4;
            v6 = v4;
            v7 = (_DWORD *)v2[3];
            v17 = v6;
            v26 = v5;
            sub_787070(v7, v5, v17, v28);
            if ( *(_BYTE *)(sub_55F7E0(1) + 0x23) )
            {
              sub_78C110((float **)v2[3], 1.0);
              v8 = 1.0;
            }
            else
            {
              sub_78BFB0((float **)v2[3]);
              v8 = sub_7871A0((_DWORD *)v2[3]);
            }
            v25 = v8;
            sub_787DC0((unsigned __int8 *)v2[3], (int)v29, v25);
            v19 = 0;
            if ( v36 )
            {
              v19 = 1;
              (*(void (__thiscall **)(float *, _DWORD))(*(_DWORD *)a2 + 0xD8))(a2, (unsigned __int8)(int)v37);
            }
            (*(void (__thiscall **)(float *, char))(*(_DWORD *)a2 + 0xCC))(a2, v19);
            if ( v25 > 0.0 )
            {
              v20 = 0;
              v9 = sub_5601E0(v2);
              if ( v9 > 0 )
              {
                v18 = sub_7871A0((_DWORD *)v2[3]);
                v10 = sub_787C10((_DWORD *)v2[3], v18);
                do
                {
                  if ( v10 == (_WORD)v3 )
                  {
                    v20 = 1;
                    (*(void (__stdcall **)(int, _DWORD))(*(_DWORD *)a2 + 0xD0))(
                      v3,
                      (unsigned __int8)(int)*(float *)&v29[0xE]);
                  }
                  else
                  {
                    (*(void (__stdcall **)(int, int))(*(_DWORD *)a2 + 0xD0))(v3, 0xFF);
                  }
                  ++v3;
                }
                while ( (__int16)v3 < v9 );
                v2 = this;
              }
              (*(void (__thiscall **)(float *, char))(*(_DWORD *)a2 + 0xC4))(a2, v20);
              if ( sub_506FD0() )
              {
                v11 = (void *)v2[3];
                v21 = 0;
                if ( v11 )
                {
                  v23 = sub_787200(v11);
                  if ( v23 > 0 )
                  {
                    if ( v30 || v33 )
                    {
                      v12 = 0;
                      v13 = 0;
                      do
                      {
                        if ( v30 && v32 == v13 )
                        {
                          v21 = 1;
                          (*(void (__thiscall **)(float *, int, _DWORD))(*(_DWORD *)a2 + 0xD4))(
                            a2,
                            v12,
                            (unsigned __int8)(int)v31);
                        }
                        else if ( v33 && v35 == v13 )
                        {
                          v21 = 1;
                          (*(void (__thiscall **)(float *, int, _DWORD))(*(_DWORD *)a2 + 0xD4))(
                            a2,
                            v12,
                            (unsigned __int8)(int)v34);
                        }
                        else
                        {
                          (*(void (__thiscall **)(float *, int, int))(*(_DWORD *)a2 + 0xD4))(a2, v12, 0xFF);
                        }
                        ++v12;
                        ++v13;
                      }
                      while ( (__int16)v12 < v23 );
                    }
                    if ( v2[8] )
                    {
                      if ( sub_787050((_DWORD *)v2[3]) )
                        v14 = (_DWORD *)sub_787050((_DWORD *)v2[3]);
                      else
                        v14 = (_DWORD *)v2[3];
                      v15 = (void *)sub_78C280(v14, &v24);
                      sub_7F18A0((_DWORD *)v2[8], v15, v24);
                    }
                  }
                }
                (*(void (__thiscall **)(float *, char))(*(_DWORD *)a2 + 0xC8))(a2, v21);
              }
              else
              {
                (*(void (__thiscall **)(float *, _DWORD))(*(_DWORD *)a2 + 0xC8))(a2, 0);
              }
            }
            else
            {
              (*(void (__thiscall **)(float *, _DWORD))(*(_DWORD *)a2 + 0xC4))(a2, 0);
              (*(void (__thiscall **)(float *, _DWORD))(*(_DWORD *)a2 + 0xC8))(a2, 0);
            }
          }
        }
      }
    }
  }
  v38 = 0xFFFFFFFF;
  return sub_787B20(v29);
}
