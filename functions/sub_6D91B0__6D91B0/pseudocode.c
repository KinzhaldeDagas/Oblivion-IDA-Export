void __thiscall sub_6D91B0(int this, float a2)
{
  float *v3; // eax
  double v4; // st7
  int v5; // esi
  float v6; // [esp+14h] [ebp-8Ch]
  char v7[4]; // [esp+24h] [ebp-7Ch] BYREF
  int v8; // [esp+28h] [ebp-78h] BYREF
  int v9; // [esp+2Ch] [ebp-74h] BYREF
  float v10; // [esp+30h] [ebp-70h]
  float v11[9]; // [esp+34h] [ebp-6Ch] BYREF
  float v12[9]; // [esp+58h] [ebp-48h] BYREF
  float v13[9]; // [esp+7Ch] [ebp-24h] BYREF

  if ( *(_DWORD *)(this + 0x30) )
  {
    if ( !sub_6C36B0((float *)this, a2) )
    {
      v3 = (float *)sub_6EC8C0((_DWORD *)this, &v8, &v9, v7);
      v4 = sub_6BB270(*(float *)(this + 0x28), v3, v9, v8, (int *)(this + 0x3C), v7[0]);
      v5 = *(_DWORD *)(this + 0x30);
      v10 = v4;
      v6 = -v10;
      qmemcpy(v11, (const void *)(v5 + 0x30), sizeof(v11));
      NiMatrix33_InitRotationTransform(v12, v6);
      qmemcpy(v11, NiMAtrix33_Multiply(v11, v13, v12), sizeof(v11));
      qmemcpy((void *)(*(_DWORD *)(this + 0x30) + 0x30), v11, 0x24u);
    }
  }
}
