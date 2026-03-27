int __thiscall sub_73EA40(NiPoint3 *this, int a2)
{
  int v3; // esi
  bool v4; // cc
  int v5; // eax
  unsigned int v6; // eax
  NiTransform v8; // [esp+Ch] [ebp-34h] BYREF

  sub_723930((_WORD *)a2);
  *((float *)this + 9) = 0.0;
  v3 = 0;
  if ( *(_WORD *)(a2 + 0xB6) )
  {
    v4 = *(unsigned __int16 *)(a2 + 0xB6) == 0;
    do
    {
      if ( !v4 )
      {
        v5 = *(_DWORD *)(*(_DWORD *)(a2 + 0xB0) + 4 * v3);
        if ( v5 )
          sub_72A6B0((float *)this + 6, (float *)(v5 + 0x20));
      }
      v6 = *(unsigned __int16 *)(a2 + 0xB6);
      v4 = v6 <= ++v3;
    }
    while ( (int)v6 > v3 );
  }
  sub_718A80((float *)(a2 + 0x64), &v8);
  return sub_72A820(&this->z, this + 2, &v8);
}
