void __thiscall ContainerExtraData_UnequipAll(int *this, char a2)
{
  int v2; // ebx
  int *v3; // ebp
  int *v4; // esi
  int v5; // edi
  int *v6; // eax
  _DWORD *v7; // eax
  _DWORD *v8; // eax

  v2 = *this; /*0x486031*/
  while ( v2 ) /*0x486031*/
  {
    v3 = *(int **)v2; /*0x486040*/
    if ( !*(_DWORD *)v2 ) /*0x486040*/
      goto LABEL_25; /*0x486040*/
    v4 = (int *)*v3; /*0x48604a*/
    if ( *v3 ) /*0x48604a*/
    {
      do /*0x4860cf*/
      {
        v5 = *v4; /*0x486055*/
        if ( !*v4 /*0x48608c*/
          || !ExtraDataList_HasWorn((_BYTE *)v5, 0)
          || a2 && sub_41DF40((_BYTE *)v5)
          || (sub_41F6A0((_DWORD *)v5, 0), ExtraDataList_SetExtraCount((ExtraDataList *)v5, 0), *(_DWORD *)(v5 + 4)) )
        {
          v4 = (int *)v4[1]; /*0x4860ca*/
        }
        else
        {
          v6 = (int *)v4[1]; /*0x486092*/
          if ( v6 ) /*0x486097*/
          {
            v4[1] = v6[1]; /*0x48609c*/
            *v4 = *v6; /*0x4860a2*/
            FormHeapFree((unsigned int)v6); /*0x4860a4*/
          }
          else
          {
            *v4 = 0; /*0x4860b8*/
          }
          (**(void (__thiscall ***)(int, int))v5)(v5, 1); /*0x4860b4*/
        }
      }
      while ( v4 ); /*0x4860cf*/
    }
    v7 = (_DWORD *)*v3; /*0x4860d1*/
    if ( !*v3 || v7[1] || *v7 || v3[1] ) /*0x4860e3*/
    {
LABEL_25:
      v2 = *(_DWORD *)(v2 + 4); /*0x486139*/
    }
    else
    {
      v8 = *(_DWORD **)(v2 + 4); /*0x4860e9*/
      if ( v8 ) /*0x4860ee*/
      {
        *(_DWORD *)(v2 + 4) = v8[1]; /*0x4860f3*/
        *(_DWORD *)v2 = *v8; /*0x4860f9*/
        FormHeapFree((unsigned int)v8); /*0x4860fb*/
      }
      else
      {
        *(_DWORD *)v2 = 0; /*0x486105*/
      }
      ContainerEntryExtraData_ClearDataTable(v3); /*0x48610d*/
      if ( *v3 ) /*0x486112*/
        BSSimpleList_Clear((_DWORD *)*v3); /*0x486119*/
      FormHeapFree(*v3); /*0x486122*/
      *v3 = 0; /*0x486128*/
      FormHeapFree((unsigned int)v3); /*0x48612f*/
    }
  }
}
