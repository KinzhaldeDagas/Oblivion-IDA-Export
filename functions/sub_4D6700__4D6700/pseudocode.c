char __thiscall sub_4D6700(void *this)
{
  void *v1; // eax
  CHAR *FormModelPAth; // eax
  int v3; // edx
  unsigned int IsModelLoaded; // eax
  int *v5; // ecx

  if ( dword_B35E50[0] )
  {
    v1 = (void *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x170))(this);
    FormModelPAth = GetFormModelPAth(v1);
    if ( FormModelPAth )
    {
      if ( *FormModelPAth )
      {
        IsModelLoaded = ModelLoader_IsModelLoaded__(ModelLoaderPtr, v3, (int)FormModelPAth);
        if ( IsModelLoaded )
        {
          v5 = dword_B35E50;
          while ( *v5 )
          {
            if ( *v5 == IsModelLoaded )
              return 1;
            if ( (int)++v5 >= (int)&TESDataHandler_g_DoorMarker )
              return 0;
          }
        }
      }
    }
  }
  return 0;
}
