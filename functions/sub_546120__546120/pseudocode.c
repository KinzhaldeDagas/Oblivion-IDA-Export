void __thiscall sub_546120(int this, unsigned int a2)
{
  BSShaderAccumulator *inited; // eax
  float *v4; // esi

  if ( *(_DWORD *)(this + 0x10) ) /*0x546123*/
  {
    if ( *(_BYTE *)(this + 0x24) ) /*0x546129*/
    {
      inited = BSShaderAccumulator_GetOrCreateGlobal(); /*0x54612f*/
      if ( inited ) /*0x546136*/
      {
        v4 = *(float **)(this + 0x10); /*0x546138*/
        v4[0x25] = v4[0x25] / dbl_A492B0; /*0x54614f*/
        sub_7AA130(inited, v4, a2); /*0x546155*/
        v4[0x25] = v4[0x25] * dbl_A492B0; /*0x546166*/
      }
    }
  }
}
