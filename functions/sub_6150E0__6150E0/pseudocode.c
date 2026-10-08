double __userpurge sub_6150E0@<st0>(_DWORD *this@<ecx>, double result@<st0>, char a3)
{
  Actor *CurrentTarget; // eax
  _DWORD *v6; // eax
  int *v7; // ecx
  void (__thiscall *v8)(BaseFormComponent *); // ebp
  int v9; // edi
  int v10; // eax
  bool v11; // zf
  int v12; // [esp+8h] [ebp-4h]
  int v13; // [esp+10h] [ebp+4h]
  float v14; // [esp+10h] [ebp+4h]
  float v15; // [esp+10h] [ebp+4h]

  if ( a3 /*0x61511e*/
    || CombatController_GetCurrentTarget((int)this)
    && (CurrentTarget = (Actor *)CombatController_GetCurrentTarget((int)this), Actor_IsSwimming(CurrentTarget))
    && !Actor_IsSwimming((Actor *)*(this + 0xF))
    && !Actor_CanFightInWater((void *)*(this + 0xF))
    || !*((_BYTE *)this + 0x174) )
  {
    v6 = (_DWORD *)*(this + 0x10); /*0x61512e*/
    if ( v6 ) /*0x615133*/
    {
      v12 = *v6; /*0x615139*/
      if ( *v6 ) /*0x615139*/
      {
        if ( v6[1] ) /*0x61513f*/
        {
          v13 = *(_DWORD *)(*v6 + 4); /*0x61514a*/
          if ( !CombatController_CanReachCurrentTarget((int)this) ) /*0x61514e*/
          {
            v14 = (double)v13 * unk_B37218; /*0x615162*/
            sub_484370(v14); /*0x61516d*/
            v13 = Double_To_SInt32(result); /*0x61517a*/
          }
          if ( !*((_BYTE *)this + 0x158) ) /*0x61517e*/
          {
            v15 = (double)v13 * unk_B37220; /*0x615192*/
            sub_484370(v15); /*0x61519d*/
            v13 = Double_To_SInt32(result); /*0x6151aa*/
          }
          v7 = *(int **)(*(this + 0x10) + 4); /*0x6151b1*/
          v8 = 0; /*0x6151b5*/
          v9 = v13; /*0x6151ba*/
          if ( v7 ) /*0x6151be*/
          {
            do /*0x6151e3*/
            {
              v10 = *v7; /*0x6151c1*/
              v11 = *v7 == 0; /*0x6151c3*/
              v7 = (int *)v7[1]; /*0x6151c5*/
              if ( !v11 ) /*0x6151c8*/
              {
                if ( *(_DWORD *)v10 ) /*0x6151ca*/
                {
                  if ( *(_DWORD *)(v10 + 4) >= v9 && v10 != v12 ) /*0x6151db*/
                  {
                    v9 = *(_DWORD *)(v10 + 4); /*0x6151dd*/
                    v8 = *(void (__thiscall **)(BaseFormComponent *))v10; /*0x6151df*/
                  }
                }
              }
            }
            while ( v7 ); /*0x6151e3*/
            if ( v8 ) /*0x6151e8*/
            {
              *(_DWORD *)(v12 + 4) = v13; /*0x615202*/
              sub_6243D0((Actor *)this, result, v8, (void (__thiscall *)(BaseFormComponent *))(v9 + 0xA)); /*0x615205*/
            }
          }
        }
      }
    }
  }
  return result; /*0x615129*/
}
