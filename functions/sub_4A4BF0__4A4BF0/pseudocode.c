void __thiscall sub_4A4BF0(_BYTE *this, _BYTE *a2, int a3)
{
  void (__thiscall *v4)(_BYTE *, int); // eax
  char v5; // cl
  int v6; // eax
  char v7; // al
  void (__thiscall *v8)(_BYTE *, int); // eax
  int v9; // ecx
  int v10; // [esp+8h] [ebp-2Ch]
  int v11; // [esp+8h] [ebp-2Ch]
  unsigned int v12[2]; // [esp+18h] [ebp-1Ch] BYREF
  unsigned int v13[2]; // [esp+20h] [ebp-14h] BYREF
  int v14; // [esp+30h] [ebp-4h]
  float v15; // [esp+38h] [ebp+4h]
  float v16; // [esp+38h] [ebp+4h]
  int v17; // [esp+3Ch] [ebp+8h]

  if ( a2 && (*(int (__thiscall **)(_BYTE *))(*(_DWORD *)a2 + 0xC))(a2) == 4 && a3 )
  {
    if ( *(this + 5) )
    {
      *(this + 4) = a2[4];
      sub_4A3520(this, a2[6]);
      v10 = (*(int (__thiscall **)(_BYTE *, unsigned int *))(*(_DWORD *)a2 + 0x28))(a2, v12);
      v4 = *(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 0x2C);
      v14 = 0;
      v4(this, v10);
      FormHeapFree(v12[0]);
      return;
    }
    if ( !a2[5] )
    {
      if ( *(this + 4) )
      {
        v5 = a2[4];
        if ( v5 && a2[6] > *(this + 6) )
        {
          *(this + 4) = v5;
          sub_4A3520(this, a2[6]);
          v6 = (*(int (__thiscall **)(_BYTE *, unsigned int *))(*(_DWORD *)a2 + 0x28))(a2, v12);
          v14 = 1;
LABEL_13:
          (*(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 0x2C))(this, v6);
          v14 = 0xFFFFFFFF;
          BSStringT_Clear(v12);
        }
      }
      else
      {
        v7 = a2[4];
        if ( v7 )
        {
          *(this + 4) = v7;
          sub_4A3520(this, a2[6]);
          v6 = (*(int (__thiscall **)(_BYTE *, unsigned int *))(*(_DWORD *)a2 + 0x28))(a2, v12);
          v14 = 2;
          goto LABEL_13;
        }
        if ( a2[6] > *(this + 6) )
        {
          v11 = (*(int (__thiscall **)(_BYTE *, unsigned int *))(*(_DWORD *)a2 + 0x28))(a2, v13);
          v8 = *(void (__thiscall **)(_BYTE *, int))(*(_DWORD *)this + 0x2C);
          v14 = 3;
          v8(this, v11);
          v14 = 0xFFFFFFFF;
          BSStringT_Clear(v13);
        }
        v9 = (unsigned __int8)a2[6];
        v15 = (double)((unsigned __int8)*(this + 6) * (unsigned __int8)*(this + 6)
                     + v9 * (0x64 - (unsigned __int8)*(this + 6)))
            + (double)(v9 * v9 + (unsigned __int8)*(this + 6) * (0x64 - v9));
        v16 = v15 * dbl_A40048;
        v17 = (int)sub_4842F0(v16);
        sub_4A3520(this, v17);
      }
    }
  }
}
