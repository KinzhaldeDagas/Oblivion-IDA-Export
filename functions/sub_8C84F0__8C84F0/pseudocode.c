int __thiscall sub_8C84F0(float **this, int a2)
{
  _WORD *v3; // eax
  _DWORD *v4; // esi
  int (__thiscall *v5)(_DWORD *); // edx
  int result; // eax
  int v7; // esi
  float v8[4]; // [esp+28h] [ebp-90h] BYREF
  float v9; // [esp+38h] [ebp-80h]
  float v10; // [esp+3Ch] [ebp-7Ch]
  float v11; // [esp+40h] [ebp-78h]
  float v12; // [esp+44h] [ebp-74h]
  float v13; // [esp+48h] [ebp-70h]
  float v14; // [esp+4Ch] [ebp-6Ch]
  float v15; // [esp+50h] [ebp-68h]
  float v16; // [esp+54h] [ebp-64h]
  int v17; // [esp+58h] [ebp-60h]
  _WORD *v18; // [esp+74h] [ebp-44h]
  __int128 v19; // [esp+78h] [ebp-40h] BYREF
  __int128 v20; // [esp+88h] [ebp-30h] BYREF
  unsigned int v21; // [esp+B4h] [ebp-4h]

  v8[1] = flt_B2EFC4;
  *(float *)&v17 = 0.0;
  v9 = 0.0;
  v10 = 0.0;
  v8[0] = 0.0;
  v11 = 0.0;
  v12 = 0.0;
  v13 = 1.0;
  v14 = 0.0;
  v15 = 0.0;
  v16 = 0.0;
  sub_8C8080(this, v8);
  v3 = (_WORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_BA7D98 + 0x10))(dword_BA7D98, 0x90, 8);
  v3[2] = 0x90;
  v18 = v3;
  *(float *)&v19 = v13;
  *((float *)&v19 + 1) = v14;
  *((float *)&v19 + 2) = v15;
  v21 = 0;
  *((float *)&v19 + 3) = v16;
  *(float *)&v20 = v9;
  *((float *)&v20 + 1) = v10;
  *((float *)&v20 + 2) = v11;
  *((float *)&v20 + 3) = v12;
  v4 = sub_916380(v3, &v20, &v19, v17, 9, 1);
  v5 = *(int (__thiscall **)(_DWORD *))(*v4 + 0xC);
  v21 = 0xFFFFFFFF;
  result = v5(v4);
  v7 = v4[0x14];
  if ( v7 )
    return (*((int (__thiscall **)(float **, int, int, const char *))*this + 0x25))(this, a2, v7, "bhkCylinderShape");
  return result;
}
