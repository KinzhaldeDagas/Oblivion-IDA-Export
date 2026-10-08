void __thiscall sub_650BA0(_DWORD *this, TESObjectREFR *arg0)
{
  int v3; // eax
  char *v4; // esi
  _DWORD *v6; // ebp
  int *v7; // eax
  int v8; // eax
  float *v9; // eax
  int *v10; // esi
  int *v11; // eax
  float a5; // [esp+8h] [ebp-28h]
  int a2[3]; // [esp+24h] [ebp-Ch] BYREF
  TESChildCELL *DwordAtOffset40; // [esp+34h] [ebp+4h]

  v3 = *(this + 2); /*0x650ba7*/
  v4 = *(char **)(v3 + 0x24); /*0x650baa*/
  if ( v4 ) /*0x650baf*/
  {
    if ( sub_569740(*(char **)(v3 + 0x24)) ) /*0x650bb7*/
    {
      if ( sub_569A10(v4) ) /*0x650bd2*/
      {
        v6 = this + 0x13; /*0x650be9*/
        if ( *(this + 0x14) ) /*0x650bdf*/
          goto LABEL_19; /*0x650bdf*/
        if ( !*v6 ) /*0x650bf2*/
        {
          DwordAtOffset40 = (TESChildCELL *)Shared_GetDwordAtOffset40(arg0); /*0x650c05*/
          v7 = (int *)arg0->vtbl->GetPos(arg0); /*0x650c11*/
          a2[0] = *v7; /*0x650c15*/
          a2[1] = v7[1]; /*0x650c1c*/
          a2[2] = v7[2]; /*0x650c25*/
          v8 = sub_569740(v4); /*0x650c29*/
          if ( v8 == 4 ) /*0x650c31*/
          {
            *(this + 0x1A) = sub_569820(v4); /*0x650c3a*/
            *(this + 0x1B) = 0; /*0x650c3d*/
          }
          else if ( v8 == 5 ) /*0x650c49*/
          {
            *(this + 0x1A) = 0; /*0x650c4d*/
            *(this + 0x1B) = sub_569830(v4); /*0x650c59*/
          }
          a5 = flt_B36778[0x5C]; /*0x650c73*/
          v9 = arg0->vtbl->GetPos(arg0); /*0x650c76*/
          sub_446B90( /*0x650c93*/
            (TESObjectCELL *)DwordAtOffset40,
            (float *)a2,
            flt_B36778[0x5C],
            v9,
            a5,
            (unsigned __int8 (__cdecl *)(TESObjectREFR *, int))sub_646A80,
            (int)arg0);
          v10 = this + 0x17; /*0x650c9a*/
          *(this + 0x1B) = 0; /*0x650c9f*/
          *(this + 0x1A) = 0; /*0x650ca2*/
          if ( this != (_DWORD *)0xFFFFFFA4 ) /*0x650ca5*/
          {
            while ( *v10 ) /*0x650cab*/
            {
              BSSimpleList_PushFront(this + 0x13, *v10); /*0x650cb0*/
              v11 = (int *)*(this + 0x18); /*0x650cb5*/
              if ( v11 ) /*0x650cba*/
              {
                *(this + 0x18) = v11[1]; /*0x650cbf*/
                *v10 = *v11; /*0x650cc5*/
                FormHeapFree((unsigned int)v11); /*0x650cc7*/
              }
              else
              {
                *v10 = 0; /*0x650cd1*/
              }
            }
          }
          BSSimpleList_Clear(this + 0x17); /*0x650cdb*/
        }
        if ( *(this + 0x14) || *v6 ) /*0x650ce6*/
        {
LABEL_19:
          *(this + 0xC) = *v6; /*0x650cf1*/
          BSSimpleList_PopHeadWithoutPayloadFree(this + 0x13); /*0x650cf4*/
        }
        else
        {
          (*(void (__thiscall **)(_DWORD *, TESObjectREFR *, int))(*this + 0x188))(this, arg0, 1); /*0x650d10*/
        }
      }
    }
    else
    {
      *(this + 0xC) = sub_5697E0(v4); /*0x650bc7*/
    }
  }
}
