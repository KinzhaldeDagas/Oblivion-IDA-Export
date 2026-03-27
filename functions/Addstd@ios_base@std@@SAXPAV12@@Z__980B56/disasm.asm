0x980B56: push    ebp
0x980B57: mov     ebp, esp
0x980B59: push    ecx
0x980B5A: push    2; int
0x980B5C: lea     ecx, [ebp+var_4]; this
0x980B5F: call    ??0_Lockit@std@@QAE@H@Z
0x980B64: mov     eax, [ebp+arg_0]
0x980B67: mov     dword ptr [eax+4], 1
0x980B6E: mov     ecx, [eax+4]
0x980B71: mov     ecx, ds:0BA9B8Ch[ecx*4]
0x980B78: test    ecx, ecx
0x980B7A: jz      short loc_980B89
0x980B7C: cmp     ecx, eax
0x980B7E: jz      short loc_980B89
0x980B80: inc     dword ptr [eax+4]
0x980B83: cmp     dword ptr [eax+4], 8
0x980B87: jb      short loc_980B6E
0x980B89: mov     ecx, [eax+4]
0x980B8C: mov     ds:0BA9B8Ch[ecx*4], eax
0x980B93: mov     eax, [eax+4]
0x980B96: inc     ds:byte_BA9BB4[eax]
0x980B9C: lea     ecx, [ebp+var_4]; this
0x980B9F: call    ??1_Lockit@std@@QAE@XZ
0x980BA4: leave
0x980BA5: retn
