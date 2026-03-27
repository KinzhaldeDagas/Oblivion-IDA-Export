int __userpurge sub_681050@<eax>(int a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>, TESObjectREFR *a5)
{
  int v7; // eax
  double v8; // st4
  char *v9; // ecx
  double v10; // st7
  float v12; // [esp+14h] [ebp-120h]
  char Format[260]; // [esp+2Ch] [ebp-108h] BYREF

  if ( !a5 )
    JUMPOUT(0x68147B);
  v7 = *(_DWORD *)(a1 + 0x28);
  if ( !v7 )
    goto LABEL_26;
  if ( *(_DWORD *)(a1 + 4) == v7 )
  {
    v8 = (double)(int)Seed;
    if ( (int)Seed < 0 )
      v8 = v8 + flt_A2FC78;
    v12 = v8 - *(float *)(a1 + 8);
    if ( v12 <= dbl_A74B10 )
    {
      _sprintf(Format, "Ignoring same door.");
    }
    else
    {
      *(float *)(a1 + 8) = 0.0;
      *(_DWORD *)(a1 + 4) = 0;
      _sprintf(Format, "Expiring last door.");
    }
    Interface_ConsolePrint(Format);
  }
  v9 = *(char **)(a1 + 0x28);
  if ( v9 == *(char **)(a1 + 4) )
LABEL_26:
    JUMPOUT(0x68118C);
  switch ( sub_4DE660(v9) )
  {
    case 1:
    case 3:
      if ( !ActivateRef(*(TESObjectREFR **)(a1 + 0x28), a2, a3, a4, a5, 0, 0, 1) )
      {
        *(_BYTE *)(a1 + 0xC) = 7;
        JUMPOUT(0x68147D);
      }
      if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 0x28) + 0x154))(*(_DWORD *)(a1 + 0x28)) )
      {
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 0x28) + 0x144))(*(_DWORD *)(a1 + 0x28));
        sub_60DDC0(*(_DWORD *)(a1 + 0x28));
      }
      *(_DWORD *)(a1 + 4) = *(_DWORD *)(a1 + 0x28);
      v10 = (double)(int)Seed;
      if ( (int)Seed < 0 )
        v10 = v10 + flt_A2FC78;
      *(float *)(a1 + 8) = v10;
      break;
    case 2:
    case 4:
      break;
    default:
      JUMPOUT(0x681182);
  }
  *(_BYTE *)(a1 + 0xC) = 5;
  *(float *)(a1 + 0x1C) = 0.0;
  return def_68110C((__int16)a5);
}
