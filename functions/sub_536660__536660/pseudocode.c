// ODismemberment: recursively walks NiAVObject children and pushes a translated vector into each bhkCollisionObject-backed Havok object via sub_4D6AF0.
void __cdecl sub_536660(int a1, float *a2)
{
  int BhkCollisionObject; // eax
  int *v3; // ecx
  int v4; // eax
  __m128 *v5; // eax
  int v6; // eax
  int v7; // edi
  int v8; // eax
  int v9; // esi
  int i; // eax
  __m128 v11; // [esp+10h] [ebp-20h] BYREF

  if ( a1 ) /*0x53667f*/
  {
    BhkCollisionObject = NiAVObject_GetBhkCollisionObject(a1); /*0x536686*/
    if ( BhkCollisionObject ) /*0x536690*/
    {
      v3 = *(int **)(BhkCollisionObject + 0x10); /*0x536692*/
      if ( v3 ) /*0x536697*/
      {
        v4 = v3[2]; /*0x53669b*/
        v11.m128_f32[0] = *a2; /*0x5366a0*/
        v11.m128_f32[1] = a2[1]; /*0x5366a7*/
        v11.m128_f32[2] = a2[2]; /*0x5366ae*/
        v11.m128_f32[3] = 0.0; /*0x5366b4*/
        if ( v4 ) /*0x5366b8*/
          v5 = (__m128 *)(*(_DWORD *)(v4 + 0x50) + 0xD0); /*0x5366bd*/
        else
          v5 = (__m128 *)&unk_BA7A40; /*0x5366c4*/
        v11 = _mm_add_ps(v11, *v5); /*0x5366d9*/
        sub_4D6AF0(v3, (int)&v11); /*0x5366de*/
      }
    }
    v6 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 8))(a1); /*0x5366ea*/
    v7 = v6; /*0x5366ec*/
    if ( v6 ) /*0x5366f0*/
    {
      v8 = *(unsigned __int16 *)(v6 + 0xB6); /*0x5366f2*/
      v9 = 0; /*0x5366f9*/
      if ( *(_WORD *)(v7 + 0xB6) ) /*0x5366f2*/
      {
        if ( v8 ) /*0x536701*/
          goto LABEL_12; /*0x536701*/
        for ( i = 0; ; i = *(_DWORD *)(*(_DWORD *)(v7 + 0xB0) + 4 * v9) ) /*0x536703*/
        {
          sub_536660(i, a2); /*0x536712*/
          if ( *(unsigned __int16 *)(v7 + 0xB6) <= (unsigned int)++v9 ) /*0x536726*/
            break; /*0x536726*/
LABEL_12:
          ; /*0x536707*/
        }
      }
    }
  }
}
