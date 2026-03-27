0x4DE3C0: push    esi
0x4DE3C1: mov     esi, [esp+4+arg_0]
0x4DE3C5: test    esi, esi
0x4DE3C7: jz      loc_4DE456
0x4DE3CD: mov     eax, [esi+0Ch]
0x4DE3D0: fld     [esp+4+arg_4]
0x4DE3D4: test    eax, eax
0x4DE3D6: jz      short loc_4DE3E2
0x4DE3D8: fst     dword ptr [eax+10h]
0x4DE3DB: mov     eax, [eax+34h]
0x4DE3DE: test    eax, eax
0x4DE3E0: jnz     short loc_4DE3D8
0x4DE3E2: push    6
0x4DE3E4: fstp    st
0x4DE3E6: mov     ecx, esi
0x4DE3E8: call    NiNode_GetNiPropertyByID
0x4DE3ED: test    eax, eax
0x4DE3EF: jz      short loc_4DE408
0x4DE3F1: mov     eax, [eax+0Ch]
0x4DE3F4: test    eax, eax
0x4DE3F6: jz      short loc_4DE408
0x4DE3F8: fld     [esp+4+arg_4]
0x4DE3FC: fst     dword ptr [eax+10h]
0x4DE3FF: mov     eax, [eax+34h]
0x4DE402: test    eax, eax
0x4DE404: jnz     short loc_4DE3FC
0x4DE406: fstp    st
0x4DE408: mov     eax, [esi]
0x4DE40A: mov     edx, [eax+8]
0x4DE40D: push    edi
0x4DE40E: mov     ecx, esi
0x4DE410: call    edx
0x4DE412: mov     edi, eax
0x4DE414: test    edi, edi
0x4DE416: jz      short loc_4DE455
0x4DE418: movzx   eax, word ptr [edi+0B6h]
0x4DE41F: xor     esi, esi
0x4DE421: test    eax, eax
0x4DE423: jbe     short loc_4DE455
0x4DE425: cmp     eax, esi
0x4DE427: ja      short loc_4DE42D
0x4DE429: xor     eax, eax
0x4DE42B: jmp     short loc_4DE436
0x4DE42D: mov     eax, [edi+0B0h]
0x4DE433: mov     eax, [eax+esi*4]
0x4DE436: fld     [esp+8+arg_4]
0x4DE43A: push    ecx
0x4DE43B: fstp    [esp+0Ch+var_C]; float
0x4DE43E: push    eax; int
0x4DE43F: call    sub_4DE3C0
0x4DE444: movzx   eax, word ptr [edi+0B6h]
0x4DE44B: add     esi, 1
0x4DE44E: add     esp, 8
0x4DE451: cmp     eax, esi
0x4DE453: ja      short loc_4DE42D
0x4DE455: pop     edi
0x4DE456: pop     esi
0x4DE457: retn
