void __thiscall sub_4A3F50(_BYTE *this, _BYTE *a2, int a3)
{
  char v4; // cl
  char v5; // al
  unsigned __int8 v6; // cl
  unsigned int v7; // [esp+1Ch] [ebp-14h] BYREF
  __int16 v8; // [esp+20h] [ebp-10h]
  __int16 v9; // [esp+22h] [ebp-Eh]
  unsigned int v10; // [esp+2Ch] [ebp-4h]
  float v11; // [esp+34h] [ebp+4h]
  float v12; // [esp+34h] [ebp+4h]
  int v13; // [esp+38h] [ebp+8h]

  v7 = 0; /*0x4a3f7a*/
  v8 = 0; /*0x4a3f7e*/
  v9 = 0; /*0x4a3f83*/
  v10 = 0; /*0x4a3f8e*/
  if ( a2 && (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a2 + 0xC))(a2) == 5 && a3 ) /*0x4a3fae*/
  {
    if ( *(this + 5) ) /*0x4a3fb4*/
    {
      *(this + 4) = a2[4]; /*0x4a3fbc*/
      sub_4A3520(this, a2[6]); /*0x4a3fce*/
      (*(void (__thiscall **)(_BYTE *, unsigned int *))(*(_DWORD *)a2 + 0x24))(a2, &v7); /*0x4a3fdf*/
      (*(void (__thiscall **)(_BYTE *, unsigned int *))(*(_DWORD *)this + 0x28))(this, &v7); /*0x4a3fed*/
      FormHeapFree(v7); /*0x4a3ff4*/
      return; /*0x4a3ff4*/
    }
    if ( a2[5] ) /*0x4a3ff9*/
      goto LABEL_11; /*0x4a3ffc*/
    if ( *(this + 4) ) /*0x4a3ffe*/
    {
      v4 = a2[4]; /*0x4a4003*/
      if ( v4 ) /*0x4a4008*/
      {
        if ( a2[6] > *(this + 6) ) /*0x4a4010*/
        {
          *(this + 4) = v4; /*0x4a4012*/
          sub_4A3520(this, a2[6]); /*0x4a4023*/
          (*(void (__thiscall **)(_BYTE *, unsigned int *))(*(_DWORD *)a2 + 0x24))(a2, &v7); /*0x4a4034*/
          (*(void (__thiscall **)(_BYTE *, unsigned int *))(*(_DWORD *)this + 0x28))(this, &v7); /*0x4a4042*/
        }
      }
LABEL_11:
      v10 = 0xFFFFFFFF; /*0x4a4044*/
      BSStringT_Clear(&v7); /*0x4a4050*/
      return; /*0x4a4067*/
    }
    v5 = a2[4]; /*0x4a406a*/
    if ( v5 ) /*0x4a406f*/
    {
      *(this + 4) = v5; /*0x4a4071*/
      sub_4A3520(this, a2[6]); /*0x4a4082*/
      (*(void (__thiscall **)(_BYTE *, unsigned int *))(*(_DWORD *)a2 + 0x24))(a2, &v7); /*0x4a4093*/
      (*(void (__thiscall **)(_BYTE *, unsigned int *))(*(_DWORD *)this + 0x28))(this, &v7); /*0x4a40a1*/
      FormHeapFree(v7); /*0x4a40a8*/
    }
    else
    {
      if ( a2[6] > *(this + 6) ) /*0x4a40b3*/
      {
        (*(void (__thiscall **)(_BYTE *, unsigned int *))(*(_DWORD *)a2 + 0x24))(a2, &v7); /*0x4a40c1*/
        (*(void (__thiscall **)(_BYTE *, unsigned int *))(*(_DWORD *)this + 0x28))(this, &v7); /*0x4a40cf*/
      }
      v6 = a2[6]; /*0x4a40d1*/
      v11 = (double)((unsigned __int8)*(this + 6) * (unsigned __int8)*(this + 6) /*0x4a411e*/
                   + v6 * (0x64 - (unsigned __int8)*(this + 6)))
          + (double)(v6 * v6 + (unsigned __int8)*(this + 6) * (0x64 - v6));
      v12 = v11 * dbl_A40048; /*0x4a412c*/
      v13 = (int)sub_4842F0(v12); /*0x4a4155*/
      sub_4A3520(this, v13); /*0x4a4165*/
      FormHeapFree(v7); /*0x4a416f*/
    }
  }
  else
  {
    FormHeapFree(v7); /*0x4a4176*/
  }
}
