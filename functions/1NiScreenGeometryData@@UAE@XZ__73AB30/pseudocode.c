void __thiscall NiScreenGeometryData::~NiScreenGeometryData(NiScreenGeometryData *this)
{
  unsigned int v2; // edi
  bool v3; // zf
  int v4; // eax
  int v5; // ebx
  unsigned int *v6; // ecx
  NiD3DPass *a2[2]; // [esp+10h] [ebp-14h] BYREF
  int v8; // [esp+20h] [ebp-4h]

  a2[1] = (NiD3DPass *)this; /*0x73ab58*/
  *(_DWORD *)this = &NiScreenGeometryData::`vftable'; /*0x73ab5c*/
  v2 = 0; /*0x73ab62*/
  v3 = *((_WORD *)this + 0x35) == 0; /*0x73ab64*/
  v8 = 1; /*0x73ab68*/
  if ( !v3 ) /*0x73ab70*/
  {
    do /*0x73abde*/
    {
      v4 = *((_DWORD *)this + 0x19); /*0x73ab78*/
      v5 = *(_DWORD *)(v4 + 4 * v2); /*0x73ab7b*/
      if ( v2 < *((unsigned __int16 *)this + 0x35) ) /*0x73ab7e*/
      {
        if ( *(_DWORD *)(v4 + 4 * v2) ) /*0x73ab89*/
          --*((_WORD *)this + 0x36); /*0x73ab8f*/
      }
      else
      {
        *((_WORD *)this + 0x35) = v2 + 1; /*0x73ab83*/
      }
      *(_DWORD *)(*((_DWORD *)this + 0x19) + 4 * v2) = 0; /*0x73ab9a*/
      if ( v5 ) /*0x73aba1*/
      {
        FormHeapFree(*(_DWORD *)(v5 + 8)); /*0x73aba7*/
        FormHeapFree(*(_DWORD *)(v5 + 0xC)); /*0x73abb0*/
        FormHeapFree(*(_DWORD *)(v5 + 0x10)); /*0x73abb9*/
        v6 = (unsigned int *)unk_B40134; /*0x73abbe*/
        a2[0] = (NiD3DPass *)v5; /*0x73abcc*/
        sub_73A5E0(v6, a2); /*0x73abd0*/
      }
      ++v2; /*0x73abd9*/
    }
    while ( v2 < *((unsigned __int16 *)this + 0x35) ); /*0x73abde*/
  }
  NiTArray_SetSize((unsigned __int16 *)this + 0x30, 0); /*0x73abe7*/
  *((_DWORD *)this + 0x18) = &NiTArray<NiScreenGeometryData::ScreenElement *>::`vftable'; /*0x73abec*/
  FormHeapFree(*((_DWORD *)this + 0x19)); /*0x73abf6*/
  v8 = 0xFFFFFFFF; /*0x73ac00*/
  NiTriShapeData_Destruct((NiTriShapeData *)this); /*0x73ac08*/
}
