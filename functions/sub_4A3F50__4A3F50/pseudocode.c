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

  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  if ( a2 && (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a2 + 0xC))(a2) == 5 && a3 )
  {
    if ( *(this + 5) )
    {
      *(this + 4) = a2[4];
      sub_4A3520(this, a2[6]);
      (*(void (__thiscall **)(_BYTE *, unsigned int *))(*(_DWORD *)a2 + 0x24))(a2, &v7);
      (*(void (__thiscall **)(_BYTE *, unsigned int *))(*(_DWORD *)this + 0x28))(this, &v7);
      FormHeapFree(v7);
      return;
    }
    if ( a2[5] )
      goto LABEL_11;
    if ( *(this + 4) )
    {
      v4 = a2[4];
      if ( v4 )
      {
        if ( a2[6] > *(this + 6) )
        {
          *(this + 4) = v4;
          sub_4A3520(this, a2[6]);
          (*(void (__thiscall **)(_BYTE *, unsigned int *))(*(_DWORD *)a2 + 0x24))(a2, &v7);
          (*(void (__thiscall **)(_BYTE *, unsigned int *))(*(_DWORD *)this + 0x28))(this, &v7);
        }
      }
LABEL_11:
      v10 = 0xFFFFFFFF;
      BSStringT_Clear(&v7);
      return;
    }
    v5 = a2[4];
    if ( v5 )
    {
      *(this + 4) = v5;
      sub_4A3520(this, a2[6]);
      (*(void (__thiscall **)(_BYTE *, unsigned int *))(*(_DWORD *)a2 + 0x24))(a2, &v7);
      (*(void (__thiscall **)(_BYTE *, unsigned int *))(*(_DWORD *)this + 0x28))(this, &v7);
      FormHeapFree(v7);
    }
    else
    {
      if ( a2[6] > *(this + 6) )
      {
        (*(void (__thiscall **)(_BYTE *, unsigned int *))(*(_DWORD *)a2 + 0x24))(a2, &v7);
        (*(void (__thiscall **)(_BYTE *, unsigned int *))(*(_DWORD *)this + 0x28))(this, &v7);
      }
      v6 = a2[6];
      v11 = (double)((unsigned __int8)*(this + 6) * (unsigned __int8)*(this + 6)
                   + v6 * (0x64 - (unsigned __int8)*(this + 6)))
          + (double)(v6 * v6 + (unsigned __int8)*(this + 6) * (0x64 - v6));
      v12 = v11 * dbl_A40048;
      v13 = (int)sub_4842F0(v12);
      sub_4A3520(this, v13);
      FormHeapFree(v7);
    }
  }
  else
  {
    FormHeapFree(v7);
  }
}
