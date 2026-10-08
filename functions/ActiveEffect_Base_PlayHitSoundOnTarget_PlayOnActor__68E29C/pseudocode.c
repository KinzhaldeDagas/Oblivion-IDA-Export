// positive sp value has been detected, the output may be wrong!
void __usercall ActiveEffect_Base_PlayHitSoundOnTarget_::PlayOnActor(
        _DWORD *a1@<eax>,
        char a2@<bl>,
        void *a3@<ebp>,
        int a4@<esi>)
{
  _DWORD *v4; // eax
  unsigned int v5; // ebp
  int *v6; // ecx
  unsigned int v7; // edi
  int v8; // edi
  int *sound; // ecx
  int *v10; // esi
  float *v11; // eax
  char v12; // [esp+0h] [ebp-10h]

  if ( !a1 ) /*0x68e29f*/
  {
    v8 = (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a4 + 0x20) + 4))(*(_DWORD *)(a4 + 0x20)); /*0x68e306*/
    if ( v8 ) /*0x68e30a*/
    {
      sound = (int *)MEMORY[0xB33398]->sound; /*0x68e316*/
      if ( sound ) /*0x68e31b*/
      {
        v10 = OSGLobals_PlaySound(sound, a3, 0x102, 0); /*0x68e32a*/
        if ( v10 ) /*0x68e32e*/
        {
          v11 = (float *)(*(int (__thiscall **)(int))(*(_DWORD *)v8 + 0x174))(v8); /*0x68e33a*/
          sub_6B7360(v10, *v11, v11[1], v11[2]); /*0x68e36c*/
          sub_6B7190(v10, v12); /*0x68e378*/
          return; /*0x68e384*/
        }
      }
    }
    goto LABEL_14; /*0x68e32e*/
  }
  v4 = (_DWORD *)sub_65AC50(a1, (int)a3, v12, 0x102, 0); /*0x68e2b0*/
  v5 = (unsigned int)v4; /*0x68e2b5*/
  if ( !v4 ) /*0x68e2b9*/
  {
LABEL_14:
    ActiveEffect_Base_PlayHitSoundOnTarget_::Done(); /*0x68e393*/
    return; /*0x68e393*/
  }
  if ( !a2 ) /*0x68e2c1*/
  {
    sub_6B73E0(v4); /*0x68e387*/
    FormHeapFree(v5); /*0x68e38d*/
    goto LABEL_14; /*0x68e38d*/
  }
  v6 = *(int **)(a4 + 0x2C); /*0x68e2c7*/
  if ( v6 ) /*0x68e2cc*/
  {
    sub_6B7240(v6); /*0x68e2ce*/
    v7 = *(_DWORD *)(a4 + 0x2C); /*0x68e2d3*/
    if ( v7 ) /*0x68e2d8*/
    {
      sub_6B73E0(*(_DWORD **)(a4 + 0x2C)); /*0x68e2dc*/
      FormHeapFree(v7); /*0x68e2e2*/
    }
    *(_DWORD *)(a4 + 0x2C) = 0; /*0x68e2ea*/
  }
  *(_DWORD *)(a4 + 0x2C) = v5; /*0x68e2f3*/
}
