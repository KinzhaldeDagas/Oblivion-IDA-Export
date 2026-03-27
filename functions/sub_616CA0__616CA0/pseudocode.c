void __usercall sub_616CA0(int a1@<ecx>, char a2@<bpl>, double a3@<st2>, double a4@<st1>, double a5@<st0>)
{
  _DWORD *v7; // eax
  int v8; // eax
  ExtraDataList ***v9; // ebx
  int v10; // edi
  _DWORD *v11; // ecx
  int v12; // edi
  CHAR *v13; // eax
  char *Name; // eax
  int v15; // eax
  BSExtraDataVtbl *v16; // eax
  const char *v17; // [esp-Ch] [ebp-10h]

  v7 = *(_DWORD **)(a1 + 0xA4);
  if ( v7 )
  {
    if ( *v7 )
    {
      v8 = (*(int (__thiscall **)(_DWORD, int))(**(_DWORD **)(*(_DWORD *)(a1 + 0x3C) + 0x58) + 0xEC))(
             *(_DWORD *)(*(_DWORD *)(a1 + 0x3C) + 0x58),
             1);
      v9 = (ExtraDataList ***)v8;
      if ( v8 )
        v10 = *(_DWORD *)(v8 + 8);
      else
        v10 = 0;
      if ( v10 )
      {
        if ( !sub_484DF0((ExtraDataList ***)v8) && !*(_DWORD *)(v10 + 0x64) )
        {
          v11 = *(_DWORD **)(a1 + 0xA4);
          if ( *v11 )
            v12 = *v11 - 0x24;
          else
            v12 = 0;
          if ( byte_B3B908 )
          {
            v13 = *(CHAR **)(v12 + 0x28);
            if ( !v13 )
              v13 = EmptyString;
            v17 = v13;
            Name = TESObjectREFR_GetName(*(TESObjectREFR **)(a1 + 0x3C));
            Interface_ConsolePrint("%.20s poisons current weapon with %s!", Name, v17);
          }
          v15 = **(_DWORD **)(a1 + 0xA4);
          if ( v15 )
            v16 = (BSExtraDataVtbl *)(v15 - 0x24);
          else
            v16 = 0;
          sub_484E20(v9, a2, a3, a4, a5, v16);
          sub_67F100(*(_DWORD **)(a1 + 0xA4));
          (*(void (__thiscall **)(_DWORD, int, _DWORD, int, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int, _DWORD))(**(_DWORD **)(a1 + 0x3C) + 0x100))(
            *(_DWORD *)(a1 + 0x3C),
            v12,
            0,
            1,
            0,
            0,
            0,
            0,
            0,
            1,
            0);
          if ( !**(_DWORD **)(a1 + 0xA4) )
          {
            FormHeapFree(*(_DWORD *)(a1 + 0xA4));
            *(_DWORD *)(a1 + 0xA4) = 0;
          }
        }
      }
    }
  }
}
