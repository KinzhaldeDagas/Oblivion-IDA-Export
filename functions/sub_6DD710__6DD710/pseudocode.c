unsigned int __thiscall sub_6DD710(int this, float a2, unsigned int *a3, int *a4, float *a5)
{
  unsigned int result; // eax
  int v7; // eax
  int v8; // ebx
  unsigned __int8 v9; // cl
  float *v10; // esi
  double v11; // st7
  int v12; // edx
  unsigned int v13; // ebp
  unsigned int v14; // ecx
  char v15; // bl
  int v16; // [esp+18h] [ebp-8h]

  if ( (*(_BYTE *)(this + 0x3C) & 0x10) != 0 ) /*0x6dd723*/
  {
    sub_6DD540((float *)this, a2, a3, a4, a5); /*0x6dd73e*/
    result = *a3; /*0x6dd743*/
    *(_DWORD *)(this + 0x40) = *a3; /*0x6dd745*/
  }
  else
  {
    v7 = *(_DWORD *)(this + 0x48); /*0x6dd750*/
    if ( v7 ) /*0x6dd756*/
    {
      v8 = *(_DWORD *)(v7 + 8); /*0x6dd758*/
      v9 = *(_BYTE *)(v7 + 0x14); /*0x6dd75b*/
      v10 = *(float **)(v7 + 0xC); /*0x6dd75e*/
      v16 = v8; /*0x6dd761*/
    }
    else
    {
      v10 = 0; /*0x6dd767*/
      v16 = 0; /*0x6dd769*/
      v9 = 0; /*0x6dd771*/
      v8 = 0; /*0x6dd773*/
    }
    v11 = a2; /*0x6dd775*/
    if ( *v10 < (double)a2 ) /*0x6dd782*/
    {
      v12 = v9; /*0x6dd7ab*/
      v13 = v8 - 1; /*0x6dd7af*/
      if ( *(float *)((char *)v10 + (v8 - 1) * v9) > v11 ) /*0x6dd7c1*/
      {
        v14 = *(_DWORD *)(this + 0x40); /*0x6dd7e6*/
        v15 = 1; /*0x6dd7eb*/
        if ( v14 >= v13 ) /*0x6dd7ed*/
        {
LABEL_19:
          result = (unsigned int)a5; /*0x6dd83e*/
        }
        else
        {
          while ( *(float *)((char *)v10 + v14 * v12) != v11 /*0x6dd820*/
               && (*(float *)((char *)v10 + v14 * v12) >= v11 || *(float *)((char *)v10 + v12 * (v14 + 1)) <= v11) )
          {
            if ( v14 == v16 - 2 && v15 ) /*0x6dd82f*/
            {
              v14 = 0; /*0x6dd831*/
              v15 = 0; /*0x6dd833*/
            }
            else
            {
              ++v14; /*0x6dd837*/
            }
            if ( v14 >= v13 ) /*0x6dd83c*/
              goto LABEL_19; /*0x6dd83c*/
          }
          *(_DWORD *)(this + 0x40) = v14; /*0x6dd876*/
          result = v14 + 1; /*0x6dd879*/
        }
        *a5 = (v11 - *(float *)((char *)v10 + v14 * v12)) /*0x6dd85e*/
            / (*(float *)((char *)v10 + result * v12) - *(float *)((char *)v10 + v14 * v12));
        *a3 = v14; /*0x6dd864*/
        *a4 = result; /*0x6dd86a*/
      }
      else
      {
        *a3 = v8 - 2; /*0x6dd7d6*/
        *a4 = v13; /*0x6dd7d8*/
        *a5 = 1.0; /*0x6dd7da*/
        return (unsigned int)a4; /*0x6dd7c9*/
      }
    }
    else
    {
      *a3 = 0; /*0x6dd795*/
      *a4 = 1; /*0x6dd79c*/
      *a5 = 0.0; /*0x6dd7a2*/
      return (unsigned int)a5; /*0x6dd790*/
    }
  }
  return result; /*0x6dd748*/
}
