// Verified: merges only data ID 7 Sound records, applies override/priority selection, and invokes Sound virtual +0x24 to obtain the selected music type.
void __thiscall TESRegionDataSound_MergeForSelection(_BYTE *this, _BYTE *a2, int a3)
{
  char v4; // al
  int v5; // ebx
  int v6; // eax
  int v7; // ebx
  int v8; // eax
  int v9; // ecx
  float v10; // [esp+18h] [ebp+4h]
  float v11; // [esp+18h] [ebp+4h]
  int v12; // [esp+1Ch] [ebp+8h]

  if ( a2 && (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a2 + 0xC))(a2) == 7 && a3 ) /*0x4a5487*/
  {
    if ( *(this + 5) ) /*0x4a548d*/
    {
      v4 = a2[4]; /*0x4a5494*/
LABEL_11:
      *(this + 4) = v4; /*0x4a54e6*/
      sub_4A3520(this, a2[6]); /*0x4a54f0*/
      v5 = *(_DWORD *)this; /*0x4a54fa*/
      v6 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a2 + 0x24))(a2); /*0x4a54fe*/
      (*(void (__thiscall **)(_BYTE *, int))(v5 + 0x28))(this, v6); /*0x4a5506*/
      return; /*0x4a550b*/
    }
    if ( a2[5] ) /*0x4a54bf*/
      return; /*0x4a54c3*/
    v4 = a2[4]; /*0x4a54cd*/
    if ( *(this + 4) ) /*0x4a54c9*/
    {
      if ( v4 && a2[6] > *(this + 6) ) /*0x4a54e0*/
        goto LABEL_11; /*0x4a54e0*/
    }
    else
    {
      if ( v4 ) /*0x4a5510*/
        goto LABEL_11; /*0x4a5510*/
      if ( a2[6] > *(this + 6) ) /*0x4a5518*/
      {
        v7 = *(_DWORD *)this; /*0x4a551f*/
        v8 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a2 + 0x24))(a2); /*0x4a5523*/
        (*(void (__thiscall **)(_BYTE *, int))(v7 + 0x28))(this, v8); /*0x4a552b*/
      }
      v9 = (unsigned __int8)a2[6]; /*0x4a552d*/
      v10 = (double)((unsigned __int8)*(this + 6) * (unsigned __int8)*(this + 6) /*0x4a5568*/
                   + v9 * (0x64 - (unsigned __int8)*(this + 6)))
          + (double)(v9 * v9 + (unsigned __int8)*(this + 6) * (0x64 - v9));
      v11 = v10 * dbl_A40048; /*0x4a5576*/
      v12 = (int)sub_4842F0(v11); /*0x4a559f*/
      sub_4A3520(this, v12); /*0x4a55af*/
    }
  }
}
