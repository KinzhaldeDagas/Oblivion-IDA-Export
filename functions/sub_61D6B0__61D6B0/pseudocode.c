void __userpurge sub_61D6B0(int a1@<ecx>, double a2@<st3>, int a3)
{
  int *v8; // eax
  int *v9; // edi
  int *v10; // edi
  int *SafeFloatPointer; // ebx
  int v12; // eax
  bool v13; // zf
  char *Name; // eax
  float v15; // [esp+0h] [ebp-20h]
  float v16; // [esp+4h] [ebp-1Ch]
  double v17; // [esp+18h] [ebp-8h]

  if ( a3 && *(_DWORD *)(a1 + 0x70) != 8 )
  {
    if ( !sub_6135F0(a1) )
      goto LABEL_11;
    v8 = sub_5E0F50(*(void **)(a1 + 0x3C));
    (*(void (__thiscall **)(int *))(*v8 + 0x154))(v8);
    if ( a2 <= *(float *)&SrcStr )
      goto LABEL_11;
    v9 = sub_5E0F50(*(void **)(a1 + 0x3C));
    v17 = sub_615980(a1, (char)v9);
    (*(void (__thiscall **)(int *))(*v9 + 0x154))(v9);
    if ( a2 > v17 )
    {
      if ( a3 == *(_DWORD *)(a1 + 0x94) || a3 == *(_DWORD *)(a1 + 0x98) || a3 == *(_DWORD *)(a1 + 0x9C) )
        goto LABEL_11;
      if ( *(_BYTE *)(a1 + 0x1AD) )
        return;
    }
    v10 = sub_5E0F50(*(void **)(a1 + 0x3C));
    SafeFloatPointer = GameSetting_GetSafeFloatPointer((int *)&unk_B37298);
    v16 = ((double (__thiscall *)(int *))*(_DWORD *)(*v10 + 0x154))(v10);
    v15 = *(float *)SafeFloatPointer;
    v12 = sub_6135F0(a1);
    sub_61CAA0(a1, (char)v10, v12, v15, v16);
LABEL_11:
    v13 = *(_DWORD *)(a1 + 0x70) == 8;
    *(_DWORD *)(a1 + 0x8C) = a3;
    if ( !v13 )
    {
      if ( byte_B3B908 )
      {
        Name = TESObjectREFR_GetName(*(TESObjectREFR **)(a1 + 0x3C));
        Interface_ConsolePrint("%.20s is going to %s!", Name, "...just kinda stand around");
      }
      *(float *)(a1 + 0x188) = flt_A30634;
    }
    *(_DWORD *)(a1 + 0x70) = 8;
  }
}
