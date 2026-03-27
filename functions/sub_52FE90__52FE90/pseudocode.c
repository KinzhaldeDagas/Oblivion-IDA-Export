signed int sub_52FE90()
{
  signed int result; // eax
  int *v1; // ecx
  _DWORD *v2; // ebp
  int v3; // edi
  TESForm *v4; // eax
  TESForm *v5; // esi
  signed int v6; // [esp+14h] [ebp-1Ch]
  int v7; // [esp+18h] [ebp-18h]
  int *v8; // [esp+1Ch] [ebp-14h]

  result = 0;
  v6 = 0;
  do
  {
    v1 = (int *)(4 * result + 0xB110F4);
    v7 = 0;
    v8 = v1;
    if ( *v1 > 0 )
    {
      v2 = (_DWORD *)(4 * result + 0xB111B8);
      v3 = 0;
      do
      {
        if ( !*(_DWORD *)(v3 + *v2) )
        {
          v4 = (TESForm *)FormHeapAlloc(0x3Cu);
          v5 = v4;
          if ( v4 )
          {
            TESForm_constr(v4);
            v5[1].vtbl = (TESFormVtbl *)&TESFullName::`vftable';
            *(_DWORD *)&v5[1].member.type = 0;
            LOWORD(v5[1].member.flags) = 0;
            HIWORD(v5[1].member.flags) = 0;
            v5->vtbl = (TESFormVtbl *)&TESTopic::`vftable'{for `TESTopic'};
            v5[1].vtbl = (TESFormVtbl *)&TESTopic::`vftable'{for `TESFullName'};
            v5[1].member.modlist.data = 0;
            v5[1].member.modlist.next = 0;
            *(_DWORD *)&v5[2].member.type = 0;
            LOWORD(v5[2].member.flags) = 0;
            HIWORD(v5[2].member.flags) = 0;
            v5[2].vtbl = 0;
            LOBYTE(v5[1].member.refID) = v6;
            v5->member.type = kFormType_Dialog;
          }
          else
          {
            v5 = 0;
          }
          *(_DWORD *)(v3 + *v2) = v5;
          TESForm_SetFormID(*(TESForm **)(*v2 + v3), *(_DWORD *)(*v2 + v3 + 4), 1);
          (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(*v2 + v3) + 0xD8))(
            *(_DWORD *)(*v2 + v3),
            *(_DWORD *)(*v2 + v3 + 8));
          BSStringT_Set((BSStringT *)(*(_DWORD *)(v3 + *v2) + 0x1C), *(const char **)(*v2 + v3 + 8), 0);
          sub_447530((_DWORD *)TESDataHandler, *(_DWORD *)(*v2 + v3));
          sub_412D30(&off_B06164, *(_DWORD *)(*v2 + v3 + 8), *(TESForm **)(*v2 + v3));
          result = v6;
          v1 = v8;
        }
        v3 += 0xC;
        ++v7;
      }
      while ( v7 < *v1 );
    }
    v6 = ++result;
  }
  while ( result < 7 );
  return result;
}
