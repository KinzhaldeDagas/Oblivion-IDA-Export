int __thiscall sub_7549C0(float *this)
{
  float *v2; // ebp
  int result; // eax
  int v4; // eax
  double v5; // st7
  float z; // ecx
  int v7; // ecx
  float v8; // [esp+8h] [ebp-D4h]
  NiTransform out; // [esp+Ch] [ebp-D0h] BYREF
  NiTransform local; // [esp+40h] [ebp-9Ch] BYREF
  float v11[13]; // [esp+74h] [ebp-68h] BYREF
  NiTransform parent; // [esp+A8h] [ebp-34h] BYREF

  v2 = this + 0x12; /*0x7549d0*/
  if ( sub_718B20((NiPoint3 *)this + 6, (NiPoint3 *)(*((_DWORD *)this + 0xB) + 0x64)) /*0x7549f3*/
    || (result = sub_718B20((NiPoint3 *)(this + 0x1F), (NiPoint3 *)(*(_DWORD *)(*((_DWORD *)this + 9) + 0x10) + 0x64)),
        (_BYTE)result) )
  {
    v4 = *((_DWORD *)this + 0xB); /*0x7549f9*/
    if ( v4 ) /*0x754a00*/
      qmemcpy(&local, (const void *)(v4 + 0x64), sizeof(local)); /*0x754a0e*/
    else
      sub_718A50((float *)&local); /*0x754a16*/
    qmemcpy(v11, (const void *)(*(_DWORD *)(*((_DWORD *)this + 9) + 0x10) + 0x64), sizeof(v11)); /*0x754a34*/
    sub_718A80(v11, &parent); /*0x754a3e*/
    NiTransform_Compose(&parent, &out, &local); /*0x754a54*/
    v5 = *(this + 0xC) * out.scale; /*0x754a60*/
    result = LODWORD(out.pos.y); /*0x754a64*/
    z = out.pos.z; /*0x754a68*/
    *(this + 0xF) = out.pos.x; /*0x754a6c*/
    v8 = v5; /*0x754a6f*/
    *((_DWORD *)this + 0x10) = result; /*0x754a73*/
    *(this + 0x11) = z; /*0x754a7a*/
    *(this + 0xD) = v8; /*0x754a80*/
    qmemcpy(this + 0x1F, v11, 0x34u); /*0x754a8e*/
    *(this + 0xE) = v8 * v8; /*0x754a90*/
    qmemcpy(v2, &local, 0x34u); /*0x754a9e*/
  }
  v7 = *((_DWORD *)this + 0xA); /*0x754aa2*/
  if ( v7 ) /*0x754aa9*/
    return (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 0x54))(v7); /*0x754ab6*/
  return result; /*0x754aa7*/
}
