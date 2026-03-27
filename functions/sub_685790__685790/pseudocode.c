bool __thiscall sub_685790(char *this, MobileObject *a2)
{
  float **v3; // esi
  int *v5; // eax
  int v6; // ecx
  int v7; // edx
  float v8; // eax
  char v9; // bl
  int v10; // eax
  double v11; // st7
  int v13[2]; // [esp+18h] [ebp-Ch] BYREF
  float v14; // [esp+20h] [ebp-4h]
  int v15; // [esp+28h] [ebp+4h]

  v3 = *(float ***)sub_6899C0(this);
  if ( !v3 )
    return 1;
  if ( a2 )
  {
    sub_68B110(v3);
    v6 = *v5;
    *(float *)&v15 = 0.0;
    v7 = v5[1];
    v8 = *((float *)v5 + 2);
    v13[0] = v6;
    v13[1] = v7;
    v14 = v8;
    v9 = 0;
    if ( !*(_DWORD *)(sub_6899C0(this) + 4) )
    {
      *(float *)&v15 = sub_6899D0((float *)this);
      v9 = 1;
      return sub_684B30(a2, (float *)v13, *(float *)&v15, v9 == 0) != 0;
    }
    v10 = DName::status(v3);
    if ( v10 )
    {
      if ( v10 != 1 )
        goto LABEL_10;
      v11 = 0.0;
      v9 = 1;
    }
    else
    {
      v11 = flt_A3D8F0;
    }
    *(float *)&v15 = v11;
LABEL_10:
    if ( (*(unsigned __int8 (__thiscall **)(char *))(*(_DWORD *)this + 0xC))(this) )
      v14 = a2->super.pos[2];
    return sub_684B30(a2, (float *)v13, *(float *)&v15, v9 == 0) != 0;
  }
  return 1;
}
