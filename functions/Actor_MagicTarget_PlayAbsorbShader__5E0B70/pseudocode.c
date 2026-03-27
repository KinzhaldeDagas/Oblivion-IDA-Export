void __thiscall Actor_MagicTarget_PlayAbsorbShader(char *this, int a2, int a3)
{
  int AbsorbShader; // edi
  float *v5; // eax
  volatile LONG *v6; // esi

  AbsorbShader = Magic_GetAbsorbShader();
  v5 = (float *)FormHeapAlloc(0x4Cu);
  if ( v5 )
    v6 = (volatile LONG *)MagicShaderHitEffect_constr_args2(v5, (int)(this + 0xFFFFFF98), AbsorbShader, 0.0);
  else
    v6 = 0;
  if ( (*(unsigned __int8 (__thiscall **)(volatile LONG *))(*v6 + 0x68))(v6) )
    sub_678D30((int *)&ActorProcessManager_ptr, v6);
  else
    (**(void (__thiscall ***)(volatile LONG *, int))v6)(v6, 1);
}
