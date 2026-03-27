void __thiscall sub_546120(int this, unsigned int a2)
{
  BSShaderAccumulator *inited; // eax
  int v4; // esi

  if ( *(_DWORD *)(this + 0x10) )
  {
    if ( *(_BYTE *)(this + 0x24) )
    {
      inited = InitBSShaderAccumulator();
      if ( inited )
      {
        v4 = *(_DWORD *)(this + 0x10);
        *(float *)(v4 + 0x94) = *(float *)(v4 + 0x94) / dbl_A492B0;
        sub_7AA130(inited, v4, a2);
        *(float *)(v4 + 0x94) = *(float *)(v4 + 0x94) * dbl_A492B0;
      }
    }
  }
}
