char sub_404940()
{
  char v0; // bl
  int v1; // edi
  CHAR *v2; // eax
  CHAR Buffer[260]; // [esp+8h] [ebp-20Ch] BYREF
  char v5[260]; // [esp+10Ch] [ebp-108h] BYREF

  GetLogicalDriveStringsA(0x200u, Buffer);
  v0 = 0;
  v1 = 0;
  byte_B33394 = 0;
  if ( Buffer[0] )
  {
    do
    {
      if ( byte_B33394 )
        break;
      if ( GetDriveTypeA(&Buffer[v1]) == 5 )
      {
        _sprintf(v5, "%sOblivionLauncher.exe", &Buffer[v1]);
        if ( !_access(v5, 0) )
          byte_B33394 = Buffer[v1];
        v0 = 1;
      }
      v2 = &Buffer[v1 + 1 + strlen(&Buffer[v1])];
      v1 = v2 - Buffer;
    }
    while ( *v2 );
  }
  return v0;
}
