void __thiscall sub_89EAE0(_DWORD *this)
{
  int *v2; // ebx
  int v3; // esi
  int v4; // esi
  NiAVObject *v5; // eax
  float v6[4]; // [esp+18h] [ebp-78h] BYREF
  _WORD *v7; // [esp+28h] [ebp-68h]
  float v8[13]; // [esp+2Ch] [ebp-64h] BYREF
  __m128 v9; // [esp+60h] [ebp-30h] BYREF
  float v10[7]; // [esp+70h] [ebp-20h] BYREF

  v2 = (int *)*(this + 4); /*0x89eaff*/
  v7 = this; /*0x89eb04*/
  if ( v2 ) /*0x89eb08*/
  {
    v3 = v2[2]; /*0x89eb0e*/
    if ( v3 ) /*0x89eb13*/
    {
      if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v3 + 0x50) + 8))(*(_DWORD *)(v3 + 0x50)) != 7 /*0x89eb28*/
        || !*(_DWORD *)(v3 + 8) )
      {
        v4 = v2[2]; /*0x89eb32*/
        v5 = Shared_GetPointerAtOffset08((Atmosphere *)this); /*0x89eb37*/
        if ( v4 ) /*0x89eb3e*/
        {
          if ( v5 ) /*0x89eb46*/
          {
            qmemcpy(v8, &v5->members.m_worldTransform, sizeof(v8)); /*0x89eb5c*/
            sub_7150F0(v6, v8); /*0x89eb63*/
            if ( (v7[6] & 0x40) == 0 && (sub_89E910(v7) || sub_4B6D90(v2) < 6) ) /*0x89ec10*/
            {
              sub_8A3900(v2, &v8[9], v6); /*0x89ebec*/
            }
            else
            {
              sub_4529E0(v10, &v8[9]); /*0x89ec42*/
              v9.m128_f32[0] = v6[1]; /*0x89ec4b*/
              v9.m128_f32[1] = v6[2]; /*0x89ec5a*/
              v9.m128_f32[2] = v6[3]; /*0x89ec62*/
              v9.m128_f32[3] = v6[0]; /*0x89ec6a*/
              hkQuaternion_Normalize(&v9); /*0x89ec6e*/
              sub_43F2E0(&unk_BA7B00); /*0x89ec78*/
              (*(void (__thiscall **)(int *, float *, __m128 *))(*v2 + 0xA0))(v2, v10, &v9); /*0x89ec91*/
              sub_43F300(&unk_BA7B00); /*0x89ec98*/
            }
          }
        }
      }
    }
  }
}
