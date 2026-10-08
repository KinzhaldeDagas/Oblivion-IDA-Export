void __userpurge sub_5B3990(
        int a1@<ecx>,
        double st5_0@<st2>,
        double Float@<st1>,
        double a4@<st0>,
        signed int a5,
        _DWORD *a6)
{
  signed int v6; // esi
  double v7; // st7
  int v8; // edi
  _DWORD *v9; // eax
  _DWORD *v10; // esi
  unsigned __int8 *v11; // eax
  int v12; // esi
  int ***ContainerExtraDataForRef; // ebx
  ExtraDataList *v14; // edi
  int v15; // esi
  char v16; // al
  int v17; // eax
  char v18; // bl
  double v19; // st7
  int v20; // eax
  double v21; // st7
  int v22; // eax
  _DWORD *v23; // esi
  int v24; // edi
  _DWORD *v25; // eax
  Tile **Singleton; // eax
  double v27; // st7
  int v28; // eax
  int v29; // edx
  int *v30; // ecx
  int v31; // esi
  char *v32; // esi
  double v33; // st7
  int v34; // eax
  signed int v35; // esi
  float a2; // [esp+0h] [ebp-18h]
  signed int v38; // [esp+1Ch] [ebp+4h]

  v6 = a5; /*0x5b39a7*/
  if ( Menu_GetOpenMenuTile(0x416) && a5 >= 0x3E9 && unk_B3B43D ) /*0x5b39bc*/
  {
    v7 = Tile_GetFloat(a6, 0xFBB); /*0x5b39cc*/
    v8 = Double_To_SInt32(v7); /*0x5b39dd*/
    a4 = Tile_GetFloat(a6, 0xFB5); /*0x5b39df*/
    switch ( Double_To_SInt32(a4) ) /*0x5b39f8*/
    {
      case 1: /*0x5b39f8*/
      case 2: /*0x5b39f8*/
      case 4: /*0x5b39f8*/
        v17 = a1 + 0x38; /*0x5b3ae0*/
        if ( a1 != 0xFFFFFFC8 ) /*0x5b3ae3*/
        {
          while ( --v8 ) /*0x5b3af0*/
          {
            v17 = *(_DWORD *)(v17 + 4); /*0x5b3af5*/
            if ( !v17 ) /*0x5b3afa*/
              goto LABEL_9; /*0x5b3afa*/
          }
          sub_5C25C0((char)a6, st5_0, Float, a4, *(unsigned __int8 **)v17); /*0x5b3b06*/
        }
        break; /*0x5b3b0b*/
      case 8: /*0x5b39f8*/
        v9 = (_DWORD *)dword_B14360; /*0x5b39ff*/
        if ( dword_B14360 ) /*0x5b39ff*/
        {
          while ( 1 ) /*0x5b3a10*/
          {
            v10 = (_DWORD *)v9[2]; /*0x5b3a10*/
            v9 = (_DWORD *)*v9; /*0x5b3a19*/
            if ( v10[1] == v8 ) /*0x5b3a1b*/
              break; /*0x5b3a1b*/
            if ( !v9 ) /*0x5b3a1f*/
              goto LABEL_8; /*0x5b3a1f*/
          }
          v11 = (unsigned __int8 *)OblivionDynamicCast( /*0x5b3a6d*/
                                     *(void **)(*v10 + 8),
                                     0,
                                     (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                                     &TESObjectBOOK `RTTI Type Descriptor',
                                     0);
          if ( v11 ) /*0x5b3a77*/
          {
            if ( (v11[0x88] & 1) != 0 ) /*0x5b3a80*/
            {
              if ( *((_DWORD *)v11 + 0x19) ) /*0x5b3a82*/
                sub_5C25C0((char)a6, st5_0, Float, a4, v11); /*0x5b3a8b*/
            }
          }
          v12 = *v10; /*0x5b3a90*/
          if ( v12 ) /*0x5b3a94*/
          {
            TESObjectREFR_GetContainer((TESObjectREFR *)reference); /*0x5b3a9c*/
            ContainerExtraDataForRef = (int ***)ContainerExtraData_GetContainerExtraDataForRef((TESObjectREFR *)reference); /*0x5b3aae*/
            if ( ContainerExtraDataForRef ) /*0x5b3ab5*/
            {
              v14 = 0; /*0x5b3abd*/
              if ( *(_DWORD *)v12 ) /*0x5b3abb*/
                v14 = **(ExtraDataList ***)v12; /*0x5b3ac3*/
              v15 = *(_DWORD *)(v12 + 8); /*0x5b3ac5*/
              v16 = sub_5C1100(); /*0x5b3ac8*/
              sub_489820(ContainerExtraDataForRef, Float, v15, v14, v16); /*0x5b3ad2*/
            }
          }
LABEL_8:
          v6 = a5; /*0x5b3a21*/
        }
        break; /*0x5b3a21*/
      default:
        break;
    }
  }
LABEL_9:
  if ( Menu_GetOpenMenuTile(0x3F8) ) /*0x5b3a2a*/
    return; /*0x5b3a34*/
  if ( (unsigned int)(v6 - 1) <= 4 ) /*0x5b3a40*/
  {
    sub_5B2060((int *)a1, st5_0, a4, Float, v6, (int)a6); /*0x5b3a4c*/
    return; /*0x5b3a56*/
  }
  if ( v6 == 7 || v6 == 8 ) /*0x5b3b1c*/
  {
    v33 = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 4), 0xFAE); /*0x5b3cb2*/
    v34 = Double_To_SInt32(v33); /*0x5b3cb7*/
    if ( a5 == 7 ) /*0x5b3cc3*/
      v35 = v34 - 1; /*0x5b3cc5*/
    else
      v35 = v34 + 1; /*0x5b3cca*/
    v38 = v35; /*0x5b3cd0*/
    if ( v35 >= 1 ) /*0x5b3cd4*/
    {
      if ( v35 <= 5 ) /*0x5b3ce0*/
      {
LABEL_59:
        __asm { fild    [esp+14h+arg_0] } /*0x5b3ceb*/
        __asm { fstp    [esp+18h+a2]; value }
        Tile_SetFloat(*(Tile **)(a1 + 4), 0xFAEu, a2); /*0x5b3cff*/
        sub_5B2060((int *)a1, st5_0, v33, Float, v35, 0); /*0x5b3d09*/
        return; /*0x5b3d09*/
      }
      v35 = 1; /*0x5b3ce2*/
    }
    else
    {
      v35 = 5; /*0x5b3cd6*/
    }
    v38 = v35; /*0x5b3ce7*/
    goto LABEL_59; /*0x5b3ce7*/
  }
  if ( (unsigned int)(v6 - 0xD) <= 1 ) /*0x5b3b28*/
  {
    if ( (dword_B3B0B4[0xD4] & 0x7F) == v6 - 0xD ) /*0x5b3b3e*/
    {
      sub_597A60((char *)&dword_B3B0B4[0xD4]); /*0x5b3b40*/
    }
    else
    {
      sub_597A40(&dword_B3B0B4[0xD4], v6 - 0xD); /*0x5b3b53*/
      LOBYTE(dword_B3B0B4[0xD4]) &= ~0x80u; /*0x5b3b58*/
    }
    sub_5B2B70(st5_0, Float); /*0x5b3b45*/
    return; /*0x5b3b4f*/
  }
  if ( v6 >= 0x3E9 ) /*0x5b3b72*/
  {
    v18 = 0; /*0x5b3b7f*/
    v19 = Tile_GetFloat(a6, 0xFB5); /*0x5b3b81*/
    v20 = Double_To_SInt32(v19); /*0x5b3b86*/
    if ( v20 != 0x10 ) /*0x5b3b8e*/
    {
      if ( v20 == 8 ) /*0x5b3b9e*/
      {
        v21 = Tile_GetFloat(a6, 0xFBB); /*0x5b3ba0*/
        v22 = Double_To_SInt32(v21); /*0x5b3ba5*/
        v23 = (_DWORD *)dword_B14360; /*0x5b3baa*/
        v24 = v22; /*0x5b3bb2*/
        if ( dword_B14360 ) /*0x5b3baa*/
        {
          do /*0x5b3beb*/
          {
            v25 = (_DWORD *)v23[2]; /*0x5b3bc3*/
            v23 = (_DWORD *)*v23; /*0x5b3bc8*/
            if ( v25[1] == v24 ) /*0x5b3bca*/
            {
              sub_664850(reference, *(_DWORD *)(*v25 + 8)); /*0x5b3bd8*/
              sub_57DE50(0x17); /*0x5b3bdf*/
              v18 = 1; /*0x5b3be7*/
            }
          }
          while ( v23 ); /*0x5b3beb*/
          if ( v18 ) /*0x5b3bef*/
          {
LABEL_41:
            Singleton = (Tile **)InterfaceManager_GetSingleton(0, 1); /*0x5b3bf5*/
            sub_57D730(Singleton, 0); /*0x5b3c05*/
            sub_5B2B70(st5_0, Float); /*0x5b3c0a*/
          }
        }
      }
      else
      {
        v27 = Tile_GetFloat(a6, 0xFBB); /*0x5b3c17*/
        v28 = Double_To_SInt32(v27); /*0x5b3c1c*/
        v29 = 0; /*0x5b3c25*/
        v30 = (int *)(a1 + 0x38); /*0x5b3c27*/
        if ( a1 == 0xFFFFFFC8 ) /*0x5b3c2a*/
          goto LABEL_46; /*0x5b3c2a*/
        do /*0x5b3c3e*/
        {
          v31 = *v30; /*0x5b3c30*/
          v30 = (int *)v30[1]; /*0x5b3c32*/
          ++v29; /*0x5b3c35*/
        }
        while ( v29 != v28 && v30 ); /*0x5b3c3e*/
        if ( !v31 ) /*0x5b3c42*/
        {
LABEL_46:
          PrintError("Spell item index did was not in saved list."); /*0x5b3c49*/
          return; /*0x5b3c56*/
        }
        v32 = (char *)(v31 + 0x18); /*0x5b3c5f*/
        if ( v32 != (char *)Player_GetCurrentMagicItem(reference) ) /*0x5b3c69*/
        {
          if ( sub_65D4C0(reference) ) /*0x5b3c75*/
            sub_664850(reference, 0); /*0x5b3c86*/
          PlayerCharacter_SetCurrentMagicItem(reference, v32); /*0x5b3c92*/
          sub_57DE50(0x17); /*0x5b3c99*/
          goto LABEL_41; /*0x5b3ca1*/
        }
      }
    }
  }
}
