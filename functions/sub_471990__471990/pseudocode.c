// Remove all power-attack animation groups (0x16-0x1A) across movement 0-3 and weapon 0-5 from ActorAnimData before rebuilding the dynamic power-attack list.
int __thiscall ActorAnimData_RemovePowerAttackGroups(void *this)
{
  unsigned __int16 v2; // ax
  _DWORD *v3; // esi
  int v4; // ebp
  int **v5; // edi
  int *v6; // edi
  int v7; // esi
  int v8; // eax
  int v9; // eax
  int v10; // eax
  void (__thiscall ***v11)(_DWORD, int); // esi
  int result; // eax
  int k; // [esp+28h] [ebp-10h]
  int j; // [esp+2Ch] [ebp-Ch]
  int i; // [esp+30h] [ebp-8h]
  int v16; // [esp+34h] [ebp-4h] BYREF

  for ( i = 0; i < 4; ++i ) /*0x471999*/
  {
    for ( j = 0; j < 6; ++j ) /*0x4719b0*/
    {
      for ( k = 0x16; k <= 0x1A; ++k ) /*0x4719c0*/
      {
        v2 = AnimKey_Make(i, j, k); /*0x4719df*/
        v3 = *((_DWORD **)this + 0x27); /*0x4719e4*/
        v4 = v2; /*0x4719ea*/
        v5 = *(int ***)(v3[2] + 4 * (*(int (__thiscall **)(_DWORD *, _DWORD))(*v3 + 4))(v3, v2)); /*0x4719fd*/
        if ( v5 ) /*0x471a02*/
        {
          while ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, int, _DWORD))(*v3 + 8))( /*0x471a21*/
                     v3,
                     v4,
                     *((unsigned __int16 *)v5 + 2)) )
          {
            v5 = (int **)*v5; /*0x471a23*/
            if ( !v5 ) /*0x471a27*/
              goto LABEL_24; /*0x471a27*/
          }
          v6 = v5[2]; /*0x471a2e*/
          v7 = (*(int (__thiscall **)(int *, unsigned int))(*v6 + 0x10))(v6, 0xFFFFFFFF); /*0x471a3c*/
          if ( *((_DWORD *)this + 0x2B) == v7 ) /*0x471a44*/
          {
            if ( *((_DWORD *)this + 0x26) ) /*0x471a46*/
            {
              v8 = *((_DWORD *)this + 0x2B); /*0x471a4f*/
              if ( v8 ) /*0x471a57*/
              {
                if ( *(_DWORD *)(v8 + 0x44) ) /*0x471a59*/
                {
                  v9 = *(_DWORD *)(v8 + 0x58); /*0x471a5f*/
                  if ( v9 ) /*0x471a64*/
                    NiControllerSequence_Deactivate(v9, 0.0, 0); /*0x471a70*/
                  if ( *(_DWORD *)(*((_DWORD *)this + 0x2B) + 0x44) == 5 ) /*0x471a7f*/
                    NiControllerManager_DeactivateTransitionSources(*((_DWORD **)this + 0x26), 0.0); /*0x471a8d*/
                  NiControllerSequence_Deactivate(*((_DWORD *)this + 0x2B), 0.0, 0); /*0x471aa0*/
                }
              }
            }
            *((_DWORD *)this + 0x2B) = 0; /*0x471aaa*/
            *((_WORD *)this + 0x21) = 0xFF; /*0x471ab4*/
            *((_WORD *)this + 0x3B) = 0xFF; /*0x471ab8*/
            *((_DWORD *)this + 0x15) = 0xFFFFFFFF; /*0x471abc*/
          }
          v10 = ModelLoader_FindKFModelBySequence(MEMORY[0xB33A1C], v7); /*0x471aca*/
          if ( v10 ) /*0x471ad1*/
            InterlockedDecrement((volatile LONG *)(v10 + 0xC)); /*0x471ad7*/
          ActorAnimData_RemoveAnimMapEntry(*((_DWORD **)this + 0x27), v4); /*0x471ae4*/
          KeyframeManager_RemoveSequence(*((unsigned __int16 **)this + 0x26), &v16, v7); /*0x471af5*/
          if ( v16 ) /*0x471b00*/
          {
            v11 = (void (__thiscall ***)(_DWORD, int))v16; /*0x471b02*/
            if ( !InterlockedDecrement((volatile LONG *)(v16 + 4)) ) /*0x471b08*/
              (**v11)(v11, 1); /*0x471b1e*/
          }
          (*(void (__thiscall **)(int *, _DWORD))(*v6 + 4))(v6, 0); /*0x471b29*/
          (*(void (__thiscall **)(int *, int))*v6)(v6, 1); /*0x471b33*/
        }
LABEL_24:
        ; /*0x471b35*/
      }
    }
    result = i + 1; /*0x471b61*/
  }
  return result; /*0x471b71*/
}
