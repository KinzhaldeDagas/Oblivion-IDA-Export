char __cdecl sub_95D730(float *a1, float *a2, float *a3, int a4)
{
  float *v4; // ebp
  float *v5; // eax
  float *v6; // eax
  int v8; // edi
  int v9; // eax
  unsigned int v10; // eax
  unsigned int v11; // esi
  int v12; // edx

  v4 = a3;
  if ( *((_DWORD *)a3 + 2) || *(_DWORD *)a3 != 1 )
  {
    v8 = a4;
    if ( a4 && (v9 = (*(int (__thiscall **)(int))(*(_DWORD *)a4 + 4))(a4)) != 0 )
    {
      while ( (char *)v9 != dword_B3FD70 )
      {
        v9 = *(_DWORD *)(v9 + 4);
        if ( !v9 )
          goto LABEL_11;
      }
      return sub_95D6C0(a1, a2, (int)v4, v8);
    }
    else
    {
LABEL_11:
      v10 = *(unsigned __int16 *)(v8 + 0xB6);
      v11 = 0;
      LOBYTE(a3) = 0;
      if ( v10 )
      {
        while ( *(_DWORD *)v4 != 1 || *((_DWORD *)v4 + 1) != 1 || !*((_WORD *)v4 + 0x12) )
        {
          if ( v10 > v11 )
          {
            v12 = *(_DWORD *)(v8 + 0xB0);
            if ( *(_DWORD *)(v12 + 4 * v11) )
            {
              if ( sub_95D540(a1, a2, (int)v4, *(float **)(v12 + 4 * v11)) )
                LOBYTE(a3) = 1;
            }
          }
          v10 = *(unsigned __int16 *)(v8 + 0xB6);
          if ( ++v11 >= v10 )
            return (char)a3;
        }
        return 1;
      }
      else
      {
        return (char)a3;
      }
    }
  }
  else
  {
    v5 = (float *)FormHeapAlloc(0x44u);
    if ( v5 )
      v6 = sub_95A2D0(v5, a4);
    else
      v6 = 0;
    a3 = v6;
    *((_DWORD *)v4 + 0xA) = v6;
    sub_4BACA0((NiTArray_NiTexturingPropertyMap *)(v4 + 6), &a3);
    return 1;
  }
}
