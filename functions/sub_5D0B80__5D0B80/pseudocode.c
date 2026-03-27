void sub_5D0B80()
{
  int v3; // eax
  int *v4; // eax
  int *v5; // esi

  v3 = sub_447490("UIArmorWeaponRepair");
  if ( v3 )
  {
    OSGLobals_PlaySound(*(_DWORD *)(v3 + 0xC), 0x21, 0);
    v5 = v4;
    if ( v4 )
    {
      if ( !sub_6B7260(v4) )
        sub_6B7190(v5, 0);
      sub_6B73E0(v5);
      FormHeapFree((unsigned int)v5);
    }
  }
}
