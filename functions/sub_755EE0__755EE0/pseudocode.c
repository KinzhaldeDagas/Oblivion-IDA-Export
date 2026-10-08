float *__thiscall sub_755EE0(char *this)
{
  float *v2; // ecx
  float *result; // eax
  int v4; // eax
  float y; // eax
  float z; // ecx
  NiTransform *v7; // eax
  double scale; // st7
  double v9; // st6
  int v10; // ebx
  float v11; // [esp+8h] [ebp-F4h]
  float v12; // [esp+8h] [ebp-F4h]
  float v13; // [esp+Ch] [ebp-F0h]
  float v14; // [esp+Ch] [ebp-F0h]
  NiPoint3 v15; // [esp+10h] [ebp-ECh] BYREF
  float v16[4]; // [esp+1Ch] [ebp-E0h] BYREF
  NiTransform out; // [esp+2Ch] [ebp-D0h] BYREF
  NiTransform local; // [esp+60h] [ebp-9Ch] BYREF
  float v19[13]; // [esp+94h] [ebp-68h] BYREF
  NiTransform parent; // [esp+C8h] [ebp-34h] BYREF

  v2 = sub_716DE0(v16, (int)&g_zeroNiPoint3, 0.0); /*0x755f00*/
  if ( *v2 == *((float *)this + 0x16) /*0x755f6f*/
    && v2[1] == *((float *)this + 0x17)
    && v2[2] == *((float *)this + 0x18)
    && v2[3] == *((float *)this + 0x19)
    || (result = *((float **)this + 0xB)) != 0
    && (sub_718B20((NiPoint3 *)(this + 0x98), (NiPoint3 *)(result + 0x19))
     || (result = (float *)sub_718B20(
                             (NiPoint3 *)this + 0x11,
                             (NiPoint3 *)(*(_DWORD *)(*((_DWORD *)this + 9) + 0x10) + 0x64)),
         (_BYTE)result)) )
  {
    *((_DWORD *)this + 0x1A) = LODWORD(g_zeroNiPoint3.x); /*0x755f7b*/
    *((_DWORD *)this + 0x1B) = LODWORD(g_zeroNiPoint3.y); /*0x755f84*/
    *((_DWORD *)this + 0x1C) = LODWORD(g_zeroNiPoint3.z); /*0x755f8c*/
    qmemcpy(this + 0x74, &stru_B26AF0[0xA].unk2C, 0x24u); /*0x755fa2*/
    v15.x = *((float *)this + 0x13) * *((float *)this + 0xF) - *((float *)this + 0x12) * *((float *)this + 0x10); /*0x755fb2*/
    v15.y = *((float *)this + 0x11) * *((float *)this + 0x10) - *((float *)this + 0x13) * *((float *)this + 0xE); /*0x755fc8*/
    v15.z = *((float *)this + 0xE) * *((float *)this + 0x12) - *((float *)this + 0xF) * *((float *)this + 0x11); /*0x755fda*/
    Vector3_NormalizeInPlace(&v15.x); /*0x755fde*/
    v4 = *((_DWORD *)this + 0xB); /*0x755fe3*/
    v13 = *((float *)this + 0xC); /*0x755fed*/
    v11 = *((float *)this + 0xD); /*0x755ff4*/
    if ( v4 ) /*0x755ff8*/
    {
      qmemcpy(&local, (const void *)(v4 + 0x64), sizeof(local)); /*0x75600a*/
      qmemcpy(v19, (const void *)(*(_DWORD *)(*((_DWORD *)this + 9) + 0x10) + 0x64), sizeof(v19)); /*0x756028*/
      sub_718A80(v19, &parent); /*0x756032*/
      NiTransform_Compose(&parent, &out, &local); /*0x756048*/
      y = out.pos.y; /*0x756051*/
      z = out.pos.z; /*0x756055*/
      *((_DWORD *)this + 0x1A) = LODWORD(out.pos.x); /*0x756059*/
      *((float *)this + 0x1B) = y; /*0x75605c*/
      *((float *)this + 0x1C) = z; /*0x75605f*/
      qmemcpy(this + 0x74, &out, 0x24u); /*0x756070*/
      v7 = sub_7101F0((NiTransform *)(this + 0x74), (NiTransform *)v16, &v15); /*0x75607e*/
      v15.x = v7->rot.data[0][0]; /*0x756085*/
      v15.y = v7->rot.data[0][1]; /*0x75608c*/
      v15.z = v7->rot.data[0][2]; /*0x756097*/
      Vector3_NormalizeInPlace(&v15.x); /*0x75609b*/
      scale = out.scale; /*0x7560a8*/
      v9 = out.scale * v13; /*0x7560b7*/
      qmemcpy(this + 0x98, &local, 0x34u); /*0x7560bb*/
      v13 = v9; /*0x7560bd*/
      v11 = scale * v11; /*0x7560c5*/
      qmemcpy(this + 0xCC, v19, 0x34u); /*0x7560db*/
    }
    v14 = v13 * dbl_A2FAA0; /*0x7560f5*/
    v12 = dbl_A2FAA0 * v11; /*0x7560fd*/
    *((float *)this + 0x14) = v14 * v14; /*0x756107*/
    *((float *)this + 0x15) = v12 * v12; /*0x756110*/
    result = sub_716E00(v16, &v15.x, (float *)this + 0x1A); /*0x756113*/
    *((float *)this + 0x16) = *result; /*0x75611a*/
    *((float *)this + 0x17) = result[1]; /*0x756120*/
    *((float *)this + 0x18) = result[2]; /*0x756127*/
    *((float *)this + 0x19) = result[3]; /*0x75612e*/
  }
  v10 = *((_DWORD *)this + 0xA); /*0x756132*/
  if ( v10 ) /*0x756137*/
    return (*(float *(__thiscall **)(int))(*(_DWORD *)v10 + 0x54))(v10); /*0x756147*/
  return result; /*0x756141*/
}
