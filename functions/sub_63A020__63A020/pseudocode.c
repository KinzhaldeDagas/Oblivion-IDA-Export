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

  v2 = this; /*0x63a030*/
  if ( !reference->isInCharGen ) /*0x63a028*/
  {
    if ( (unsigned __int8)sub_5E1AF0(a2) ) /*0x63a043*/
    {
      sub_5E2DD0(a2); /*0x63a053*/
      v4 = v3; /*0x63a05a*/
      v5 = ((int (__thiscall *)(int **))(*v2)[0x61])(v2); /*0x63a064*/
      if ( (!v5 || *(_BYTE *)(v5 + 0x20) != 0x14) /*0x63a0a8*/
        && !((unsigned __int8 (__thiscall *)(TESObjectREFR *, int))a2->vtbl[1].GetSleepState)(a2, 1)
        && !sub_5E6CD0(a2, 0)
        && (!v4 || (*(_DWORD *)(v4 + 0x1C) & 0x1000) == 0) )
      {
        v6 = (unsigned int *)(v2 + 0xF); /*0x63a0ae*/
        while ( v2[0x10] || *v6 ) /*0x63a0ba*/
        {
          v7 = *v6; /*0x63a0bc*/
          if ( *v6 ) /*0x63a0bc*/
            FormHeapFree(*v6); /*0x63a0c3*/
          BSSimpleList_Remove((int *)v2 + 0xF, v7); /*0x63a0ce*/
        }
        v8 = v2[0x63]; /*0x63a0d6*/
        v16 = 0; /*0x63a0de*/
        if ( v8 ) /*0x63a0e6*/
        {
          do /*0x63a1b6*/
          {
            v9 = (int *)*v8; /*0x63a0f0*/
            if ( !*v8 ) /*0x63a0f0*/
              break; /*0x63a0f5*/
            if ( v16 >= 3 ) /*0x63a100*/
              break; /*0x63a100*/
            v10 = (TESObjectREFR *)*v9; /*0x63a106*/
            if ( (*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)*v9 + 0x198))(*v9, 0) ) /*0x63a114*/
            {
              if ( !((unsigned __int8 (__thiscall *)(TESObjectREFR *))v10->vtbl[1].super.SaveGame)(v10) /*0x63a180*/
                && v10[1].member.pos[0] < 0.0
                && TesObjectREF_GetDistance(v10, a2, 0) <= flt_A71ED4
                && !*((_BYTE *)this + 0x228)
                && (double)v9[3] > flt_A418D8
                && !BSSimpleList::Contains((BSSimpleList_VoidPtr *)this + 0x15, v10) )
              {
                v11 = (_DWORD *)FormHeapAlloc(0x20u); /*0x63a18b*/
                if ( v11 ) /*0x63a195*/
                  v12 = sub_628EB0(v11); /*0x63a199*/
                else
                  v12 = 0; /*0x63a1a0*/
                *v12 = v10; /*0x63a1a5*/
                BSSimpleList_PushFront(v6, (int)v12); /*0x63a1a7*/
                ++v16; /*0x63a1ac*/
              }
            }
            v8 = (int *)v8[1]; /*0x63a1b1*/
          }
          while ( v8 ); /*0x63a1b6*/
          v2 = this; /*0x63a1bc*/
        }
        v13 = (int *)*v6; /*0x63a1c0*/
        if ( *v6 ) /*0x63a1c0*/
        {
          v14 = *v13; /*0x63a1c7*/
          BSSimpleList_PopHeadWithoutPayloadFree(v6); /*0x63a1cb*/
          FormHeapFree((unsigned int)v13); /*0x63a1d1*/
          ((void (__thiscall *)(TESObjectREFR *, int))a2->vtbl[1].Set3D)(a2, v14); /*0x63a1e6*/
          BSSimpleList_PushFront(this + 0x2A, v14); /*0x63a1f3*/
          v2 = this; /*0x63a1f8*/
        }
        *((_BYTE *)v2 + 0x1D0) = 0; /*0x63a1fc*/
      }
    }
  }
}
