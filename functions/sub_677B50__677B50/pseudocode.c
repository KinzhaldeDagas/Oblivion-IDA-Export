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

  if ( a2 ) /*0x677b57*/
  {
    v4 = this + 0x16; /*0x677b5e*/
    if ( this != (_DWORD *)0xFFFFFFA8 ) /*0x677b63*/
    {
      do /*0x677c58*/
      {
        if ( !v4[1] && !*v4 ) /*0x677b76*/
          break; /*0x677b79*/
        v5 = (void *)*v4; /*0x677b7f*/
        if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(*(_DWORD *)*v4 + 0x188))(*v4) ) /*0x677b8b*/
        {
          if ( v5 != a2 ) /*0x677b97*/
          {
            v6 = OblivionDynamicCast( /*0x677bb1*/
                   v5,
                   0,
                   (struct _s_RTTICompleteObjectLocator *)&MobileObject `RTTI Type Descriptor',
                   &Actor `RTTI Type Descriptor',
                   0);
            if ( v6 ) /*0x677bb8*/
            {
              if ( a3 ) /*0x677bbf*/
              {
                v7 = (*(int (__thiscall **)(void *))(*(_DWORD *)a2 + 0x120))(a2); /*0x677bcc*/
                sub_5E69E0(v6, v7); /*0x677bd1*/
              }
              v8 = v6[0x16]; /*0x677bd6*/
              if ( v8 ) /*0x677bdb*/
              {
                v12 = (*(int (__thiscall **)(void *))(*(_DWORD *)a2 + 0x124))(a2); /*0x677bf4*/
                if ( (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 0x2B0))(v8) == v12 ) /*0x677c00*/
                  (*(void (__thiscall **)(_DWORD, _DWORD))(*(_DWORD *)v6[0x16] + 0x2B4))(v6[0x16], 0); /*0x677c0f*/
              }
            }
            else if ( a3 ) /*0x677c18*/
            {
              v9 = OblivionDynamicCast( /*0x677c2e*/
                     v5,
                     0,
                     (struct _s_RTTICompleteObjectLocator *)&MobileObject `RTTI Type Descriptor',
                     &MagicProjectile `RTTI Type Descriptor',
                     0);
              if ( v9 ) /*0x677c35*/
              {
                v10 = (void (__thiscall **)(_DWORD *, int))(*v9 + 0x218); /*0x677c44*/
                v11 = (*(int (__thiscall **)(void *))(*(_DWORD *)a2 + 0x120))(a2); /*0x677c4a*/
                (*v10)(v9, v11); /*0x677c51*/
              }
            }
          }
        }
        v4 = (_DWORD *)v4[1]; /*0x677c53*/
      }
      while ( v4 ); /*0x677c58*/
    }
  }
}
