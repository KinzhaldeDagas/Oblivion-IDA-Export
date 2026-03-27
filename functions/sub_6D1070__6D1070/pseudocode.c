void __thiscall sub_6D1070(int this, float *a2, float a3)
{
  unsigned int v3; // eax
  int v4; // eax
  char v5; // al
  float v6; // [esp+10h] [ebp+8h]

  v3 = LOWORD(a3);
  v6 = 0.0;
  if ( v3 < *(unsigned __int16 *)(this + 0x4A) )
    v6 = *(float *)(*(_DWORD *)(this + 0x44) + 4 * v3);
  if ( a2 )
  {
    v4 = (*(int (__thiscall **)(float *))(*(_DWORD *)a2 + 4))(a2);
    if ( v4 )
    {
      while ( (char *)v4 != dword_B3CFBC )
      {
        v4 = *(_DWORD *)(v4 + 4);
        if ( !v4 )
          goto LABEL_8;
      }
      v5 = 1;
    }
    else
    {
LABEL_8:
      v5 = 0;
    }
    sub_6D2B70(v5 != 0 ? a2 : 0, v6);
  }
  else
  {
    sub_6D2B70(0, v6);
  }
}
