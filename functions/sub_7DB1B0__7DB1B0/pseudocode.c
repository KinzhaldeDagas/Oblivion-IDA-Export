int __thiscall sub_7DB1B0(WaterShader *this, int a2, int a3, int a4, int a5, int a6, int a7, float *a8, int a9)
{
  int v10; // [esp+0h] [ebp-1Ch]
  int v11; // [esp+4h] [ebp-18h]
  int v12; // [esp+8h] [ebp-14h]

  NiDX9Renderer_SetModelTransform(this->super.member.super.super.D3DRenderer, a8, 0); /*0x7db1bd*/
  *(float *)&v10 = flt_B46638[8] - MEMORY[0xB3F92C]; /*0x7db1ef*/
  *(float *)&v11 = flt_B46638[9] - unk_B3F930; /*0x7db200*/
  *(float *)&v12 = flt_B46638[0xA] - unk_B3F934; /*0x7db20e*/
  flt_B45DD4[0] = *(float *)&v10; /*0x7db221*/
  flt_B45DD4[1] = *(float *)&v11; /*0x7db233*/
  flt_B45DD4[2] = *(float *)&v12; /*0x7db242*/
  flt_B45DD4[3] = 0.0; /*0x7db252*/
  return 0; /*0x7db258*/
}
