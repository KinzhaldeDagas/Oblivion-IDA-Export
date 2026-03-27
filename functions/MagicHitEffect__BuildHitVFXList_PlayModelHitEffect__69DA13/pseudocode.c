int __cdecl MagicHitEffect__BuildHitVFXList_::PlayModelHitEffect(
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        float *a8)
{
  float *v8; // edi
  float *v9; // esi
  TESObjectREFR *v10; // eax
  float *v11; // esi
  float **v12; // eax

  v8 = a8;
  if ( ((_DWORD)a8[5] & 4) == 0 && !byte_B333B8 )
  {
    v9 = (float *)FormHeapAlloc(0x38u);
    a8 = v9;
    if ( v9 )
    {
      v10 = (TESObjectREFR *)(*(int (__thiscall **)(_DWORD))(**((_DWORD **)v8 + 8) + 4))(*((_DWORD *)v8 + 8));
      v11 = MagicModelHitEffect_constr_args(v9, v10, (int)v8);
    }
    else
    {
      v11 = 0;
    }
    a6 = 0xFFFFFFFF;
    if ( !(*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)v11 + 0x68))(v11) )
    {
      (**(void (__thiscall ***)(float *, int))v11)(v11, 1);
      return MagicHitEffect__BuildHitVFXList_::PlayShaderHitEffect(a1, a2, a3, a4, a5, 0xFFFFFFFF, a7, a8);
    }
    sub_678D30((int *)&ActorProcessManager_ptr, (volatile LONG *)v11);
    v12 = (float **)FormHeapAlloc(8u);
    if ( v12 )
    {
      *v12 = v11;
      v12[1] = 0;
    }
  }
  return MagicHitEffect__BuildHitVFXList_::PlayShaderHitEffect(a1, a2, a3, a4, a5, a6, a7, a8);
}
