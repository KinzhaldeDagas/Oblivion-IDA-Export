int __thiscall sub_73EA40(NiPoint3 *this, int a2)
{
  int v3; // esi
  bool v4; // cc
  int v5; // eax
  unsigned int v6; // eax
  NiTransform v8; // [esp+Ch] [ebp-34h] BYREF

  sub_723930((_WORD *)a2); /*0x73ea4e*/
  *((float *)this + 9) = 0.0; /*0x73ea55*/
  v3 = 0; /*0x73ea58*/
  if ( *(_WORD *)(a2 + 0xB6) ) /*0x73ea5a*/
  {
    v4 = *(unsigned __int16 *)(a2 + 0xB6) == 0; /*0x73ea65*/
    do /*0x73ea8e*/
    {
      if ( !v4 ) /*0x73ea67*/
      {
        v5 = *(_DWORD *)(*(_DWORD *)(a2 + 0xB0) + 4 * v3); /*0x73ea6f*/
        if ( v5 ) /*0x73ea74*/
          NiSphere_Merge((float *)this + 6, (float *)(v5 + 0x20)); /*0x73ea7d*/
      }
      v6 = *(unsigned __int16 *)(a2 + 0xB6); /*0x73ea82*/
      v4 = v6 <= ++v3; /*0x73ea8c*/
    }
    while ( (int)v6 > v3 ); /*0x73ea8e*/
  }
  sub_718A80((float *)(a2 + 0x64), &v8); /*0x73ea98*/
  return NiBound_TransformInto(&this->z, this + 2, &v8); /*0x73eaae*/
}
