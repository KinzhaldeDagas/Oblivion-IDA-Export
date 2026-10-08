void __cdecl sub_8B8700(Ni2DBuffer **a1)
{
  Ni2DBuffer *v1; // eax
  int v2; // eax
  int v3; // edi
  int v4; // eax
  int v5; // esi
  Ni2DBuffer **i; // eax

  if ( a1 ) /*0x8b8707*/
  {
    v1 = (Ni2DBuffer *)sub_700010(a1, (int)&MEMORY[0xBA8000]); /*0x8b8710*/
    if ( v1 ) /*0x8b8717*/
      NiObjectNET_RemoveController(a1, v1); /*0x8b871c*/
    v2 = ((int (__thiscall *)(Ni2DBuffer **))(*a1)->members.width)(a1); /*0x8b8729*/
    v3 = v2; /*0x8b872b*/
    if ( v2 ) /*0x8b872f*/
    {
      v4 = *(unsigned __int16 *)(v2 + 0xB6); /*0x8b8731*/
      v5 = 0; /*0x8b8738*/
      if ( *(_WORD *)(v3 + 0xB6) ) /*0x8b8731*/
      {
        if ( v4 ) /*0x8b8740*/
          goto LABEL_8; /*0x8b8740*/
        for ( i = 0; ; i = *(Ni2DBuffer ***)(*(_DWORD *)(v3 + 0xB0) + 4 * v5) ) /*0x8b8742*/
        {
          sub_8B8700(i); /*0x8b8750*/
          if ( *(unsigned __int16 *)(v3 + 0xB6) <= (unsigned int)++v5 ) /*0x8b8764*/
            break; /*0x8b8764*/
LABEL_8:
          ; /*0x8b8746*/
        }
      }
    }
  }
}
