// Orient the BSCubeMapCamera for one of six cube faces using the native axis vectors at 0x00B258D0..0x00B258F0.
void __thiscall BSCubeMapCamera_OrientFace(BSCubeMapCamera_ShadowLayout *self, unsigned int faceIndex)
{
  float v2[3]; // [esp+0h] [ebp-84h] BYREF
  float v3[3]; // [esp+Ch] [ebp-78h] BYREF
  float v4[3]; // [esp+18h] [ebp-6Ch] BYREF
  float v5[3]; // [esp+24h] [ebp-60h] BYREF
  float v6[3]; // [esp+30h] [ebp-54h] BYREF
  float v7[3]; // [esp+3Ch] [ebp-48h] BYREF
  float v8[3]; // [esp+48h] [ebp-3Ch] BYREF
  float v9[3]; // [esp+54h] [ebp-30h] BYREF
  float v10[3]; // [esp+60h] [ebp-24h] BYREF
  float v11[3]; // [esp+6Ch] [ebp-18h] BYREF
  float v12[3]; // [esp+78h] [ebp-Ch] BYREF

  switch ( faceIndex ) /*0x812f03*/
  {
    case 0u: /*0x812f03*/
      v3[0] = -*(float *)&stru_B258DC; /*0x812f17*/
      v3[1] = -*(float *)&MEMORY[0xB258E0]; /*0x812f28*/
      v3[2] = -*((float *)&MEMORY[0xB258E0] + 1); /*0x812f34*/
      v11[0] = *(float *)&self->base_000[0x88] - *(float *)&stru_B258D0; /*0x812f44*/
      v11[1] = *(float *)&self->base_000[0x8C] - *(float *)&MEMORY[0xB258D4]; /*0x812f54*/
      v11[2] = *(float *)&self->base_000[0x90] - *(float *)&MEMORY[0xB258D8]; /*0x812f64*/
      sub_70C340((float *)self->base_000, v11, v3); /*0x812f68*/
      break; /*0x812f73*/
    case 1u: /*0x812f03*/
      v5[0] = -*(float *)&stru_B258DC; /*0x812f83*/
      v5[1] = -*(float *)&MEMORY[0xB258E0]; /*0x812f94*/
      v5[2] = -*((float *)&MEMORY[0xB258E0] + 1); /*0x812fa0*/
      v9[0] = *(float *)&stru_B258D0 + *(float *)&self->base_000[0x88]; /*0x812fb0*/
      v9[1] = *(float *)&self->base_000[0x8C] + *(float *)&MEMORY[0xB258D4]; /*0x812fc0*/
      v9[2] = *(float *)&self->base_000[0x90] + *(float *)&MEMORY[0xB258D8]; /*0x812fd0*/
      sub_70C340((float *)self->base_000, v9, v5); /*0x812fd4*/
      break; /*0x812fdf*/
    case 2u: /*0x812f03*/
      v7[0] = *(float *)&self->base_000[0x88] - *(float *)&stru_B258DC; /*0x812ff8*/
      v7[1] = *(float *)&self->base_000[0x8C] - *(float *)&MEMORY[0xB258E0]; /*0x813008*/
      v7[2] = *(float *)&self->base_000[0x90] - *((float *)&MEMORY[0xB258E0] + 1); /*0x813018*/
      sub_70C340((float *)self->base_000, v7, (float *)&rhs); /*0x81301c*/
      break; /*0x813027*/
    case 3u: /*0x812f03*/
      v2[0] = -*(float *)&rhs; /*0x813039*/
      v2[1] = -*(float *)&MEMORY[0xB258EC]; /*0x813046*/
      v2[2] = -*(float *)&MEMORY[0xB258F0]; /*0x813052*/
      v4[0] = *(float *)&self->base_000[0x88] + *(float *)&stru_B258DC; /*0x813062*/
      v4[1] = *(float *)&self->base_000[0x8C] + *(float *)&MEMORY[0xB258E0]; /*0x813072*/
      v4[2] = *(float *)&self->base_000[0x90] + *((float *)&MEMORY[0xB258E0] + 1); /*0x813082*/
      sub_70C340((float *)self->base_000, v4, v2); /*0x813086*/
      break; /*0x813091*/
    case 4u: /*0x812f03*/
      v6[0] = -*(float *)&stru_B258DC; /*0x8130a4*/
      v6[1] = -*(float *)&MEMORY[0xB258E0]; /*0x8130b2*/
      v6[2] = -*((float *)&MEMORY[0xB258E0] + 1); /*0x8130be*/
      v8[0] = *(float *)&self->base_000[0x88] - *(float *)&rhs; /*0x8130ce*/
      v8[1] = *(float *)&self->base_000[0x8C] - *(float *)&MEMORY[0xB258EC]; /*0x8130de*/
      v8[2] = *(float *)&self->base_000[0x90] - *(float *)&MEMORY[0xB258F0]; /*0x8130ee*/
      sub_70C340((float *)self->base_000, v8, v6); /*0x8130f2*/
      break; /*0x8130fd*/
    case 5u: /*0x812f03*/
      v10[0] = -*(float *)&stru_B258DC; /*0x813110*/
      v10[1] = -*(float *)&MEMORY[0xB258E0]; /*0x81311e*/
      v10[2] = -*((float *)&MEMORY[0xB258E0] + 1); /*0x81312a*/
      v12[0] = *(float *)&self->base_000[0x88] + *(float *)&rhs; /*0x81313a*/
      v12[1] = *(float *)&self->base_000[0x8C] + *(float *)&MEMORY[0xB258EC]; /*0x81314d*/
      v12[2] = *(float *)&self->base_000[0x90] + *(float *)&MEMORY[0xB258F0]; /*0x813160*/
      sub_70C340((float *)self->base_000, v12, v10); /*0x813167*/
      def_812F03(faceIndex); /*0x813168*/
      break; /*0x813168*/
    default:
      JUMPOUT(0x81316C); /*0x81316c*/
  }
}
