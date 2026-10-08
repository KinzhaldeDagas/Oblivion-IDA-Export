NiAVObject *__cdecl sub_4BC7D0(int a1)
{
  NiAVObject *v1; // edi
  unsigned __int16 *v2; // eax
  int v3; // edx
  int v4; // edx
  NiAlphaProperty *v5; // eax
  BSShaderProperty *v6; // eax
  NiObjectNET *v7; // eax
  BSShaderProperty *v8; // esi
  UInt16 v9; // ax
  float v11; // [esp+0h] [ebp-38h]
  float v12; // [esp+4h] [ebp-34h]
  float v13; // [esp+8h] [ebp-30h]
  int v14[4]; // [esp+1Ch] [ebp-1Ch] BYREF
  int v15; // [esp+34h] [ebp-4h]
  int v16; // [esp+3Ch] [ebp+4h]

  v1 = 0; /*0x4bc7f9*/
  if ( a1 ) /*0x4bc7fd*/
  {
    if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x170))(a1) + 4) == 0x29 ) /*0x4bc813*/
    {
      v2 = (unsigned __int16 *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x170))(a1); /*0x4bc823*/
      v3 = v2[0x14]; /*0x4bc827*/
      *(float *)v14 = 0.0; /*0x4bc82b*/
      *(float *)&v14[1] = 1.0; /*0x4bc835*/
      v16 = v3; /*0x4bc839*/
      v4 = v2[0x12]; /*0x4bc83d*/
      *(float *)&v14[2] = 1.0; /*0x4bc841*/
      *(float *)&v14[3] = kHeadBodyNormalMatchRadius; /*0x4bc84b*/
      v13 = (float)v16; /*0x4bc85f*/
      v12 = (float)v2[0x13]; /*0x4bc86b*/
      v11 = (float)v4; /*0x4bc873*/
      v1 = sub_47EA60(v11, v12, v13, v14); /*0x4bc87d*/
      v5 = (NiAlphaProperty *)FormHeapAlloc(0x1Cu); /*0x4bc87f*/
      v15 = 0; /*0x4bc88d*/
      if ( v5 ) /*0x4bc895*/
        v6 = (BSShaderProperty *)NiAlphaProperty_ctor(v5); /*0x4bc899*/
      else
        v6 = 0; /*0x4bc8a0*/
      v6->member.super.flags |= 1u; /*0x4bc8a2*/
      v15 = 0xFFFFFFFF; /*0x4bc8aa*/
      sub_405680((NiNode *)v1, v6); /*0x4bc8b2*/
      v7 = (NiObjectNET *)FormHeapAlloc(0x1Cu); /*0x4bc8b9*/
      v8 = (BSShaderProperty *)v7; /*0x4bc8be*/
      v15 = 3; /*0x4bc8c9*/
      if ( v7 ) /*0x4bc8d1*/
      {
        NiObjectNET::NiObjectNET(v7); /*0x4bc8d5*/
        v8->vtbl = &NiVertexColorProperty::`vftable'; /*0x4bc8da*/
        v8->member.super.flags = 8; /*0x4bc8e0*/
      }
      else
      {
        v8 = 0; /*0x4bc8e8*/
      }
      v9 = v8->member.super.flags & 0xFFC7 | 0x10; /*0x4bc8f2*/
      v15 = 0xFFFFFFFF; /*0x4bc8f9*/
      v8->member.super.flags = v9; /*0x4bc901*/
      sub_405680((NiNode *)v1, v8); /*0x4bc905*/
    }
  }
  return v1; /*0x4bc90c*/
}
