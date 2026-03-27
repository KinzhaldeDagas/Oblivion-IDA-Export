void __thiscall sub_658990(void **this, Actor *a2)
{
  int v3; // edi
  _DWORD *v4; // eax
  char v5; // bl
  _DWORD *v6; // esi
  int v7; // ecx
  _DWORD *v8; // eax
  int v9; // [esp+0h] [ebp-14h]
  int v10; // [esp+10h] [ebp-4h]

  v3 = Double_To_SInt32(flt_B36C68 + flt_B36C68);
  v10 = v3;
  v4 = OblivionDynamicCast(
         *(this + 0xB),
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
         &Actor `RTTI Type Descriptor',
         0);
  v5 = 0;
  v6 = v4;
  if ( !*(this + 0xB)
    || (v4[2] & 0x800) != 0
    || (v4[2] & 0x20) != 0
    || (*(unsigned __int8 (__thiscall **)(_DWORD *, _DWORD))(*v4 + 0x198))(v4, 0) )
  {
    ((void (__thiscall *)(Actor *, _DWORD))a2->vtbl->Unk_D0)(a2, 0);
    sub_5EAE70(a2, 0, v3, v9);
  }
  else
  {
    v7 = v6[0x16];
    if ( v7 && (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 8))(v7) == 2 )
    {
      if ( v3 )
      {
        do
        {
          if ( a2->vtbl->super.super.IsDead((TESObjectREFR *)a2, 0) )
            break;
          a2->vtbl->Unk_D1(a2);
          v8 = OblivionDynamicCast(
                 *(this + 0xB),
                 0,
                 (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                 &Actor `RTTI Type Descriptor',
                 0);
          v6 = v8;
          if ( v8 )
          {
            if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, _DWORD))(*v8 + 0x198))(v8, 0)
              && (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v6[0x16] + 8))(v6[0x16]) == 2 )
            {
              (*(void (__thiscall **)(_DWORD *))(*v6 + 0x344))(v6);
              v5 = 1;
            }
          }
          --v10;
        }
        while ( v10 );
        if ( v5 )
        {
          if ( v6 )
            (*(void (__thiscall **)(_DWORD))(*(_DWORD *)v6[0x16] + 0x20))(v6[0x16]);
        }
      }
    }
    else
    {
      (*((void (__thiscall **)(void **, Actor *, int, unsigned int, _DWORD))*this + 0x66))(this, a2, 1, 0xFFFFFFFF, 0);
    }
  }
}
