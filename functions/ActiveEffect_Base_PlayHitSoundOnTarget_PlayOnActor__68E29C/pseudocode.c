// positive sp value has been detected, the output may be wrong!
void __usercall ActiveEffect_Base_PlayHitSoundOnTarget_::PlayOnActor(
        _DWORD *a1@<eax>,
        char a2@<bl>,
        int a3@<ebp>,
        int a4@<esi>)
{
  _DWORD *v4; // eax
  unsigned int v5; // ebp
  int *v6; // ecx
  unsigned int v7; // edi
  int v8; // edi
  int *v9; // eax
  int *v10; // esi
  float *v11; // eax
  char v12; // [esp+0h] [ebp-10h]

  if ( !a1 )
  {
    v8 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a4 + 0x20) + 4))(*(_DWORD *)(a4 + 0x20));
    if ( v8 )
    {
      if ( OSGlobals->sound )
      {
        OSGLobals_PlaySound(a3, 0x102, 0);
        v10 = v9;
        if ( v9 )
        {
          v11 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v8 + 0x174))(v8);
          sub_6B7360(v10, *v11, v11[1], v11[2]);
          sub_6B7190(v10, v12);
          return;
        }
      }
    }
    goto LABEL_14;
  }
  v4 = (_DWORD *)sub_65AC50(a1, a3, v12, 0x102, 0);
  v5 = (unsigned int)v4;
  if ( !v4 )
  {
LABEL_14:
    ActiveEffect_Base_PlayHitSoundOnTarget_::Done();
    return;
  }
  if ( a2 )
  {
    v6 = *(int **)(a4 + 0x2C);
    if ( v6 )
    {
      sub_6B7240(v6);
      v7 = *(_DWORD *)(a4 + 0x2C);
      if ( v7 )
      {
        sub_6B73E0(*(_DWORD **)(a4 + 0x2C));
        FormHeapFree(v7);
      }
      *(_DWORD *)(a4 + 0x2C) = 0;
    }
    *(_DWORD *)(a4 + 0x2C) = v5;
  }
  else
  {
    sub_6B73E0(v4);
    FormHeapFree(v5);
    ActiveEffect_Base_PlayHitSoundOnTarget_::Done();
  }
}
