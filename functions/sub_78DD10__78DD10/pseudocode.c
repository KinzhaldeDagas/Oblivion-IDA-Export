// 2026-05-19 payload-retention pass: stock 12000 parser still creates compact 0x1C collision records with type, position, and dimensions only. No rotation storage exists here; plugin-side 73000 rotations must stay in sidecar payload records keyed by collision index.
void __thiscall CSpeedTreeRT__ParseCollisionObjects(OB_CSpeedTreeRT_010201A0 *this, OB_CTreeFileAccess_010201A0 *file)
{
  OB_CSpeedTreeRT_SCollisionObjects_010201A0 *v3; // eax
  int Dword_010201A0; // eax
  int v5; // eax
  int v6; // eax
  int v7; // edi
  int v8; // edx
  int record; // [esp+18h] [ebp-BCh] BYREF
  float v10; // [esp+1Ch] [ebp-B8h]
  float v11; // [esp+20h] [ebp-B4h]
  float v12; // [esp+24h] [ebp-B0h]
  float v13; // [esp+28h] [ebp-ACh]
  float v14; // [esp+2Ch] [ebp-A8h]
  float v15; // [esp+30h] [ebp-A4h]
  float Float_010201A0; // [esp+34h] [ebp-A0h]
  float v17; // [esp+38h] [ebp-9Ch]
  float v18; // [esp+3Ch] [ebp-98h]
  OB_stString28_010201A0 details; // [esp+40h] [ebp-94h] BYREF
  OB_stString28_010201A0 v20; // [esp+5Ch] [ebp-78h] BYREF
  OB_IdvFileError_010201A0 v21; // [esp+78h] [ebp-5Ch] BYREF
  OB_IdvFileError_010201A0 v22; // [esp+A0h] [ebp-34h] BYREF
  int v23; // [esp+D0h] [ebp-4h]

  v3 = (OB_CSpeedTreeRT_SCollisionObjects_010201A0 *)FormHeapAlloc(0x10u); /*0x78dd41*/
  if ( v3 ) /*0x78dd4d*/
  {
    v3->objects.begin = 0; /*0x78dd4f*/
    v3->objects.end = 0; /*0x78dd52*/
    v3->objects.capacityEnd = 0; /*0x78dd55*/
  }
  else
  {
    v3 = 0; /*0x78dd5a*/
  }
  v23 = 0xFFFFFFFF; /*0x78dd65*/
  this->collisionObjects = v3; /*0x78dd70*/
  Dword_010201A0 = OB_CTreeFileAccess_ReadDword_010201A0(file);// SpeedTreeOBSE 2026-05-25 stock-tail fidelity pass: top-level 12000 collision requires at least one recognized 12002/12003/12004 collision record before accepting 12001. /*0x78dd73*/
  do /*0x78de7a*/
  {
    v5 = Dword_010201A0 - 0x2EE2; /*0x78dd78*/
    v12 = 0.0; /*0x78dd7f*/
    record = 0; /*0x78dd83*/
    v11 = 0.0; /*0x78dd87*/
    v10 = 0.0; /*0x78dd8b*/
    v15 = 0.0; /*0x78dd8f*/
    v14 = 0.0; /*0x78dd93*/
    v13 = 0.0; /*0x78dd97*/
    if ( v5 ) /*0x78dd9b*/
    {
      v6 = v5 - 1; /*0x78dd9d*/
      if ( v6 ) /*0x78dda0*/
      {
        if ( v6 != 1 ) /*0x78dda5*/
        {
          details.capacity = 0xF; /*0x78dea7*/
          details.size = 0; /*0x78deaf*/
          details.storage.inlineData[0] = 0; /*0x78deb3*/
          OB_stString28_AssignBytes_010201A0(&details, "malformed collision object info", 0x1Fu); /*0x78deb7*/
          v23 = 1; /*0x78dec9*/
          OB_IdvFileError_Ctor_010201A0(&v21, &details, 0); /*0x78ded4*/
          ThrowException__((DWORD)&v21, &_TI3_AVIdvFileError__); /*0x78dee3*/
        }
        v7 = 2; /*0x78ddab*/
      }
      else
      {
        v7 = 1; /*0x78ddb2*/
      }
    }
    else
    {
      v7 = 0; /*0x78ddb9*/
    }
    record = v7; /*0x78ddbd*/
    Float_010201A0 = OB_CTreeFileAccess_ReadFloat_010201A0(file); /*0x78ddc6*/
    v17 = OB_CTreeFileAccess_ReadFloat_010201A0(file); /*0x78ddd1*/
    v18 = OB_CTreeFileAccess_ReadFloat_010201A0(file); /*0x78dddc*/
    v10 = Float_010201A0; /*0x78dde8*/
    v11 = v17; /*0x78ddf0*/
    v12 = v18; /*0x78ddf8*/
    if ( v7 ) /*0x78ddfc*/
    {
      v13 = OB_CTreeFileAccess_ReadFloat_010201A0(file); /*0x78de13*/
      v14 = OB_CTreeFileAccess_ReadFloat_010201A0(file); /*0x78de1e*/
      if ( v7 != 1 ) /*0x78de01*/
        v15 = OB_CTreeFileAccess_ReadFloat_010201A0(file); /*0x78de29*/
    }
    else
    {
      v13 = OB_CTreeFileAccess_ReadFloat_010201A0(file); /*0x78de4e*/
    }
    OB_CollisionObjectVector_Append_010201A0(&this->collisionObjects->objects.allocatorState, v8, &record); /*0x78de5a*/
    if ( OB_CTreeFileAccess_IsEOF_010201A0(file) ) /*0x78de61*/
    {
      v20.capacity = 0xF; /*0x78df3f*/
      v20.size = 0; /*0x78df47*/
      v20.storage.inlineData[0] = 0; /*0x78df4b*/
      OB_stString28_AssignBytes_010201A0(&v20, "premature end of file reached parsing collision object info", 0x3Bu); /*0x78df4f*/
      v23 = 3; /*0x78df61*/
      OB_IdvFileError_Ctor_010201A0(&v22, &v20, 0); /*0x78df6c*/
      ThrowException__((DWORD)&v22, &_TI3_AVIdvFileError__); /*0x78df7e*/
    }
    Dword_010201A0 = OB_CTreeFileAccess_ReadDword_010201A0(file); /*0x78de70*/
  }
  while ( Dword_010201A0 != 0x2EE1 ); /*0x78de7a*/
}
