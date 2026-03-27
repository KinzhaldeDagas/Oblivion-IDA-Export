void __thiscall sub_649190(_DWORD *this, TESObjectREFR *arg0)
{
  int v3; // eax
  char *v4; // esi
  int *v6; // eax
  int v7; // eax
  int *SafeFloatPointer; // esi
  int *v9; // ebp
  float *v10; // eax
  int *v11; // esi
  int *v12; // eax
  float a5; // [esp+8h] [ebp-28h]
  int a2[3]; // [esp+24h] [ebp-Ch] BYREF
  TESObjectCELL *ParentCell; // [esp+34h] [ebp+4h]

  v3 = *(this + 2);
  if ( v3 )
  {
    v4 = *(char **)(v3 + 0x24);
    if ( v4 )
    {
      if ( sub_569740(*(char **)(v3 + 0x24)) )
      {
        if ( sub_569A10(v4) )
        {
          if ( (*(_DWORD *)(*(this + 2) + 0x1C) & 4) != 0 )
          {
            if ( BSSimpleList_IsEmpty((BSSimpleList_VoidPtr *)(this + 0x13)) )
            {
              ParentCell = TESObjectREFR_GetParentCell(arg0);
              v6 = (int *)arg0->vtbl->GetPos(arg0);
              a2[0] = *v6;
              a2[1] = v6[1];
              a2[2] = v6[2];
              v7 = sub_569740(v4);
              if ( v7 == 4 )
              {
                *(this + 0x1A) = sub_569820(v4);
                *(this + 0x1B) = 0;
              }
              else if ( v7 == 5 )
              {
                *(this + 0x1A) = 0;
                *(this + 0x1B) = sub_569830(v4);
              }
              SafeFloatPointer = GameSetting_GetSafeFloatPointer((int *)&fAIAcquireObjectDistance);
              v9 = GameSetting_GetSafeFloatPointer((int *)&fAIAcquireObjectDistance);
              a5 = *(float *)SafeFloatPointer;
              v10 = arg0->vtbl->GetPos(arg0);
              sub_446B90(
                ParentCell,
                (float *)a2,
                *(float *)v9,
                v10,
                a5,
                (unsigned __int8 (__cdecl *)(TESObjectREFR *, int))sub_646A80,
                (int)arg0);
              v11 = this + 0x17;
              *(this + 0x1B) = 0;
              *(this + 0x1A) = 0;
              if ( this != (_DWORD *)0xFFFFFFA4 )
              {
                while ( *v11 )
                {
                  BSSimpleList_PushFront(this + 0x13, *v11);
                  v12 = (int *)*(this + 0x18);
                  if ( v12 )
                  {
                    *(this + 0x18) = v12[1];
                    *v11 = *v12;
                    FormHeapFree((unsigned int)v12);
                  }
                  else
                  {
                    *v11 = 0;
                  }
                }
              }
            }
            if ( BSSimpleList_IsEmpty((BSSimpleList_VoidPtr *)(this + 0x13)) )
            {
              (*(void (__thiscall **)(_DWORD *, TESObjectREFR *, int))(*this + 0x188))(this, arg0, 1);
            }
            else
            {
              *(this + 0xC) = *(this + 0x13);
              sub_67F100(this + 0x13);
            }
          }
          else
          {
            (*(void (__thiscall **)(_DWORD *, TESObjectREFR *, int))(*this + 0x188))(this, arg0, 1);
          }
        }
      }
      else
      {
        *(this + 0xC) = sub_5697E0(v4);
      }
    }
  }
}
