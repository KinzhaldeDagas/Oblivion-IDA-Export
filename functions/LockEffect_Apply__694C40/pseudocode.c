void __usercall LockEffect_Apply(ActiveEffect *this@<ecx>, char a2@<bpl>, double a3@<st0>)
{
  _DWORD *v4; // eax
  char *v5; // esi
  TESObjectREFR *v6; // eax
  BSExtraData *v7; // eax
  char next; // al
  _BYTE *v9; // eax
  ExtraLock *v10; // edi
  _BYTE *v11; // eax
  _BYTE *v12; // eax

  v4 = OblivionDynamicCast(
         this->members.target,
         0,
         (struct _s_RTTICompleteObjectLocator *)&MagicTarget `RTTI Type Descriptor',
         &NonActorMagicTarget `RTTI Type Descriptor',
         0);
  if ( v4 )
  {
    v5 = (char *)(v4 + 3);
    if ( (*(int (__thiscall **)(_DWORD *))(v4[3] + 4))(v4 + 3) )
    {
      v6 = (TESObjectREFR *)(*(int (__thiscall **)(char *))(*(_DWORD *)v5 + 4))(v5);
      v7 = sub_4D7740(v6);
      if ( v7 && ((next = (char)v7->members.next, (next & 2) == 0) || (next & 1) != 0) )
      {
        ActiveEffect_Base_Remove(this, a2, a3, 0);
      }
      else
      {
        v9 = (_BYTE *)(*(int (__thiscall **)(char *))(*(_DWORD *)v5 + 4))(v5);
        v10 = sub_4DBDF0(v9);
        *(_BYTE *)v10 = Double_To_SInt32(this->members.magnitude);
        *((_DWORD *)v10 + 1) = 0;
        *((_BYTE *)v10 + 8) = 2;
        v11 = (_BYTE *)(*(int (__thiscall **)(char *))(*(_DWORD *)v5 + 4))(v5);
        sub_4D9070(v11);
        v12 = (_BYTE *)(*(int (__thiscall **)(char *))(*(_DWORD *)v5 + 4))(v5);
        sub_4DBE40(v12);
      }
    }
  }
}
