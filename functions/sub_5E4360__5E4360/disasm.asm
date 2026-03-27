0x5E4360: push    ebp
0x5E4361: push    esi
0x5E4362: mov     esi, ecx
0x5E4364: push    edi
0x5E4365: lea     ecx, [esi+44h]; this
0x5E4368: xor     edi, edi
0x5E436A: call    ExtraDataList_GetContainerChanges
0x5E436F: mov     ebp, eax
0x5E4371: test    ebp, ebp
0x5E4373: jz      short loc_5E43A9
0x5E4375: mov     eax, [esi]
0x5E4377: mov     edx, [eax+170h]
0x5E437D: push    ebx
0x5E437E: mov     ecx, esi
0x5E4380: call    edx
0x5E4382: mov     ebx, eax
0x5E4384: test    ebx, ebx
0x5E4386: jz      short loc_5E439A
0x5E4388: mov     eax, [esi]
0x5E438A: mov     edx, [eax+190h]
0x5E4390: mov     ecx, esi
0x5E4392: call    edx
0x5E4394: test    al, al
0x5E4396: jz      short loc_5E439A
0x5E4398: mov     edi, ebx
0x5E439A: push    0
0x5E439C: push    edi
0x5E439D: mov     ecx, ebp
0x5E439F: call    sub_48B9C0
0x5E43A4: pop     ebx
0x5E43A5: pop     edi
0x5E43A6: pop     esi
0x5E43A7: pop     ebp
0x5E43A8: retn
0x5E43A9: mov     eax, edi
0x5E43AB: pop     edi
0x5E43AC: pop     esi
0x5E43AD: pop     ebp
0x5E43AE: retn
