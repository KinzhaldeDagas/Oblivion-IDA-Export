int __thiscall sub_6DBDB0(int this, float a2, unsigned int *a3, int *a4, float *a5)
{
  int result; // eax
  int v7; // eax
  float *v8; // edi
  int v9; // esi
  unsigned __int8 v10; // cl
  double v11; // st7
  int v12; // edx
  unsigned int v13; // ebp
  unsigned int v14; // ecx
  char v15; // bl
  int v16; // [esp+18h] [ebp-8h]

  if ( (*(_BYTE *)(this + 0xC) & 0x10) != 0 )
  {
    sub_6DBBE0((float *)this, a2, a3, a4, a5);
    result = *a3;
    *(_DWORD *)(this + 0x10) = *a3;
  }
  else
  {
    v7 = *(_DWORD *)(this + 0x18);
    v8 = 0;
    if ( v7 )
    {
      v9 = *(_DWORD *)(v7 + 8);
      v10 = *(_BYTE *)(v7 + 0x14);
      v8 = *(float **)(v7 + 0xC);
      v16 = v9;
    }
    else
    {
      v16 = 0;
      v10 = 0;
      v9 = 0;
    }
    v11 = a2;
    if ( *v8 < (double)a2 )
    {
      v12 = v10;
      v13 = v9 - 1;
      if ( *(float *)((char *)v8 + (v9 - 1) * v10) > v11 )
      {
        v14 = *(_DWORD *)(this + 0x10);
        v15 = 1;
        if ( v14 >= v13 )
        {
LABEL_19:
          result = (int)a5;
        }
        else
        {
          while ( *(float *)((char *)v8 + v14 * v12) != v11
               && (*(float *)((char *)v8 + v14 * v12) >= v11 || *(float *)((char *)v8 + v12 * (v14 + 1)) <= v11) )
          {
            if ( v14 == v16 - 2 && v15 )
            {
              v14 = 0;
              v15 = 0;
            }
            else
            {
              ++v14;
            }
            if ( v14 >= v13 )
              goto LABEL_19;
          }
          *(_DWORD *)(this + 0x10) = v14;
          result = v14 + 1;
        }
        *a5 = (v11 - *(float *)((char *)v8 + v14 * v12))
            / (*(float *)((char *)v8 + result * v12) - *(float *)((char *)v8 + v14 * v12));
        *a3 = v14;
        *a4 = result;
      }
      else
      {
        *a3 = v9 - 2;
        *a4 = v13;
        *a5 = 1.0;
        return (int)a4;
      }
    }
    else
    {
      *a3 = 0;
      *a4 = 1;
      *a5 = 0.0;
      return (int)a5;
    }
  }
  return result;
}
