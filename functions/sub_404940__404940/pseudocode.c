// Enumerates CD-ROM drives and selects the first whose root contains OblivionLauncher.exe; stores its drive letter in byte_B33394.
char FindOblivionDiscDrive()
{
  char v0; // bl
  int v1; // edi
  CHAR *v2; // eax
  CHAR Buffer[260]; // [esp+8h] [ebp-20Ch] BYREF
  char v5[260]; // [esp+10Ch] [ebp-108h] BYREF

  GetLogicalDriveStringsA(0x200u, Buffer); /*0x404960*/
  v0 = 0; /*0x404966*/
  v1 = 0; /*0x404968*/
  unk_B33394 = 0; /*0x40496e*/
  if ( Buffer[0] ) /*0x404974*/
  {
    do /*0x4049df*/
    {
      if ( unk_B33394 ) /*0x404987*/
        break; /*0x404987*/
      if ( GetDriveTypeA(&Buffer[v1]) == 5 ) /*0x404993*/
      {
        _sprintf(v5, "%sOblivionLauncher.exe", &Buffer[v1]); /*0x4049a3*/
        if ( !_access(v5, 0) ) /*0x4049b2*/
          unk_B33394 = Buffer[v1]; /*0x4049c0*/
        v0 = 1; /*0x4049c5*/
      }
      v2 = &Buffer[v1 + 1 + strlen(&Buffer[v1])]; /*0x4049d7*/
      v1 = v2 - Buffer; /*0x4049db*/
    }
    while ( *v2 ); /*0x4049df*/
  }
  return v0; /*0x4049e7*/
}
