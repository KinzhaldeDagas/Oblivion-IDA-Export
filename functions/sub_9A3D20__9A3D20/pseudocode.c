signed int __stdcall sub_9A3D20(int a1, _DWORD *a2, int a3)
{
  float *v3; // esi
  int v4; // ebx
  signed int result; // eax
  int v6; // ebx
  int v7; // ebx
  int v8; // eax
  int v9; // ebx
  float *v10; // eax
  float *v11; // eax
  float *v12; // eax
  float *v13; // eax
  float *v14; // eax

  v3 = (float *)a2[0xC]; /*0x9a3d2e*/
  v4 = a2[5]; /*0x9a3d31*/
  if ( !g_D3DXParameterDispatchInitialized ) /*0x9a3d34*/
    NiD3DHLSLShader__InitializeParameterClassTables(); /*0x9a3d36*/
  result = 3; /*0x9a3d41*/
  if ( g_D3DXParameterClassDispatch[(unsigned __int8)v4] == 3 ) /*0x9a3d4d*/
  {
    unk_BAAA70[4 * a1] = *v3; /*0x9a3d5a*/
  }
  else
  {
    v6 = a2[5]; /*0x9a3d6b*/
    if ( !g_D3DXParameterDispatchInitialized ) /*0x9a3d6e*/
      NiD3DHLSLShader__InitializeParameterClassTables(); /*0x9a3d70*/
    result = 4; /*0x9a3d7b*/
    if ( g_D3DXParameterClassDispatch[(unsigned __int8)v6] == 4 ) /*0x9a3d87*/
    {
      unk_BAAA70[4 * a1] = *v3; /*0x9a3d94*/
    }
    else
    {
      v7 = a2[5]; /*0x9a3da5*/
      if ( !g_D3DXParameterDispatchInitialized ) /*0x9a3da8*/
        NiD3DHLSLShader__InitializeParameterClassTables(); /*0x9a3daa*/
      if ( g_D3DXParameterClassDispatch[(unsigned __int8)v7] == 5 ) /*0x9a3dbd*/
      {
        v8 = 0x10 * a1; /*0x9a3dc5*/
        *(float *)(v8 + 0xBAAA70) = *v3; /*0x9a3dc8*/
        *(float *)(v8 + 0xBAAA74) = v3[1]; /*0x9a3dd3*/
        return 5; /*0x9a3dd9*/
      }
      else
      {
        v9 = a2[5]; /*0x9a3de9*/
        if ( !g_D3DXParameterDispatchInitialized ) /*0x9a3dec*/
          NiD3DHLSLShader__InitializeParameterClassTables(); /*0x9a3dee*/
        if ( g_D3DXParameterClassDispatch[(unsigned __int8)v9] == 6 ) /*0x9a3e01*/
        {
          v10 = (float *)(0x10 * a1); /*0x9a3e09*/
          v10[0x2EAA9C] = *v3; /*0x9a3e0c*/
          v10[0x2EAA9D] = v3[1]; /*0x9a3e16*/
          v10[0x2EAA9E] = v3[2]; /*0x9a3e20*/
          return 6; /*0x9a3e26*/
        }
        else if ( sub_7833A0(a2) ) /*0x9a3e31*/
        {
          v11 = (float *)(0x10 * a1); /*0x9a3e40*/
          v11[0x2EAA9C] = *v3; /*0x9a3e43*/
          v11[0x2EAA9D] = v3[1]; /*0x9a3e4d*/
          v11[0x2EAA9E] = v3[2]; /*0x9a3e56*/
          v11[0x2EAA9F] = v3[3]; /*0x9a3e60*/
          return 7; /*0x9a3e66*/
        }
        else if ( sub_782DE0(a2) ) /*0x9a3e71*/
        {
          v12 = (float *)(a1 << 6); /*0x9a3e84*/
          v12[0x2EAA78] = *v3; /*0x9a3e87*/
          v12[0x2EAA79] = v3[1]; /*0x9a3e91*/
          v12[0x2EAA7A] = v3[2]; /*0x9a3e9a*/
          v12[0x2EAA7B] = 0.0; /*0x9a3ea2*/
          v12[0x2EAA7C] = v3[3]; /*0x9a3eab*/
          v12[0x2EAA7D] = v3[4]; /*0x9a3eb4*/
          v12[0x2EAA7E] = v3[5]; /*0x9a3ebd*/
          v12[0x2EAA7F] = 0.0; /*0x9a3ec3*/
          v12[0x2EAA80] = v3[6]; /*0x9a3ecc*/
          v12[0x2EAA81] = v3[7]; /*0x9a3ed5*/
          v12[0x2EAA82] = v3[8]; /*0x9a3edf*/
          v12[0x2EAA83] = 0.0; /*0x9a3ee6*/
          v12[0x2EAA84] = 0.0; /*0x9a3eec*/
          v12[0x2EAA85] = 0.0; /*0x9a3ef2*/
          v12[0x2EAA86] = 0.0; /*0x9a3ef8*/
          v12[0x2EAA87] = 1.0; /*0x9a3f00*/
          return 8; /*0x9a3f06*/
        }
        else if ( sub_782E10(a2) ) /*0x9a3f10*/
        {
          v13 = (float *)(a1 << 6); /*0x9a3f23*/
          v13[0x2EAA78] = *v3; /*0x9a3f26*/
          v13[0x2EAA79] = v3[1]; /*0x9a3f30*/
          v13[0x2EAA7A] = v3[2]; /*0x9a3f39*/
          v13[0x2EAA7B] = v3[3]; /*0x9a3f42*/
          v13[0x2EAA7C] = v3[4]; /*0x9a3f4b*/
          v13[0x2EAA7D] = v3[5]; /*0x9a3f54*/
          v13[0x2EAA7E] = v3[6]; /*0x9a3f5d*/
          v13[0x2EAA7F] = v3[7]; /*0x9a3f66*/
          v13[0x2EAA80] = v3[8]; /*0x9a3f6f*/
          v13[0x2EAA81] = v3[9]; /*0x9a3f78*/
          v13[0x2EAA82] = v3[0xA]; /*0x9a3f81*/
          v13[0x2EAA83] = v3[0xB]; /*0x9a3f8a*/
          v13[0x2EAA84] = v3[0xC]; /*0x9a3f93*/
          v13[0x2EAA85] = v3[0xD]; /*0x9a3f9c*/
          v13[0x2EAA86] = v3[0xE]; /*0x9a3fa5*/
          v13[0x2EAA87] = v3[0xF]; /*0x9a3faf*/
          return 9; /*0x9a3fb5*/
        }
        else if ( sub_7833D0(a2) ) /*0x9a3fc0*/
        {
          v14 = (float *)(0x10 * a1); /*0x9a3fcf*/
          v14[0x2EAA9C] = *v3; /*0x9a3fd2*/
          v14[0x2EAA9D] = v3[1]; /*0x9a3fdc*/
          v14[0x2EAA9E] = v3[2]; /*0x9a3fe5*/
          v14[0x2EAA9F] = v3[3]; /*0x9a3fef*/
          return 0xA; /*0x9a3ff5*/
        }
        else
        {
          return 0; /*0x9a4000*/
        }
      }
    }
  }
  return result; /*0x9a3d60*/
}
