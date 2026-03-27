__int16 __thiscall sub_4BEA40(TESForm *this, void *a2)
{
  TESForm *v3; // eax
  TESForm *v4; // ebx
  char *v5; // esi
  int v7; // [esp+Ch] [ebp+4h]

  v3 = (TESForm *)OblivionDynamicCast(
                    a2,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &TESClimate `RTTI Type Descriptor',
                    0);
  v4 = v3;
  if ( v3 )
  {
    TESForm_CopyAllComponentsFrom(this, v3);
    sub_4EED80((_DWORD *)this + 0xC, &v4[2].vtbl, 0);
    v5 = (char *)this + 0x38;
    v7 = 2;
    do
    {
      (*(void (__thiscall **)(char *, char *))(*(_DWORD *)v5 + 8))(v5, &v5[(char *)v4 - (char *)this]);
      v5 += 0xC;
      --v7;
    }
    while ( v7 );
    (*(void (__thiscall **)(TESForm *, TESForm *))(*((_DWORD *)this + 6) + 8))(this + 1, v4 + 1);
    *((_DWORD *)this + 0x14) = v4[3].member.flags;
    LOWORD(v3) = v4[3].member.refID;
    *((_WORD *)this + 0x2A) = (_WORD)v3;
  }
  return (__int16)v3;
}
