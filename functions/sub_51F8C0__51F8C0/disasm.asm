0x51F8C0: push    ebp
0x51F8C1: mov     ebp, esp
0x51F8C3: push    0FFFFFFFFh
0x51F8C5: push    offset SEH_51F8C0
0x51F8CA: mov     eax, large fs:0
0x51F8D0: push    eax
0x51F8D1: sub     esp, 8
0x51F8D4: mov     eax, ds:0B30AACh
0x51F8D9: xor     eax, ebp
0x51F8DB: mov     [ebp+var_10], eax
0x51F8DE: push    ebx
0x51F8DF: push    esi
0x51F8E0: push    edi
0x51F8E1: push    eax
0x51F8E2: lea     eax, [ebp+var_C]
0x51F8E5: mov     large fs:0, eax
0x51F8EB: mov     ebx, ecx
0x51F8ED: mov     esi, [ebp+a2]
0x51F8F0: xor     edi, edi
0x51F8F2: push    ebx
0x51F8F3: mov     ecx, esi
0x51F8F5: mov     [ebp+var_14], edi
0x51F8F8: call    TESFile_InitializeFormFromRecord
0x51F8FD: jmp     short loc_51F903
0x51F8FF: align 10h
0x51F900: mov     edi, [ebp+var_14]
0x51F903: mov     ecx, esi
0x51F905: call    TESFile_GetChunkType
0x51F90A: cmp     eax, 4D414E46h
0x51F90F: jg      loc_51F9E1
0x51F915: jz      loc_51F9B7
0x51F91B: cmp     eax, 4C4C5546h
0x51F920: jg      short loc_51F99C
0x51F922: jz      short loc_51F975
0x51F924: cmp     eax, 41544144h
0x51F929: jz      short loc_51F962
0x51F92B: cmp     eax, 44494445h
0x51F930: jnz     def_51F9F6; jumptable 0051F9F6 default case, cases 1296125514-1296125516,1296125518-1296125521,1296125523-1296125527
0x51F936: mov     eax, [esi+254h]
0x51F93C: call    __alloca?
0x51F941: mov     edi, esp
0x51F943: push    200h; a4
0x51F948: push    edi; Dst
0x51F949: mov     ecx, esi; a1
0x51F94B: call    TESFile_GetChunkData
0x51F950: mov     eax, [ebx]
0x51F952: mov     edx, [eax+0D8h]
0x51F958: push    edi
0x51F959: mov     ecx, ebx
0x51F95B: call    edx
0x51F95D: jmp     def_51F9F6; jumptable 0051F9F6 default case, cases 1296125514-1296125516,1296125518-1296125521,1296125523-1296125527
0x51F962: push    1; a4
0x51F964: lea     eax, [ebx+34h]
0x51F967: push    eax; Dst
0x51F968: push    esi; a2
0x51F969: mov     ecx, ebx; this
0x51F96B: call    TESForm_LoadGenericComponents
0x51F970: jmp     def_51F9F6; jumptable 0051F9F6 default case, cases 1296125514-1296125516,1296125518-1296125521,1296125523-1296125527
0x51F975: test    ebx, ebx
0x51F977: jz      short loc_51F98B
0x51F979: lea     eax, [ebx+18h]
0x51F97C: push    esi
0x51F97D: push    eax
0x51F97E: call    TESFullname_Load
0x51F983: add     esp, 8
0x51F986: jmp     def_51F9F6; jumptable 0051F9F6 default case, cases 1296125514-1296125516,1296125518-1296125521,1296125523-1296125527
0x51F98B: xor     eax, eax
0x51F98D: push    esi
0x51F98E: push    eax
0x51F98F: call    TESFullname_Load
0x51F994: add     esp, 8
0x51F997: jmp     def_51F9F6; jumptable 0051F9F6 default case, cases 1296125514-1296125516,1296125518-1296125521,1296125523-1296125527
0x51F99C: cmp     eax, 4D414E43h
0x51F9A1: jnz     def_51F9F6; jumptable 0051F9F6 default case, cases 1296125514-1296125516,1296125518-1296125521,1296125523-1296125527
0x51F9A7: lea     ecx, [ebx+38h]
0x51F9AA: push    ecx
0x51F9AB: mov     ecx, esi
0x51F9AD: call    TESFile_GetChunkData4
0x51F9B2: jmp     def_51F9F6; jumptable 0051F9F6 default case, cases 1296125514-1296125516,1296125518-1296125521,1296125523-1296125527
0x51F9B7: test    edi, edi
0x51F9B9: jz      def_51F9F6; jumptable 0051F9F6 default case, cases 1296125514-1296125516,1296125518-1296125521,1296125523-1296125527
0x51F9BF: mov     eax, [esi+254h]
0x51F9C5: call    __alloca?
0x51F9CA: mov     edi, esp
0x51F9CC: push    0; a4
0x51F9CE: push    edi; Dst
0x51F9CF: mov     ecx, esi; a1
0x51F9D1: call    TESFile_GetChunkData
0x51F9D6: mov     ecx, [ebp+var_14]
0x51F9D9: add     ecx, 8
0x51F9DC: jmp     loc_51FA9A
0x51F9E1: sub     eax, 4D414E49h; switch 16 cases
0x51F9E6: cmp     eax, 0Fh
0x51F9E9: ja      def_51F9F6; jumptable 0051F9F6 default case, cases 1296125514-1296125516,1296125518-1296125521,1296125523-1296125527
0x51F9EF: movzx   edx, ds:byte_51FAE8[eax]
0x51F9F6: jmp     ds:jpt_51F9F6[edx*4]; switch jump
0x51F9FD: push    8; jumptable 0051F9F6 case 1296125528
0x51F9FF: call    FormHeapAlloc
0x51FA04: add     esp, 4
0x51FA07: mov     edi, eax
0x51FA09: push    8; a4
0x51FA0B: push    edi; Dst
0x51FA0C: mov     ecx, esi; a1
0x51FA0E: call    TESFile_GetChunkData
0x51FA13: push    edi
0x51FA14: lea     ecx, [ebx+28h]
0x51FA17: call    BSSimpleList_PushBack
0x51FA1C: jmp     def_51F9F6; jumptable 0051F9F6 default case, cases 1296125514-1296125516,1296125518-1296125521,1296125523-1296125527
0x51FA21: push    1Ch; jumptable 0051F9F6 case 1296125522
0x51FA23: call    FormHeapAlloc
0x51FA28: add     esp, 4
0x51FA2B: mov     [ebp+var_14], eax
0x51FA2E: test    eax, eax
0x51FA30: mov     [ebp+var_4], 0
0x51FA37: jz      short loc_51FA42
0x51FA39: mov     ecx, eax
0x51FA3B: call    sub_51F570
0x51FA40: jmp     short loc_51FA44
0x51FA42: xor     eax, eax
0x51FA44: push    eax
0x51FA45: lea     ecx, [ebx+3Ch]
0x51FA48: mov     [ebp+var_4], 0FFFFFFFFh
0x51FA4F: mov     [ebp+var_14], eax
0x51FA52: call    BSSimpleList_PushBack
0x51FA57: jmp     short def_51F9F6; jumptable 0051F9F6 default case, cases 1296125514-1296125516,1296125518-1296125521,1296125523-1296125527
0x51FA59: test    edi, edi; jumptable 0051F9F6 case 1296125517
0x51FA5B: jz      short def_51F9F6; jumptable 0051F9F6 default case, cases 1296125514-1296125516,1296125518-1296125521,1296125523-1296125527
0x51FA5D: mov     eax, [esi+254h]
0x51FA63: call    __alloca?
0x51FA68: mov     edi, esp
0x51FA6A: push    0; a4
0x51FA6C: push    edi; Dst
0x51FA6D: mov     ecx, esi; a1
0x51FA6F: call    TESFile_GetChunkData
0x51FA74: mov     ecx, [ebp+var_14]
0x51FA77: jmp     short loc_51FA9A
0x51FA79: test    edi, edi; jumptable 0051F9F6 case 1296125513
0x51FA7B: jz      short def_51F9F6; jumptable 0051F9F6 default case, cases 1296125514-1296125516,1296125518-1296125521,1296125523-1296125527
0x51FA7D: mov     eax, [esi+254h]
0x51FA83: call    __alloca?
0x51FA88: mov     edi, esp
0x51FA8A: push    0; a4
0x51FA8C: push    edi; Dst
0x51FA8D: mov     ecx, esi; a1
0x51FA8F: call    TESFile_GetChunkData
0x51FA94: mov     ecx, [ebp+var_14]
0x51FA97: add     ecx, 14h; this
0x51FA9A: push    0; a3
0x51FA9C: push    edi; a2
0x51FA9D: call    BSStringT_Set
0x51FAA2: mov     ecx, esi; jumptable 0051F9F6 default case, cases 1296125514-1296125516,1296125518-1296125521,1296125523-1296125527
0x51FAA4: call    TESFile_GetNextChunk
0x51FAA9: test    al, al
0x51FAAB: jnz     loc_51F900
0x51FAB1: mov     al, 1
0x51FAB3: lea     esp, [ebp-24h]
0x51FAB6: mov     ecx, [ebp+var_C]
0x51FAB9: mov     large fs:0, ecx
0x51FAC0: pop     ecx
0x51FAC1: pop     edi
0x51FAC2: pop     esi
0x51FAC3: pop     ebx
0x51FAC4: mov     ecx, [ebp+var_10]
0x51FAC7: xor     ecx, ebp
0x51FAC9: call    @__security_check_cookie@4; __security_check_cookie(x)
0x51FACE: mov     esp, ebp
0x51FAD0: pop     ebp
0x51FAD1: retn    4
