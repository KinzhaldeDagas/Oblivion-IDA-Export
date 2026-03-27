void __thiscall sub_590970(BSStringT *this)
{
  CHAR *v2; // eax
  CHAR *v3; // eax
  BSStringT *v4; // ebp
  CHAR *v5; // eax
  int v6; // eax
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
  NiTPointerMap<NiObject *,NiObject *> *v21; // [esp+3Ch] [ebp-28h] BYREF
  void (__thiscall ***v22)(_DWORD, int); // [esp+40h] [ebp-24h]
  float v23; // [esp+4Ch] [ebp-18h]
  float v24; // [esp+50h] [ebp-14h]
  float v25; // [esp+54h] [ebp-10h]
  int v26; // [esp+60h] [ebp-4h]

  v2 = sub_588C10(this, 0xFE6);
  if ( strstr(v2, "\\Data") )
  {
    v3 = sub_588C10(this, 0xFE6);
    v4 = this + 0xA;
    BSStringT_Static_Format(this + 0xA, "%s", v3);
  }
  else
  {
    v5 = sub_588C10(this, 0xFE6);
    v4 = this + 0xA;
    BSStringT_Static_Format(this + 0xA, "%s\\Menus\\%s", "Meshes", v5);
  }
  v6 = sub_439EB0((int *)ModelLoaderPtr, v4->m_data, 1, 0, 0);
  v7 = (NiNode *)v6;
  if ( v6 )
  {
    if ( *(_DWORD *)(v6 + 0x1C) )
    {
      sub_478B90(&v21);
      v25 = 1.0;
      v24 = 1.0;
      v23 = 1.0;
      v26 = 0;
      if ( sub_480820(v7) )
        v8 = sub_4430C0(v7, (int)&v21);
      else
        v8 = (volatile LONG *)sub_700610(v7, (int)&v21);
      v7 = (NiNode *)v8;
      v26 = 0xFFFFFFFF;
      if ( v21 )
        (**(void (__thiscall ***)(NiTPointerMap<NiObject *,NiObject *> *, int))v21)(v21, 1);
      if ( v22 )
        (**v22)(v22, 1);
    }
    v9 = sub_700010(v7, (int)&stru_B3CAC0);
    if ( v9 )
      *((_DWORD *)this + 0x10) = v9;
    v10 = InterlockedDecrement;
    while ( 1 )
    {
      v11 = *((_DWORD *)this + 9);
      if ( !*(_WORD *)(v11 + 0xB6) || !**(_DWORD **)(v11 + 0xB0) )
        break;
      (*(void (__thiscall **)(int, float *, _DWORD))(*(_DWORD *)v11 + 0x8C))(v11, v19, 0);
      v12 = v19[0];
      if ( LODWORD(v19[0]) )
      {
        if ( !v10((volatile LONG *)(LODWORD(v19[0]) + 4)) && v12 != 0.0 )
          (**(void (__thiscall ***)(float, int))LODWORD(v12))(COERCE_FLOAT(LODWORD(v12)), 1);
      }
    }
    sub_590810(this, (int)v7);
    v13 = (NiMaterialProperty *)FormHeapAlloc(0x5Cu);
    LODWORD(v19[1]) = v13;
    v26 = 1;
    if ( v13 )
      v14 = NiMaterialProperty::NiMaterialProperty(v13);
    else
      v14 = 0;
    *((_DWORD *)v14 + 0x15) += 2;
    *((float *)v14 + 0x14) = 0.0;
    v26 = 0xFFFFFFFF;
    v19[2] = 1.0;
    v19[3] = 1.0;
    v20 = 1.0;
    *((float *)v14 + 0x10) = 1.0;
    v15 = v20;
    *((float *)v14 + 0x11) = 1.0;
    *((float *)v14 + 0x12) = v15;
    sub_405680(v7, (BSShaderProperty *)v14);
    Singleton = InterfaceManager_GetSingleton(0, 1);
    sub_405680(v7, (BSShaderProperty *)Singleton->unk078);
    (*(void (__thiscall **)(_DWORD, NiNode *, int))(**((_DWORD **)this + 9) + 0x84))(*((_DWORD *)this + 9), v7, 1);
    Tile_SetFloat((Tile *)this, (_DWORD *)0xFA6, fConstant_2);
    v17 = Tile_GetFloat(this, 0xFA1) == fConstant_1;
    v18 = *((_DWORD *)this + 9);
    if ( v17 )
      *(_WORD *)(v18 + 0x18) |= 1u;
    else
      *(_WORD *)(v18 + 0x18) &= ~1u;
    NiNode_UpdateDynamicEffectState(*((NiNode **)this + 9));
    NiAVObject_InitializePropertyState(*((NiAVObject **)this + 9));
    *((_DWORD *)this + 0xB) = *((_DWORD *)this + 0xB) ^ 0x40 | 9;
    LOBYTE(InterfaceManager_GetSingleton(0, 1)->unk07C) = 1;
  }
  else
  {
    PrintError("Missing NIF for animated menu object: %s", v4->m_data);
  }
}
