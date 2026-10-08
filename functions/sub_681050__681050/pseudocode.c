char __userpurge sub_681050@<al>(int a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>, TESObjectREFR *a5)
{
  int v6; // eax
  double v7; // st4
  char *v8; // ecx
  double v9; // st7
  float v11; // [esp+14h] [ebp-120h]
  char Format[260]; // [esp+2Ch] [ebp-108h] BYREF

  if ( !a5 ) /*0x681072*/
    JUMPOUT(0x68147B); /*0x68147b*/
  v6 = *(_DWORD *)(a1 + 0x28); /*0x681078*/
  if ( !v6 ) /*0x68107d*/
    goto LABEL_26; /*0x68107d*/
  if ( *(_DWORD *)(a1 + 4) == v6 ) /*0x681086*/
  {
    v7 = (double)*(int *)&MEMORY[0xB33E90][0x10]; /*0x68108d*/
    if ( *(int *)&MEMORY[0xB33E90][0x10] < 0 ) /*0x681095*/
      v7 = v7 + flt_A2FC78; /*0x681097*/
    v11 = v7 - *(float *)(a1 + 8); /*0x6810a0*/
    if ( v11 <= dbl_A74B10 ) /*0x6810b3*/
    {
      _sprintf((int)a5, a1, Format, "Ignoring same door."); /*0x6810e1*/
    }
    else
    {
      *(float *)(a1 + 8) = 0.0; /*0x6810c0*/
      *(_DWORD *)(a1 + 4) = 0; /*0x6810c4*/
      _sprintf((int)a5, a1, Format, "Expiring last door."); /*0x6810cb*/
    }
    Interface_ConsolePrint(Format); /*0x6810d5*/
  }
  v8 = *(char **)(a1 + 0x28); /*0x6810f3*/
  if ( v8 == *(char **)(a1 + 4) ) /*0x6810f9*/
LABEL_26:
    JUMPOUT(0x68118C); /*0x68118c*/
  switch ( sub_4DE660(v8) ) /*0x68110c*/
  {
    case 1: /*0x68110c*/
    case 3: /*0x68110c*/
      if ( !ActivateRef(*(TESObjectREFR **)(a1 + 0x28), a2, a3, a4, a5, 0, 0, 1) ) /*0x68111d*/
      {
        *(_BYTE *)(a1 + 0xC) = 7; /*0x681126*/
        JUMPOUT(0x68147D); /*0x68147d*/
      }
      if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 0x28) + 0x154))(*(_DWORD *)(a1 + 0x28)) ) /*0x68113c*/
      {
        (*(void (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 0x28) + 0x144))(*(_DWORD *)(a1 + 0x28)); /*0x68114d*/
        sub_60DDC0(*(_DWORD *)(a1 + 0x28)); /*0x681153*/
      }
      *(_DWORD *)(a1 + 4) = *(_DWORD *)(a1 + 0x28); /*0x68115e*/
      v9 = (double)*(int *)&MEMORY[0xB33E90][0x10]; /*0x681161*/
      if ( *(int *)&MEMORY[0xB33E90][0x10] < 0 ) /*0x68116e*/
        v9 = v9 + flt_A2FC78; /*0x681170*/
      *(float *)(a1 + 8) = v9; /*0x681176*/
      break; /*0x681176*/
    case 2: /*0x68110c*/
    case 4: /*0x68110c*/
      break;
    default:
      JUMPOUT(0x681182); /*0x681182*/
  }
  *(_BYTE *)(a1 + 0xC) = 5; /*0x681179*/
  *(float *)(a1 + 0x1C) = 0.0; /*0x68117f*/
  return def_68110C((Actor *)a5, a1, (__int16)a5);
}
