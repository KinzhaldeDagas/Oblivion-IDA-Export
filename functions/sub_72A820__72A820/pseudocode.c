// CULLING goal 2026-09-27: transforms a full 16-byte NiBound, not only a NiPoint3. Output center = rotation*input.center*scale + translation; output radius at +0xC = input.radius*scale. Observed code does not take abs(scale). Preserve native arithmetic; a negative resulting radius remains unresolved for CULLING rather than being silently normalized.
int __thiscall NiBound_TransformInto(NiBound *output, const NiBound *input, const NiTransform *transform)
{
  NiTransform *v4; // eax
  double scale; // st5
  float v6; // edx
  double z; // st7
  int result; // eax
  float v9; // [esp+Ch] [ebp-18h]
  float v10; // [esp+10h] [ebp-14h]
  float v11; // [esp+14h] [ebp-10h]
  float v12; // [esp+18h] [ebp-Ch] BYREF
  float v13; // [esp+1Ch] [ebp-8h]
  float v14; // [esp+20h] [ebp-4h]

  v4 = sub_7101F0((NiTransform *)transform, (NiTransform *)&v12, &input->Center); /*0x72a838*/
  scale = transform->scale; /*0x72a84a*/
  v9 = v4->rot.data[0][0] * scale; /*0x72a850*/
  v10 = v4->rot.data[0][1] * scale; /*0x72a859*/
  v11 = scale * v4->rot.data[0][2]; /*0x72a860*/
  v12 = transform->pos.x + v9; /*0x72a86b*/
  v13 = transform->pos.y + v10; /*0x72a87a*/
  v6 = v13; /*0x72a87e*/
  z = transform->pos.z; /*0x72a882*/
  output->Center.x = v12; /*0x72a885*/
  output->Center.y = v6; /*0x72a88b*/
  v14 = z + v11; /*0x72a88e*/
  result = LODWORD(v14); /*0x72a892*/
  output->Center.z = v14; /*0x72a896*/
  output->Radius = input->Radius * transform->scale; /*0x72a89f*/
  return result; /*0x72a8a2*/
}
