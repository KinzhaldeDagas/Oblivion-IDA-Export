void __thiscall sub_48F390(int *this)
{
  _DWORD *v1; // ecx
  int v2; // edi
  int v3; // eax
  int *v4; // ebx
  int v5; // esi
  void *v6; // ebp
  double v7; // st7
  float v8; // [esp+0h] [ebp-28h]
  ExtraContainerChanges_Data *ContainerChanges; // [esp+4h] [ebp-24h]
  ExtraDataList *v10; // [esp+8h] [ebp-20h]
  _DWORD *v11; // [esp+20h] [ebp-8h]
  int HealthForForm; // [esp+24h] [ebp-4h]

  v1 = (_DWORD *)*this; /*0x48f393*/
  v11 = v1; /*0x48f397*/
  if ( v1 ) /*0x48f39a*/
  {
    while ( 1 ) /*0x48f3aa*/
    {
      v2 = *v1; /*0x48f3aa*/
      if ( !*v1 ) /*0x48f3aa*/
        break; /*0x48f3aa*/
      v3 = *(unsigned __int8 *)(*(_DWORD *)(v2 + 8) + 4); /*0x48f3b7*/
      if ( v3 == 0x14 || v3 == 0x21 ) /*0x48f3c3*/
      {
        v4 = *(int **)v2; /*0x48f3c5*/
        if ( *(_DWORD *)v2 ) /*0x48f3c5*/
        {
          do /*0x48f42e*/
          {
            v5 = *v4; /*0x48f3d0*/
            v6 = *(void **)(v2 + 8); /*0x48f3d8*/
            v10 = (ExtraDataList *)*v4; /*0x48f3e0*/
            ContainerChanges = ExtraDataList_GetContainerChanges(&reference->super.super.super.super.baseExtraList); /*0x48f3e6*/
            HealthForForm = TESHealthForm_GetHealthForForm(v6); /*0x48f3ef*/
            v7 = (double)HealthForForm; /*0x48f3f3*/
            if ( HealthForForm < 0 ) /*0x48f3f7*/
              v7 = v7 + flt_A2FC78; /*0x48f3f9*/
            v8 = v7; /*0x48f401*/
            sub_488830((void **)v2, (BSExtraDataVtbl *)LODWORD(v8), ContainerChanges, v10, 0); /*0x48f404*/
            if ( !v5 || *(_DWORD *)(v5 + 4) ) /*0x48f40d*/
            {
              v4 = (int *)v4[1]; /*0x48f429*/
            }
            else
            {
              BSSimpleList_Remove(*(int **)v2, v5); /*0x48f416*/
              (**(void (__thiscall ***)(int, int))v5)(v5, 1); /*0x48f423*/
              v4 = *(int **)v2; /*0x48f425*/
            }
          }
          while ( v4 ); /*0x48f42e*/
          v1 = v11; /*0x48f430*/
        }
      }
      v11 = (_DWORD *)v1[1]; /*0x48f439*/
      if ( !v11 ) /*0x48f43d*/
        break; /*0x48f43d*/
      v1 = (_DWORD *)v1[1]; /*0x48f3a6*/
    }
  }
}
