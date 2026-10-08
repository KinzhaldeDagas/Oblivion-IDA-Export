double __thiscall sub_677500(float *this, float a2)
{
  float *v2; // esi
  double result; // st7
  unsigned int v4; // ebx
  Actor *i; // ebp
  Actor *vtbl; // esi
  LowProcess *process; // edi
  int v8; // eax
  BSSimpleList_VoidPtr *v9; // eax
  char v10; // al
  double v11; // st7
  const char *value; // edi
  const char *v13; // ecx
  unsigned int v14; // ebp
  _DWORD *v15; // esi
  int v16; // ebp
  int *v17; // edi
  int v18; // esi
  float v20; // [esp+4h] [ebp-Ch]
  _DWORD v21[2]; // [esp+8h] [ebp-8h] BYREF
  float v22; // [esp+14h] [ebp+4h]
  unsigned int v23; // [esp+14h] [ebp+4h]
  float v24; // [esp+14h] [ebp+4h]

  v2 = this; /*0x677504*/
  v22 = *(this + 0x2B) - a2; /*0x677514*/
  result = v22; /*0x677518*/
  *(this + 0x2B) = v22; /*0x67751c*/
  if ( v22 <= 0.0 ) /*0x67752b*/
  {
    v4 = 0; /*0x677533*/
    v23 = 0; /*0x677539*/
    v21[0] = 0; /*0x677541*/
    v21[1] = 0; /*0x677545*/
    for ( i = ActorList_ReturnHead((ActorList *)(this + 0x1A)); i; v2 = this ) /*0x677552*/
    {
      if ( !*(_DWORD *)&i->members.super.super.super.type && !i->vtbl ) /*0x67755e*/
        break; /*0x677562*/
      vtbl = (Actor *)i->vtbl; /*0x677568*/
      if ( i->vtbl ) /*0x677568*/
      {
        if ( vtbl->vtbl->super.super.IsActor((TESObjectREFR *)i->vtbl) ) /*0x67757d*/
        {
          ++v4; /*0x677589*/
          if ( Actor::GetDeadState(vtbl) == 2 ) /*0x677594*/
          {
            process = vtbl->members.super.process; /*0x67759a*/
            if ( process ) /*0x67759f*/
            {
              if ( !process->GetProcessLevel(vtbl->members.super.process) /*0x6775fe*/
                && !((int (__thiscall *)(LowProcess *))process->Unk_11E)(process)
                && !((unsigned __int8 (__thiscall *)(Actor *))vtbl->vtbl->super.super.super.Unk_1E)(vtbl)
                && !sub_4D9040((TESObjectREFR *)vtbl)
                && !TESObjectREFR_IsDead((TESObjectREFR *)vtbl, 0)
                && ((double (__thiscall *)(LowProcess *))process->GetUnk22C)(process) < *(float *)&SrcStr )
              {
                sub_4D79A0(vtbl); /*0x677602*/
                if ( !v8 || (sub_4D79A0(vtbl), BSSimpleList_IsEmpty(v9)) ) /*0x677614*/
                {
                  ++v23; /*0x67761d*/
                  BSSimpleList_PushBack(v21, (int)vtbl); /*0x677627*/
                }
              }
            }
          }
        }
      }
      i = *(Actor **)&i->members.super.super.super.type; /*0x67762c*/
    }
    v10 = unk_B333B8; /*0x67763e*/
    if ( v4 >= 0x19 ) /*0x677643*/
    {
      if ( v10 ) /*0x67766f*/
      {
        v11 = unk_B37D58; /*0x677671*/
        goto LABEL_22; /*0x677677*/
      }
    }
    else
    {
      v10 = 0; /*0x677645*/
    }
    v11 = unk_B37D40; /*0x677647*/
LABEL_22:
    v20 = v11; /*0x67764d*/
    result = v20; /*0x677653*/
    v2[0x2B] = v20; /*0x677657*/
    if ( v10 ) /*0x67765d*/
    {
      value = stru_B37D60.value; /*0x67765f*/
      v13 = stru_B37D68.value; /*0x677665*/
    }
    else
    {
      value = stru_B37D48.value; /*0x677679*/
      v13 = stru_B37D50.value; /*0x67767f*/
    }
    v14 = v23; /*0x677685*/
    if ( v23 >= (unsigned int)value && v4 >= (unsigned int)v13 ) /*0x677693*/
    {
      if ( v10 ) /*0x67769b*/
      {
        v15 = v21; /*0x67769d*/
        do /*0x6776cf*/
        {
          if ( !v15[1] && !*v15 ) /*0x6776a7*/
            break; /*0x6776aa*/
          if ( v14 < (unsigned int)value ) /*0x6776b2*/
            break; /*0x6776b2*/
          if ( *v15 ) /*0x6776b8*/
          {
            sub_6331C0(*(_DWORD *)(*v15 + 0x58), (Actor *)*v15); /*0x6776c2*/
            --v14; /*0x6776c7*/
          }
          v15 = (_DWORD *)v15[1]; /*0x6776ca*/
        }
        while ( v15 ); /*0x6776cf*/
      }
      else
      {
        result = flt_A32048; /*0x6776e4*/
        v16 = 0; /*0x6776ea*/
        v24 = flt_A32048; /*0x6776ec*/
        v17 = v21; /*0x6776f0*/
        do /*0x67773b*/
        {
          if ( !v17[1] && !*v17 ) /*0x6776fa*/
            break; /*0x6776fd*/
          v18 = *v17; /*0x6776ff*/
          if ( *v17 ) /*0x6776ff*/
          {
            if ( !v16 /*0x677721*/
              || (result = ((double (__thiscall *)(_DWORD))*(_DWORD *)(**(_DWORD **)(v18 + 0x58) + 0x360))(*(_DWORD *)(v18 + 0x58)),
                  v24 > result) )
            {
              v16 = v18; /*0x67772e*/
              result = ((double (__thiscall *)(_DWORD))*(_DWORD *)(**(_DWORD **)(v18 + 0x58) + 0x360))(*(_DWORD *)(v18 + 0x58)); /*0x677730*/
              v24 = result; /*0x677732*/
            }
          }
          v17 = (int *)v17[1]; /*0x677736*/
        }
        while ( v17 ); /*0x67773b*/
        if ( v16 ) /*0x67773f*/
          sub_6331C0(*(_DWORD *)(v16 + 0x58), (Actor *)v16); /*0x677745*/
      }
    }
    BSSimpleList_Clear(v21); /*0x67774e*/
  }
  return result; /*0x6776dd*/
}
