void __thiscall TESNPC_SetFaceGenAge(float *this, signed int a2)
{
  int (__thiscall *v3)(float *, int); // eax
  int v4; // eax
  float *v5; // ecx
  double v6; // st6
  double v7; // st4
  double v8; // st7
  double v9; // st5
  double v10; // st3
  double v11; // st6
  double v12; // st7
  float *v13; // esi
  bool v14; // zf
  float *v15; // eax
  DWORD CurrentThreadId; // eax
  int v17; // eax
  unsigned int v18; // edi
  int v19; // ecx
  int v20; // eax
  int v21; // ebp
  int v22; // eax
  int v23; // esi
  char *v24; // eax
  float v25; // [esp+10h] [ebp-158h]
  float Age; // [esp+28h] [ebp-140h]
  float v27; // [esp+28h] [ebp-140h]
  unsigned int v28; // [esp+28h] [ebp-140h]
  float v29; // [esp+2Ch] [ebp-13Ch]
  int v30; // [esp+2Ch] [ebp-13Ch]
  float v31; // [esp+30h] [ebp-138h]
  int v32; // [esp+30h] [ebp-138h]
  unsigned int v33; // [esp+38h] [ebp-130h]
  int a1[24]; // [esp+3Ch] [ebp-12Ch] BYREF
  int v35[24]; // [esp+9Ch] [ebp-CCh] BYREF
  int v36[24]; // [esp+FCh] [ebp-6Ch] BYREF
  unsigned int v37; // [esp+164h] [ebp-4h]

  ArrayConstructor(a1, 0x18u, 4, (int)sub_43EB30, (void (__thiscall *)(void *))sub_43ACE0);
  v37 = 0;
  ArrayConstructor(v35, 0x18u, 4, (int)sub_43EB30, (void (__thiscall *)(void *))sub_43ACE0);
  v3 = *(int (__thiscall **)(float *, int))(*(_DWORD *)this + 0x128);
  LOBYTE(v37) = 1;
  v4 = v3(this, 0x45);
  v5 = this + 0x5A;
  if ( !v4 )
    v5 = this + 0x42;
  sub_552990((int *)(*((_DWORD *)this + 0x3A) + 0x29C), (int *)v5, (int)a1, 0, 0.0);
  Age = BSFaceGen_GetAge(a1, 0, 0);
  v31 = BSFaceGen_GetAge(a1, 0, 1);
  v29 = (float)a2;
  v27 = v31 - (Age - v29);
  v6 = dbl_A492F0;
  if ( v6 < v29 && flt_A47800 <= (double)v29 )
  {
    v9 = flt_A47800;
    v8 = flt_A468FC;
    v7 = v9;
  }
  else
  {
    v7 = v29;
    if ( v29 <= v6 )
      v7 = flt_A468FC;
    v8 = flt_A468FC;
    v9 = flt_A47800;
  }
  v10 = v27;
  if ( v27 > v6 && v10 >= v9 )
  {
    v12 = v7;
    v27 = v9;
  }
  else if ( v10 > v6 )
  {
    v12 = v7;
  }
  else
  {
    v11 = v8;
    v12 = v7;
    v27 = v11;
  }
  v25 = v12;
  sub_555A00((int)a1, 0, 0, v25);
  sub_555A00((int)a1, 0, 1, v27);
  sub_552880(v35);
  ArrayConstructor(v36, 0x18u, 4, (int)sub_43EB30, (void (__thiscall *)(void *))sub_43ACE0);
  LOBYTE(v37) = 2;
  sub_5221C0((int *)this, v36);
  sub_552C10(v36, (int)a1, (int)v35);
  v13 = this + 0x5A;
  if ( !(*(int (__thiscall **)(float *, int))(*(_DWORD *)this + 0x128))(this, 0x45) )
    v13 = this + 0x42;
  v14 = (*(int (__thiscall **)(float *, int))(*(_DWORD *)this + 0x128))(this, 0x45) == 0;
  v15 = this + 0x5A;
  if ( v14 )
    v15 = this + 0x42;
  sub_552990(v35, (int *)v15, (int)v13, 0, 0.0);
  EnterCriticalSection(&stru_B39C00);
  CurrentThreadId = GetCurrentThreadId();
  ++dword_B39C7C;
  dword_B39C78 = CurrentThreadId;
  v17 = *((_DWORD *)this + 0x75);
  v30 = v17;
  if ( v17 )
  {
    v32 = 2;
    while ( 1 )
    {
      if ( v17 )
      {
        v18 = 0;
        v33 = *(unsigned __int16 *)(v17 + 0xB6);
        v28 = 0;
        if ( *(_WORD *)(v17 + 0xB6) )
        {
          while ( 1 )
          {
            if ( *(unsigned __int16 *)(v17 + 0xB6) > v18 )
            {
              v19 = *(_DWORD *)(*(_DWORD *)(v17 + 0xB0) + 4 * v18);
              if ( v19 )
              {
                v20 = (*(int (__thiscall **)(int))(*(_DWORD *)v19 + 0x10))(v19);
                v21 = v20;
                if ( v20 )
                {
                  v22 = sub_550790(v20);
                  v23 = v22;
                  if ( v22 )
                  {
                    if ( (*(int (__thiscall **)(int))(*(_DWORD *)v22 + 0x54))(v22) )
                    {
                      v24 = (char *)(*(int (__thiscall **)(int))(*(_DWORD *)v23 + 0x54))(v23);
                      sub_558840(v24, (int)v35, v21, 1.0, 0);
                      if ( !strcmp(*(const char **)(v21 + 8), "FaceGenHair") )
                        sub_550980(v21, *(this + 0x73));
                      v18 = v28;
                    }
                  }
                }
              }
            }
            v28 = ++v18;
            if ( v18 >= v33 )
              break;
            v17 = v30;
          }
        }
        v30 = *((_DWORD *)this + 0x76);
      }
      if ( !--v32 )
        break;
      v17 = v30;
    }
  }
  v14 = dword_B39C7C-- == 1;
  if ( v14 )
    dword_B39C78 = 0;
  LeaveCriticalSection(&stru_B39C00);
  LOBYTE(v37) = 1;
  _LN21(v36, 0x18u, 4, (void (__thiscall *)(void *))sub_43ACE0);
  LOBYTE(v37) = 0;
  _LN21(v35, 0x18u, 4, (void (__thiscall *)(void *))sub_43ACE0);
  v37 = 0xFFFFFFFF;
  _LN21(a1, 0x18u, 4, (void (__thiscall *)(void *))sub_43ACE0);
}
