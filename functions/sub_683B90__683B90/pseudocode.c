double __thiscall sub_683B90(int this, int a2, float a3)
{
  BSExtraDataVtbl *v4; // eax
  char *v5; // ecx

  v4 = sub_42B410((BSExtraData *)(this + 0x14));
  if ( a2 )
  {
    if ( v4 )
    {
      v5 = *(char **)(this + 0x30);
      if ( v5 )
      {
        if ( (unsigned int)(sub_680CB0(v5) - 1) <= 3 )
          return (float)sub_680D10((float *)*(_DWORD *)(this + 0x30));
      }
    }
  }
  return a3;
}
