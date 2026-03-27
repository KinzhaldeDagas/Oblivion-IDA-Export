char __thiscall sub_476380(ActorAnimData *this)
{
  _DWORD *v5; // eax
  _DWORD *v6; // eax
  int v7; // edi
  _DWORD *AnimationGroup; // eax
  Ni2DBuffer *v9; // eax
  Ni2DBuffer **v10; // ecx
  int v12; // [esp-8h] [ebp-Ch]

  v5 = (_DWORD *)this->unkC8[2];
  if ( v5 )
  {
    if ( *v5 != 1 )
      return 0;
    sub_475440(this, 0, 0);
  }
  v6 = (_DWORD *)this->unkC8[1];
  if ( !v6 || *v6 != 1 )
    return 0;
  v7 = v6[2];
  if ( !(unsigned __int8)AnimSequenceSingle::AnimSequenceSingle((AnimSequenceSingle *)this, v7, 0) )
  {
    *(_DWORD *)this->unkC8[1] = 3;
    return 0;
  }
  v12 = *(_DWORD *)(this->unkC8[1] + 0xC);
  AnimationGroup = (_DWORD *)TESAnimGroup_GetAnimationGroup(*(TESAnimGroup **)(v7 + 8));
  v9 = (Ni2DBuffer *)sub_476260(this, AnimationGroup, v12);
  v10 = (Ni2DBuffer **)this->unkC8[1];
  if ( v9 )
  {
    sub_472C00(v10, v9);
    return 1;
  }
  else
  {
    *v10 = (Ni2DBuffer *)3;
    return 0;
  }
}
