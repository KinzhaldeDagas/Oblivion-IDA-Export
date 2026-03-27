void __thiscall sub_7C6770(Ni2DBuffer **this, int a2)
{
  _DWORD *v6; // edi
  BSCubeMapCamera *v7; // eax
  Ni2DBuffer *v8; // eax
  _DWORD *v9; // ebp
  int v10; // esi
  bool v11; // bl
  void (__thiscall ***v12)(_DWORD, int); // edi
  bool v13; // bl
  void (__thiscall ***v14)(_DWORD, int); // edi
  NiAVObject *v15; // ecx
  void (__thiscall ***v16)(_DWORD, int); // edi
  int v17; // edi
  int v18; // esi
  _DWORD *v19; // edi
  int v20; // [esp+24h] [ebp-24h]
  _DWORD **v21; // [esp+28h] [ebp-20h]
  int v22; // [esp+2Ch] [ebp-1Ch] BYREF
  int v23; // [esp+30h] [ebp-18h] BYREF
  int v24; // [esp+34h] [ebp-14h] BYREF
  BSCubeMapCamera *v25; // [esp+38h] [ebp-10h]
  int v26; // [esp+44h] [ebp-4h]

  v20 = 0;
  InitBSShaderAccumulator();
  if ( !byte_B42CDA )
  {
    v6 = this + 0x49;
    v21 = (_DWORD **)(this + 0x49);
    if ( !*(this + 0x49) )
    {
      v7 = (BSCubeMapCamera *)FormHeapAlloc(0x150u);
      v25 = v7;
      v26 = 0;
      if ( v7 )
        v8 = (Ni2DBuffer *)BSCubeMapCamera::BSCubeMapCamera(v7, 0);
      else
        v8 = 0;
      v26 = 0xFFFFFFFF;
      NiSmartPointer_Set__(this + 0x49, v8);
    }
    *(_DWORD *)(*v6 + 0x124) = 0;
    v25 = (BSCubeMapCamera *)LOWORD(dword_B42EAC);
    sub_7B4890(5u);
    if ( *(this + 0x40) )
    {
      v9 = *(this + 0x3E);
      if ( v9 )
      {
        do
        {
          v10 = v9[2];
          v9 = (_DWORD *)*v9;
          v11 = 0;
          if ( v10 )
          {
            v20 |= 1u;
            if ( *sub_405AD0((_DWORD *)v10, &v22) )
              v11 = 1;
          }
          if ( (v20 & 1) != 0 )
          {
            v12 = (void (__thiscall ***)(_DWORD, int))v22;
            v20 &= ~1u;
            if ( v22 )
            {
              if ( !InterlockedDecrement((volatile LONG *)(v22 + 4)) )
              {
                if ( v12 )
                  (**v12)(v12, 1);
              }
            }
          }
          if ( v11 )
          {
            v13 = (*(_BYTE *)(*sub_405AD0((_DWORD *)v10, &v23) + 0x18) & 1) == 0;
            if ( v23 )
            {
              v14 = (void (__thiscall ***)(_DWORD, int))v23;
              if ( !InterlockedDecrement((volatile LONG *)(v23 + 4)) )
                (**v14)(v14, 1);
            }
            if ( v13 )
            {
              v15 = (NiAVObject *)*sub_405AD0((_DWORD *)v10, &v24);
              v26 = 1;
              NiAVObject_UpdateNiAVObject(v15, 0.0, 1);
              v26 = 0xFFFFFFFF;
              if ( v24 )
              {
                v16 = (void (__thiscall ***)(_DWORD, int))v24;
                if ( !InterlockedDecrement((volatile LONG *)(v24 + 4)) )
                  (**v16)(v16, 1);
              }
              if ( *(_WORD *)(v10 + 0x118) != 0xFF )
              {
                dword_B42EB0 = v10;
                sub_7D59C0((_BYTE *)v10, *v21, a2);
              }
            }
            else
            {
              sub_7D21F0((_DWORD *)v10);
            }
          }
        }
        while ( v9 );
        v6 = v21;
      }
      dword_B42EB0 = 0;
    }
    v17 = *v6;
    v18 = *(_DWORD *)(v17 + 0x140);
    v19 = (_DWORD *)(v17 + 0x140);
    if ( v18 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v18 + 4)) )
        (**(void (__thiscall ***)(int, int))v18)(v18, 1);
      *v19 = 0;
    }
    sub_7B4890((unsigned __int16)v25);
  }
}
