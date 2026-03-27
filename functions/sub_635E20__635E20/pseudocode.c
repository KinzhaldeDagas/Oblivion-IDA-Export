void __thiscall sub_635E20(int *this, int a2)
{
  float *vtbl; // esi
  float *v4; // eax
  double v5; // st7
  int v6; // eax
  int v7; // ecx
  signed int v8; // esi
  float v9; // [esp+8h] [ebp-Ch]
  float v10; // [esp+Ch] [ebp-8h]
  float v11; // [esp+10h] [ebp-4h]
  float v12; // [esp+18h] [ebp+4h]
  float v13; // [esp+18h] [ebp+4h]
  float v14; // [esp+18h] [ebp+4h]
  float v15; // [esp+18h] [ebp+4h]

  if ( g_worldScenegraph->super.children.end )
    vtbl = (float *)g_worldScenegraph->super.children.data->vtbl;
  else
    vtbl = 0;
  v4 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x174))(a2);
  v9 = *v4 - vtbl[0x15];
  v10 = v4[1] - vtbl[0x16];
  v11 = v4[2] - vtbl[0x17];
  v12 = v10 * v10 + v9 * v9 + v11 * v11;
  v13 = sqrt(v12);
  v14 = fabs(v13);
  v5 = v14 * dbl_A2F910 * g_worldScenegraph->camera->members.LODAdjust;
  v15 = SettingLODFadeOutMultActors * flt_B075F0;
  v6 = Double_To_SInt32(v5 / (v15 * (double)iBoneLODDistMult));
  v7 = *(this + 0x7B);
  v8 = v6;
  if ( v6 >= *(_DWORD *)(v7 + 0x40) )
    v8 = 0xFFFFFFFF;
  if ( v8 != *(this + 0x7C) )
  {
    sub_6FD5D0(v7, v8);
    *(this + 0x7C) = v8;
  }
}
