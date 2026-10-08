void __thiscall sub_649190(_DWORD *this, TESObjectREFR *arg0)
{
  int v3; // eax
  char *v4; // esi
  int *v6; // eax
  int v7; // eax
  float *SafeFloatPointer; // esi
  float *v9; // ebp
  float *v10; // eax
  int *v11; // esi
  int *v12; // eax
  float a5; // [esp+8h] [ebp-28h]
  int a2[3]; // [esp+24h] [ebp-Ch] BYREF
  TESChildCELL *DwordAtOffset40; // [esp+34h] [ebp+4h]

  v3 = *(this + 2); /*0x649197*/
  if ( v3 ) /*0x64919e*/
  {
    v4 = *(char **)(v3 + 0x24); /*0x6491a5*/
    if ( v4 ) /*0x6491aa*/
    {
      if ( sub_569740(*(char **)(v3 + 0x24)) ) /*0x6491b2*/
      {
        if ( sub_569A10(v4) ) /*0x6491ce*/
        {
          if ( (*(_DWORD *)(*(this + 2) + 0x1C) & 4) != 0 ) /*0x6491e7*/
          {
            if ( BSSimpleList_IsEmpty((BSSimpleList_VoidPtr *)(this + 0x13)) ) /*0x6491f1*/
            {
              DwordAtOffset40 = (TESChildCELL *)Shared_GetDwordAtOffset40(arg0); /*0x64920b*/
              v6 = (int *)arg0->vtbl->GetPos(arg0); /*0x649217*/
              a2[0] = *v6; /*0x64921b*/
              a2[1] = v6[1]; /*0x649222*/
              a2[2] = v6[2]; /*0x64922b*/
              v7 = sub_569740(v4); /*0x64922f*/
              if ( v7 == 4 ) /*0x649237*/
              {
                *(this + 0x1A) = sub_569820(v4); /*0x649240*/
                *(this + 0x1B) = 0; /*0x649243*/
              }
              else if ( v7 == 5 ) /*0x64924b*/
              {
                *(this + 0x1A) = 0; /*0x64924f*/
                *(this + 0x1B) = sub_569830(v4); /*0x649257*/
              }
              SafeFloatPointer = GameSetting_GetSafeFloatPointer(&flt_B36778[0x5C]); /*0x649269*/
              v9 = GameSetting_GetSafeFloatPointer(&flt_B36778[0x5C]); /*0x64927b*/
              a5 = *SafeFloatPointer; /*0x64927d*/
              v10 = arg0->vtbl->GetPos(arg0); /*0x649288*/
              sub_446B90( /*0x6492a2*/
                (TESObjectCELL *)DwordAtOffset40,
                (float *)a2,
                *v9,
                v10,
                a5,
                (unsigned __int8 (__cdecl *)(TESObjectREFR *, int))sub_646A80,
                (int)arg0);
              v11 = this + 0x17; /*0x6492a9*/
              *(this + 0x1B) = 0; /*0x6492ae*/
              *(this + 0x1A) = 0; /*0x6492b1*/
              if ( this != (_DWORD *)0xFFFFFFA4 ) /*0x6492b4*/
              {
                while ( *v11 ) /*0x6492ba*/
                {
                  BSSimpleList_PushFront(this + 0x13, *v11); /*0x6492c0*/
                  v12 = (int *)*(this + 0x18); /*0x6492c5*/
                  if ( v12 ) /*0x6492ca*/
                  {
                    *(this + 0x18) = v12[1]; /*0x6492cf*/
                    *v11 = *v12; /*0x6492d5*/
                    FormHeapFree((unsigned int)v12); /*0x6492d7*/
                  }
                  else
                  {
                    *v11 = 0; /*0x6492e1*/
                  }
                }
              }
            }
            if ( BSSimpleList_IsEmpty((BSSimpleList_VoidPtr *)(this + 0x13)) ) /*0x6492ea*/
            {
              (*(void (__thiscall **)(_DWORD *, TESObjectREFR *, int))(*this + 0x188))(this, arg0, 1); /*0x649316*/
            }
            else
            {
              *(this + 0xC) = *(this + 0x13); /*0x6492f7*/
              BSSimpleList_PopHeadWithoutPayloadFree(this + 0x13); /*0x6492fa*/
            }
          }
          else
          {
            (*(void (__thiscall **)(_DWORD *, TESObjectREFR *, int))(*this + 0x188))(this, arg0, 1); /*0x649333*/
          }
        }
      }
      else
      {
        *(this + 0xC) = sub_5697E0(v4); /*0x6491c3*/
      }
    }
  }
}
