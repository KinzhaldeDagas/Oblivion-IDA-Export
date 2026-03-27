// positive sp value has been detected, the output may be wrong!
void __usercall sub_676E69(char a1@<zf>, int a2@<ebx>, int *a3@<ebp>, int a4@<esi>)
{
  void *v4; // edi
  TESObjectREFR *v5; // eax
  char v6; // al
  void *v7; // eax

  if ( !a1 )
  {
    v4 = *(void **)a4;
    v5 = (TESObjectREFR *)OblivionDynamicCast(
                            *(void **)a4,
                            0,
                            (struct _s_RTTICompleteObjectLocator *)&MobileObject `RTTI Type Descriptor',
                            &ArrowProjectile `RTTI Type Descriptor',
                            0);
    if ( v5 )
    {
      v6 = sub_6092A0(v5);
    }
    else
    {
      v7 = OblivionDynamicCast(
             v4,
             0,
             (struct _s_RTTICompleteObjectLocator *)&MobileObject `RTTI Type Descriptor',
             &MagicProjectile `RTTI Type Descriptor',
             0);
      if ( !v7 )
        goto LABEL_9;
      v6 = (*(int (__thiscall **)(void *))(*(_DWORD *)v7 + 0x220))(v7);
    }
    if ( v6 )
    {
      BSSimpleList_Remove(a3, (int)v4);
      if ( a4 != a2 )
        a4 = *(_DWORD *)(a2 + 4);
      goto LABEL_10;
    }
LABEL_9:
    a4 = *(_DWORD *)(a4 + 4);
LABEL_10:
    if ( a4 )
      JUMPOUT(0x676E60);
  }
}
