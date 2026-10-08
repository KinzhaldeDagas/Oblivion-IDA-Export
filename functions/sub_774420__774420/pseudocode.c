char __thiscall sub_774420(_DWORD *this)
{
  int v2; // eax
  int v3; // ecx
  int v4; // eax
  signed int v5; // eax
  void *v6; // ecx
  int v8; // ecx
  int v9; // eax
  unsigned int v10; // edx
  int v11; // [esp+0h] [ebp-24h]
  int v12; // [esp+8h] [ebp-1Ch]
  int v13; // [esp+20h] [ebp-4h] BYREF

  v2 = *(this + 2); /*0x77442a*/
  v12 = *(this + 6); /*0x774434*/
  v11 = *(this + 0x17); /*0x77443a*/
  v3 = *(this + 0x15); /*0x77443b*/
  *(this + 0x18) = 0; /*0x77443e*/
  v4 = *(_DWORD *)(v2 + 0x280); /*0x774445*/
  v13 = 0; /*0x77444b*/
  v5 = (*(int (__stdcall **)(int, int, int, _DWORD, int, int, int *, _DWORD))(*(_DWORD *)v4 + 0x64))( /*0x77445a*/
         v4,
         v3,
         v11,
         0,
         v12,
         1,
         &v13,
         0);
  if ( v5 >= 0 ) /*0x77445e*/
  {
    v8 = *(this + 0x15); /*0x77447e*/
    *(this + 0x14) = v13; /*0x774481*/
    v9 = 6 * v8 * v8 * *(this + 0x17) * (*((unsigned __int8 *)this + 0xD) >> 3); /*0x774498*/
    unk_B4283C += v9; /*0x77449a*/
    v10 = 0; /*0x7744a8*/
    *(this + 0x18) = v9; /*0x7744ac*/
    if ( (v9 & 0xFFFFF000) != v9 ) /*0x7744af*/
      v10 = (v9 & 0xFFFFF000) - v9 + 0x1000; /*0x7744b9*/
    unk_B42840 += v10; /*0x7744bb*/
    return 1; /*0x7744c2*/
  }
  else
  {
    D3D9_HResultToString(v5); /*0x774461*/
    Shared_NoOpVirtual_60D0A0(v6); /*0x77446c*/
    return 0; /*0x774475*/
  }
}
