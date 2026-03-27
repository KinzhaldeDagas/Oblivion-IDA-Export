0x897580: push    esi
0x897581: mov     esi, [esp+4+arg_0]
0x897585: xor     al, al
0x897587: test    esi, esi
0x897589: jz      short loc_8975B8
0x89758B: mov     eax, [esp+4+arg_4]
0x89758F: test    eax, eax
0x897591: jz      short loc_8975A1
0x897593: mov     edx, [esi]
0x897595: push    eax
0x897596: mov     eax, [edx+58h]
0x897599: mov     ecx, esi
0x89759B: call    eax
0x89759D: test    eax, eax
0x89759F: jnz     short loc_8975A3
0x8975A1: mov     eax, esi
0x8975A3: fldz
0x8975A5: fcomp   dword ptr [eax+80h]
0x8975AB: fnstsw  ax
0x8975AD: test    ah, 5
0x8975B0: jp      short loc_8975B6
0x8975B2: mov     al, 1
0x8975B4: pop     esi
0x8975B5: retn
0x8975B6: xor     al, al
0x8975B8: pop     esi
0x8975B9: retn
