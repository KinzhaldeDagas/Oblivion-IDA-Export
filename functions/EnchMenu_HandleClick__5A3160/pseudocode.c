int __userpurge EnchMenu_HandleClick@<eax>(
        int a1@<ecx>,
        char a2@<bpl>,
        double a3@<st7>,
        double a4@<st6>,
        double a5@<st5>,
        double a6@<st4>,
        double a7@<st2>,
        double a8@<st1>,
        double a9@<st0>,
        int a10,
        _DWORD *a11)
{
  char *v12; // eax
  const char *RenderTargetsNum; // eax
  int v14; // ecx
  BSStringT v16; // [esp-8h] [ebp-14h] BYREF

  if ( sub_57D2F0(*(void **)(a1 + 0x98)) ) /*0x5a316b*/
  {
    sub_57DD90(*(void **)(a1 + 0x98), 0); /*0x5a3180*/
  }
  else
  {
    if ( a10 != 2 && a10 != 0x18 ) /*0x5a318f*/
      goto LABEL_7; /*0x5a318f*/
    sub_5A1600(a1); /*0x5a3193*/
  }
  v12 = sub_580120(*(char **)(a1 + 0x98)); /*0x5a319e*/
  Tile_SetString(*(_DWORD **)(a1 + 0x3C), (_DWORD *)0xFDE, v12); /*0x5a31ac*/
  RenderTargetsNum = (const char *)NiRenderTargetGroup::GetRenderTargetsNum(*(NiRenderTargetGroup **)(a1 + 0x98)); /*0x5a31b7*/
  BSStringT_Set((BSStringT *)(*(_DWORD *)(a1 + 0x28) + 0x1C), RenderTargetsNum, 0); /*0x5a31c5*/
LABEL_7:
  switch ( a10 ) /*0x5a31da*/
  {
    case 0xE: /*0x5a31da*/
      sub_5A2D30(a1, a2, a7, a8, a9); /*0x5a324b*/
      return (*(int (__thiscall **)(int, int, _DWORD *))(*(_DWORD *)a1 + 0x14))(a1, a10, a11); /*0x5a325e*/
    case 0xF: /*0x5a31da*/
      v14 = *(_DWORD *)(a1 + 0x28); /*0x5a31e1*/
      if ( v14 ) /*0x5a31e6*/
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v14 + 0x10))(v14, 1); /*0x5a31ef*/
      sub_5A1740(a7, a3, a4, a5, a6); /*0x5a31f1*/
      return (*(int (__thiscall **)(int, int, _DWORD *))(*(_DWORD *)a1 + 0x14))(a1, a10, a11); /*0x5a3204*/
    case 0x14: /*0x5a31da*/
      RepairMenu_Create(a9, a7, 4, 0, 0, 0); /*0x5a320f*/
      return (*(int (__thiscall **)(int, int, _DWORD *))(*(_DWORD *)a1 + 0x14))(a1, a10, a11); /*0x5a3225*/
    case 0x16: /*0x5a31da*/
      RepairMenu_Create(a9, a7, 5, 0, 0, 0); /*0x5a3230*/
      return (*(int (__thiscall **)(int, int, _DWORD *))(*(_DWORD *)a1 + 0x14))(a1, a10, a11); /*0x5a3246*/
    default:
      if ( a10 < 0x3E8 ) /*0x5a3267*/
        return (*(int (__thiscall **)(int, int, _DWORD *))(*(_DWORD *)a1 + 0x14))(a1, a10, a11); /*0x5a3267*/
      if ( a10 >= 0xBB8 ) /*0x5a326f*/
      {
        sub_5A1E10(a1, a8, a9, a11); /*0x5a32c7*/
        return (*(int (__thiscall **)(int, int, _DWORD *))(*(_DWORD *)a1 + 0x14))(a1, a10, a11); /*0x5a32cc*/
      }
      else if ( *(_DWORD *)(a1 + 0x30) ) /*0x5a3271*/
      {
        sub_5A3020(a1, a8, a9, a3, a4, a5, a6, a11); /*0x5a327a*/
        return (*(int (__thiscall **)(int, int, _DWORD *))(*(_DWORD *)a1 + 0x14))(a1, a10, a11); /*0x5a3288*/
      }
      else
      {
        BSStringT_constr_str(&v16, (char *)MEMORY[0xB389B0].value); /*0x5a329f*/
        ShowMessageBox__((char *)a1, a2, a7, a8, a9, v16.m_data, *(int *)&v16.m_dataLen); /*0x5a32a6*/
        return (*(int (__thiscall **)(int, int, _DWORD *))(*(_DWORD *)a1 + 0x14))(a1, a10, a11); /*0x5a32b4*/
      }
  }
}
