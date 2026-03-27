int __thiscall sub_7549C0(float *this)
{
  _DWORD *v2; // ebp
  int result; // eax
  int v4; // eax
  double v5; // st7
  float z; // ecx
  int v7; // ecx
  float v8; // [esp+8h] [ebp-D4h]
  NiTransform v9; // [esp+Ch] [ebp-D0h] BYREF
  NiTransform v10; // [esp+40h] [ebp-9Ch] BYREF
  float v11[13]; // [esp+74h] [ebp-68h] BYREF
  NiTransform v12; // [esp+A8h] [ebp-34h] BYREF

  v2 = this + 0x12;
  if ( sub_718B20(this + 0x12, (float *)(*((_DWORD *)this + 0xB) + 0x64))
    || (result = sub_718B20(this + 0x1F, (float *)(*(_DWORD *)(*((_DWORD *)this + 9) + 0x10) + 0x64)), (_BYTE)result) )
  {
    v4 = *((_DWORD *)this + 0xB);
    if ( v4 )
      qmemcpy(&v10, (const void *)(v4 + 0x64), sizeof(v10));
    else
      sub_718A50((float *)&v10);
    qmemcpy(v11, (const void *)(*(_DWORD *)(*((_DWORD *)this + 9) + 0x10) + 0x64), sizeof(v11));
    sub_718A80(v11, &v12);
    sub_53D7A0(&v12, &v9, &v10);
    v5 = *(this + 0xC) * v9.scale;
    result = LODWORD(v9.pos.y);
    z = v9.pos.z;
    *(this + 0xF) = v9.pos.x;
    v8 = v5;
    *((_DWORD *)this + 0x10) = result;
    *(this + 0x11) = z;
    *(this + 0xD) = v8;
    qmemcpy(this + 0x1F, v11, 0x34u);
    *(this + 0xE) = v8 * v8;
    qmemcpy(v2, &v10, 0x34u);
  }
  v7 = *((_DWORD *)this + 0xA);
  if ( v7 )
    return (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 0x54))(v7);
  return result;
}
