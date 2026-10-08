// Construct a 0x24-byte BSFaceGen EGT data object with two basis banks, then load the named FREGT003 asset.
BSFaceGenEgtData *__thiscall BSFaceGenEgtData_ConstructFromFile(BSFaceGenEgtData *self, const char *path)
{
  FaceGenEgtBasisBank *banks; // edi
  OB_stString28_010201A0 sourceString; // [esp+14h] [ebp-28h] BYREF
  int v6; // [esp+38h] [ebp-4h]

  banks = self->banks; /*0x557bea*/
  ArrayConstructor( /*0x557bee*/
    (char *)self->banks,
    0x10u,
    2,
    (void (__thiscall *)(char *))FaceGenEgtBasisBank_Construct,
    (void (__thiscall *)(void *))FaceGenEgtBasisBank_Destruct);
  v6 = 0; /*0x557bf9*/
  sourceString.capacity = 0xF; /*0x557c01*/
  sourceString.size = 0; /*0x557c09*/
  sourceString.storage.inlineData[0] = 0; /*0x557c11*/
  OB_stString28_AssignBytes_010201A0(&sourceString, path, strlen(path)); /*0x557c31*/
  LOBYTE(v6) = 1; /*0x557c41*/
  BSFaceGenEgtData_LoadFile(&sourceString, &self->coordinateMetadata, banks, &self->banks[1]); /*0x557c46*/
  if ( sourceString.capacity >= 0x10 ) /*0x557c53*/
    FormHeapFree((unsigned int)sourceString.storage.heapData); /*0x557c5a*/
  return self; /*0x557c64*/
}
