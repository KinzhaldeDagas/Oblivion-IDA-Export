void __thiscall OpenEffect_ApplyEffect(void **this)
{
  _DWORD *v2; // eax
  char *v3; // esi
  TESObjectREFR *v4; // eax
  BSExtraData *v5; // ebx
  int v6; // eax
  int LockLevel; // edi
  _BYTE *v8; // eax
  int v9; // eax
  int v10; // eax
  _BYTE *v11; // eax

  v2 = OblivionDynamicCast(
         *(this + 8),
         0,
         (struct _s_RTTICompleteObjectLocator *)&MagicTarget `RTTI Type Descriptor',
         &NonActorMagicTarget `RTTI Type Descriptor',
         0);
  if ( v2 )
  {
    v3 = (char *)(v2 + 3);
    if ( (*(int (__thiscall **)(_DWORD *))(v2[3] + 4))(v2 + 3) )
    {
      v4 = (TESObjectREFR *)(*(int (__thiscall **)(char *))(*(_DWORD *)v3 + 4))(v3);
      v5 = sub_4D7740(v4);
      v6 = Double_To_SInt32(*((float *)this + 6));
      LockLevel = GetLockLevel(v6);
      v8 = (_BYTE *)(*(int (__thiscall **)(char *))(*(_DWORD *)v3 + 4))(v3);
      sub_4D7780(v8);
      v10 = GetLockLevel(v9);
      if ( v5 )
      {
        if ( LockLevel >= v10 )
        {
          v11 = (_BYTE *)(*(int (__thiscall **)(char *))(*(_DWORD *)v3 + 4))(v3);
          sub_4DBEA0(v11);
        }
      }
    }
  }
}
