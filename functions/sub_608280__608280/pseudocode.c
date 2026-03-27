double __cdecl sub_608280(MobileObject *a1)
{
  bhkCharacterProxy *CharProxy; // eax
  bhkCharacterProxy *v2; // eax
  float v4; // [esp+8h] [ebp-14h]
  int v5; // [esp+10h] [ebp-Ch]
  float v6; // [esp+14h] [ebp-8h]
  float v7; // [esp+18h] [ebp-4h]
  float retaddr; // [esp+1Ch] [ebp+0h]
  float v9; // [esp+20h] [ebp+4h]

  v5 = ((int (__thiscall *)(MobileObject *, int))a1->vtbl[1].super.super.Unk_20)(a1, 7);
  v4 = (float)((int (__thiscall *)(MobileObject *))a1->vtbl[1].super.super.Unk_20)(a1);
  v6 = sub_547700(1.0, v4, 0x1C);
  retaddr = 1.0;
  CharProxy = MobileObject_GetCharProxy(a1);
  if ( (*(int (__thiscall **)(bhkCharacterProxy *, int))(*(_DWORD *)CharProxy + 0x58))(CharProxy, v5) )
  {
    v2 = MobileObject_GetCharProxy(a1);
    v9 = *(float *)((*(int (__thiscall **)(bhkCharacterProxy *, float))(*(_DWORD *)v2 + 0x58))(
                      v2,
                      COERCE_FLOAT(LODWORD(v6)))
                  + 0x28)
       * dbl_A372E0;
    *(float *)&a1 = v9 * v7;
  }
  return *(float *)&a1;
}
