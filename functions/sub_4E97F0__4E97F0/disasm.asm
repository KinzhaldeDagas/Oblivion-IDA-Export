0x4E97F0: push    0FFFFFFFFh
0x4E97F2: push    offset SEH_4E97F0
0x4E97F7: mov     eax, large fs:0
0x4E97FD: push    eax
0x4E97FE: sub     esp, 0Ch
0x4E9801: push    ebx
0x4E9802: push    ebp
0x4E9803: push    esi
0x4E9804: push    edi
0x4E9805: mov     eax, ds:0B30AACh
0x4E980A: xor     eax, esp
0x4E980C: push    eax
0x4E980D: lea     eax, [esp+2Ch+var_C]
0x4E9811: mov     large fs:0, eax
0x4E9817: mov     esi, ecx
0x4E9819: mov     ebp, [esp+2Ch+arg_0]
0x4E981D: xor     cl, cl
0x4E981F: test    ebp, ebp
0x4E9821: mov     [esp+2Ch+var_15], cl
0x4E9825: jz      loc_4E99B9
0x4E982B: mov     ebx, [esp+2Ch+arg_8]
0x4E982F: fld     dword ptr [ebx]
0x4E9831: fld     qword ptr ds:0A3A5B0h
0x4E9837: fucom   st(1)
0x4E9839: fnstsw  ax
0x4E983B: fstp    st(1)
0x4E983D: test    ah, 44h
0x4E9840: jnp     loc_4E99B7
0x4E9846: mov     edi, [esp+2Ch+arg_C]
0x4E984A: fld     dword ptr [edi]
0x4E984C: fucompp
0x4E984E: fnstsw  ax
0x4E9850: test    ah, 44h
0x4E9853: jnp     loc_4E99B9
0x4E9859: lea     ecx, [esp+2Ch+var_14]
0x4E985D: call    sub_68C040
0x4E9862: lea     eax, [esp+2Ch+var_14]
0x4E9866: push    eax
0x4E9867: push    edi
0x4E9868: push    ebx
0x4E9869: mov     ecx, esi
0x4E986B: mov     [esp+38h+var_4], 0
0x4E9873: call    sub_4E94C0
0x4E9878: test    al, al
0x4E987A: jnz     short loc_4E9885
0x4E987C: lea     ecx, [esp+2Ch+var_14]
0x4E9880: call    sub_68C6E0
0x4E9885: lea     ecx, [esp+2Ch+var_14]
0x4E9889: call    sub_42B410
0x4E988E: mov     edi, eax
0x4E9890: test    edi, edi
0x4E9892: jz      loc_4E999E
0x4E9898: mov     edx, [esp+2Ch+arg_4]
0x4E989C: test    edx, edx
0x4E989E: jz      short loc_4E98BD
0x4E98A0: mov     eax, ebp
0x4E98A2: mov     ecx, [eax+4]
0x4E98A5: test    ecx, ecx
0x4E98A7: jnz     short loc_4E98AD
0x4E98A9: cmp     [eax], ecx
0x4E98AB: jz      short loc_4E990F
0x4E98AD: cmp     [eax], edx
0x4E98AF: jz      short loc_4E98B9
0x4E98B1: mov     eax, ecx
0x4E98B3: test    eax, eax
0x4E98B5: jnz     short loc_4E98A2
0x4E98B7: jmp     short loc_4E990F
0x4E98B9: mov     ebp, eax
0x4E98BB: jmp     short loc_4E990F
0x4E98BD: push    8; Size
0x4E98BF: call    FormHeapAlloc
0x4E98C4: add     esp, 4
0x4E98C7: mov     [esp+2Ch+arg_0], eax
0x4E98CB: test    eax, eax
0x4E98CD: mov     byte ptr [esp+2Ch+var_4], 1
0x4E98D2: jz      short loc_4E98DF
0x4E98D4: mov     ecx, eax
0x4E98D6: call    sub_68B0C0
0x4E98DB: mov     esi, eax
0x4E98DD: jmp     short loc_4E98E1
0x4E98DF: xor     esi, esi
0x4E98E1: push    1
0x4E98E3: mov     ecx, esi
0x4E98E5: mov     byte ptr [esp+30h+var_4], 0
0x4E98EA: call    sub_68B1D0
0x4E98EF: mov     ecx, edi
0x4E98F1: call    sub_6899C0
0x4E98F6: push    eax
0x4E98F7: mov     ecx, esi
0x4E98F9: call    sub_68B200
0x4E98FE: push    esi
0x4E98FF: mov     ecx, ebp
0x4E9901: call    BSSimpleList_PushFront
0x4E9906: mov     ecx, edi
0x4E9908: call    NiDX92DBufferData__GetSurfaceData
0x4E990D: mov     edi, eax
0x4E990F: test    ebp, ebp
0x4E9911: jz      loc_4E999E
0x4E9917: test    edi, edi
0x4E9919: mov     ebx, [ebp+4]
0x4E991C: jz      short loc_4E999A
0x4E991E: push    8; Size
0x4E9920: call    FormHeapAlloc
0x4E9925: add     esp, 4
0x4E9928: mov     [esp+2Ch+arg_0], eax
0x4E992C: test    eax, eax
0x4E992E: mov     byte ptr [esp+2Ch+var_4], 2
0x4E9933: jz      short loc_4E9940
0x4E9935: mov     ecx, eax
0x4E9937: call    sub_68B0C0
0x4E993C: mov     esi, eax
0x4E993E: jmp     short loc_4E9942
0x4E9940: xor     esi, esi
0x4E9942: push    1
0x4E9944: mov     ecx, esi
0x4E9946: mov     byte ptr [esp+30h+var_4], 0
0x4E994B: call    sub_68B1D0
0x4E9950: mov     ecx, edi
0x4E9952: call    sub_6899C0
0x4E9957: push    eax
0x4E9958: mov     ecx, esi
0x4E995A: call    sub_68B200
0x4E995F: push    8; Size
0x4E9961: call    FormHeapAlloc
0x4E9966: add     esp, 4
0x4E9969: test    eax, eax
0x4E996B: jz      short loc_4E997C
0x4E996D: mov     dword ptr [eax], 0
0x4E9973: mov     dword ptr [eax+4], 0
0x4E997A: jmp     short loc_4E997E
0x4E997C: xor     eax, eax
0x4E997E: test    esi, esi
0x4E9980: jz      short loc_4E9984
0x4E9982: mov     [eax], esi
0x4E9984: mov     [eax+4], ebx
0x4E9987: mov     ecx, edi
0x4E9989: mov     [ebp+4], eax
0x4E998C: call    NiDX92DBufferData__GetSurfaceData
0x4E9991: mov     ebp, [ebp+4]
0x4E9994: mov     edi, eax
0x4E9996: test    edi, edi
0x4E9998: jnz     short loc_4E991E
0x4E999A: mov     bl, 1
0x4E999C: jmp     short loc_4E99A2
0x4E999E: mov     bl, [esp+2Ch+var_15]
0x4E99A2: lea     ecx, [esp+2Ch+var_14]
0x4E99A6: mov     [esp+2Ch+var_4], 0FFFFFFFFh
0x4E99AE: call    sub_68C9B0
0x4E99B3: mov     al, bl
0x4E99B5: jmp     short loc_4E99BB
0x4E99B7: fstp    st
0x4E99B9: mov     al, cl
0x4E99BB: mov     ecx, [esp+2Ch+var_C]
0x4E99BF: mov     large fs:0, ecx
0x4E99C6: pop     ecx
0x4E99C7: pop     edi
0x4E99C8: pop     esi
0x4E99C9: pop     ebp
0x4E99CA: pop     ebx
0x4E99CB: add     esp, 18h
0x4E99CE: retn    10h
