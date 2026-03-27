char __thiscall sub_7721E0(NiD3DTextureStage *a1)
{
  _DWORD *v2; // ecx
  bool v3; // zf
  UInt32 Stage; // eax
  NiTexture *Texture; // eax
  int v6; // edi
  char result; // al
  _BYTE v8[2]; // [esp+32h] [ebp-Ah] BYREF
  UInt32 v9; // [esp+34h] [ebp-8h] BYREF
  int v10; // [esp+38h] [ebp-4h]
  _UNKNOWN *retaddr; // [esp+3Ch] [ebp+0h] BYREF

  v2 = *((_DWORD **)a1 + 3);
  v9 = 0;
  v8[0] = 0;
  v3 = sub_7730A0(v2, 0xB, &v9, v8) == 0;
  Stage = v9;
  if ( v3 )
    Stage = a1->Stage;
  ((void (__thiscall *)(NiDX9RenderState *, UInt32, D3DTEXTURESTAGESTATETYPE, int, UInt8))dword_B42758->vtbl->SetTextureStageState)(
    dword_B42758,
    a1->Stage,
    D3DTSS_TEXCOORDINDEX,
    Stage,
    0);
  Texture = a1->Texture;
  v6 = 0;
  if ( Texture )
    v6 = (*(int (__thiscall **)(NiDX9TextureManager *, NiTexture *, char *, char *, _UNKNOWN **))(*(_DWORD *)dword_B42754->member.textureMgr
                                                                                                + 8))(
           dword_B42754->member.textureMgr,
           Texture,
           (char *)&v9 + 2,
           (char *)&v9 + 3,
           &retaddr);
  result = ((int (__thiscall *)(NiDX9RenderState *, UInt32))dword_B42758->vtbl->SetTexture)(dword_B42758, a1->Stage);
  if ( v6 )
  {
    if ( !v8[1] )
      ((void (__thiscall *)(NiDX9RenderState *, UInt32, int, _DWORD, _DWORD))dword_B42758->vtbl->SetSamplerState)(
        dword_B42758,
        a1->Stage,
        7,
        0,
        0);
    sub_7716E0(a1, v10);
    return sub_772150(a1);
  }
  return result;
}
