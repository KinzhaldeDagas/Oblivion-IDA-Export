NiAVObject *__cdecl sub_4BC7D0(int a1)
{
  NiAVObject *v1; // edi
  unsigned __int16 *v2; // eax
  int v3; // edx
  int v4; // edx
  NiObjectNET *v5; // eax
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

  v1 = 0;
  if ( a1 )
  {
    if ( *(_BYTE *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x170))(a1) + 4) == 0x29 )
    {
      v2 = (unsigned __int16 *)(*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x170))(a1);
      v3 = v2[0x14];
      *(float *)v14 = 0.0;
      *(float *)&v14[1] = 1.0;
      v16 = v3;
      v4 = v2[0x12];
      *(float *)&v14[2] = 1.0;
      *(float *)&v14[3] = flt_A3D65C;
      v13 = (float)v16;
      v12 = (float)v2[0x13];
      v11 = (float)v4;
      v1 = sub_47EA60(v11, v12, v13, v14);
      v5 = (NiObjectNET *)FormHeapAlloc(0x1Cu);
      v15 = 0;
      if ( v5 )
        v6 = (BSShaderProperty *)sub_47F920(v5);
      else
        v6 = 0;
      v6->member.super.flags |= 1u;
      v15 = 0xFFFFFFFF;
      sub_405680((NiNode *)v1, v6);
      v7 = (NiObjectNET *)FormHeapAlloc(0x1Cu);
      v8 = (BSShaderProperty *)v7;
      v15 = 3;
      if ( v7 )
      {
        NiObjectNET::NiObjectNET(v7);
        v8->vtbl = &NiVertexColorProperty::`vftable';
        v8->member.super.flags = 8;
      }
      else
      {
        v8 = 0;
      }
      v9 = v8->member.super.flags & 0xFFC7 | 0x10;
      v15 = 0xFFFFFFFF;
      v8->member.super.flags = v9;
      sub_405680((NiNode *)v1, v8);
    }
  }
  return v1;
}
