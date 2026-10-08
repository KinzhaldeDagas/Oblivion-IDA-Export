void __thiscall sub_4BFE80(_DWORD *this)
{
  BSShaderAccumulator *Global; // eax
  int i; // ebx
  int v4; // eax
  int *v5; // eax
  int j; // esi
  int v7; // eax
  bool v8; // zf
  _DWORD *v9; // eax
  int *v10; // ecx

  Global = BSShaderAccumulator_GetOrCreateGlobal(); /*0x4bfe85*/
  BSShaderAccumulator_ClearAccumulatedPasses(Global); /*0x4bfe8c*/
  for ( i = 0; i < 4; ++i ) /*0x4bfe91*/
  {
    if ( (unsigned __int8)i < 4u ) /*0x4bfe96*/
    {
      v4 = *(this + 9); /*0x4bfe98*/
      if ( v4 ) /*0x4bfe9d*/
      {
        v5 = *(int **)(v4 + 4 * (unsigned __int8)i + 0x20); /*0x4bfea2*/
        if ( v5 ) /*0x4bfea8*/
          sub_4C9230(v5); /*0x4bfeac*/
      }
    }
    for ( j = 0; j < 8; ++j ) /*0x4bfeb1*/
    {
      if ( (unsigned __int8)i < 4u && (unsigned __int16)j < 8u ) /*0x4bfebf*/
      {
        v7 = *(this + 9); /*0x4bfec1*/
        if ( v7 ) /*0x4bfec6*/
        {
          v8 = *(_DWORD *)(v7 + 4 * (unsigned __int8)i + 0x30) == 0; /*0x4bfecb*/
          v9 = (_DWORD *)(v7 + 4 * (unsigned __int8)i + 0x30); /*0x4bfed0*/
          if ( !v8 ) /*0x4bfed4*/
          {
            v10 = *(int **)(*v9 + 4 * (unsigned __int16)j); /*0x4bfedb*/
            if ( v10 ) /*0x4bfee0*/
              sub_4C9230(v10); /*0x4bfee2*/
          }
        }
      }
    }
  }
}
