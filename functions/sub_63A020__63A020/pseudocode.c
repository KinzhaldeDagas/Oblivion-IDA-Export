void __thiscall sub_63A020(int **this, TESObjectREFR *a2)
{
  int **v2; // edi
  int v3; // eax
  int v4; // esi
  int v5; // eax
  unsigned int *v6; // ebx
  int v7; // esi
  int *v8; // ebp
  int *v9; // edi
  TESObjectREFR *v10; // esi
  _DWORD *v11; // eax
  _DWORD *v12; // eax
  int *v13; // esi
  int v14; // edi
  int v16; // [esp+10h] [ebp-4h]

  v2 = this;
  if ( !TESDataHandler_g_PlayerRef->isInCharGen )
  {
    if ( (unsigned __int8)sub_5E1AF0(a2) )
    {
      sub_5E2DD0(a2);
      v4 = v3;
      v5 = ((int (__thiscall *)(int **))(*v2)[0x61])(v2);
      if ( (!v5 || *(_BYTE *)(v5 + 0x20) != 0x14)
        && !((unsigned __int8 (__thiscall *)(TESObjectREFR *, int))a2->vtbl[1].GetSleepState)(a2, 1)
        && !sub_5E6CD0(a2, 0)
        && (!v4 || (*(_DWORD *)(v4 + 0x1C) & 0x1000) == 0) )
      {
        v6 = (unsigned int *)(v2 + 0xF);
        while ( v2[0x10] || *v6 )
        {
          v7 = *v6;
          if ( *v6 )
            FormHeapFree(*v6);
          BSSimpleList_Remove(v2 + 0xF, v7);
        }
        v8 = v2[0x63];
        v16 = 0;
        if ( v8 )
        {
          do
          {
            v9 = (int *)*v8;
            if ( !*v8 )
              break;
            if ( v16 >= 3 )
              break;
            v10 = (TESObjectREFR *)*v9;
            if ( (*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)*v9 + 0x198))(*v9, 0) )
            {
              if ( !((unsigned __int8 (__thiscall *)(TESObjectREFR *))v10->vtbl[1].super.SaveGame)(v10)
                && v10[1].member.pos[0] < 0.0
                && TesObjectREF_GetDistance(v10, a2, 0) <= flt_A71ED4
                && !*((_BYTE *)this + 0x228)
                && (double)v9[3] > flt_A418D8
                && !sub_446C30((BSSimpleList_VoidPtr *)this + 0x15, v10) )
              {
                v11 = (_DWORD *)FormHeapAlloc(0x20u);
                if ( v11 )
                  v12 = sub_628EB0(v11);
                else
                  v12 = 0;
                *v12 = v10;
                BSSimpleList_PushFront(v6, (int)v12);
                ++v16;
              }
            }
            v8 = (int *)v8[1];
          }
          while ( v8 );
          v2 = this;
        }
        v13 = (int *)*v6;
        if ( *v6 )
        {
          v14 = *v13;
          sub_67F100(v6);
          FormHeapFree((unsigned int)v13);
          ((void (__thiscall *)(TESObjectREFR *, int))a2->vtbl[1].Set3D)(a2, v14);
          BSSimpleList_PushFront(this + 0x2A, v14);
          v2 = this;
        }
        *((_BYTE *)v2 + 0x1D0) = 0;
      }
    }
  }
}
