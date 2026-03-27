int __thiscall sub_765480(NiDX9Renderer *this, float *a2, char a3)
{
  D3DXMATRIX *p_worldMatrix; // ebx
  float *v5; // eax
  float *v6; // eax
  int result; // eax
  float v8[3]; // [esp+20h] [ebp-30h] BYREF
  int v9[9]; // [esp+2Ch] [ebp-24h] BYREF

  p_worldMatrix = &this->member.worldMatrix;
  sub_761AE0((float *)&this->member.worldMatrix, a2, a2 + 9, a2[0xC]);
  if ( a3 )
    this->member.device->lpVtbl->SetTransform(
      this->member.device,
      (D3DTRANSFORMSTATETYPE)0x100,
      (const D3DMATRIX *)p_worldMatrix);
  ((void (__thiscall *)(NiDX9RenderState *, float *))this->member.renderState->vtbl->SetNormalization)(
    this->member.renderState,
    a2);
  sub_710190(a2, (float *)v9, a2[0xC]);
  v5 = sub_710250(v8, (float *)&this->member.pad624[5], (float *)v9);
  this->member.pad624[0xB] = *(UInt32 *)v5;
  this->member.pad624[0xC] = (UInt32)v5[1];
  this->member.camRight.x = v5[2];
  v6 = sub_710250(v8, (float *)&this->member.pad624[8], (float *)v9);
  this->member.camRight.y = *v6;
  this->member.camRight.z = v6[1];
  result = *((_DWORD *)v6 + 2);
  LODWORD(this->member.camUp.x) = result;
  return result;
}
