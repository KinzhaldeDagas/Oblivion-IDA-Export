void __thiscall sub_4A39D0(unsigned __int8 *this, _BYTE *a2, int a3)
{
  unsigned __int8 v4; // al
  _DWORD *v5; // eax
  _DWORD *v6; // eax
  _DWORD *v7; // eax
  _DWORD *v8; // eax
  unsigned __int8 v9; // bl
  _DWORD *v10; // eax
  int v11; // ecx
  float v12; // [esp+0h] [ebp-18h]
  int v13; // [esp+4h] [ebp-14h]
  float v14; // [esp+8h] [ebp-10h]
  int v15; // [esp+Ch] [ebp-Ch]
  int v16; // [esp+Ch] [ebp-Ch]
  float v17; // [esp+1Ch] [ebp+4h]
  float v18; // [esp+1Ch] [ebp+4h]
  int v19; // [esp+20h] [ebp+8h]

  if ( a2 && (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a2 + 0xC))(a2) == 6 && a3 ) /*0x4a39f7*/
  {
    if ( *(this + 5) ) /*0x4a39fd*/
    {
      *(this + 4) = a2[4]; /*0x4a3a06*/
      sub_4A3520(this, a2[6]); /*0x4a3a0e*/
LABEL_13:
      v7 = (_DWORD *)(*(int (__thiscall **)(unsigned __int8 *))(*(_DWORD *)this + 0x24))(this); /*0x4a3a88*/
      sub_4A6010(v7); /*0x4a3a93*/
      v16 = (*(int (__thiscall **)(unsigned __int8 *))(*(_DWORD *)this + 0x24))(this); /*0x4a3aa3*/
      v8 = (_DWORD *)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a2 + 0x24))(a2); /*0x4a3aa9*/
      sub_4A6120(v8, v16); /*0x4a3aad*/
      return; /*0x4a3ab4*/
    }
    if ( a2[5] ) /*0x4a3a10*/
      return; /*0x4a3a14*/
    v4 = a2[4]; /*0x4a3a1e*/
    if ( *(this + 4) ) /*0x4a3a1a*/
    {
      if ( v4 ) /*0x4a3a25*/
      {
        if ( a2[6] > *(this + 6) ) /*0x4a3a31*/
        {
          *(this + 4) = v4; /*0x4a3a37*/
          sub_4A3520(this, a2[6]); /*0x4a3a41*/
          v5 = (_DWORD *)(*(int (__thiscall **)(unsigned __int8 *))(*(_DWORD *)this + 0x24))(this); /*0x4a3a4d*/
          sub_4A6010(v5); /*0x4a3a51*/
          v15 = (*(int (__thiscall **)(unsigned __int8 *))(*(_DWORD *)this + 0x24))(this); /*0x4a3a5f*/
          v6 = (_DWORD *)(*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a2 + 0x24))(a2); /*0x4a3a67*/
          sub_4A6120(v6, v15); /*0x4a3a6b*/
        }
      }
    }
    else
    {
      if ( v4 ) /*0x4a3a77*/
      {
        *(this + 4) = v4; /*0x4a3a79*/
        sub_4A3520(this, a2[6]); /*0x4a3a83*/
        goto LABEL_13; /*0x4a3a83*/
      }
      v9 = *(this + 6); /*0x4a3ac7*/
      v14 = (float)(unsigned __int8)a2[6]; /*0x4a3ad1*/
      v13 = (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a2 + 0x24))(a2); /*0x4a3adf*/
      v12 = (float)v9; /*0x4a3aea*/
      v10 = (_DWORD *)(*(int (__thiscall **)(unsigned __int8 *))(*(_DWORD *)this + 0x24))(this); /*0x4a3aed*/
      sub_4A61E0(v10, v12, v13, v14); /*0x4a3af1*/
      v11 = (unsigned __int8)a2[6]; /*0x4a3af6*/
      v17 = (double)(*(this + 6) * *(this + 6) + v11 * (0x64 - *(this + 6))) /*0x4a3b31*/
          + (double)(v11 * v11 + *(this + 6) * (0x64 - v11));
      v18 = v17 * dbl_A40048; /*0x4a3b3f*/
      v19 = (int)sub_4842F0(v18); /*0x4a3b68*/
      sub_4A3520(this, v19); /*0x4a3b78*/
    }
  }
}
