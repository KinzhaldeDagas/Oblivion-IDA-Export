// Parses Oblivion shadow tokens: 18002 right, 18003 up, 18004 out, 18005 basename-only map filename, terminated by 18001.
int __thiscall OB_CProjectedShadow_Parse_010201A0(
        OB_CProjectedShadow_010201A0 *this,
        OB_CTreeFileAccess_010201A0 *file)
{
  int result; // eax
  int v4; // edx
  float *Vec3_010201A0; // eax
  float *v6; // eax
  float *v7; // eax
  _DWORD *v8; // eax
  _DWORD *v9; // eax
  int v10[13]; // [esp-1Ch] [ebp-E4h] BYREF
  _BYTE v11[4]; // [esp+18h] [ebp-B0h] BYREF
  unsigned int v12; // [esp+1Ch] [ebp-ACh]
  int v13; // [esp+2Ch] [ebp-9Ch]
  unsigned int v14; // [esp+30h] [ebp-98h]
  float v15[3]; // [esp+34h] [ebp-94h] BYREF
  float v16[3]; // [esp+40h] [ebp-88h] BYREF
  float outVec3[3]; // [esp+4Ch] [ebp-7Ch] BYREF
  _BYTE v18[40]; // [esp+58h] [ebp-70h] BYREF
  char v19[28]; // [esp+80h] [ebp-48h] BYREF
  char v20[4]; // [esp+9Ch] [ebp-2Ch] BYREF
  unsigned int v21; // [esp+A0h] [ebp-28h]
  int v22; // [esp+B0h] [ebp-18h]
  unsigned int v23; // [esp+B4h] [ebp-14h]
  int v24; // [esp+C4h] [ebp-4h]

  result = OB_CTreeFileAccess_ReadDword_010201A0(file);// SpeedTreeOBSE 2026-05-25 stock-tail fidelity pass: 18000 shadow projection delegate requires a first recognized 18002..18005 payload before accepting 18001. /*0x7a5576*/
  do /*0x7a56c0*/
  {
    switch ( result ) /*0x7a559f*/
    {
      case 0x4652: /*0x7a559f*/
        Vec3_010201A0 = OB_CTreeFileAccess_ReadVec3_010201A0(file, outVec3); /*0x7a55ad*/
        this->right.x = *Vec3_010201A0; /*0x7a55b4*/
        this->right.y = Vec3_010201A0[1]; /*0x7a55b9*/
        this->right.z = Vec3_010201A0[2]; /*0x7a55bf*/
        break; /*0x7a55c2*/
      case 0x4653: /*0x7a559f*/
        v6 = OB_CTreeFileAccess_ReadVec3_010201A0(file, v16); /*0x7a55ce*/
        this->up.x = *v6; /*0x7a55d5*/
        this->up.y = v6[1]; /*0x7a55db*/
        this->up.z = v6[2]; /*0x7a55e1*/
        break; /*0x7a55e4*/
      case 0x4654: /*0x7a559f*/
        v7 = OB_CTreeFileAccess_ReadVec3_010201A0(file, v15); /*0x7a55f0*/
        this->out.x = *v7; /*0x7a55f7*/
        this->out.y = v7[1]; /*0x7a55fd*/
        this->out.z = v7[2]; /*0x7a5603*/
        break; /*0x7a5606*/
      case 0x4655: /*0x7a559f*/
        v10[0xC] = (int)v10; /*0x7a5610*/
        OB_CTreeFileAccess_ReadString_010201A0(file, v4, v10); /*0x7a5617*/
        OB_stString28_CopyCtorConsumeTemporary_010201A0( /*0x7a5623*/
          (int)v20,
          v10[0],
          v10[1],
          v10[2],
          v10[3],
          v10[4],
          v10[5],
          v10[6]);
        v24 = 0; /*0x7a5634*/
        v8 = (_DWORD *)OB_IdvNoPath_010201A0(v20, (int)v11); /*0x7a563b*/
        LOBYTE(v24) = 1; /*0x7a5647*/
        OB_stString28_AssignSubstring_010201A0((int)this->selfShadowMapString, v8, 0, 0xFFFFFFFF); /*0x7a564f*/
        if ( v14 >= 0x10 ) /*0x7a5658*/
          FormHeapFree(v12); /*0x7a565f*/
        v14 = 0xF; /*0x7a566e*/
        v13 = 0; /*0x7a5676*/
        LOBYTE(v12) = 0; /*0x7a567a*/
        v24 = 0xFFFFFFFF; /*0x7a567e*/
        if ( v23 >= 0x10 ) /*0x7a5689*/
          FormHeapFree(v21); /*0x7a5693*/
        v23 = 0xF; /*0x7a569b*/
        v22 = 0; /*0x7a56a6*/
        LOBYTE(v21) = 0; /*0x7a56ad*/
        break; /*0x7a56ad*/
      default:
        v9 = (_DWORD *)OB_IdvFormatString_010201A0((int)v19, (int)file, "malformed frond info (token %d)", result); /*0x7a56fd*/
        v24 = 2; /*0x7a570b*/
        OB_IdvFileError_Ctor_010201A0((std::exception *)v18, v9, 0); /*0x7a5716*/
        ThrowException__((DWORD)v18, &_TI3_AVIdvFileError__); /*0x7a5725*/
    }
    result = OB_CTreeFileAccess_ReadDword_010201A0(file); /*0x7a56b6*/
  }
  while ( result != 0x4651 ); /*0x7a56c0*/
  return result; /*0x7a56c6*/
}
