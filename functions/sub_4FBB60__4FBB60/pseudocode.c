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
  int *v16; // eax
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

  if ( (this->member.flags & 8) == 0 ) /*0x4fbb6e*/
  {
    v3 = 0; /*0x4fbb79*/
    if ( a1 != 0.0 ) /*0x4fbb7d*/
    {
      v4 = (int *)((char *)this + 0x40); /*0x4fbb86*/
      v25 = 0; /*0x4fbb89*/
      a2 = TESForm_GetOverrideFile((TESForm *)LODWORD(a1), 0xFFFFFFFF); /*0x4fbb94*/
      if ( this != (TESForm *)0xFFFFFFC0 ) /*0x4fbb98*/
      {
        do /*0x4fbc6a*/
        {
          if ( !v4[1] && !*v4 ) /*0x4fbba6*/
            break; /*0x4fbba9*/
          v5 = *v4; /*0x4fbbaf*/
          a1 = *(float *)(*v4 + 8); /*0x4fbbb6*/
          if ( a1 == 0.0 ) /*0x4fbbbd*/
          {
            v7 = *(_DWORD *)(v5 + 0xC) == 0; /*0x4fbbe2*/
          }
          else
          {
            TESForm_ResolveFormID((UInt32 *)&a1, a2); /*0x4fbbc9*/
            v6 = TESForm_LookupByFormID(LODWORD(a1)); /*0x4fbbd3*/
            *(_DWORD *)(v5 + 8) = v6; /*0x4fbbdb*/
            v7 = v6 == 0; /*0x4fbbde*/
          }
          if ( v7 ) /*0x4fbbe4*/
          {
            if ( v25 ) /*0x4fbbf5*/
            {
              BSSimpleList_Remove(v25, *v4); /*0x4fbbfc*/
              v4 = (int *)v25[1]; /*0x4fbc01*/
            }
            else
            {
              v8 = (int *)v4[1]; /*0x4fbc06*/
              if ( v8 ) /*0x4fbc0b*/
              {
                v4[1] = v8[1]; /*0x4fbc10*/
                *v4 = *v8; /*0x4fbc16*/
                FormHeapFree((unsigned int)v8); /*0x4fbc18*/
              }
              else
              {
                *v4 = 0; /*0x4fbc22*/
              }
            }
            refID = this->member.refID; /*0x4fbc2f*/
            GetEditorName = this->vtbl->GetEditorName; /*0x4fbc32*/
            if ( a1 == 0.0 ) /*0x4fbc3a*/
            {
              v22 = (int)GetEditorName(this); /*0x4fbc4e*/
              PrintError( /*0x4fbc56*/
                "Referenced object %d on Script (%08X) '%s' is invalid.  Script will not be executed.",
                v3,
                refID,
                v22);
            }
            else
            {
              v21 = (int)GetEditorName(this); /*0x4fbc42*/
              PrintError( /*0x4fbc4a*/
                "Could not find referenced object (%08X) on Script (%08X) '%s'.  Script will not be executed.",
                a1,
                refID,
                v21);
            }
            *((_DWORD *)this + 8) = 0; /*0x4fbc5e*/
          }
          else
          {
            v25 = v4; /*0x4fbbe6*/
            v4 = (int *)v4[1]; /*0x4fbbea*/
          }
          ++v3; /*0x4fbc65*/
        }
        while ( v4 ); /*0x4fbc6a*/
      }
      v11 = *((_DWORD *)this + 7); /*0x4fbc71*/
      if ( v3 != v11 ) /*0x4fbc76*/
      {
        if ( *((_DWORD *)this + 8) ) /*0x4fbc78*/
        {
          v12 = this->member.refID; /*0x4fbc80*/
          v13 = (const char *)((int (__thiscall *)(TESForm *, int, int))this->vtbl->GetEditorName)(this, v11, v3); /*0x4fbc8d*/
          PrintError( /*0x4fbc96*/
            "Referenced object list on Script (%08X) '%s' is corrupt.  Expected %d objects, found %d.",
            v12,
            v13,
            v23,
            v24);
          *((_DWORD *)this + 8) = 0; /*0x4fbc9e*/
        }
      }
      if ( *((_BYTE *)this + 0x28) && flt_B09E28 > 0.0 ) /*0x4fbcc1*/
      {
        v14 = dword_B361CC[0xA]; /*0x4fbcc7*/
        a1 = flt_B09E28; /*0x4fbccd*/
        if ( !v14 ) /*0x4fbcd3*/
        {
          v15 = dbl_A2FAA0; /*0x4fbcd5*/
          v16 = &dword_B361CC[2]; /*0x4fbcdb*/
          v17 = a1; /*0x4fbce0*/
          do /*0x4fbcf9*/
          {
            ++v16; /*0x4fbce6*/
            a1 = v17 * v15; /*0x4fbcee*/
            v17 = a1; /*0x4fbcf2*/
            *((float *)v16 + 0xFFFFFFFF) = a1; /*0x4fbcf6*/
          }
          while ( (int)v16 < (int)&dword_B361CC[0xA] ); /*0x4fbcf9*/
        }
        v18 = (unsigned __int8)v14; /*0x4fbd05*/
        if ( sub_4FAA90((Script *)this, "fQuestDelayTime", (UInt32 *)&a1) ) /*0x4fbd13*/
        {
          ++dword_B361CC[0xA]; /*0x4fbd1e*/
          *((float *)this + 0xE) = 0.0; /*0x4fbd27*/
          TESForm_SetIsLinked(this, 1); /*0x4fbd2c*/
        }
        else if ( v18 ) /*0x4fbd3b*/
        {
          v20 = (float *)&dword_B361CC[2]; /*0x4fbd5e*/
          do /*0x4fbd75*/
          {
            if ( (v18 & 1) != 0 ) /*0x4fbd66*/
              *((float *)this + 0xE) = *v20 + *((float *)this + 0xE); /*0x4fbd6d*/
            ++v20; /*0x4fbd70*/
            v18 >>= 1; /*0x4fbd73*/
          }
          while ( v18 ); /*0x4fbd75*/
          ++dword_B361CC[0xA]; /*0x4fbd77*/
          TESForm_SetIsLinked(this, 1); /*0x4fbd82*/
        }
        else
        {
          v19 = flt_B09E28; /*0x4fbd3d*/
          ++dword_B361CC[0xA]; /*0x4fbd43*/
          *((float *)this + 0xE) = v19; /*0x4fbd4c*/
          TESForm_SetIsLinked(this, 1); /*0x4fbd51*/
        }
      }
      else
      {
        TESForm_SetIsLinked(this, 1); /*0x4fbd95*/
      }
    }
  }
}
