// Internal sequence morph implementation. Activates the source against the destination, marks destination transition state and source state 6 (morph source), and records morph timing/weight fields. ActorAnimData reaches this only through the guarded 0x6C4060 wrapper.
char __thiscall sub_6C9E00(
        NiControllerSequence *this,
        NiD3DPass *a2,
        float easeInTime,
        char priority,
        float weight,
        UInt32 a6)
{
  NiD3DPass *v7; // esi
  char v8; // bl
  bool v9; // zf
  char *PixelShaderTarget; // ecx
  unsigned int *v11; // ecx
  int v12; // ecx

  NiControllerSequence_Deactivate(this, 0.0, 1); /*0x6c9e0d*/
  v7 = a2; /*0x6c9e16*/
  v8 = priority; /*0x6c9e1a*/
  if ( !NiControllerSequence_Activate(this, priority, 0, weight, easeInTime, (NiControllerSequence *)a2, 1) /*0x6c9e41*/
    || v7->PixelShader )
  {
    return 0; /*0x6c9f09*/
  }
  v7->VertexShader = 0; /*0x6c9e4e*/
  sub_6C6A50(v7, v8); /*0x6c9e55*/
  v7->TexturesPerPass = a6; /*0x6c9e5e*/
  if ( easeInTime <= 0.0 ) /*0x6c9e6c*/
  {
    v9 = v7->PixelShader == 0; /*0x6c9ea8*/
    v7->PixelShader = (NiD3DPixelShader *)1; /*0x6c9eac*/
    if ( v9 ) /*0x6c9eb8*/
    {
      v11 = (unsigned int *)(v7->PixelShaderTarget + 0x4C); /*0x6c9ec2*/
      easeInTime = *(float *)&v7; /*0x6c9ec5*/
      sub_73A5E0(v11, (NiD3DPass **)&easeInTime); /*0x6c9ec9*/
    }
  }
  else
  {
    v9 = v7->PixelShader == 0; /*0x6c9e6e*/
    v7->PixelShader = (NiD3DPixelShader *)5; /*0x6c9e72*/
    if ( v9 ) /*0x6c9e7e*/
    {
      PixelShaderTarget = v7->PixelShaderTarget; /*0x6c9e80*/
      a2 = v7; /*0x6c9e8b*/
      sub_73A5E0((unsigned int *)PixelShaderTarget + 0x13, &a2); /*0x6c9e8f*/
    }
    *(float *)&v7->VertexShaderProgramFile = -flt_A7DEB4; /*0x6c9e9c*/
    *(float *)&v7->VertexShaderEntryPoint = easeInTime; /*0x6c9ea3*/
  }
  *(float *)&v7->VertexConstantMap = -flt_A7DEB4; /*0x6c9ed6*/
  v9 = *((_DWORD *)this + 0x11) == 0; /*0x6c9ed9*/
  *((_DWORD *)this + 0x11) = 6; /*0x6c9edd*/
  if ( v9 ) /*0x6c9ee9*/
  {
    v12 = *((_DWORD *)this + 0x10); /*0x6c9eeb*/
    easeInTime = *(float *)&this; /*0x6c9ef6*/
    sub_73A5E0((unsigned int *)(v12 + 0x4C), (NiD3DPass **)&easeInTime); /*0x6c9efa*/
  }
  return 1; /*0x6c9eff*/
}
