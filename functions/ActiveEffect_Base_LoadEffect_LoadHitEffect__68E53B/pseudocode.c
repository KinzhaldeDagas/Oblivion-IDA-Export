// Verified ActiveEffect LoadEffect reconstructs type 5 MagicModelHitEffect or type 6 MagicShaderHitEffect, invokes the per-object load callback, and attaches each pointer in an allocated 8-byte HitEffectNode at ActiveEffect+0x34.
void __userpurge ActiveEffect_Base_LoadEffect_::LoadHitEffect(
        float *a1@<ebx>,
        int a2@<ebp>,
        int a3@<edi>,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18)
{
  float *v18; // esi
  float *v19; // eax
  float *v20; // eax
  unsigned int v21; // [esp+18h] [ebp+18h]

  (*(void (__thiscall **)(int, int, int))(*(_DWORD *)a3 + 0x7C))(a3, a2, a18); /*0x68e548*/
  v18 = *(float **)(a2 + 0x34); /*0x68e54a*/
  if ( v18 == a1 ) /*0x68e54f*/
  {
    v19 = (float *)FormHeapAlloc(8u); /*0x68e553*/
    if ( v19 == a1 ) /*0x68e55d*/
    {
      *(_DWORD *)(a2 + 0x34) = 0; /*0x68e56b*/
    }
    else
    {
      *(_DWORD *)v19 = a3; /*0x68e55f*/
      *((_DWORD *)v19 + 1) = a1; /*0x68e561*/
      *(_DWORD *)(a2 + 0x34) = v19; /*0x68e564*/
    }
  }
  else
  {
    if ( *(float **)v18 != a1 ) /*0x68e572*/
    {
      v20 = (float *)FormHeapAlloc(8u); /*0x68e576*/
      if ( v20 == a1 ) /*0x68e580*/
      {
        v20 = 0; /*0x68e58b*/
      }
      else
      {
        *v20 = *v18; /*0x68e584*/
        *((_DWORD *)v20 + 1) = a1; /*0x68e586*/
      }
      v20[1] = v18[1]; /*0x68e590*/
      *((_DWORD *)v18 + 1) = v20; /*0x68e593*/
    }
    *(_DWORD *)v18 = a3; /*0x68e596*/
  }
  v21 = a9 + 1; /*0x68e5a6*/
  if ( v21 < BYTE2(a8) ) /*0x68e5aa*/
    ActiveEffect_Base_LoadEffect_::LoopBody( /*0x68e5aa*/
      a1,
      a2,
      a4,
      a5,
      a6,
      a7,
      a8,
      v21,
      a10,
      a11,
      a12,
      a13,
      a14,
      a15,
      a16,
      a17,
      a18);
  else
    ActiveEffect_Base_LoadEffect_::LoadUnk14_(a2, a4); /*0x68e5ab*/
}
