// Find the first empty rendered-texture slot in a BSImageSpaceShader, replace its strong-owned texture reference, and AddRef the new texture.
int __thiscall BSImageSpaceShader_BindFirstFreeRenderedTexture(void *imageSpaceShader, void *renderedTexture)
{
  int v3; // esi
  int result; // eax
  _DWORD *v5; // ecx
  volatile LONG *v6; // ebx

  v3 = 0xFFFFFFFF; /*0x7fa474*/
  result = 2; /*0x7fa477*/
  v5 = (char *)imageSpaceShader + 0x80; /*0x7fa47c*/
  while ( v3 == 0xFFFFFFFF ) /*0x7fa485*/
  {
    if ( !v5[0xFFFFFFFF] ) /*0x7fa487*/
    {
      v3 = result - 2; /*0x7fa48d*/
      break; /*0x7fa493*/
    }
    if ( !*v5 ) /*0x7fa495*/
    {
      v3 = result - 1; /*0x7fa49a*/
      break; /*0x7fa4a0*/
    }
    if ( !v5[1] ) /*0x7fa4a2*/
    {
      v3 = result; /*0x7fa4ab*/
      break; /*0x7fa4ad*/
    }
    if ( !v5[2] ) /*0x7fa4af*/
      v3 = result + 1; /*0x7fa4b5*/
    result += 4; /*0x7fa4b8*/
    v5 += 4; /*0x7fa4be*/
    if ( (unsigned int)(result - 2) >= 0x10 ) /*0x7fa4c4*/
    {
      if ( v3 == 0xFFFFFFFF ) /*0x7fa4c9*/
        return result; /*0x7fa4c9*/
      break; /*0x7fa4c9*/
    }
  }
  if ( renderedTexture ) /*0x7fa4d6*/
  {
    result = (*(int (__thiscall **)(void *))(*(_DWORD *)renderedTexture + 4))(renderedTexture); /*0x7fa4e4*/
    if ( result ) /*0x7fa4e8*/
    {
      while ( (char *)result != stru_B3F95C ) /*0x7fa4f5*/
      {
        result = *(_DWORD *)(result + 4); /*0x7fa4f7*/
        if ( !result ) /*0x7fa4fc*/
          goto LABEL_17; /*0x7fa4fc*/
      }
      v6 = *((volatile LONG **)imageSpaceShader + v3 + 0x1F); /*0x7fa525*/
      if ( v6 != renderedTexture ) /*0x7fa52b*/
      {
        if ( v6 ) /*0x7fa52f*/
        {
LABEL_26:
          if ( !InterlockedDecrement(v6 + 1) ) /*0x7fa547*/
            (**(void (__thiscall ***)(void *, int))v6)((void *)v6, 1); /*0x7fa55d*/
        }
LABEL_28:
        *((_DWORD *)imageSpaceShader + v3 + 0x1F) = renderedTexture; /*0x7fa55f*/
        return InterlockedIncrement((volatile LONG *)renderedTexture + 1); /*0x7fa567*/
      }
    }
    else
    {
LABEL_17:
      result = (*(int (__thiscall **)(void *))(*(_DWORD *)renderedTexture + 4))(renderedTexture); /*0x7fa4fe*/
      if ( result ) /*0x7fa509*/
      {
        while ( (float *)result != &MEMORY[0xB3F9B0][0x155] ) /*0x7fa515*/
        {
          result = *(_DWORD *)(result + 4); /*0x7fa517*/
          if ( !result ) /*0x7fa51c*/
            return result; /*0x7fa51c*/
        }
        v6 = *((volatile LONG **)imageSpaceShader + v3 + 0x1F); /*0x7fa537*/
        if ( v6 != renderedTexture ) /*0x7fa53d*/
        {
          if ( v6 ) /*0x7fa541*/
            goto LABEL_26; /*0x7fa541*/
          goto LABEL_28; /*0x7fa541*/
        }
      }
    }
  }
  return result; /*0x7fa520*/
}
