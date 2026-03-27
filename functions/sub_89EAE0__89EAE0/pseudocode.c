void __thiscall sub_89EAE0(_DWORD *this)
{
  _DWORD *v2; // ebx
  int v3; // esi
  int v4; // esi
  NiAVObject *v5; // eax
  float v6[4]; // [esp+18h] [ebp-78h] BYREF
  _WORD *v7; // [esp+28h] [ebp-68h]
  float v8[13]; // [esp+2Ch] [ebp-64h] BYREF
  __m128 v9; // [esp+60h] [ebp-30h] BYREF
  float v10[7]; // [esp+70h] [ebp-20h] BYREF

  v2 = (_DWORD *)*(this + 4);
  v7 = this;
  if ( v2 )
  {
    v3 = v2[2];
    if ( v3 )
    {
      if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v3 + 0x50) + 8))(*(_DWORD *)(v3 + 0x50)) != 7
        || !*(_DWORD *)(v3 + 8) )
      {
        v4 = v2[2];
        v5 = sub_452A60((Atmosphere *)this);
        if ( v4 )
        {
          if ( v5 )
          {
            qmemcpy(v8, &v5->members.m_worldTransform, sizeof(v8));
            sub_7150F0(v6, v8);
            if ( (v7[6] & 0x40) == 0 && (sub_89E910(v7) || sub_4B6D90(v2) < 6) )
            {
              sub_8A3900(v2, &v8[9], v6);
            }
            else
            {
              sub_4529E0(v10, &v8[9]);
              v9.m128_f32[0] = v6[1];
              v9.m128_f32[1] = v6[2];
              v9.m128_f32[2] = v6[3];
              v9.m128_f32[3] = v6[0];
              sub_4D6830(&v9);
              sub_43F2E0(&stru_BA7B00);
              (*(void (__thiscall **)(_DWORD *, float *, __m128 *))(*v2 + 0xA0))(v2, v10, &v9);
              sub_43F300(&stru_BA7B00);
            }
          }
        }
      }
    }
  }
}
