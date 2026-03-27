void __thiscall sub_4FBB60(TESForm *this, float a1)
{
  int v3; // ebx
  int *v4; // esi
  int v5; // ebp
  TESForm *v6; // eax
  bool v7; // zf
  int *v8; // eax
  UInt32 refID; // ebp
  const char *(__thiscall *GetEditorName)(TESForm *); // eax
  int v11; // eax
  UInt32 v12; // esi
  const char *v13; // eax
  int v14; // ecx
  double v15; // st7
  float *v16; // eax
  double v17; // st6
  int v18; // ebx
  double v19; // st7
  float *v20; // eax
  int v21; // [esp-10h] [ebp-1Ch]
  int v22; // [esp-10h] [ebp-1Ch]
  int v23; // [esp-10h] [ebp-1Ch]
  int v24; // [esp-Ch] [ebp-18h]
  int *v25; // [esp+4h] [ebp-8h]
  Data *a2; // [esp+8h] [ebp-4h]

  if ( (this->member.flags & 8) == 0 )
  {
    v3 = 0;
    if ( a1 != 0.0 )
    {
      v4 = (int *)((char *)this + 0x40);
      v25 = 0;
      a2 = TESForm_GetOverrideFile((TESForm *)LODWORD(a1), 0xFFFFFFFF);
      if ( this != (TESForm *)0xFFFFFFC0 )
      {
        do
        {
          if ( !v4[1] && !*v4 )
            break;
          v5 = *v4;
          a1 = *(float *)(*v4 + 8);
          if ( a1 == 0.0 )
          {
            v7 = *(_DWORD *)(v5 + 0xC) == 0;
          }
          else
          {
            TESForm_ResolveFormID((UInt32 *)&a1, a2);
            v6 = TESForm_LookupByFormID(LODWORD(a1));
            *(_DWORD *)(v5 + 8) = v6;
            v7 = v6 == 0;
          }
          if ( v7 )
          {
            if ( v25 )
            {
              BSSimpleList_Remove(v25, *v4);
              v4 = (int *)v25[1];
            }
            else
            {
              v8 = (int *)v4[1];
              if ( v8 )
              {
                v4[1] = v8[1];
                *v4 = *v8;
                FormHeapFree((unsigned int)v8);
              }
              else
              {
                *v4 = 0;
              }
            }
            refID = this->member.refID;
            GetEditorName = this->vtbl->GetEditorName;
            if ( a1 == 0.0 )
            {
              v22 = (int)GetEditorName(this);
              PrintError(
                "Referenced object %d on Script (%08X) '%s' is invalid.  Script will not be executed.",
                v3,
                refID,
                v22);
            }
            else
            {
              v21 = (int)GetEditorName(this);
              PrintError(
                "Could not find referenced object (%08X) on Script (%08X) '%s'.  Script will not be executed.",
                a1,
                refID,
                v21);
            }
            *((_DWORD *)this + 8) = 0;
          }
          else
          {
            v25 = v4;
            v4 = (int *)v4[1];
          }
          ++v3;
        }
        while ( v4 );
      }
      v11 = *((_DWORD *)this + 7);
      if ( v3 != v11 )
      {
        if ( *((_DWORD *)this + 8) )
        {
          v12 = this->member.refID;
          v13 = (const char *)((int (__thiscall *)(TESForm *, int, int))this->vtbl->GetEditorName)(this, v11, v3);
          PrintError(
            "Referenced object list on Script (%08X) '%s' is corrupt.  Expected %d objects, found %d.",
            v12,
            v13,
            v23,
            v24);
          *((_DWORD *)this + 8) = 0;
        }
      }
      if ( *((_BYTE *)this + 0x28) && flt_B09E28 > 0.0 )
      {
        v14 = dword_B361F4;
        a1 = flt_B09E28;
        if ( !v14 )
        {
          v15 = dbl_A2FAA0;
          v16 = (float *)&unk_B361D4;
          v17 = a1;
          do
          {
            ++v16;
            a1 = v17 * v15;
            v17 = a1;
            v16[0xFFFFFFFF] = a1;
          }
          while ( (int)v16 < (int)&dword_B361F4 );
        }
        v18 = (unsigned __int8)v14;
        if ( sub_4FAA90((Script *)this, "fQuestDelayTime", (UInt32 *)&a1) )
        {
          ++dword_B361F4;
          *((float *)this + 0xE) = 0.0;
          TESForm_SetIsLinked(this, 1);
        }
        else if ( v18 )
        {
          v20 = (float *)&unk_B361D4;
          do
          {
            if ( (v18 & 1) != 0 )
              *((float *)this + 0xE) = *v20 + *((float *)this + 0xE);
            ++v20;
            v18 >>= 1;
          }
          while ( v18 );
          ++dword_B361F4;
          TESForm_SetIsLinked(this, 1);
        }
        else
        {
          v19 = flt_B09E28;
          ++dword_B361F4;
          *((float *)this + 0xE) = v19;
          TESForm_SetIsLinked(this, 1);
        }
      }
      else
      {
        TESForm_SetIsLinked(this, 1);
      }
    }
  }
}
