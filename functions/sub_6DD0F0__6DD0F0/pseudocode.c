double __thiscall sub_6DD0F0(_DWORD *this, int a2, int a3, float a4)
{
  int v4; // eax
  int v5; // edx
  unsigned __int8 v6; // bl
  int v7; // ecx
  float v9; // [esp+18h] [ebp-Ch] BYREF
  float v10; // [esp+1Ch] [ebp-8h]
  float v11; // [esp+20h] [ebp-4h]
  float v12; // [esp+2Ch] [ebp+8h]

  v4 = *(this + 0x12);
  if ( v4 )
  {
    v5 = *(_DWORD *)(v4 + 0x10);
    v6 = *(_BYTE *)(v4 + 0x14);
    v7 = *(_DWORD *)(v4 + 0xC);
  }
  else
  {
    v5 = 0;
    v7 = 0;
    v6 = 0;
  }
  (*(void (__cdecl **)(_DWORD, int, int, float *))(4 * v5 + 0xB3D250))(LODWORD(a4), v7 + a2 * v6, v7 + a3 * v6, &v9);
  v12 = v10 * v10 + v9 * v9 + v11 * v11;
  return (float)sqrt(v12);
}
