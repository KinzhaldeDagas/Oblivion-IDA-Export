bool __cdecl sub_5376E0(int a1, int a2)
{
  TESChildCELL *v2; // eax
  TESChildCELL *v3; // esi
  int v4; // eax
  int v5; // edi
  bool (__thiscall *v6)(BSExtraData *, BSExtraData *); // ecx

  sub_536110(*(_DWORD *)(a1 + 0x28)); /*0x5376ee*/
  v3 = v2; /*0x5376f7*/
  sub_536110(*(_DWORD *)(a1 + 0x20)); /*0x5376f9*/
  v5 = v4; /*0x537703*/
  if ( !v3 ) /*0x537705*/
    return 0; /*0x537705*/
  if ( !v4 ) /*0x537709*/
    return 0; /*0x537709*/
  if ( !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v4 + 0x190))(v4) ) /*0x537715*/
    return 0; /*0x537715*/
  v6 = sub_536F20(v3); /*0x537721*/
  if ( !v6 ) /*0x537728*/
    return 0; /*0x537759*/
  if ( !a2 ) /*0x53772f*/
    return sub_536C30(v6, a1, (int)v3, v5, 0) != 0; /*0x537740*/
  sub_5375F0(v6, *(_DWORD *)(a1 + 0x28), v5); /*0x53774a*/
  return 1; /*0x53773b*/
}
