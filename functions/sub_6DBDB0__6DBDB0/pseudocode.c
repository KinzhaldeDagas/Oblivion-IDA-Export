unsigned int __thiscall sub_6DBDB0(int this, float a2, unsigned int *a3, int *a4, float *a5)
{
  unsigned int result; // eax
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

  if ( (*(_BYTE *)(this + 0xC) & 0x10) != 0 ) /*0x6dbdc3*/
  {
    sub_6DBBE0((float *)this, a2, a3, a4, a5); /*0x6dbdde*/
    result = *a3; /*0x6dbde3*/
    *(_DWORD *)(this + 0x10) = *a3; /*0x6dbde6*/
  }
  else
  {
    v7 = *(_DWORD *)(this + 0x18); /*0x6dbdf0*/
    v8 = 0; /*0x6dbdf4*/
    if ( v7 ) /*0x6dbdf8*/
    {
      v9 = *(_DWORD *)(v7 + 8); /*0x6dbdfa*/
      v10 = *(_BYTE *)(v7 + 0x14); /*0x6dbdfd*/
      v8 = *(float **)(v7 + 0xC); /*0x6dbe00*/
      v16 = v9; /*0x6dbe03*/
    }
    else
    {
      v16 = 0; /*0x6dbe09*/
      v10 = 0; /*0x6dbe0d*/
      v9 = 0; /*0x6dbe0f*/
    }
    v11 = a2; /*0x6dbe11*/
    if ( *v8 < (double)a2 ) /*0x6dbe1e*/
    {
      v12 = v10; /*0x6dbe47*/
      v13 = v9 - 1; /*0x6dbe4b*/
      if ( *(float *)((char *)v8 + (v9 - 1) * v10) > v11 ) /*0x6dbe5d*/
      {
        v14 = *(_DWORD *)(this + 0x10); /*0x6dbe86*/
        v15 = 1; /*0x6dbe8b*/
        if ( v14 >= v13 ) /*0x6dbe8d*/
        {
LABEL_19:
          result = (unsigned int)a5; /*0x6dbede*/
        }
        else
        {
          while ( *(float *)((char *)v8 + v14 * v12) != v11 /*0x6dbec0*/
               && (*(float *)((char *)v8 + v14 * v12) >= v11 || *(float *)((char *)v8 + v12 * (v14 + 1)) <= v11) )
          {
            if ( v14 == v16 - 2 && v15 ) /*0x6dbecf*/
            {
              v14 = 0; /*0x6dbed1*/
              v15 = 0; /*0x6dbed3*/
            }
            else
            {
              ++v14; /*0x6dbed7*/
            }
            if ( v14 >= v13 ) /*0x6dbedc*/
              goto LABEL_19; /*0x6dbedc*/
          }
          *(_DWORD *)(this + 0x10) = v14; /*0x6dbf16*/
          result = v14 + 1; /*0x6dbf19*/
        }
        *a5 = (v11 - *(float *)((char *)v8 + v14 * v12)) /*0x6dbefe*/
            / (*(float *)((char *)v8 + result * v12) - *(float *)((char *)v8 + v14 * v12));
        *a3 = v14; /*0x6dbf04*/
        *a4 = result; /*0x6dbf0a*/
      }
      else
      {
        *a3 = v9 - 2; /*0x6dbe72*/
        *a4 = v13; /*0x6dbe74*/
        *a5 = 1.0; /*0x6dbe76*/
        return (unsigned int)a4; /*0x6dbe65*/
      }
    }
    else
    {
      *a3 = 0; /*0x6dbe31*/
      *a4 = 1; /*0x6dbe38*/
      *a5 = 0.0; /*0x6dbe3e*/
      return (unsigned int)a5; /*0x6dbe2c*/
    }
  }
  return result; /*0x6dbde5*/
}
