void __thiscall sub_677B50(_DWORD *this, void *a2, char a3)
{
  _DWORD *v4; // ebx
  void *v5; // esi
  _DWORD *v6; // edi
  int v7; // eax
  int v8; // esi
  _DWORD *v9; // esi
  void (__thiscall **v10)(_DWORD *, int); // edi
  int v11; // eax
  int v12; // [esp+8h] [ebp+4h]

  if ( a2 )
  {
    v4 = this + 0x16;
    if ( this != (_DWORD *)0xFFFFFFA8 )
    {
      do
      {
        if ( !v4[1] && !*v4 )
          break;
        v5 = (void *)*v4;
        if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)*v4 + 0x188))(*v4) )
        {
          if ( v5 != a2 )
          {
            v6 = OblivionDynamicCast(
                   v5,
                   0,
                   (struct _s_RTTICompleteObjectLocator *)&MobileObject `RTTI Type Descriptor',
                   &Actor `RTTI Type Descriptor',
                   0);
            if ( v6 )
            {
              if ( a3 )
              {
                v7 = (*(int (__thiscall **)(void *))(*(_DWORD *)a2 + 0x120))(a2);
                sub_5E69E0(v6, v7);
              }
              v8 = v6[0x16];
              if ( v8 )
              {
                v12 = (*(int (__thiscall **)(void *))(*(_DWORD *)a2 + 0x124))(a2);
                if ( (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 0x2B0))(v8) == v12 )
                  (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)v6[0x16] + 0x2B4))(v6[0x16], 0);
              }
            }
            else if ( a3 )
            {
              v9 = OblivionDynamicCast(
                     v5,
                     0,
                     (struct _s_RTTICompleteObjectLocator *)&MobileObject `RTTI Type Descriptor',
                     &MagicProjectile `RTTI Type Descriptor',
                     0);
              if ( v9 )
              {
                v10 = (void (__thiscall **)(_DWORD *, int))(*v9 + 0x218);
                v11 = (*(int (__thiscall **)(void *))(*(_DWORD *)a2 + 0x120))(a2);
                (*v10)(v9, v11);
              }
            }
          }
        }
        v4 = (_DWORD *)v4[1];
      }
      while ( v4 );
    }
  }
}
