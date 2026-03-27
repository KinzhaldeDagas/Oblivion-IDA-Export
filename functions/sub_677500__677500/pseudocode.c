void __userpurge sub_677500(float *this@<ecx>, double a2@<st1>, float a3)
{
  float *v5; // esi
  double v6; // st5
  unsigned int v7; // ebx
  Actor *i; // ebp
  int vtbl; // esi
  int v10; // edi
  int v11; // eax
  BSSimpleList_VoidPtr *v12; // eax
  char v13; // al
  double v14; // st5
  unsigned int v15; // edi
  unsigned int v16; // ecx
  unsigned int v17; // ebp
  _DWORD *v18; // esi
  double v19; // st5
  int v20; // ebp
  int *v21; // edi
  int v22; // esi
  float v24; // [esp+4h] [ebp-Ch]
  _DWORD v25[2]; // [esp+8h] [ebp-8h] BYREF
  float v26; // [esp+14h] [ebp+4h]
  unsigned int v27; // [esp+14h] [ebp+4h]
  float v28; // [esp+14h] [ebp+4h]

  v5 = this;
  v26 = *(this + 0x2B) - a3;
  v6 = v26;
  *(this + 0x2B) = v26;
  if ( v26 <= 0.0 )
  {
    v7 = 0;
    v27 = 0;
    v25[0] = 0;
    v25[1] = 0;
    for ( i = sub_7616D0((ActorList *)(this + 0x1A)); i; v5 = this )
    {
      if ( !*(_DWORD *)&i->members.super.super.super.type && !i->vtbl )
        break;
      vtbl = (int)i->vtbl;
      if ( i->vtbl )
      {
        if ( (*(unsigned __int8 (__thiscall **)(ActorVtbl *))(*(_DWORD *)vtbl + 0x190))(i->vtbl) )
        {
          ++v7;
          if ( Concurrency::details::SchedulerBase::GetAnonymousScheduleGroup((Concurrency::details::SchedulerBase *)vtbl) == (struct Concurrency::details::ScheduleGroupBase *)2 )
          {
            v10 = *(_DWORD *)(vtbl + 0x58);
            if ( v10 )
            {
              if ( !(*(int (__thiscall **)(_DWORD))(*(_DWORD *)v10 + 8))(*(_DWORD *)(vtbl + 0x58))
                && !(*(int (__thiscall **)(int))(*(_DWORD *)v10 + 0x47C))(v10)
                && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)vtbl + 0x78))(vtbl)
                && !sub_4D9040((TESObjectREFR *)vtbl)
                && !TESObjectREFR_IsDead((TESObjectREFR *)vtbl, 0) )
              {
                (*(void (__thiscall **)(int))(*(_DWORD *)v10 + 0x360))(v10);
                if ( v6 < *(float *)&SrcStr )
                {
                  sub_4D79A0((_BYTE *)vtbl);
                  if ( !v11 || (sub_4D79A0((_BYTE *)vtbl), BSSimpleList_IsEmpty(v12)) )
                  {
                    ++v27;
                    BSSimpleList_PushBack(v25, vtbl);
                  }
                }
              }
            }
          }
        }
      }
      i = *(Actor **)&i->members.super.super.super.type;
    }
    v13 = byte_B333B8;
    if ( v7 >= 0x19 )
    {
      if ( v13 )
      {
        v14 = flt_B37D58;
        goto LABEL_22;
      }
    }
    else
    {
      v13 = 0;
    }
    v14 = flt_B37D40;
LABEL_22:
    v24 = v14;
    v5[0x2B] = v24;
    if ( v13 )
    {
      v15 = dword_B37D60;
      v16 = dword_B37D68;
    }
    else
    {
      v15 = dword_B37D48;
      v16 = dword_B37D50;
    }
    v17 = v27;
    if ( v27 >= v15 && v7 >= v16 )
    {
      if ( v13 )
      {
        v18 = v25;
        do
        {
          if ( !v18[1] && !*v18 )
            break;
          if ( v17 < v15 )
            break;
          if ( *v18 )
          {
            a2 = sub_6331C0(*(_DWORD *)(*v18 + 0x58), a2, (Actor *)*v18);
            --v17;
          }
          v18 = (_DWORD *)v18[1];
        }
        while ( v18 );
      }
      else
      {
        v19 = flt_A32048;
        v20 = 0;
        v28 = flt_A32048;
        v21 = v25;
        do
        {
          if ( !v21[1] && !*v21 )
            break;
          v22 = *v21;
          if ( *v21 )
          {
            if ( !v20
              || ((*(void (__thiscall **)(_DWORD))(**(_DWORD **)(v22 + 0x58) + 0x360))(*(_DWORD *)(v22 + 0x58)),
                  v28 > v19) )
            {
              v20 = v22;
              (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(v22 + 0x58) + 0x360))(*(_DWORD *)(v22 + 0x58));
              v28 = v19;
            }
          }
          v21 = (int *)v21[1];
        }
        while ( v21 );
        if ( v20 )
          sub_6331C0(*(_DWORD *)(v20 + 0x58), a2, (Actor *)v20);
      }
    }
    BSSimpleList_Clear(v25);
  }
}
