// Drain an accumulated RenderPass list through selector setup and drawing, then recycle its list nodes. Payload RenderPass pointers are borrowed and are not destroyed by this helper.
void __stdcall sub_7ABAC0(_DWORD *a1, int a2)
{
  _DWORD *v2; // esi
  int v3; // eax
  _DWORD *v4; // ebx
  unsigned __int16 *v5; // edi
  _DWORD **v6; // esi
  int *v7; // ebp

  v2 = a1; /*0x7abac2*/
  if ( a1 && a1[4] ) /*0x7abad2*/
  {
    sub_7AA550(a1, (int (__cdecl *)(_DWORD *, _DWORD *))RenderPassNode_CompareSelectorAscending); /*0x7abae3*/
    v3 = a1[1]; /*0x7abae8*/
    if ( v3 ) /*0x7abaed*/
    {
      v4 = *(_DWORD **)v3; /*0x7abaf4*/
      v5 = *(unsigned __int16 **)(v3 + 8); /*0x7abafa*/
      if ( v5 ) /*0x7abafe*/
      {
LABEL_5:
        v6 = *(_DWORD ***)(*(_DWORD *)v5 + 0xBC); /*0x7abb05*/
        v7 = (int *)v5[2]; /*0x7abb0f*/
        if ( !v6 ) /*0x7abb13*/
          goto LABEL_12; /*0x7abb13*/
        if ( ((int (__thiscall *)(_DWORD))(*v6)[7])(*(_DWORD *)(*(_DWORD *)v5 + 0xBC)) < 1 /*0x7abb2f*/
          || ((int (__thiscall *)(_DWORD **))(*v6)[7])(v6) > 5 )
        {
          if ( ((int (__thiscall *)(_DWORD **))(*v6)[7])(v6) != 0x1B ) /*0x7abb4a*/
            goto LABEL_12; /*0x7abb4a*/
          Lighting30Shader_SelectRenderPass((unsigned __int16)v7); /*0x7abb52*/
        }
        else
        {
          sub_7D1320(v7); /*0x7abb37*/
        }
        (*(void (__thiscall **)(_DWORD *))(*v6[0xC] + 0x48))(v6[0xC]); /*0x7abb62*/
        (*(void (__thiscall **)(_DWORD *))(*v6[0xB] + 0x48))(v6[0xB]); /*0x7abb6c*/
        do /*0x7abb8f*/
        {
LABEL_12:
          if ( (_WORD)v7 != v5[2] ) /*0x7abb74*/
            goto LABEL_5; /*0x7abb74*/
          BSShaderAccumulator_DrawRenderPass(v5, (unsigned __int16)v7); /*0x7abb7c*/
          if ( !v4 ) /*0x7abb83*/
            break; /*0x7abb83*/
          v5 = (unsigned __int16 *)v4[2]; /*0x7abb85*/
          v4 = (_DWORD *)*v4; /*0x7abb8d*/
        }
        while ( v5 ); /*0x7abb8f*/
        v2 = a1; /*0x7abb91*/
      }
    }
    BSTPersistentList_ReleaseFreeNodesToGlobalPool((int)v2);// Drain helper recycles list nodes after drawing but never destroys the borrowed property RenderPass payloads. /*0x7abb9a*/
    v2[3] = v2[1]; /*0x7abba4*/
    v2[1] = 0; /*0x7abba7*/
    v2[2] = 0; /*0x7abbaa*/
    v2[4] = 0; /*0x7abbad*/
  }
}
