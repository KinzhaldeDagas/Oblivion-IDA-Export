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

  v2 = *(this + 2);
  v12 = *(this + 6);
  v11 = *(this + 0x17);
  v3 = *(this + 0x15);
  *(this + 0x18) = 0;
  v4 = *(_DWORD *)(v2 + 0x280);
  v13 = 0;
  v5 = (*(int (__stdcall **)(int, int, int, _DWORD, int, int, int *, _DWORD))(*(_DWORD *)v4 + 0x64))(
         v4,
         v3,
         v11,
         0,
         v12,
         1,
         &v13,
         0);
  if ( v5 >= 0 )
  {
    v8 = *(this + 0x15);
    *(this + 0x14) = v13;
    v9 = 6 * v8 * v8 * *(this + 0x17) * (*((unsigned __int8 *)this + 0xD) >> 3);
    dword_B4283C += v9;
    v10 = 0;
    *(this + 0x18) = v9;
    if ( (v9 & 0xFFFFF000) != v9 )
      v10 = (v9 & 0xFFFFF000) - v9 + 0x1000;
    dword_B42840 += v10;
    return 1;
  }
  else
  {
    sub_7736F0(v5);
    TESTexture::ClearComponentReferences(v6);
    return 0;
  }
}
