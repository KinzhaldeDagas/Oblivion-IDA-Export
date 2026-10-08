// Composes parent and local NiTransform into out: out.scale=parent.scale*local.scale; out.rot=parent.rot*local.rot; out.pos=parent.pos + parent.scale*(parent.rot*local.pos). Returns out.
NiTransform *__thiscall NiTransform_Compose(const NiTransform *parent, NiTransform *out, const NiTransform *local)
{
  NiTransform *v4; // eax
  double scale; // st5
  float v6; // ecx
  double z; // st7
  float v9; // [esp+10h] [ebp-3Ch]
  float v10; // [esp+14h] [ebp-38h]
  float v11; // [esp+18h] [ebp-34h]
  _BYTE v12[48]; // [esp+1Ch] [ebp-30h] BYREF

  out->scale = local->scale * parent->scale; /*0x53d7bd*/
  qmemcpy(out, NiMAtrix33_Multiply((float *)parent, (float *)&v12[0xC], (float *)local), 0x24u); /*0x53d7ce*/
  v4 = sub_7101F0((NiTransform *)parent, (NiTransform *)v12, &local->pos); /*0x53d7df*/
  scale = parent->scale; /*0x53d7f3*/
  v9 = v4->rot.data[0][0] * scale; /*0x53d7f9*/
  v10 = v4->rot.data[0][1] * scale; /*0x53d802*/
  v11 = scale * v4->rot.data[0][2]; /*0x53d809*/
  *(float *)v12 = v9 + parent->pos.x; /*0x53d814*/
  *(float *)&v12[4] = parent->pos.y + v10; /*0x53d823*/
  v6 = *(float *)&v12[4]; /*0x53d827*/
  z = parent->pos.z; /*0x53d82b*/
  out->pos.x = *(float *)v12; /*0x53d82e*/
  out->pos.y = v6; /*0x53d835*/
  *(float *)&v12[8] = z + v11; /*0x53d83a*/
  out->pos.z = *(float *)&v12[8]; /*0x53d842*/
  return out; /*0x53d845*/
}
