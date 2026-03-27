void __thiscall sub_4C2300(_DWORD *this)
{
  NiProperty *NiPropertyByID; // ebx
  TESWorldSpace *CurrentWorldspace; // eax
  float v4; // ecx
  float v5; // edx
  int v6; // eax
  TES *v7; // ecx
  double v8; // st6
  double v9; // rt0
  TESWorldSpace *v10; // eax
  _DWORD *v11; // eax
  _DWORD *v12; // eax
  NiNode *v13; // edi
  void (__thiscall ***v14)(_DWORD, int); // esi
  int **v15; // eax
  bool v16; // zf
  int *v17; // eax
  int v18; // eax
  NiNode **v19; // ecx
  NiNode *v20; // ecx
  NiProperty *v21; // edi
  BOOL v22; // esi
  _DWORD *v23; // esi
  void (__thiscall **v24)(_DWORD *, int, int); // edi
  int v25; // eax
  void (__thiscall **v26)(_DWORD *, int, int); // edi
  int v27; // eax
  int v28; // [esp+10h] [ebp-58h]
  int v29; // [esp+1Ch] [ebp-4Ch] BYREF
  float v30; // [esp+4Ch] [ebp-1Ch] BYREF
  float v31; // [esp+50h] [ebp-18h]
  float v32; // [esp+54h] [ebp-14h]

  NiPropertyByID = 0;
  if ( TES::GetCurrentWorldspace(TES) )
  {
    CurrentWorldspace = TES::GetCurrentWorldspace(TES);
    if ( sub_4EF7E0((int)CurrentWorldspace) )
    {
      v4 = *(&Vector3_InitValue_ + 1);
      v5 = dword_B3F9B0;
      v30 = Vector3_InitValue_;
      v6 = *(this + 9);
      v31 = v4;
      v7 = TES;
      v32 = v5;
      v8 = dbl_A2FAA0;
      v9 = dbl_A37650;
      v30 = ((double)*(int *)(v6 + 0x98) + v8) * v9;
      v31 = v9 * (v8 + (double)*(int *)(v6 + 0x9C));
      v10 = TES::GetCurrentWorldspace(v7);
      v11 = (_DWORD *)sub_4EF7E0((int)v10);
      v12 = sub_4EA670(v11, &v30, 0);
      if ( v12 )
      {
        v13 = (NiNode *)*sub_4BFD90((_DWORD *)*v12, &v29);
        if ( v29 )
        {
          v14 = (void (__thiscall ***)(_DWORD, int))v29;
          if ( !InterlockedDecrement((volatile LONG *)(v29 + 4)) )
            (**v14)(v14, 1);
        }
        if ( v13 )
          NiPropertyByID = NiNode_GetNiPropertyByID(v13, 4);
      }
    }
  }
  v15 = *(int ***)(v28 + 0x24);
  if ( v15 )
  {
    if ( *v15 )
    {
      v16 = **v15 == 0;
      v17 = *v15;
      if ( !v16 )
      {
        v18 = *v17;
        if ( *(_WORD *)(v18 + 0xB6) )
        {
          v19 = *(NiNode ***)(v18 + 0xB0);
          if ( *v19 )
          {
            if ( *(_WORD *)(v18 + 0xB6) )
              v20 = *v19;
            else
              v20 = 0;
            v21 = NiNode_GetNiPropertyByID(v20, 4);
            v22 = v21
               && (*((int (__thiscall **)(NiProperty *))v21->vtbl + 0x15))(v21) >= 5
               && (*((int (__thiscall **)(NiProperty *))v21->vtbl + 0x15))(v21) <= 0xA;
            v23 = v22 ? (_DWORD *)v21 : 0;
            if ( v23 )
            {
              if ( NiPropertyByID )
              {
                v24 = (void (__thiscall **)(_DWORD *, int, int))(*v23 + 0x80);
                v25 = (*((int (__thiscall **)(NiProperty *, _DWORD))NiPropertyByID->vtbl + 0x22))(NiPropertyByID, 0);
                (*v24)(v23, 9, v25);
                v26 = (void (__thiscall **)(_DWORD *, int, int))(*v23 + 0x84);
                v27 = (*((int (__thiscall **)(NiProperty *, _DWORD))NiPropertyByID->vtbl + 0x23))(NiPropertyByID, 0);
                (*v26)(v23, 9, v27);
                JUMPOUT(0x4C2575);
              }
            }
          }
        }
      }
    }
  }
  JUMPOUT(0x4C2600);
}
