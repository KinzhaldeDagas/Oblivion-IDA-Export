// TES4 authoritative: applies character controller construction info, including proxy+0x248 vertical/base offset, world metadata, initial state, movement scalar, gravity, and owner/listener setup.
void __fastcall bhkCharacterController_InitFromCinfo(int a1, int a2, int a3)
{
  unsigned int v4; // eax
  int v5; // eax
  bhkRefObject *v6; // eax
  bhkRefObject *v7; // eax
  int *v8; // ebx
  int v9; // eax
  int v10; // ecx
  int v11; // ebx
  int v12; // ebx
  int v13; // eax
  const void **v14; // edi
  int v15; // ecx
  float v16; // [esp+10h] [ebp-74h]
  int v17; // [esp+10h] [ebp-74h]
  OB_CollisionPhantomCinfo_010201A0 info; // [esp+14h] [ebp-70h] BYREF
  unsigned int v19; // [esp+80h] [ebp-4h]

  if ( a3 ) /*0x897075*/
  {
    v16 = *(float *)(a3 + 0x98) * *(float *)(a3 + 0x94);// cinfo+0x98 * cinfo+0x94 becomes proxy+0x248 vertical/base offset before shape construction. /*0x897088*/
    *(float *)(a1 + 0x248) = v16;               // Stores proxy+0x248 vertical/base offset from construction info scale fields; this is used by capsule probe endpoint z adjustment, not water height. /*0x897090*/
    bhkCharacterController_BuildCharacterShapesFromCinfo(a1, a2, a3); /*0x897096*/
    OB_bhkShapePhantomCinfo_InitIdentity_010201A0(&info); /*0x89709f*/
    v4 = *(_DWORD *)(a3 + 0x74); /*0x8970a4*/
    v19 = 0; /*0x8970a9*/
    info.collisionFilter = v4; /*0x8970b0*/
    v5 = sub_890BA0((int *)a1); /*0x8970b4*/
    if ( v5 ) /*0x8970bb*/
      info.shape = *(void **)(v5 + 8); /*0x8970c0*/
    else
      info.shape = 0; /*0x8970c6*/
    v6 = (bhkRefObject *)FormHeapAlloc(0x14u); /*0x8970cc*/
    LOBYTE(v19) = 1; /*0x8970da*/
    if ( v6 ) /*0x8970e2*/
      v7 = OB_bhkSimpleShapePhantom_CtorFromCinfo_010201A0(v6, &info); /*0x8970eb*/
    else
      v7 = 0; /*0x8970f2*/
    v8 = (int *)(a1 + 0x364); /*0x8970f4*/
    LOBYTE(v19) = 0; /*0x8970fd*/
    NiSmartPointer_Set__((Ni2DBuffer **)(a1 + 0x364), (Ni2DBuffer *)v7); /*0x897105*/
    if ( *(_DWORD *)(a3 + 0x78) ) /*0x89710a*/
    {
      if ( *v8 ) /*0x897111*/
      {
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)*v8 + 0x5C))(*v8, *(_DWORD *)(a3 + 0x78)); /*0x89711d*/
        v17 = *v8; /*0x89712f*/
        v9 = sub_8AEB80(0x96u, 0x96u, 0, 0x19u); /*0x897133*/
        sub_88BB60(*(int **)(a3 + 0x78), v17, v9); /*0x897144*/
        if ( *(_BYTE *)(*(_DWORD *)(a3 + 0x78) + 0x1A) ) /*0x89714c*/
          (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)a1 + 0x88))(a1, 0); /*0x89715e*/
      }
      v10 = *(_DWORD *)(a1 + 0x368); /*0x897160*/
      if ( v10 ) /*0x897168*/
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v10 + 0x5C))(v10, *(_DWORD *)(a3 + 0x78)); /*0x897173*/
    }
    v11 = *v8; /*0x89717b*/
    *(_DWORD *)(a1 + 0x2A0) = *(_DWORD *)(a3 + 0x88);// cinfo+0x88 becomes initial/current controller state id at proxy+0x2A0. /*0x89717f*/
    *(float *)(a1 + 0x310) = *(float *)(a3 + 0x7C);// cinfo+0x7C becomes proxy+0x310 jump/fall scalar. /*0x897188*/
    *(float *)(a1 + 0x328) = *(float *)(a3 + 0x80);// cinfo+0x80 becomes proxy+0x328 gravity/frame-scale field. /*0x897194*/
    *(_DWORD *)(a1 + 0x3B0) = *(_DWORD *)(a3 + 0xA0);// cinfo+0xA0 is copied to proxy+0x3B0; high-level role unresolved. /*0x8971a0*/
    if ( v11 ) /*0x8971a6*/
      v12 = *(_DWORD *)(v11 + 8); /*0x8971a8*/
    else
      v12 = 0; /*0x8971ad*/
    *(_DWORD *)(a3 + 0x48) = v12; /*0x8971b2*/
    sub_8B9E50((void *)a1, a3); /*0x8971b5*/
    v13 = a1 + 0x1F0; /*0x8971ba*/
    v14 = *(const void ***)(a1 + 8); /*0x8971c0*/
    if ( v14 ) /*0x8971c5*/
      sub_8ACD60(v14, v13); /*0x8971ca*/
    v19 = 0xFFFFFFFF; /*0x8971d5*/
    if ( (int)info.propertyCapacityFlags >= 0 ) /*0x8971e0*/
    {
      v15 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x8971f2*/
      if ( !v15 ) /*0x8971fa*/
        v15 = unk_BA7D9C; /*0x8971fc*/
      sub_8A75D0(v15, (_DWORD *)info.propertyData, 8 * info.propertyCapacityFlags, 0x14); /*0x897215*/
    }
  }
}
