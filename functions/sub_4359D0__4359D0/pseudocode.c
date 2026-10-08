// Finds a loaded KF model by BSAnimGroupSequence/source sequence. Used when mapping runtime sequence objects back to model-loader records.
int __thiscall sub_4359D0(_DWORD *this, int a2)
{
  int v2; // eax
  int v3; // ecx
  char v4; // al

  if ( !a2 ) /*0x4359d6*/
    return 0; /*0x435a00*/
  v2 = *(_DWORD *)(a2 + 8); /*0x4359d8*/
  v3 = *(this + 1); /*0x4359db*/
  a2 = 0; /*0x4359e3*/
  v4 = (*(int (__thiscall **)(int, int, int *))(*(_DWORD *)v3 + 4))(v3, v2, &a2); /*0x4359f2*/
  return v4 != 0 ? a2 : 0;
}
