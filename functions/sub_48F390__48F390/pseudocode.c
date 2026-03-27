void __thiscall sub_48F390(int *this)
{
  int v1; // ecx
  int **v2; // edi
  int v3; // eax
  int *v4; // ebx
  int v5; // esi
  int *v6; // ebp
  double v7; // st7
  float v8; // [esp+0h] [ebp-28h]
  ExtraContainerChanges_Data *ContainerChanges; // [esp+4h] [ebp-24h]
  ExtraDataList *v10; // [esp+8h] [ebp-20h]
  int v11; // [esp+20h] [ebp-8h]
  int HealthForForm; // [esp+24h] [ebp-4h]

  v1 = *this;
  v11 = v1;
  if ( v1 )
  {
    while ( 1 )
    {
      v2 = *(int ***)v1;
      if ( !*(_DWORD *)v1 )
        break;
      v3 = *((unsigned __int8 *)v2[2] + 4);
      if ( v3 == 0x14 || v3 == 0x21 )
      {
        v4 = *v2;
        if ( *v2 )
        {
          do
          {
            v5 = *v4;
            v6 = v2[2];
            v10 = (ExtraDataList *)*v4;
            ContainerChanges = ExtraDataList_GetContainerChanges(&TESDataHandler_g_PlayerRef->super.super.super.super.baseExtraList);
            HealthForForm = TESHealthForm_GetHealthForForm(v6);
            v7 = (double)HealthForForm;
            if ( HealthForForm < 0 )
              v7 = v7 + flt_A2FC78;
            v8 = v7;
            sub_488830((void **)v2, (BSExtraDataVtbl *)LODWORD(v8), (int)ContainerChanges, v10, 0);
            if ( !v5 || *(_DWORD *)(v5 + 4) )
            {
              v4 = (int *)v4[1];
            }
            else
            {
              BSSimpleList_Remove(*v2, v5);
              (**(void (__thiscall ***)(int, int))v5)(v5, 1);
              v4 = *v2;
            }
          }
          while ( v4 );
          v1 = v11;
        }
      }
      v11 = *(_DWORD *)(v1 + 4);
      if ( !v11 )
        break;
      v1 = *(_DWORD *)(v1 + 4);
    }
  }
}
