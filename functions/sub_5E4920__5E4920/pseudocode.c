double __userpurge sub_5E4920@<st0>(PlayerCharacter *a1@<ecx>, int a2@<edi>, double result@<st0>, void **a4, float a5)
{
  _DWORD *v8; // eax
  _DWORD *v9; // eax
  int v10; // esi
  double v11; // st6
  double v12; // st5
  ExtraContainerChanges_Data *ContainerChanges; // eax
  ExtraDataList *v14; // [esp+20h] [ebp-14h]
  float v15; // [esp+30h] [ebp-4h]
  float retaddr; // [esp+34h] [ebp+0h]
  float v17; // [esp+38h] [ebp+4h]
  float v18; // [esp+3Ch] [ebp+8h]

  if ( a4 )
  {
    v8 = a4[2];
    if ( v8 )
    {
      if ( *((_BYTE *)v8 + 4) == 0x21 )
      {
        v9 = v8 + 0x18;
        if ( v9 )
          v10 = v9[1];
        else
          v10 = 0;
        if ( v10 )
        {
          v11 = sub_4849C0(a4);
          v17 = result;
          (**(void (__thiscall ***)(int, PlayerCharacter *))(v10 + 0x24))(v10 + 0x24, a1);
          v15 = v11;
          v12 = v15;
          if ( v15 <= (double)v17 )
          {
            if ( ((unsigned __int8 (__usercall *)@<al>(MagicCaster *@<ecx>, int, _DWORD, _DWORD, _DWORD, int, double@<st0>))a1->super.super.magicCaster.vtbl->IsMagicItemUsable)(
                   &a1->super.super.magicCaster,
                   v10 + 0x18,
                   0,
                   0,
                   0,
                   a2,
                   result) )
            {
              v14 = *(ExtraDataList **)*a4;
              ContainerChanges = ExtraDataList_GetContainerChanges(&a1->super.super.super.super.baseExtraList);
              v18 = a5 - retaddr;
              sub_488AA0(a4, (BSExtraDataVtbl *)LODWORD(v18), ContainerChanges, v14);
            }
            result = ((double (__thiscall *)(MagicCaster *))a1->super.super.magicCaster.vtbl->SetActiveMagicItem)(&a1->super.super.magicCaster);
            MagicCaster_UseActiveMagicItem(&a1->super.super.magicCaster.vtbl, v12, result, v17, 0);
          }
          else if ( a1 == TESDataHandler_g_PlayerRef )
          {
            sub_663E80((int)TESDataHandler_g_PlayerRef, (char)a4, v12);
          }
        }
      }
    }
  }
  return result;
}
