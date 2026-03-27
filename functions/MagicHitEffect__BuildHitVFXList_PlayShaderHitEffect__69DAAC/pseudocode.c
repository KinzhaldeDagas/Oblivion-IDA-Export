// positive sp value has been detected, the output may be wrong!
float **__usercall MagicHitEffect__BuildHitVFXList_::PlayShaderHitEffect@<eax>(_DWORD *a1@<ebp>, int a2@<edi>)
{
  float *v2; // esi
  TESObjectREFR *v3; // eax
  float *v4; // esi
  float **result; // eax

  if ( (*(_DWORD *)(a2 + 0x14) & 2) != 0 )
    return (float **)a1;
  v2 = (float *)FormHeapAlloc(0x4Cu);
  if ( v2 )
  {
    v3 = (TESObjectREFR *)(*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a2 + 0x20) + 4))(*(_DWORD *)(a2 + 0x20));
    v4 = MagicShaderHitEffect_constr_args(v2, v3, a2);
  }
  else
  {
    v4 = 0;
  }
  if ( !(*(unsigned __int8 (__thiscall **)(float *))(*(_DWORD *)v4 + 0x68))(v4) )
  {
    (**(void (__cdecl ***)(int))v4)(1);
    return (float **)a1;
  }
  sub_678D30((int *)&ActorProcessManager_ptr, (volatile LONG *)v4);
  if ( a1 )
  {
    BSSimpleList_PushFront(a1, (int)v4);
    return (float **)a1;
  }
  else
  {
    result = (float **)FormHeapAlloc(8u);
    if ( result )
    {
      *result = v4;
      result[1] = 0;
    }
    else
    {
      return 0;
    }
  }
  return result;
}
