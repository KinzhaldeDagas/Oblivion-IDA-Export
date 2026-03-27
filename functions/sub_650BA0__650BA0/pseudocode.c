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
  TESObjectCELL *ParentCell; // [esp+34h] [ebp+4h]

  v3 = *(this + 2);
  v4 = *(char **)(v3 + 0x24);
  if ( v4 )
  {
    if ( sub_569740(*(char **)(v3 + 0x24)) )
    {
      if ( sub_569A10(v4) )
      {
        v6 = this + 0x13;
        if ( *(this + 0x14) )
          goto LABEL_19;
        if ( !*v6 )
        {
          ParentCell = TESObjectREFR_GetParentCell(arg0);
          v7 = (int *)arg0->vtbl->GetPos(arg0);
          a2[0] = *v7;
          a2[1] = v7[1];
          a2[2] = v7[2];
          v8 = sub_569740(v4);
          if ( v8 == 4 )
          {
            *(this + 0x1A) = sub_569820(v4);
            *(this + 0x1B) = 0;
          }
          else if ( v8 == 5 )
          {
            *(this + 0x1A) = 0;
            *(this + 0x1B) = sub_569830(v4);
          }
          a5 = fAIAcquireObjectDistance;
          v9 = arg0->vtbl->GetPos(arg0);
          sub_446B90(
            ParentCell,
            (float *)a2,
            fAIAcquireObjectDistance,
            v9,
            a5,
            (unsigned __int8 (__cdecl *)(TESObjectREFR *, int))sub_646A80,
            (int)arg0);
          v10 = this + 0x17;
          *(this + 0x1B) = 0;
          *(this + 0x1A) = 0;
          if ( this != (_DWORD *)0xFFFFFFA4 )
          {
            while ( *v10 )
            {
              BSSimpleList_PushFront(this + 0x13, *v10);
              v11 = (int *)*(this + 0x18);
              if ( v11 )
              {
                *(this + 0x18) = v11[1];
                *v10 = *v11;
                FormHeapFree((unsigned int)v11);
              }
              else
              {
                *v10 = 0;
              }
            }
          }
          BSSimpleList_Clear(this + 0x17);
        }
        if ( *(this + 0x14) || *v6 )
        {
LABEL_19:
          *(this + 0xC) = *v6;
          sub_67F100(this + 0x13);
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
