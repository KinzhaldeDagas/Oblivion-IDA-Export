// Diagnostic RenderPasses scene-node builder. Calls BSShaderProperty_GetRenderPassName for pass bucket names, so BSSM_FRONDS here is debug/display evidence only, not geometry attachment.
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

  v2 = (NiNode *)FormHeapAlloc(0xDCu); /*0x7a9e56*/
  v32 = 0; /*0x7a9e66*/
  if ( v2 ) /*0x7a9e6d*/
  {
    v3 = (NiObjectNET *)NiNode::NiNode(v2, 0); /*0x7a9e77*/
    v26 = v3; /*0x7a9e79*/
  }
  else
  {
    v26 = 0; /*0x7a9e7f*/
    v3 = 0; /*0x7a9e83*/
  }
  v32 = 0xFFFFFFFF; /*0x7a9e8c*/
  NiObjectNET_SetName(v3, "RenderPasses"); /*0x7a9e97*/
  v4 = this + 0x114; /*0x7a9e9c*/
  v27 = 0; /*0x7a9ea2*/
  v24 = v4; /*0x7a9ea6*/
  do
  {
    if ( *(_DWORD *)v4 )
    {
      v5 = (NiNode *)FormHeapAlloc(0xDCu); /*0x7a9eb9*/
      v32 = 1; /*0x7a9ec7*/
      if ( v5 ) /*0x7a9ed2*/
        v6 = (NiObjectNET *)NiNode::NiNode(v5, 0); /*0x7a9edd*/
      else
        v6 = 0; /*0x7a9ee1*/
      v7 = *(_DWORD *)v4; /*0x7a9ee7*/
      v32 = 0xFFFFFFFF; /*0x7a9eeb*/
      RenderPassName = BSShaderProperty_GetRenderPassName(v27); /*0x7a9ef6*/
      _sprintf(Src, "%i : %s", v7, RenderPassName);
      NiObjectNET_SetName(v6, Src); /*0x7a9f1c*/
      (*((void (__thiscall **)(NiObjectNET *, NiObjectNET *, int))v3->vtbl + 0x21))(v3, v6, 1); /*0x7a9f2e*/
      v9 = *((_DWORD **)v4 + 0xFFFFFFFD); /*0x7a9f30*/
      if ( v9 )
      {
        do
        {
          v10 = (int *)v9[2]; /*0x7a9f3b*/
          v9 = (_DWORD *)*v9; /*0x7a9f41*/
          v11 = (NiNode *)FormHeapAlloc(0xDCu); /*0x7a9f48*/
          v32 = 2; /*0x7a9f56*/
          if ( v11 ) /*0x7a9f61*/
            v12 = (NiObjectNET *)NiNode::NiNode(v11, 0); /*0x7a9f6c*/
          else
            v12 = 0; /*0x7a9f70*/
          v22 = *(const char **)(*v10 + 8); /*0x7a9f78*/
          a2 = *v10; /*0x7a9f79*/
          v32 = 0xFFFFFFFF; /*0x7a9f84*/
          _sprintf(v29, "%x : %s", a2, v22);
          NiObjectNET_SetName(v12, v29); /*0x7a9f9e*/
          (*((void (__thiscall **)(NiObjectNET *, NiObjectNET *, int))v6->vtbl + 0x21))(v6, v12, 1); /*0x7a9fb0*/
        }
        while ( v9 );
        v3 = v26; /*0x7a9fb6*/
        v4 = v24; /*0x7a9fba*/
      }
    }
    v4 += 0x14; /*0x7a9fc5*/
    v13 = ++v27 < 0x1A3; /*0x7a9fc8*/
    v24 = v4; /*0x7a9fd1*/
  }
  while ( v13 );
  v14 = (NiNode *)FormHeapAlloc(0xDCu); /*0x7a9fe0*/
  v32 = 3; /*0x7a9fee*/
  if ( v14 ) /*0x7a9ff9*/
    v15 = (NiObjectNET *)NiNode::NiNode(v14, 0); /*0x7aa004*/
  else
    v15 = 0; /*0x7aa008*/
  v32 = 0xFFFFFFFF; /*0x7aa011*/
  NiObjectNET_SetName(v15, "Occluded Geometry"); /*0x7aa01c*/
  (*((void (__thiscall **)(NiObjectNET *, NiObjectNET *, _DWORD))v3->vtbl + 0x21))(v3, v15, 0); /*0x7aa02e*/
  for ( i = 0; i < unk_B42CB8; ++i )
  {
    v16 = *((_DWORD **)this + 0x87C); /*0x7aa049*/
    if ( v16 )
    {
      do
      {
        v17 = v16[2]; /*0x7aa057*/
        v16 = (_DWORD *)*v16; /*0x7aa05d*/
        v18 = (NiNode *)FormHeapAlloc(0xDCu); /*0x7aa064*/
        v32 = 4; /*0x7aa072*/
        if ( v18 ) /*0x7aa07d*/
          v19 = (NiObjectNET *)NiNode::NiNode(v18, 0); /*0x7aa088*/
        else
          v19 = 0; /*0x7aa08c*/
        v23 = *(const char **)(v17 + 8); /*0x7aa091*/
        v32 = 0xFFFFFFFF; /*0x7aa0a0*/
        _sprintf(v31, "%x : %s", v17, v23);
        NiObjectNET_SetName(v19, v31); /*0x7aa0bd*/
        (*((void (__thiscall **)(NiObjectNET *, NiObjectNET *, int))v15->vtbl + 0x21))(v15, v19, 1); /*0x7aa0d0*/
      }
      while ( v16 );
      v3 = v26; /*0x7aa0d6*/
    }
  }
  NiAVObject_UpdateNiAVObject((NiAVObject *)v3, 0.0, 1); /*0x7aa0fb*/
  return v3; /*0x7aa102*/
}
