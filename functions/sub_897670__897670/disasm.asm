0x897670: sub     esp, 8
0x897673: push    ebx
0x897674: mov     ebx, [esp+0Ch+a2]
0x897678: push    esi
0x897679: push    edi
0x89767A: mov     edi, ecx
0x89767C: mov     eax, [edi+10h]
0x89767F: cmp     eax, ebx
0x897681: lea     esi, [edi+10h]
0x897684: jz      short loc_8976C5
0x897686: test    eax, eax
0x897688: jz      short loc_8976A2
0x89768A: mov     eax, [eax+8]
0x89768D: test    eax, eax
0x89768F: jz      short loc_8976A2
0x897691: push    offset dword_BA7B80
0x897696: lea     ecx, [esp+18h+var_8]
0x89769A: push    ecx
0x89769B: mov     ecx, eax
0x89769D: call    sub_8BC7B0
0x8976A2: push    ebx; a2
0x8976A3: mov     ecx, esi; this
0x8976A5: call    NiSmartPointer_Set??
0x8976AA: mov     eax, [esi]
0x8976AC: test    eax, eax
0x8976AE: jz      short loc_8976C5
0x8976B0: mov     ecx, [eax+8]
0x8976B3: xor     edx, edx
0x8976B5: test    ecx, ecx
0x8976B7: jz      short loc_8976C5
0x8976B9: push    edx
0x8976BA: push    edi
0x8976BB: push    offset dword_BA7B80
0x8976C0: call    sub_8BC750
0x8976C5: pop     edi
0x8976C6: pop     esi
0x8976C7: pop     ebx
0x8976C8: add     esp, 8
0x8976CB: retn    4
