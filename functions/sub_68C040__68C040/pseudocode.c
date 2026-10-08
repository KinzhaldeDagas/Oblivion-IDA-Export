_DWORD *__thiscall sub_68C040(_DWORD *this)
{
  NiAVObject *OctahedronGeometry; // ebx
  int v3; // eax
  void (__thiscall ***v4)(_DWORD, int); // edi
  int v6[4]; // [esp+10h] [ebp-10h] BYREF

  *this = 0; /*0x68c046*/
  *(this + 1) = 0; /*0x68c04c*/
  if ( dword_B3C094[2] ) /*0x68c053*/
  {
    ++dword_B3C094[2]; /*0x68c0da*/
    return this; /*0x68c0e1*/
  }
  else
  {
    *(float *)v6 = 0.0; /*0x68c05f*/
    *(float *)&v6[1] = 1.0; /*0x68c06a*/
    *(float *)&v6[3] = 1.0; /*0x68c06f*/
    *(float *)&v6[2] = 0.0; /*0x68c073*/
    OctahedronGeometry = NiTriShape_CreateOctahedronGeometry(flt_A31C80, (const NiColorAlpha *)v6); /*0x68c085*/
    v3 = dword_B3C094[3]; /*0x68c087*/
    if ( (NiAVObject *)dword_B3C094[3] != OctahedronGeometry ) /*0x68c091*/
    {
      if ( v3 ) /*0x68c095*/
      {
        v4 = (void (__thiscall ***)(_DWORD, int))dword_B3C094[3]; /*0x68c098*/
        if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) ) /*0x68c09e*/
          (**v4)(v4, 1); /*0x68c0b4*/
      }
      dword_B3C094[3] = (int)OctahedronGeometry; /*0x68c0b9*/
      if ( OctahedronGeometry ) /*0x68c0bf*/
        InterlockedIncrement((volatile LONG *)&OctahedronGeometry->members); /*0x68c0c5*/
    }
    ++dword_B3C094[2]; /*0x68c0cb*/
    return this; /*0x68c0d3*/
  }
}
