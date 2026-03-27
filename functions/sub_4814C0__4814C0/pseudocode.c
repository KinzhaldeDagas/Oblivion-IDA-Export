void sub_4814C0()
{
  BSShaderAccumulator *inited; // eax
  int v1; // eax
  NiAVObject *v2; // esi
  int v3; // eax
  int v4; // eax

  inited = InitBSShaderAccumulator();
  if ( inited )
  {
    if ( !*((_DWORD *)inited + 0x88A) )
    {
      if ( ModelLoaderPtr )
      {
        if ( OBSE_g_FileFinder )
        {
          if ( OBSE_g_FileFinder->vtbl->FindFile(OBSE_g_FileFinder, "Meshes\\TestSphere.NIF", 0, 0, 0xFFFFFFFF) )
          {
            v1 = sub_439EB0((int *)ModelLoaderPtr, "Meshes\\TestSphere.NIF", 0, 0, 1);
            v2 = (NiAVObject *)v1;
            if ( v1 )
            {
              v3 = sub_405790(v1, 0);
              while ( v3 )
              {
                v4 = (*(int (__thiscall **)(int))(*(_DWORD *)v3 + 8))(v3);
                if ( v4 && *(_WORD *)(v4 + 0xB6) )
                  v3 = **(_DWORD **)(v4 + 0xB0);
                else
                  v3 = 0;
              }
              NiAVObject_InitializePropertyState(v2);
            }
          }
        }
      }
    }
  }
}
