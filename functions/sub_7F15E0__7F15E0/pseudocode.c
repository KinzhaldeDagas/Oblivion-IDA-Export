int __thiscall sub_7F15E0(char **this, int a2, int a3, int a4, int a5, int a6, int a7, float *a8, int a9)
{
  _DWORD *v10; // edi
  BOOL v11; // eax
  float v13[16]; // [esp+1Ch] [ebp-80h] BYREF
  int v14[16]; // [esp+5Ch] [ebp-40h] BYREF

  sub_765480((NiDX9Renderer *)*(this + 5), a8, 0);
  v13[0] = a8[0xC] * *a8;
  v13[1] = a8[3] * a8[0xC];
  v13[2] = a8[6] * a8[0xC];
  v13[4] = a8[1] * a8[0xC];
  v13[5] = a8[4] * a8[0xC];
  v13[6] = a8[7] * a8[0xC];
  v13[8] = a8[2] * a8[0xC];
  v13[9] = a8[5] * a8[0xC];
  v13[0xA] = a8[8] * a8[0xC];
  v13[0xC] = a8[9];
  v13[0xD] = a8[0xA];
  v13[0xE] = a8[0xB];
  v13[3] = 0.0;
  v13[7] = 0.0;
  v13[0xB] = 0.0;
  v13[0xF] = 1.0;
  D3DXMatrixInverse_0(v14, 0, v13);
  v10 = *(_DWORD **)(a6 + 0x18);
  if ( v10 )
    v11 = (*(int (__thiscall **)(_DWORD))(*v10 + 0x54))(*(_DWORD *)(a6 + 0x18)) == 9;
  else
    v11 = 0;
  sub_7F0100(v11 ? v10 : 0, (int)v14, a8[0xC]);
  sub_7F1170();
  return 0;
}
