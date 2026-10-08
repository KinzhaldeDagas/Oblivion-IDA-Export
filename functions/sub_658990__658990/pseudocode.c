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

  v3 = Double_To_SInt32(unk_B36C68 + unk_B36C68); /*0x6589ab*/
  v10 = v3; /*0x6589b8*/
  v4 = OblivionDynamicCast( /*0x6589bc*/
         *(this + 0xB),
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
         &Actor `RTTI Type Descriptor',
         0);
  v5 = 0; /*0x6589c4*/
  v6 = v4; /*0x6589ca*/
  if ( !*(this + 0xB) /*0x6589fa*/
    || (v4[2] & 0x800) != 0
    || (v4[2] & 0x20) != 0
    || (*(unsigned __int8 (__thiscall **)(_DWORD *, _DWORD))(*v4 + 0x198))(v4, 0) )
  {
    ((void (__thiscall *)(Actor *, _DWORD))a2->vtbl->Unk_D0)(a2, 0); /*0x658aee*/
    sub_5EAE70(a2, 0, v3, v9); /*0x658af2*/
  }
  else
  {
    v7 = v6[0x16]; /*0x658a04*/
    if ( v7 && (*(int (__thiscall **)(int))(*(_DWORD *)v7 + 8))(v7) == 2 ) /*0x658a19*/
    {
      if ( v3 ) /*0x658a21*/
      {
        do /*0x658aa2*/
        {
          if ( a2->vtbl->super.super.IsDead((TESObjectREFR *)a2, 0) ) /*0x658a3c*/
            break; /*0x658a40*/
          a2->vtbl->Unk_D1(a2); /*0x658a4c*/
          v8 = OblivionDynamicCast( /*0x658a60*/
                 *(this + 0xB),
                 0,
                 (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                 &Actor `RTTI Type Descriptor',
                 0);
          v6 = v8; /*0x658a65*/
          if ( v8 ) /*0x658a6c*/
          {
            if ( !(*(unsigned __int8 (__thiscall **)(_DWORD *, _DWORD))(*v8 + 0x198))(v8, 0) /*0x658a8d*/
              && (*(int (__thiscall **)(_DWORD))(*(_DWORD *)v6[0x16] + 8))(v6[0x16]) == 2 )
            {
              (*(void (__thiscall **)(_DWORD *))(*v6 + 0x344))(v6); /*0x658a99*/
              v5 = 1; /*0x658a9b*/
            }
          }
          --v10; /*0x658a9d*/
        }
        while ( v10 ); /*0x658aa2*/
        if ( v5 ) /*0x658aa6*/
        {
          if ( v6 ) /*0x658aaa*/
            (*(void (__thiscall **)(_DWORD))(*(_DWORD *)v6[0x16] + 0x20))(v6[0x16]); /*0x658ab4*/
        }
      }
    }
    else
    {
      (*((void (__thiscall **)(void **, Actor *, int, unsigned int, _DWORD))*this + 0x66))(this, a2, 1, 0xFFFFFFFF, 0); /*0x658ad4*/
    }
  }
}
