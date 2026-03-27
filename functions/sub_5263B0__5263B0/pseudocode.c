void __thiscall sub_5263B0(_DWORD *this, NiRenderedTexture *a2)
{
  _DWORD *v2; // esi
  NiNode *v3; // ebp
  unsigned int v4; // ebx
  NiNode *v5; // edi
  int v6; // eax
  int v7; // eax
  const char **v8; // ebp
  NiNode *v9; // esi
  NiNode *v10; // esi
  const char *nextTex; // eax
  NiRenderedTexture *v12; // eax
  volatile LONG *v13; // edi
  volatile LONG *v14; // esi
  volatile LONG *v15; // ebp
  volatile LONG *v16; // esi
  int v17; // esi
  int v18; // eax
  int v19; // eax
  int v20; // esi
  int v21; // edi
  BOOL v22; // eax
  int v23; // eax
  int v24; // esi
  volatile LONG *v25; // eax
  NiTexturingProperty *v26; // esi
  volatile LONG *v27; // edi
  volatile LONG *v28; // edi
  NiRenderedTexture *v29; // esi
  NiAVObject *v30; // eax
  NiAVObject *v31; // eax
  NiNode *v32; // [esp+20h] [ebp-28h] BYREF
  NiNode *v33; // [esp+24h] [ebp-24h] BYREF
  _DWORD *v34; // [esp+28h] [ebp-20h]
  unsigned int v35; // [esp+2Ch] [ebp-1Ch] BYREF
  volatile LONG *v36; // [esp+30h] [ebp-18h] BYREF
  BSStringT ArgList; // [esp+34h] [ebp-14h] BYREF
  unsigned int v38; // [esp+44h] [ebp-4h]

  v2 = this;
  v34 = this;
  v3 = 0;
  v4 = 0;
  v32 = 0;
  v5 = 0;
  v38 = 0;
  v33 = 0;
  v6 = *(this + 0x75);
  LOBYTE(v38) = 1;
  if ( v6 )
  {
    v35 = *(unsigned __int16 *)(v6 + 0xB6);
    if ( v35 )
    {
      while ( 1 )
      {
        v7 = v2[0x75];
        v8 = *(unsigned __int16 *)(v7 + 0xB6) > v4 ? *(const char ***)(*(_DWORD *)(v7 + 0xB0) + 4 * v4) : 0;
        if ( !strcmp(v8[2], "FaceGenEyeLeft") )
        {
          v9 = (NiNode *)(*((int (__thiscall **)(const char **))*v8 + 4))(v8);
          if ( v32 != v9 )
          {
            if ( v32 )
            {
              if ( !InterlockedDecrement((volatile LONG *)&v32->members) )
                v32->vtbl->super.super.super.Destructor((NiRefObject *)v32, 1);
            }
            v32 = v9;
            if ( v9 )
              InterlockedIncrement((volatile LONG *)&v9->members);
          }
        }
        if ( !strcmp(v8[2], "FaceGenEyeRight") )
        {
          v10 = (NiNode *)(*((int (__thiscall **)(const char **))*v8 + 4))(v8);
          if ( v33 != v10 )
          {
            if ( v33 )
            {
              if ( !InterlockedDecrement((volatile LONG *)&v33->members) )
                v33->vtbl->super.super.super.Destructor((NiRefObject *)v33, 1);
            }
            v33 = v10;
            if ( v10 )
              InterlockedIncrement((volatile LONG *)&v10->members);
          }
        }
        if ( ++v4 >= v35 )
          break;
        v2 = v34;
      }
      if ( v32 && v33 )
      {
        ArgList.m_data = 0;
        ArgList.m_dataLen = 0;
        ArgList.m_bufLen = 0;
        LOBYTE(v38) = 2;
        if ( a2 )
        {
          nextTex = (const char *)a2->member.super.nextTex;
          if ( !nextTex )
            nextTex = EmptyString;
          BSStringT_Static_Format(&ArgList, "Data\\Textures\\%s", nextTex);
        }
        else
        {
          BSStringT_Static_Format(&ArgList, "Data\\Textures\\Characters\\Eyes\\EyeDefault.dds");
        }
        sub_442890((UInt32 *)&a2, ArgList.m_data, 0, 0);
        v12 = a2;
        LOBYTE(v38) = 3;
        if ( a2 )
        {
          v13 = *sub_405760((NiGeometry *)v32, (volatile LONG **)&v35);
          if ( v35 )
          {
            v14 = (volatile LONG *)v35;
            if ( !InterlockedDecrement((volatile LONG *)(v35 + 4)) )
              (**(void (__thiscall ***)(volatile LONG *, int))v14)(v14, 1);
          }
          v15 = *sub_405760((NiGeometry *)v33, &v36);
          if ( v36 )
          {
            v16 = v36;
            if ( !InterlockedDecrement(v36 + 1) )
              (**(void (__thiscall ***)(volatile LONG *, int))v16)(v16, 1);
          }
          if ( v13 )
          {
            if ( v15 )
            {
              v17 = *((_DWORD *)v13 + 6);
              if ( !v17 )
                goto LABEL_45;
              if ( (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v17 + 0x54))(*((_DWORD *)v13 + 6)) >= 5 )
                (*(void (__thiscall **)(int))(*(_DWORD *)v17 + 0x54))(v17);
              if ( (*(int (__thiscall **)(int))(*(_DWORD *)v17 + 0x54))(v17) >= 5
                && (*(int (__thiscall **)(int))(*(_DWORD *)v17 + 0x54))(v17) <= 0xA )
              {
                v18 = 1;
              }
              else
              {
LABEL_45:
                v18 = 0;
              }
              v19 = v18 != 0 ? v17 : 0;
              v20 = *((_DWORD *)v15 + 6);
              v21 = v19;
              v22 = v20
                 && (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v20 + 0x54))(*((_DWORD *)v15 + 6)) >= 5
                 && (*(int (__thiscall **)(int))(*(_DWORD *)v20 + 0x54))(v20) <= 0xA;
              v23 = v22 ? v20 : 0;
              v24 = v23;
              if ( v21 )
              {
                if ( v23 )
                {
                  (*(void (__thiscall **)(int, _DWORD, NiRenderedTexture *))(*(_DWORD *)v21 + 0x80))(v21, 0, a2);
                  (*(void (__thiscall **)(int, _DWORD, NiRenderedTexture *))(*(_DWORD *)v24 + 0x80))(v24, 0, a2);
                  LOBYTE(v38) = 2;
                  sub_7016A0((NiD3DVertexShader *)&a2);
                  LOBYTE(v38) = 1;
                  BSStringT_Clear((unsigned int *)&ArgList);
                  LOBYTE(v38) = 0;
                  sub_7016A0((NiD3DVertexShader *)&v33);
                  v38 = 0xFFFFFFFF;
                  sub_7016A0((NiD3DVertexShader *)&v32);
                  return;
                }
              }
            }
          }
          v25 = (volatile LONG *)FormHeapAlloc(0x30u);
          v36 = v25;
          LOBYTE(v38) = 4;
          if ( v25 )
            v26 = NiTexturingProperty::NiTexturingProperty((NiTexturingProperty *)v25);
          else
            v26 = 0;
          LOBYTE(v38) = 3;
          NiTexturingProperty::SetUnk08(v26, a2);
          sub_405870(v26, 3);
          sub_405900(v26, 2);
          if ( NiNode_GetNiPropertyByID(v32, 6) )
          {
            sub_708560(v32, &v36, 6);
            if ( v36 )
            {
              v27 = v36;
              if ( !InterlockedDecrement(v36 + 1) )
                (**(void (__thiscall ***)(volatile LONG *, int))v27)(v27, 1);
            }
          }
          sub_405680(v32, (BSShaderProperty *)v26);
          if ( NiNode_GetNiPropertyByID(v33, 6) )
          {
            sub_708560(v33, &v36, 6);
            if ( v36 )
            {
              v28 = v36;
              if ( !InterlockedDecrement(v36 + 1) )
                (**(void (__thiscall ***)(volatile LONG *, int))v28)(v28, 1);
            }
          }
          sub_405680(v33, (BSShaderProperty *)v26);
          v12 = a2;
        }
        LOBYTE(v38) = 2;
        if ( v12 )
        {
          v29 = v12;
          if ( !InterlockedDecrement((volatile LONG *)&v12->member) )
            v29->__vftable->super.super.super.Destructor((NiRefObject *)v29, 1);
        }
        LOBYTE(v38) = 1;
        FormHeapFree((unsigned int)ArgList.m_data);
      }
      v5 = v33;
      v2 = v34;
      v3 = v32;
    }
    v30 = (NiAVObject *)(*(int (__thiscall **)(_DWORD, const char *))(*(_DWORD *)v2[0x75] + 0x58))(
                          v2[0x75],
                          "FaceGenEyeLeft");
    if ( v30 )
      sub_7B8940(v30, 1, 1, 1);
    v31 = (NiAVObject *)(*(int (__thiscall **)(_DWORD, const char *))(*(_DWORD *)v2[0x75] + 0x58))(
                          v2[0x75],
                          "FaceGenEyeRight");
    if ( v31 )
      sub_7B8940(v31, 1, 1, 1);
  }
  LOBYTE(v38) = 0;
  if ( v5 )
  {
    if ( !InterlockedDecrement((volatile LONG *)&v5->members) )
      v5->vtbl->super.super.super.Destructor((NiRefObject *)v5, 1);
  }
  v38 = 0xFFFFFFFF;
  if ( v3 )
  {
    if ( !InterlockedDecrement((volatile LONG *)&v3->members) )
      v3->vtbl->super.super.super.Destructor((NiRefObject *)v3, 1);
  }
}
