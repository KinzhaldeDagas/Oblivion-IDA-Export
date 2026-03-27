NiObjectNET *__thiscall sub_7A9E10(char *this)
{
  NiNode *v2; // eax
  NiObjectNET *v3; // ebx
  char *v4; // ebp
  NiNode *v5; // eax
  NiObjectNET *v6; // edi
  int v7; // esi
  const char *RenderPassName; // eax
  _DWORD *v9; // esi
  int *v10; // ebp
  NiNode *v11; // eax
  NiObjectNET *v12; // ebx
  bool v13; // cc
  NiNode *v14; // eax
  NiObjectNET *v15; // ebp
  _DWORD *v16; // esi
  int v17; // ebx
  NiNode *v18; // eax
  NiObjectNET *v19; // edi
  int a2; // [esp+20h] [ebp-340h]
  const char *v22; // [esp+24h] [ebp-33Ch]
  const char *v23; // [esp+24h] [ebp-33Ch]
  char *v24; // [esp+3Ch] [ebp-324h]
  unsigned int i; // [esp+3Ch] [ebp-324h]
  NiObjectNET *v26; // [esp+40h] [ebp-320h]
  int v27; // [esp+44h] [ebp-31Ch]
  char v29[256]; // [esp+50h] [ebp-310h] BYREF
  char Src[256]; // [esp+150h] [ebp-210h] BYREF
  char v31[256]; // [esp+250h] [ebp-110h] BYREF
  int v32; // [esp+35Ch] [ebp-4h]

  v2 = (NiNode *)FormHeapAlloc(0xDCu);
  v32 = 0;
  if ( v2 )
  {
    v3 = (NiObjectNET *)NiNode::NiNode(v2, 0);
    v26 = v3;
  }
  else
  {
    v26 = 0;
    v3 = 0;
  }
  v32 = 0xFFFFFFFF;
  NiObjectNET_SetName(v3, "RenderPasses");
  v4 = this + 0x114;
  v27 = 0;
  v24 = v4;
  do
  {
    if ( *(_DWORD *)v4 )
    {
      v5 = (NiNode *)FormHeapAlloc(0xDCu);
      v32 = 1;
      if ( v5 )
        v6 = (NiObjectNET *)NiNode::NiNode(v5, 0);
      else
        v6 = 0;
      v7 = *(_DWORD *)v4;
      v32 = 0xFFFFFFFF;
      RenderPassName = BSShaderProperty_GetRenderPassName(v27);
      _sprintf(Src, "%i : %s", v7, RenderPassName);
      NiObjectNET_SetName(v6, Src);
      (*((void (__thiscall **)(NiObjectNET *, NiObjectNET *, int))v3->vtbl + 0x21))(v3, v6, 1);
      v9 = *((_DWORD **)v4 + 0xFFFFFFFD);
      if ( v9 )
      {
        do
        {
          v10 = (int *)v9[2];
          v9 = (_DWORD *)*v9;
          v11 = (NiNode *)FormHeapAlloc(0xDCu);
          v32 = 2;
          if ( v11 )
            v12 = (NiObjectNET *)NiNode::NiNode(v11, 0);
          else
            v12 = 0;
          v22 = *(const char **)(*v10 + 8);
          a2 = *v10;
          v32 = 0xFFFFFFFF;
          _sprintf(v29, "%x : %s", a2, v22);
          NiObjectNET_SetName(v12, v29);
          (*((void (__thiscall **)(NiObjectNET *, NiObjectNET *, int))v6->vtbl + 0x21))(v6, v12, 1);
        }
        while ( v9 );
        v3 = v26;
        v4 = v24;
      }
    }
    v4 += 0x14;
    v13 = ++v27 < 0x1A3;
    v24 = v4;
  }
  while ( v13 );
  v14 = (NiNode *)FormHeapAlloc(0xDCu);
  v32 = 3;
  if ( v14 )
    v15 = (NiObjectNET *)NiNode::NiNode(v14, 0);
  else
    v15 = 0;
  v32 = 0xFFFFFFFF;
  NiObjectNET_SetName(v15, "Occluded Geometry");
  (*((void (__thiscall **)(NiObjectNET *, NiObjectNET *, _DWORD))v3->vtbl + 0x21))(v3, v15, 0);
  for ( i = 0; i < dword_B42CB8; ++i )
  {
    v16 = *((_DWORD **)this + 0x87C);
    if ( v16 )
    {
      do
      {
        v17 = v16[2];
        v16 = (_DWORD *)*v16;
        v18 = (NiNode *)FormHeapAlloc(0xDCu);
        v32 = 4;
        if ( v18 )
          v19 = (NiObjectNET *)NiNode::NiNode(v18, 0);
        else
          v19 = 0;
        v23 = *(const char **)(v17 + 8);
        v32 = 0xFFFFFFFF;
        _sprintf(v31, "%x : %s", v17, v23);
        NiObjectNET_SetName(v19, v31);
        (*((void (__thiscall **)(NiObjectNET *, NiObjectNET *, int))v15->vtbl + 0x21))(v15, v19, 1);
      }
      while ( v16 );
      v3 = v26;
    }
  }
  NiAVObject_UpdateNiAVObject((NiAVObject *)v3, 0.0, 1);
  return v3;
}
