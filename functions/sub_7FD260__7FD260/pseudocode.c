// Oblivion Lighting30 selector activation. Selectors outside 0x15E/0x15F restore the main constant maps, derive row selector-0x12A, rewrite automatic vertex/pixel-constant enable flags from B46988/B46A60, and apply a route render-state group. SimpleShadow selectors 0x14E..0x151 use valid rows and route group 7. Stock one-light selectors 0x177..0x17A are not rejected here: they derive rows 0x4D..0x50 and use the generic route-group-0 path. The later per-geometry resolver is the actual validity gate; every later selector activation deterministically rewrites these flags before its draw.
// DX11 active-map ownership audit 2026-10-01: ordinary7FD260 prefix7FD2A9..7FD329 performs pixel2C<-84 first, then vertex30<-88. Each unequal assignment releases the old map via InterlockedDecrement BEFORE publishing/retaining the replacement; zero calls old vtable[0](this,1). Pointer equality skips both ref operations. BuildConstantMaps7FCC80 retains main/alternate maps at7C/80/84/88, separately from active2C/30. A coalesced final-store plan must simulate intermediate counts and reject any zero-count destructor or overflow, even when net alias deltas cancel. Such stores require exclusion of all map refcount writers/observers and preserved object lifetimes; read-capture scope alone is insufficient.
char __cdecl sub_7FD260(unsigned __int16 a1)
{
  int *shader; // esi
  unsigned __int16 v2; // bx
  int v3; // edi
  void (__stdcall *v4)(volatile LONG *); // ebx
  LONG (__stdcall *v5)(volatile LONG *); // ebp
  int v6; // eax
  int v7; // edi
  int v8; // eax
  int v9; // edx
  int v10; // esi
  int v11; // edi
  int v12; // eax
  int v13; // ebp
  int v14; // ebp
  int v15; // ebp
  int v16; // edi
  int i; // eax
  int v18; // esi
  int v20; // esi
  int v21; // esi

  shader = (int *)GetShaderDefinition(0x1Au)->shader; /*0x7fd26c*/
  if ( shader && (v2 = a1, (unsigned __int16)(a1 - 0x15E) <= 1u) )// Fog decode: Lighting30 selector route takes the alternate map branch for TexEffect selectors 0x15E..0x15F; those variants consume FogParam c12/FogColor c13. /*0x7fd287*/
  {
    OB_NiSmartPointer_Assign_010201A0(shader + 0xB, shader + 0x1F);// Fog decode: selector 0x15E..0x15F copies alternate pixel map this+0x1F to active pixel map this+0x0B for TexEffect HQ. /*0x7fd290*/
    OB_NiSmartPointer_Assign_010201A0(shader + 0xC, shader + 0x20);// Fog decode: selector 0x15E..0x15F copies alternate vertex map this+0x20 to active vertex map this+0x0C; this is the map with FogParam c12/FogColor c13. /*0x7fd29f*/
  }
  else
  {
    v3 = shader[0xB]; /*0x7fd2a9*/
    v4 = (void (__stdcall *)(volatile LONG *))InterlockedIncrement; /*0x7fd2b2*/
    v5 = InterlockedDecrement; /*0x7fd2b8*/
    if ( v3 != shader[0x21] ) /*0x7fd2be*/
    {
      if ( v3 ) /*0x7fd2c2*/
      {
        if ( !v5((volatile LONG *)(v3 + 4)) ) /*0x7fd2c8*/
          (**(void (__thiscall ***)(int, int))v3)(v3, 1); /*0x7fd2da*/
      }
      v6 = shader[0x21]; /*0x7fd2dc*/
      shader[0xB] = v6; /*0x7fd2e4*/
      if ( v6 ) /*0x7fd2e7*/
        v4((volatile LONG *)(v6 + 4)); /*0x7fd2ed*/
    }
    v7 = shader[0xC]; /*0x7fd2ef*/
    if ( v7 != shader[0x22] ) /*0x7fd2f8*/
    {
      if ( v7 ) /*0x7fd2fc*/
      {
        if ( !v5((volatile LONG *)(v7 + 4)) ) /*0x7fd302*/
          (**(void (__thiscall ***)(int, int))v7)(v7, 1); /*0x7fd314*/
      }
      v8 = shader[0x22]; /*0x7fd316*/
      shader[0xC] = v8; /*0x7fd31e*/
      if ( v8 ) /*0x7fd321*/
        v4((volatile LONG *)(v8 + 4)); /*0x7fd327*/
    }
    v2 = a1; /*0x7fd329*/
  }
  if ( v2 == 4 ) /*0x7fd331*/
  {
    v9 = 1; /*0x7fd333*/
  }
  else if ( v2 == 5 ) /*0x7fd33e*/
  {
    v9 = 2; /*0x7fd340*/
  }
  else
  {
    v9 = v2 - 0x12A;                            // selectorRow = selector - 0x12A. Stock one-light selectors 0x177..0x17A produce rows 0x4D..0x50; selector activation does not reject them. /*0x7fd34a*/
  }
  v10 = 1; /*0x7fd350*/
  v11 = 0; /*0x7fd35a*/
  v12 = 2; /*0x7fd35e*/
  do /*0x7fd445*/
  {
    if ( v11 >= 5 ) /*0x7fd36a*/
    {
      *((_BYTE *)&OB_ShaderConstantStorage_010201A0[0x2D3] + v10 + 3) = ((1 << v10) & *(_DWORD *)(4 * v9 + 0xB46988)) != 0; /*0x7fd3aa*/
    }
    else
    {
      v13 = *(_DWORD *)(4 * v11 + 0xB46B98); /*0x7fd36c*/
      if ( v13 ) /*0x7fd375*/
      {
        v2 = a1; /*0x7fd387*/
        *(_BYTE *)(v13 + 8) = ((1 << v10) & *(_DWORD *)(4 * v9 + 0xB46988)) != 0;// Read the vertex automatic-constant enable mask at B46988[selectorRow]. The valid Lighting30 table ends at selector 0x15F/row 0x35; inherited 0x177..0x17A index beyond that decoded family, but no pass will later be queued. /*0x7fd38e*/
      }
    }
    if ( v10 >= 5 ) /*0x7fd3b0*/
    {
      *((_BYTE *)&OB_ShaderConstantStorage_010201A0[0x2D4] + v10) = ((1 << v12) & *(_DWORD *)(4 * v9 + 0xB46988)) != 0; /*0x7fd3ec*/
    }
    else
    {
      v14 = *(_DWORD *)(4 * v11 + 0xB46B9C); /*0x7fd3b2*/
      if ( v14 ) /*0x7fd3bb*/
      {
        v2 = a1; /*0x7fd3cd*/
        *(_BYTE *)(v14 + 8) = ((1 << v12) & *(_DWORD *)(4 * v9 + 0xB46988)) != 0; /*0x7fd3d4*/
      }
    }
    if ( v12 >= 5 ) /*0x7fd3f5*/
    {
      *((_BYTE *)&OB_ShaderConstantStorage_010201A0[0x2D4] + v12) = ((1 << (v12 + 1)) & *(_DWORD *)(4 * v9 + 0xB46988)) != 0; /*0x7fd433*/
    }
    else
    {
      v15 = *(_DWORD *)(4 * v11 + 0xB46BA0); /*0x7fd3f7*/
      if ( v15 ) /*0x7fd400*/
      {
        v2 = a1; /*0x7fd413*/
        *(_BYTE *)(v15 + 8) = ((1 << (v12 + 1)) & *(_DWORD *)(4 * v9 + 0xB46988)) != 0; /*0x7fd41a*/
      }
    }
    v11 += 3; /*0x7fd439*/
    v10 += 3; /*0x7fd43c*/
    v12 += 3; /*0x7fd43f*/
  }
  while ( v11 < 0x21 ); /*0x7fd445*/
  v16 = *(_DWORD *)(4 * v9 + 0xB46A60);         // Read B46A60[selectorRow] and rewrite all pixel automatic-constant enable flags. These flags are selector bookkeeping, not a draw; the next selector activation rewrites them deterministically. /*0x7fd44b*/
  for ( i = 0; i < 0x31; ++i ) /*0x7fd457*/
    *((_BYTE *)&OB_ShaderConstantStorage_010201A0[0x2C7] + i) = ((1 << (i + 1)) & v16) != 0; /*0x7fd473*/
  *(_WORD *)((char *)&OB_ShaderConstantStorage_010201A0[0x2C8] + 1) = 0x101; /*0x7fd48a*/
  HIBYTE(OB_ShaderConstantStorage_010201A0[0x2C8]) = 1; /*0x7fd490*/
  LOWORD(OB_ShaderConstantStorage_010201A0[0x2D8]) = 0x101; /*0x7fd495*/
  BYTE2(OB_ShaderConstantStorage_010201A0[0x2D8]) = 1; /*0x7fd49b*/
  if ( v2 == 4 || v2 == 5 ) /*0x7fd4aa*/
  {
    v21 = *(_DWORD *)(4 * v9 + 0xB473D0); /*0x7fd532*/
  }
  else
  {
    if ( (unsigned __int16)(v2 - 0x156) <= 7u ) /*0x7fd4ba*/
    {
      v18 = *(_DWORD *)(4 * v2 + 0xB46F28); /*0x7fd4bf*/
      if ( !*(_DWORD *)(v18 + 0x30) ) /*0x7fd4c6*/
        *(_DWORD *)(v18 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7fd4d1*/
      return NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v18 + 0x30), 0xA8, 0xF, 0); /*0x7fd4ea*/
    }
    if ( (unsigned __int16)(v2 - 0x12B) <= 0x34u )// Only selectors 0x12B..0x15F use Lighting30 route group 7. Stock 0x177..0x17A fall through. /*0x7fd4f5*/
    {
      v20 = *(_DWORD *)(4 * v2 + 0xB46F28); /*0x7fd4fa*/
      if ( !*(_DWORD *)(v20 + 0x30) ) /*0x7fd501*/
        *(_DWORD *)(v20 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7fd50c*/
      return NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v20 + 0x30), 0xA8, 7, 0); /*0x7fd525*/
    }
    v21 = *(_DWORD *)(4 * v2 + 0xB46F28);       // Out-of-family 0x177..0x17A take the generic route-group-0 render-state path. Return value is ignored by FlushPassBucket; per-geometry pass resolution is the later no-draw gate. /*0x7fd529*/
  }
  if ( !*(_DWORD *)(v21 + 0x30) ) /*0x7fd539*/
    *(_DWORD *)(v21 + 0x30) = NiD3DRenderStateGroupPool_Acquire(); /*0x7fd544*/
  return NiD3DRenderStateGroup_SetRenderState(*(_DWORD **)(v21 + 0x30), 0xA8, 0, 0); /*0x7fd4e5*/
}
