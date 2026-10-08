int __thiscall sub_7E61C0(float *this, volatile LONG *a2, int a3, int a4, int a5)
{
  ShadowSceneLight *FirstActiveLight; // eax
  float *v7; // esi
  volatile LONG *v8; // ebx
  float v9; // edx
  float v10; // eax
  float v11; // ecx
  float v12; // eax
  float v13; // ecx
  int result; // eax
  float v15; // [esp+10h] [ebp-2Ch] BYREF
  float v16; // [esp+14h] [ebp-28h]
  float v17; // [esp+18h] [ebp-24h]
  _BYTE v18[12]; // [esp+1Ch] [ebp-20h] BYREF
  float v19; // [esp+28h] [ebp-14h]
  float v20; // [esp+2Ch] [ebp-10h]
  float v21; // [esp+30h] [ebp-Ch]
  float v22; // [esp+34h] [ebp-8h]
  float v23; // [esp+38h] [ebp-4h]
  void *retaddr; // [esp+3Ch] [ebp+0h]

  FirstActiveLight = BSShaderLightingProperty__GetFirstActiveLight((BSShaderLightingProperty *)a2); /*0x7e61cb*/
  v7 = (float *)*ShadowSceneLight_GetLightRef(FirstActiveLight, &a2); /*0x7e61dc*/
  if ( a2 ) /*0x7e61e4*/
  {
    v8 = a2; /*0x7e61e7*/
    if ( !InterlockedDecrement(a2 + 1) ) /*0x7e61ed*/
      (**(void (__thiscall ***)(volatile LONG *, int))v8)(v8, 1); /*0x7e6203*/
  }
  v9 = v7[0x3C]; /*0x7e620c*/
  v10 = v7[0x3D]; /*0x7e6212*/
  v19 = v7[0x3B]; /*0x7e6220*/
  v20 = v9; /*0x7e6230*/
  v21 = v10; /*0x7e6240*/
  *(this + 0x59) = v19; /*0x7e624a*/
  v22 = 1.0; /*0x7e6250*/
  *(this + 0x5A) = v9; /*0x7e6254*/
  v11 = v22; /*0x7e625a*/
  *(this + 0x5B) = v10; /*0x7e625e*/
  *(this + 0x5C) = v11; /*0x7e6264*/
  v12 = v7[0x23]; /*0x7e6270*/
  v13 = v7[0x24]; /*0x7e6276*/
  v15 = v7[0x22]; /*0x7e6288*/
  v16 = v12; /*0x7e6295*/
  v17 = v13; /*0x7e62a5*/
  result = D3DXVec3TransformCoord_0((int)v18, (int)&v15, (int)a2); /*0x7e62af*/
  v21 = v7[0x3E]; /*0x7e62c2*/
  if ( retaddr != (void *)0x197 ) /*0x7e62c8*/
    v21 = v21 / v23; /*0x7e62d2*/
  unk_B460A0 = v15; /*0x7e62da*/
  unk_B460A4 = v16; /*0x7e62e4*/
  unk_B460A8 = v17; /*0x7e62ee*/
  unk_B460AC = v21; /*0x7e62f8*/
  return result; /*0x7e62fe*/
}
