// AchievementsNative evidence: MagicPopupMenu builder for magic/effect items. Sets root user0=source Y, user1=bottom margin, user3=depth; stores exposed popup X at +0x50 and hidden X at +0x54 (exposed X minus background width).
// bad sp value at call has been detected, the output may be wrong!
void __usercall sub_5B4230(
        double a1@<st2>,
        double a2@<st1>,
        _DWORD *a3,
        int a4,
        unsigned __int8 *a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int WortcraftMaxEffects)
{
  Tile *OpenMenuTile; // eax
  Tile *v17; // ebx
  void *ParentMenu; // eax
  _DWORD *v19; // eax
  int v20; // edi
  _DWORD *v21; // ecx
  int v22; // ebx
  _BYTE *v23; // ebp
  char **v24; // eax
  const char *v25; // ebx
  const char **v26; // eax
  const char *v27; // eax
  int (__thiscall *v28)(_DWORD *); // eax
  int BaseCalcAVi; // eax
  BSStringT v30; // [esp+18h] [ebp-348h] BYREF
  _DWORD *v31; // [esp+20h] [ebp-340h]
  double v32; // [esp+24h] [ebp-33Ch]
  int v33; // [esp+2Ch] [ebp-334h]
  double v34; // [esp+30h] [ebp-330h]
  int v35; // [esp+3Ch] [ebp-324h]
  Tile *v36; // [esp+40h] [ebp-320h]
  char v37[260]; // [esp+148h] [ebp-218h] BYREF
  char v38[260]; // [esp+24Ch] [ebp-114h] BYREF
  unsigned int v39; // [esp+35Ch] [ebp-4h]

  v31 = a3; /*0x5b427e*/
  v33 = a7; /*0x5b4282*/
  OpenMenuTile = (Tile *)Menu_GetOpenMenuTile(0x400); /*0x5b4286*/
  v17 = OpenMenuTile; /*0x5b428b*/
  v36 = OpenMenuTile; /*0x5b4292*/
  if ( !OpenMenuTile /*0x5b42be*/
    || (ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile),
        v19 = OblivionDynamicCast(
                ParentMenu,
                0,
                (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
                &MagicPopupMenu `RTTI Type Descriptor',
                0),
        (v20 = (int)v19) == 0) )
  {
    JUMPOUT(0x5B49DC); /*0x5b49dc*/
  }
  v19[0x16] = 1; /*0x5b42d6*/
  Tile_SetFloat(v17, (_DWORD *)0xFAE, *(float *)&a5); /*0x5b42dd*/
  Tile_SetFloat(v17, (_DWORD *)0xFAF, *(float *)&a6); /*0x5b42f4*/
  Tile_SetFloat(v17, (_DWORD *)0xFB1, *(float *)&a8); /*0x5b430b*/
  v21 = *(_DWORD **)(v20 + 0x28); /*0x5b4317*/
  *(float *)(v20 + 0x50) = *(float *)&a4; /*0x5b431a*/
  v32 = *(float *)&a4; /*0x5b4322*/
  v22 = 0; /*0x5b432f*/
  *(float *)(v20 + 0x54) = *(float *)&a4 - Tile_GetFloat(v21, 0xFCB); /*0x5b4333*/
  if ( a7 ) /*0x5b4336*/
  {
    v23 = *(_BYTE **)(a7 + 8); /*0x5b433c*/
    if ( v23[4] == 0x21 ) /*0x5b4343*/
    {
      _sprintf(v37, "%s\\%s", "Icons", "icon_small_damage.dds"); /*0x5b4360*/
      Tile_SetFloat(*(Tile **)(v20 + 0x2C), (_DWORD *)0xFA1, fConstant_2); /*0x5b437a*/
      Tile_SetString(*(_DWORD **)(v20 + 0x2C), (_DWORD *)0xFAF, v37); /*0x5b438f*/
      Tile_SetFloat(*(Tile **)(v20 + 0x2C), (_DWORD *)0xFB0, flt_A2FE7C); /*0x5b43a6*/
      if ( v23 ) /*0x5b43ad*/
      {
        v24 = *(char ***)(4 * (char)v23[0x90] + 0xB39A44); /*0x5b43ba*/
        if ( v24 ) /*0x5b43c3*/
          Tile_SetString(*(_DWORD **)(v20 + 0x2C), (_DWORD *)0xFAE, *v24); /*0x5b43d0*/
        else
          Tile_SetString(*(_DWORD **)(v20 + 0x2C), (_DWORD *)0xFAE, 0); /*0x5b43e5*/
      }
    }
    else
    {
      if ( v23[4] != 0x14 ) /*0x5b43f3*/
        goto LABEL_16; /*0x5b43f3*/
      _sprintf(v38, "%s\\%s", "Icons", "icon_small_armor.dds"); /*0x5b4410*/
      Tile_SetFloat(*(Tile **)(v20 + 0x2C), (_DWORD *)0xFA1, fConstant_2); /*0x5b442a*/
      Tile_SetString(*(_DWORD **)(v20 + 0x2C), (_DWORD *)0xFAF, v38); /*0x5b443f*/
      Tile_SetFloat(*(Tile **)(v20 + 0x2C), (_DWORD *)0xFB0, flt_A2FE7C); /*0x5b4456*/
      if ( v23 ) /*0x5b445f*/
      {
        v30.m_data = 0; /*0x5b4461*/
        v30.m_dataLen = 0; /*0x5b4465*/
        v30.m_bufLen = 0; /*0x5b446a*/
        v25 = (const char *)stru_B38BE8; /*0x5b446f*/
        v39 = 0; /*0x5b4477*/
        v26 = *(const char ***)(4 * (unsigned __int8)TESObjectARMO_ISHeavyArmor(v23) + 0xB084E8);// Medium Armor MagicPopup decode: enchanted-armor label path calls TESObjectARMO_IsHeavyArmor here; plugin captures armor context but preserves native boolean. /*0x5b4486*/
        if ( v26 ) /*0x5b448f*/
          v27 = *v26; /*0x5b4491*/
        else
          v27 = 0; /*0x5b4495*/
        BSStringT_Static_Format(&v30, "%s %s", v27, v25); /*0x5b44a3*/
        Tile_SetString(*(_DWORD **)(v20 + 0x2C), (_DWORD *)0xFAE, v30.m_data);// Medium Armor MagicPopup decode: final enchanted-armor Tile_SetString label write; replace Light/Heavy text with Medium only for effective Medium classification. /*0x5b44b8*/
        v39 = 0xFFFFFFFF; /*0x5b44c1*/
        BSStringT_Clear((unsigned int *)&v30); /*0x5b44cc*/
      }
    }
    HIDWORD(v34) = 1; /*0x5b44d1*/
    v22 = 1; /*0x5b44d9*/
  }
LABEL_16:
  v28 = *(int (__thiscall **)(_DWORD *))(*a3 + 0x18); /*0x5b44dd*/
  v35 = 8; /*0x5b44e4*/
  if ( v28(a3) == 8 ) /*0x5b44f1*/
  {
    BaseCalcAVi = Actor_GetBaseCalcAVi((int *)reference, v22, v20, (int)a3, 0x13); /*0x5b44fb*/
    WortcraftMaxEffects = Magic_GetWortcraftMaxEffects(BaseCalcAVi); /*0x5b4509*/
  }
  if ( a3 == (_DWORD *)0xFFFFFFF0 ) /*0x5b4512*/
    JUMPOUT(0x5B46DE); /*0x5b46de*/
  sub_5B4524( /*0x5b451c*/
    (Tile **)(v20 + 4 * v22 + 0x2C),
    v22,
    a3 + 4,
    v20,
    (int)a3,
    a1,
    a2,
    (int)a3,
    a4,
    a5,
    a6,
    a7,
    a8,
    a9,
    a10,
    a11,
    a12,
    a13,
    a14,
    a15,
    WortcraftMaxEffects);
}
