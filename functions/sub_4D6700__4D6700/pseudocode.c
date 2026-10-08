char __thiscall sub_4D6700(void *this)
{
  void *v1; // eax
  CHAR *FormModelPAth; // eax
  int v3; // edx
  unsigned int IsModelLoaded; // eax
  int *v5; // ecx

  if ( unk_B35E50[0] ) /*0x4d6700*/
  {
    v1 = (void *)(*(int (__thiscall **)(void *))(*(_DWORD *)this + 0x170))(this); /*0x4d6711*/
    FormModelPAth = GetFormModelPAth(v1); /*0x4d6714*/
    if ( FormModelPAth ) /*0x4d671e*/
    {
      if ( *FormModelPAth ) /*0x4d6720*/
      {
        IsModelLoaded = ModelLoader_IsModelLoaded__(MEMORY[0xB33A1C], v3, (int)FormModelPAth); /*0x4d672c*/
        if ( IsModelLoaded ) /*0x4d6733*/
        {
          v5 = unk_B35E50; /*0x4d6735*/
          while ( *v5 ) /*0x4d6744*/
          {
            if ( *v5 == IsModelLoaded ) /*0x4d6748*/
              return 1; /*0x4d6758*/
            if ( (int)++v5 >= (int)&MEMORY[0xB35EA4] ) /*0x4d6753*/
              return 0; /*0x4d6753*/
          }
        }
      }
    }
  }
  return 0; /*0x4d6757*/
}
