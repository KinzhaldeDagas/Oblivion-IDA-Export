void __cdecl sub_5367B0(int a1, _DWORD *a2, _DWORD *a3)
{
  int BhkCollisionObject; // eax
  int v4; // eax
  int v5; // eax
  int *v6; // eax
  int v7; // eax
  int v8; // eax
  _DWORD *v9; // esi
  bool v10; // zf
  int v11; // eax
  int v12; // eax
  int v13; // ecx
  unsigned int i; // esi
  int v15; // [esp+4h] [ebp-8h] BYREF

  if ( a1 ) /*0x5367ba*/
  {
    BhkCollisionObject = NiAVObject_GetBhkCollisionObject(a1); /*0x5367c4*/
    if ( !BhkCollisionObject ) /*0x5367d6*/
      goto LABEL_19; /*0x5367d6*/
    v4 = *(_DWORD *)(BhkCollisionObject + 0x10); /*0x5367dc*/
    if ( !v4 ) /*0x5367e1*/
      goto LABEL_19; /*0x5367e1*/
    v5 = *(_DWORD *)(v4 + 8); /*0x5367e3*/
    if ( v5 && (v6 = (int *)(v5 + 0x14)) != 0 && (v7 = *v6) != 0 ) /*0x5367f3*/
      v8 = *(_DWORD *)(v7 + 8); /*0x5367f5*/
    else
      v8 = 0; /*0x5367fa*/
    if ( !v8 ) /*0x5367fe*/
      goto LABEL_19; /*0x5367fe*/
    v9 = *(_DWORD **)(v8 + 8); /*0x536800*/
    if ( !v9 ) /*0x536805*/
      goto LABEL_19; /*0x536805*/
    v10 = (*(int (__thiscall **)(_DWORD *))(*v9 + 8))(v9) == 0x10; /*0x536810*/
    v11 = *v9; /*0x536813*/
    if ( v10 ) /*0x536817*/
    {
      v12 = (*(int (__thiscall **)(_DWORD *))(v11 + 0x1C))(v9); /*0x53681c*/
    }
    else
    {
      if ( (*(int (__thiscall **)(_DWORD *))(v11 + 8))(v9) == 9 ) /*0x536828*/
      {
        (*(void (__thiscall **)(_DWORD *, int *))(*v9 + 0x1C))(v9, &v15); /*0x536836*/
        *a2 += v15; /*0x53683c*/
        goto LABEL_19; /*0x53683f*/
      }
      if ( (*(int (__thiscall **)(_DWORD *))(*v9 + 8))(v9) != 0x18 ) /*0x53684d*/
        goto LABEL_19; /*0x53684d*/
      v13 = v9[3]; /*0x53684f*/
      if ( !v13 ) /*0x536854*/
        goto LABEL_19; /*0x536854*/
      v12 = (*(int (__thiscall **)(int))(*(_DWORD *)v13 + 0x1C))(v13); /*0x53685b*/
    }
    *a3 += v12; /*0x53685d*/
LABEL_19:
    if ( (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 8))(a1) ) /*0x536866*/
    {
      for ( i = 0; *(unsigned __int16 *)(a1 + 0xB6) > i; sub_5367B0( /*0x536873*/
                                                           *(_DWORD *)(*(_DWORD *)(a1 + 0xB0) + 4 * i++),
                                                           a2,
                                                           a3) )
        ; /*0x53688d*/
    }
  }
}
