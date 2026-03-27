int __usercall ActiveEffect_Base_LoadEffect_::LoadHitEffect@<eax>(
        _DWORD *a1@<ebx>,
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
  _DWORD *v18; // esi
  _DWORD *v19; // eax
  _DWORD *v20; // eax
  unsigned int v22; // [esp+18h] [ebp+18h]

  (*(void (__thiscall **)(int, int, int))(*(_DWORD *)a3 + 0x7C))(a3, a2, a18);
  v18 = *(_DWORD **)(a2 + 0x34);
  if ( v18 == a1 )
  {
    v19 = (_DWORD *)FormHeapAlloc(8u);
    if ( v19 == a1 )
    {
      *(_DWORD *)(a2 + 0x34) = 0;
    }
    else
    {
      *v19 = a3;
      v19[1] = a1;
      *(_DWORD *)(a2 + 0x34) = v19;
    }
  }
  else
  {
    if ( (_DWORD *)*v18 != a1 )
    {
      v20 = (_DWORD *)FormHeapAlloc(8u);
      if ( v20 == a1 )
      {
        v20 = 0;
      }
      else
      {
        *v20 = *v18;
        v20[1] = a1;
      }
      v20[1] = v18[1];
      v18[1] = v20;
    }
    *v18 = a3;
  }
  v22 = a9 + 1;
  if ( v22 < BYTE2(a8) )
    return ActiveEffect_Base_LoadEffect_::LoopBody(
             a1,
             a2,
             a4,
             a5,
             a6,
             a7,
             a8,
             v22,
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
    return ActiveEffect_Base_LoadEffect_::LoadUnk14_(a4, a5, a6, a7, a8, v22);
}
