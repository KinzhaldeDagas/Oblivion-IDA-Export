void __thiscall sub_43EB80(int this)
{
  unsigned int v2; // edi
  int v3; // eax
  int v4; // ecx
  Ni2DBuffer *v5; // eax
  int v6; // ecx
  int v7; // eax
  int v8; // esi
  char v9; // cl
  char **v10; // eax
  _DWORD *v11; // eax
  char *v12; // esi
  int v13; // ecx
  unsigned int i; // ebx
  int v15; // eax
  float *v16; // esi
  int v17; // ecx
  _DWORD *v18; // edi
  void *v19; // ecx
  int *v20; // eax
  char *v21; // [esp+24h] [ebp-C4h]
  LPCRITICAL_SECTION lpCriticalSection; // [esp+28h] [ebp-C0h] BYREF
  int v23; // [esp+2Ch] [ebp-BCh] BYREF
  int v24; // [esp+30h] [ebp-B8h] BYREF
  float v25[8]; // [esp+34h] [ebp-B4h] BYREF
  int a1[24]; // [esp+58h] [ebp-90h] BYREF
  float v27[9]; // [esp+B8h] [ebp-30h] BYREF
  unsigned int v28; // [esp+E4h] [ebp-4h]

  v2 = 0;
  if ( *(int *)(this + 0xC) >= 4
    && (!*(_DWORD *)(this + 0x1C)
     || *(unsigned __int16 *)(*(_DWORD *)(this + 0x1C) + 0xC) == *(_DWORD *)(*(_DWORD *)(this + 0x1C) + 0x10))
    && *(_DWORD *)(this + 0xC) != 6 )
  {
    if ( *(PlayerCharacter **)(this + 0x30) != TESDataHandler_g_PlayerRef )
    {
      v3 = *(_DWORD *)(this + 0x24);
      if ( v3 )
      {
        if ( *(_DWORD *)(v3 + 0x28) )
        {
          v4 = *(_DWORD *)(v3 + 0x28);
          if ( *(_DWORD *)(v4 + 8) )
          {
            v5 = (Ni2DBuffer *)sub_4792F0(*(_DWORD **)(this + 0x20), *(_DWORD *)(this + 0x28), *(_DWORD **)(v4 + 8));
            NiSmartPointer_Set__((Ni2DBuffer **)(this + 0x2C), v5);
            v6 = *(_DWORD *)(this + 0x2C);
            if ( v6 )
            {
              if ( *(_WORD *)(v6 + 0xB6) )
              {
                while ( 1 )
                {
                  v7 = sub_405790(v6, v2);
                  v8 = v7;
                  if ( v7 )
                  {
                    if ( (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 0xC))(v7) && *(_DWORD *)(v8 + 0xB8) )
                      break;
                  }
                  v6 = *(_DWORD *)(this + 0x2C);
                  if ( ++v2 >= *(unsigned __int16 *)(v6 + 0xB6) )
                    goto LABEL_15;
                }
              }
              else
              {
LABEL_15:
                if ( *(_DWORD *)(this + 0x28) )
                {
                  v9 = 0;
                  v10 = (char **)(this + 0x28);
                }
                else
                {
                  v11 = sub_478A40(*(_DWORD **)(this + 0x20));
                  v10 = (char **)sub_405070(&v24, (int)v11);
                  v9 = 1;
                }
                v12 = *v10;
                v21 = *v10;
                if ( (v9 & 1) != 0 )
                  sub_7016A0((NiD3DVertexShader *)&v24);
                if ( v12 )
                {
                  v13 = *(_DWORD *)(this + 0x2C);
                  for ( i = 0; i < *(unsigned __int16 *)(v13 + 0xB6); ++i )
                  {
                    v15 = sub_405790(v13, i);
                    v16 = (float *)v15;
                    if ( v15 )
                    {
                      if ( *(_DWORD *)(v15 + 0xB4) )
                      {
                        v17 = *(_DWORD *)(*(_DWORD *)(this + 0x20) + 0x150);
                        if ( v17 )
                        {
                          if ( (*(int (__thiscall **)(int))(*(_DWORD *)v17 + 0x170))(v17) )
                          {
                            if ( *(_BYTE *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(this + 0x20)
                                                                                        + 0x150)
                                                                          + 0x170))(*(_DWORD *)(*(_DWORD *)(this + 0x20)
                                                                                              + 0x150))
                                          + 4) == 0x23 )
                            {
                              v18 = (_DWORD *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(this + 0x20)
                                                                                          + 0x150)
                                                                            + 0x170))(*(_DWORD *)(*(_DWORD *)(this + 0x20)
                                                                                                + 0x150));
                              ArrayConstructor(a1, 0x18u, 4, (int)sub_43EB30, (void (__thiscall *)(void *))sub_43ACE0);
                              v19 = *((void **)v16 + 0x2D);
                              v28 = 0;
                              v20 = sub_700790(v19, &v23);
                              sub_405070(&lpCriticalSection, *v20);
                              LOBYTE(v28) = 1;
                              sub_7016A0((NiD3DVertexShader *)&v23);
                              (*(void (__thiscall **)(float *, LPCRITICAL_SECTION))(*(_DWORD *)v16 + 0x8C))(
                                v16,
                                lpCriticalSection);
                              sub_5221C0(v18, a1);
                              NiEnterCriticalSection(
                                (struct _RTL_CRITICAL_SECTION *)&stru_B39C80,
                                (int)"QueuedHelmet::CheckFinished()");
                              if ( !useFaceGenHeads || sub_558840(v21, (int)a1, (int)v16, 1.0, 0) )
                              {
                                sub_70FD80(v25, flt_A3721C);
                                qmemcpy(v16 + 0xC, NiMAtrix33_Multiply(v16 + 0xC, v27, v25), 0x24u);
                              }
                              NiLeaveCriticalSection_0(&stru_B39C80);
                              LOBYTE(v28) = 0;
                              sub_7016A0((NiD3DVertexShader *)&lpCriticalSection);
                              v28 = 0xFFFFFFFF;
                              _LN21(a1, 0x18u, 4, (void (__thiscall *)(void *))sub_43ACE0);
                            }
                          }
                        }
                      }
                    }
                    v13 = *(_DWORD *)(this + 0x2C);
                  }
                }
              }
            }
          }
        }
      }
    }
    if ( !*(_DWORD *)(this + 0x18) )
      sub_4BD750((volatile LONG *)this);
  }
  sub_436F30(this);
}
