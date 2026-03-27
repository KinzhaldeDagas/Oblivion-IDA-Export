int *__stdcall sub_4D0190(int *a1, NiCamera *a2)
{
  BSRenderedTexture *v2; // esi
  char v3; // bl
  BSRenderedTexture *v4; // edi
  int v5; // ebp
  NiDX9Renderer *v6; // eax
  BSTextureManager *v7; // ecx
  int v8; // eax
  int v9; // eax
  BSRenderedTexture *v10; // eax
  BSRenderedTexture *v11; // eax
  NiDX9Renderer *v12; // ecx
  NiDX9Renderer *v13; // ecx
  int ShadowSceneNode; // esi
  char v15; // al
  NiRenderTargetGroup *v16; // eax
  char v17; // bl
  int v18; // eax
  int v19; // edi
  char v20; // al
  unsigned __int16 v21; // bx
  NiRenderTargetGroup *v22; // eax
  ShaderDefinition *ShaderDefinition; // eax
  BSShader *shader; // edi
  NiRenderedTexture *InnerTexture; // eax
  LONG (__stdcall *v26)(volatile LONG *); // ebx
  char v28; // [esp+14h] [ebp-D4h]
  char v29; // [esp+15h] [ebp-D3h]
  char v30; // [esp+16h] [ebp-D2h]
  char v31; // [esp+17h] [ebp-D1h]
  BSRenderedTexture *v32; // [esp+18h] [ebp-D0h]
  char v33; // [esp+1Fh] [ebp-C9h]
  BSRenderedTexture *a3; // [esp+20h] [ebp-C8h]
  char a4[4]; // [esp+24h] [ebp-C4h]
  float v36; // [esp+2Ch] [ebp-BCh] BYREF
  float v37; // [esp+30h] [ebp-B8h]
  float v38; // [esp+34h] [ebp-B4h]
  float v39; // [esp+38h] [ebp-B0h]
  float v40[4]; // [esp+3Ch] [ebp-ACh] BYREF
  _BYTE v41[156]; // [esp+4Ch] [ebp-9Ch] BYREF

  v2 = 0;
  nullsub_returnTrue_0arg();
  if ( byte_B42D40 && ImageSpaceEffectEnabled && ShaderPackage >= 2 )
  {
    v3 = 1;
    v28 = 1;
  }
  else
  {
    v28 = 0;
    v3 = 0;
  }
  v4 = 0;
  v32 = 0;
  v5 = 0;
  *(_DWORD *)&v41[0x98] = 1;
  *(_DWORD *)a4 = 0;
  a3 = 0;
  v6 = dword_B43104;
  v7 = g_textureManager;
  v41[0x98] = 3;
  if ( v3 )
  {
    v8 = sub_7C2420(v7, v6, 0x100, 0, 0, 0);
    if ( v8 )
    {
      v32 = (BSRenderedTexture *)v8;
      InterlockedIncrement((volatile LONG *)(v8 + 4));
      v4 = v32;
    }
    v9 = sub_7C2420(g_textureManager, dword_B43104, 0x100, 0, 0, 0);
    if ( v9 )
    {
      a3 = (BSRenderedTexture *)v9;
      InterlockedIncrement((volatile LONG *)(v9 + 4));
      v2 = a3;
    }
    v10 = sub_7C15C0(g_textureManager, (int)dword_B43104, 0x100, 0, 0, 4);
    if ( v10 )
    {
      *(_DWORD *)a4 = v10;
      InterlockedIncrement((volatile LONG *)&v10->members);
      v5 = *(_DWORD *)a4;
    }
  }
  else
  {
    v11 = sub_7C15C0(v7, (int)v6, 0x100, 0, 0, 0);
    if ( !v11 )
      goto LABEL_54;
    v32 = v11;
    InterlockedIncrement((volatile LONG *)&v11->members);
    v4 = v32;
  }
  if ( v4 )
  {
    if ( !v3 || v5 && v2 )
    {
      v12 = dword_B43104;
      v40[0] = 0.0;
      v40[1] = 0.0;
      v40[2] = 0.0;
      v40[3] = 0.0;
      ((void (__thiscall *)(NiDX9Renderer *, float *))v12->__vftable->super.GetClearColor)(v12, v40);
      v13 = dword_B43104;
      if ( v3 )
      {
        v36 = flt_A4695C;
        v37 = flt_A46958;
        v38 = flt_A46954;
      }
      else
      {
        v36 = 0.0;
        v37 = 0.0;
        v38 = 0.0;
      }
      v39 = 1.0;
      ((void (__thiscall *)(NiDX9Renderer *, float *))v13->__vftable->super.SetClearColor4)(v13, &v36);
      ShadowSceneNode = GetShadowSceneNode(0);
      NiCullingProcess_NiCullingProcess((NiCullingProcess *)v41, 0);
      v15 = *(_BYTE *)(ShadowSceneNode + 0x12C);
      v41[0x98] = 4;
      v33 = v15;
      *(_BYTE *)(ShadowSceneNode + 0x12C) = 1;
      *((_BYTE *)InitBSShaderAccumulator() + 0x21E3) = 0;
      v31 = 0;
      if ( !g_Renderer->member.super.SceneState1 && !g_Renderer->member.super.SceneState2 )
      {
        NiRenderer_BeginScene(kClear_NONE, 0);
        v31 = 1;
      }
      v16 = BSRenderedTexture::UseTextureToRender(v4);
      StartUsingRenderTarget(v16, kClear_ALL);
      v17 = byte_B42E86;
      byte_B42E86 = 1;
      sub_70C0B0(a2, (SceneGraph *)ShadowSceneNode, (NiCullingProcess *)v41, 0);
      byte_B42E86 = v17;
      sub_7D7110();
      if ( v28 )
      {
        v18 = sub_49A140();
        v19 = v18;
        v30 = 0;
        if ( v18 )
        {
          v20 = *(_BYTE *)(v18 + 0x18) & 1;
          *(_WORD *)(v19 + 0x18) |= 1u;
          v30 = v20;
        }
        if ( !byte_B125E8 || (v29 = 1, !*(_BYTE *)(sub_55F7E0(1) + 0x20)) )
          v29 = 0;
        *(_BYTE *)(sub_55F7E0(1) + 0x20) = 0;
        v21 = dword_B42EAC;
        sub_7B4890(6u);
        if ( a3 )
          v22 = BSRenderedTexture::UseTextureToRender(a3);
        else
          v22 = 0;
        StartUsingRenderTarget(v22, kClear_ALL);
        sub_70C0B0(a2, (SceneGraph *)ShadowSceneNode, (NiCullingProcess *)v41, 0);
        sub_7D7110();
        sub_7B4890(v21);
        *(_BYTE *)(sub_55F7E0(1) + 0x20) = v29;
        if ( v19 )
        {
          if ( v30 )
            *(_WORD *)(v19 + 0x18) |= 1u;
          else
            *(_WORD *)(v19 + 0x18) &= ~1u;
        }
        ShaderDefinition = GetShaderDefinition(0x18u);
        if ( ShaderDefinition )
        {
          shader = ShaderDefinition->shader;
          if ( shader )
          {
            if ( shader->__vftable[1].super.super.super.GetType((NiShader *)shader) )
            {
              InnerTexture = BSRenderedTexture::GetInnerTexture(v32);
              sub_4CA340(shader, (int)InnerTexture);
              sub_7B4900(shader, dword_B43104, (char)a3, a4[0]);
            }
          }
        }
        v4 = v32;
      }
      if ( v31 )
        NiRenderer_EndScene();
      *(_BYTE *)(ShadowSceneNode + 0x12C) = v33;
      *((_BYTE *)InitBSShaderAccumulator() + 0x21E3) = 1;
      ((void (__thiscall *)(NiDX9Renderer *, float *))dword_B43104->__vftable->super.SetClearColor4)(dword_B43104, v40);
      v41[0x98] = 3;
      BSCullingProcess::~BSCullingProcess((BSCullingProcess *)v41);
      v3 = v28;
      v5 = *(_DWORD *)a4;
      v2 = a3;
    }
  }
  if ( !v3 )
  {
LABEL_54:
    nullsub_returnTrue_0arg();
    *a1 = (int)v4;
    if ( v4 )
      InterlockedIncrement((volatile LONG *)&v4->members);
    v26 = InterlockedDecrement;
    v41[0x98] = 2;
    if ( v2 )
    {
      if ( !v26((volatile LONG *)&v2->members) )
        (*(void (__thiscall **)(BSRenderedTexture *, int))v2->vtbl)(v2, 1);
    }
    v41[0x98] = 1;
    if ( v5 )
      goto LABEL_60;
    goto LABEL_62;
  }
  sub_7C1EE0(g_textureManager, v4);
  sub_7C1EE0(g_textureManager, v2);
  nullsub_returnTrue_0arg();
  *a1 = v5;
  if ( v5 )
    InterlockedIncrement((volatile LONG *)(v5 + 4));
  v26 = InterlockedDecrement;
  v41[0x98] = 2;
  if ( v2 )
  {
    if ( !v26((volatile LONG *)&v2->members) )
      (*(void (__thiscall **)(BSRenderedTexture *, int))v2->vtbl)(v2, 1);
  }
  v41[0x98] = 1;
  if ( v5 )
  {
LABEL_60:
    if ( !v26((volatile LONG *)(v5 + 4)) )
      (**(void (__thiscall ***)(int, int))v5)(v5, 1);
  }
LABEL_62:
  v41[0x98] = 0;
  if ( v4 )
  {
    if ( !v26((volatile LONG *)&v4->members) )
      (*(void (__thiscall **)(BSRenderedTexture *, int))v4->vtbl)(v4, 1);
  }
  return a1;
}
