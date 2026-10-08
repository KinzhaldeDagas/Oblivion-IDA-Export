void __thiscall sub_590970(BSStringT *this)
{
  CHAR *v2; // eax
  CHAR *v3; // eax
  BSStringT *v4; // ebp
  CHAR *v5; // eax
  int ModelData; // eax
  NiNode *v7; // edi
  volatile LONG *v8; // eax
  _DWORD *v9; // eax
  LONG (__stdcall *v10)(volatile LONG *); // ebx
  int v11; // ecx
  float v12; // ebp
  NiMaterialProperty *v13; // eax
  NiMaterialProperty *v14; // eax
  float v15; // ecx
  InterfaceManager *Singleton; // eax
  bool v17; // cl
  int v18; // eax
  float v19[4]; // [esp+28h] [ebp-3Ch] BYREF
  float v20; // [esp+38h] [ebp-2Ch]
  void (__thiscall ***v21)(_DWORD, int); // [esp+3Ch] [ebp-28h] BYREF
  void (__thiscall ***v22)(_DWORD, int); // [esp+40h] [ebp-24h]
  float v23; // [esp+4Ch] [ebp-18h]
  float v24; // [esp+50h] [ebp-14h]
  float v25; // [esp+54h] [ebp-10h]
  int v26; // [esp+60h] [ebp-4h]

  v2 = sub_588C10(this, 0xFE6); /*0x59099e*/
  if ( strstr(v2, "\\Data") ) /*0x5909a9*/
  {
    v3 = sub_588C10(this, 0xFE6); /*0x5909bc*/
    v4 = this + 0xA; /*0x5909c2*/
    BSStringT_Static_Format(this + 0xA, "%s", v3); /*0x5909cb*/
  }
  else
  {
    v5 = sub_588C10(this, 0xFE6); /*0x5909d5*/
    v4 = this + 0xA; /*0x5909e0*/
    BSStringT_Static_Format(this + 0xA, "%s\\Menus\\%s", "Meshes", v5); /*0x5909e9*/
  }
  ModelData = ModelLoader_LoadModelData((int *)MEMORY[0xB33A1C], v4->m_data, 1, 0, 0); /*0x590a01*/
  v7 = (NiNode *)ModelData; /*0x590a06*/
  if ( ModelData )
  {
    if ( *(_DWORD *)(ModelData + 0x1C) ) /*0x590a1f*/
    {
      OB_NiCloningProcess_ctor(&v21); /*0x590a2a*/
      v25 = 1.0; /*0x590a31*/
      v24 = 1.0; /*0x590a35*/
      v23 = 1.0; /*0x590a39*/
      v26 = 0; /*0x590a3e*/
      if ( sub_480820(v7) ) /*0x590a46*/
        v8 = sub_4430C0(v7, (int)&v21); /*0x590a5e*/
      else
        v8 = (volatile LONG *)sub_700610(v7, (int)&v21); /*0x590a6c*/
      v7 = (NiNode *)v8; /*0x590a77*/
      v26 = 0xFFFFFFFF; /*0x590a79*/
      if ( v21 ) /*0x590a81*/
        (**v21)(v21, 1); /*0x590a89*/
      if ( v22 ) /*0x590a91*/
        (**v22)(v22, 1); /*0x590a99*/
    }
    v9 = sub_700010(v7, (int)&stru_B3CAC0); /*0x590aa2*/
    if ( v9 ) /*0x590aa9*/
      *((_DWORD *)this + 0x10) = v9; /*0x590aab*/
    v10 = InterlockedDecrement; /*0x590aae*/
    while ( 1 ) /*0x590ab4*/
    {
      v11 = *((_DWORD *)this + 9); /*0x590ab4*/
      if ( !*(_WORD *)(v11 + 0xB6) || !**(_DWORD **)(v11 + 0xB0) ) /*0x590ac7*/
        break; /*0x590ac7*/
      (*(void (__thiscall **)(int, float *, _DWORD))(*(_DWORD *)v11 + 0x8C))(v11, v19, 0); /*0x590adb*/
      v12 = v19[0]; /*0x590add*/
      if ( LODWORD(v19[0]) ) /*0x590ae3*/
      {
        if ( !v10((volatile LONG *)(LODWORD(v19[0]) + 4)) && v12 != 0.0 ) /*0x590af1*/
          (**(void (__thiscall ***)(float, int))LODWORD(v12))(COERCE_FLOAT(LODWORD(v12)), 1); /*0x590afc*/
      }
    }
    sub_590810(this, (int)v7); /*0x590b03*/
    v13 = (NiMaterialProperty *)FormHeapAlloc(0x5Cu); /*0x590b0a*/
    LODWORD(v19[1]) = v13; /*0x590b12*/
    v26 = 1; /*0x590b1d*/
    if ( v13 ) /*0x590b21*/
      v14 = NiMaterialProperty::NiMaterialProperty(v13); /*0x590b25*/
    else
      v14 = 0; /*0x590b2c*/
    *((_DWORD *)v14 + 0x15) += 2; /*0x590b30*/
    *((float *)v14 + 0x14) = 0.0; /*0x590b34*/
    v26 = 0xFFFFFFFF; /*0x590b3a*/
    v19[2] = 1.0; /*0x590b42*/
    v19[3] = 1.0; /*0x590b46*/
    v20 = 1.0; /*0x590b4e*/
    *((float *)v14 + 0x10) = 1.0; /*0x590b56*/
    v15 = v20; /*0x590b59*/
    *((float *)v14 + 0x11) = 1.0; /*0x590b5d*/
    *((float *)v14 + 0x12) = v15; /*0x590b60*/
    sub_405680(v7, (BSShaderProperty *)v14); /*0x590b65*/
    Singleton = InterfaceManager_GetSingleton(0, 1); /*0x590b6d*/
    sub_405680(v7, (BSShaderProperty *)Singleton->unk078); /*0x590b7b*/
    (*(void (__thiscall **)(_DWORD, NiNode *, int))(**((_DWORD **)this + 9) + 0x84))(*((_DWORD *)this + 9), v7, 1); /*0x590b8d*/
    Tile_SetFloat((Tile *)this, 0xFA6u, fConstant_2); /*0x590ba0*/
    v17 = Tile_GetFloat(this, 0xFA1) == fConstant_1; /*0x590bbc*/
    v18 = *((_DWORD *)this + 9); /*0x590bc6*/
    if ( v17 ) /*0x590bc9*/
      *(_WORD *)(v18 + 0x18) |= 1u; /*0x590bcb*/
    else
      *(_WORD *)(v18 + 0x18) &= ~1u; /*0x590bd1*/
    NiNode_UpdateDynamicEffectState(*((NiNode **)this + 9)); /*0x590bda*/
    NiAVObject_InitializePropertyState(*((NiAVObject **)this + 9)); /*0x590be2*/
    *((_DWORD *)this + 0xB) = *((_DWORD *)this + 0xB) ^ 0x40 | 9; /*0x590bf3*/
    LOBYTE(InterfaceManager_GetSingleton(0, 1)->unk07C) = 1; /*0x590bfb*/
  }
  else
  {
    PrintError("Missing NIF for animated menu object: %s", v4->m_data);
  }
}
