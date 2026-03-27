0x4C7090: mov     eax, 1598h
0x4C7095: call    __alloca_probe
0x4C709A: mov     eax, ds:0B30AACh
0x4C709F: xor     eax, esp
0x4C70A1: mov     [esp+1598h+var_4], eax
0x4C70A8: push    ebp
0x4C70A9: mov     ebp, [esp+159Ch+a2]
0x4C70B0: push    esi
0x4C70B1: mov     esi, ecx
0x4C70B3: mov     ecx, ebp
0x4C70B5: mov     [esp+15A0h+a1.member.refID], ebp
0x4C70B9: call    TESFile_GetRecordType
0x4C70BE: cmp     al, 36h ; '6'
0x4C70C0: jz      short loc_4C70C9
0x4C70C2: xor     al, al
0x4C70C4: jmp     loc_4C7982
0x4C70C9: push    ebx
0x4C70CA: push    edi
0x4C70CB: mov     edi, [esi+0Ch]
0x4C70CE: push    esi
0x4C70CF: mov     ecx, ebp; this
0x4C70D1: call    TESFile_InitializeFormFromRecord
0x4C70D6: test    edi, edi
0x4C70D8: jz      short loc_4C70F3
0x4C70DA: mov     eax, [esi+0Ch]
0x4C70DD: cmp     edi, eax
0x4C70DF: jz      short loc_4C70F3
0x4C70E1: lea     ecx, [ebp+1Ch]
0x4C70E4: push    ecx
0x4C70E5: push    eax; ArgList
0x4C70E6: push    offset aPotentiallyD_0; "Potentially duplicate Land (%08x) encou"...
0x4C70EB: call    PrintError
0x4C70F0: add     esp, 0Ch
0x4C70F3: or      eax, 0FFFFFFFFh
0x4C70F6: mov     ecx, ebp
0x4C70F8: mov     [esp+15A8h+a1.member.modlist.data], eax
0x4C70FC: mov     [esp+15A8h+a1.member.modlist.next], eax
0x4C7100: mov     [esp+15A8h+var_1595], 0
0x4C7105: call    TESFile_IsActive
0x4C710A: test    al, al
0x4C710C: jnz     short loc_4C7117
0x4C710E: call    sub_4C9FF0
0x4C7113: test    al, al
0x4C7115: jz      short loc_4C7130
0x4C7117: test    dword ptr [esi+1Ch], 400h
0x4C711E: jnz     short loc_4C7130
0x4C7120: mov     ecx, esi
0x4C7122: mov     [esp+15A8h+var_1595], 1
0x4C7127: call    sub_4C64E0
0x4C712C: lea     esp, [esp+0]
0x4C7130: mov     ecx, ebp
0x4C7132: mov     ebx, 7
0x4C7137: call    TESFile_GetChunkType
0x4C713C: cmp     eax, 54474856h
0x4C7141: jg      loc_4C762D
0x4C7147: jz      loc_4C745C
0x4C714D: cmp     eax, 4C4D4E56h
0x4C7152: jg      loc_4C7357
0x4C7158: jz      loc_4C723C
0x4C715E: cmp     eax, 41544144h
0x4C7163: jz      loc_4C7205
0x4C7169: cmp     eax, 4443504Dh
0x4C716E: jnz     loc_4C795F
0x4C7174: cmp     [esp+15A8h+var_1595], 0
0x4C7179: jz      loc_4C795F
0x4C717F: mov     edi, [ebp+254h]
0x4C7185: push    edi; Size
0x4C7186: call    FormHeapAlloc
0x4C718B: add     esp, 4
0x4C718E: mov     ebx, eax
0x4C7190: push    edi; a4
0x4C7191: push    ebx; Dst
0x4C7192: mov     ecx, ebp; a1
0x4C7194: call    TESFile_GetChunkData
0x4C7199: mov     edx, [esi+24h]
0x4C719C: mov     ecx, [edx+50h]
0x4C719F: test    ecx, ecx
0x4C71A1: jz      short loc_4C71CA
0x4C71A3: cmp     word ptr [ecx+4], 0
0x4C71A8: jz      short loc_4C71C0
0x4C71AA: add     word ptr [ecx+6], 0FFFFh
0x4C71AF: movzx   eax, word ptr [ecx+6]
0x4C71B3: test    ax, ax
0x4C71B6: jnz     short loc_4C71C0
0x4C71B8: mov     eax, [ecx]
0x4C71BA: mov     edx, [eax]
0x4C71BC: push    1
0x4C71BE: call    edx
0x4C71C0: mov     eax, [esi+24h]
0x4C71C3: mov     dword ptr [eax+50h], 0
0x4C71CA: mov     ecx, [esi+24h]
0x4C71CD: add     ecx, 50h ; 'P'
0x4C71D0: push    ecx
0x4C71D1: push    edi
0x4C71D2: push    ebx
0x4C71D3: mov     ecx, esi
0x4C71D5: call    sub_4C2230
0x4C71DA: mov     edx, [esi+24h]
0x4C71DD: mov     eax, [edx+50h]
0x4C71E0: test    eax, eax
0x4C71E2: jz      short loc_4C71F7
0x4C71E4: cmp     word ptr [eax+4], 0
0x4C71E9: jz      short loc_4C71F0
0x4C71EB: add     word ptr [eax+6], 1
0x4C71F0: or      dword ptr [esi+1Ch], 800h
0x4C71F7: push    ebx
0x4C71F8: call    FormHeapFree
0x4C71FD: add     esp, 4
0x4C7200: jmp     loc_4C795F
0x4C7205: mov     ebx, [esi+1Ch]
0x4C7208: lea     edi, [esi+1Ch]
0x4C720B: push    4; a4
0x4C720D: shr     ebx, 0Ah
0x4C7210: push    edi; Dst
0x4C7211: mov     ecx, ebp; a1
0x4C7213: and     bl, 1
0x4C7216: call    TESFile_GetChunkData
0x4C721B: and     dword ptr [edi], 0FFFFFFF7h
0x4C721E: test    bl, bl
0x4C7220: mov     eax, [edi]
0x4C7222: jz      short loc_4C7230
0x4C7224: or      eax, 400h
0x4C7229: mov     [edi], eax
0x4C722B: jmp     loc_4C795F
0x4C7230: and     eax, 0FFFFFBFFh
0x4C7235: mov     [edi], eax
0x4C7237: jmp     loc_4C795F
0x4C723C: cmp     [esp+15A8h+var_1595], 0
0x4C7241: jz      loc_4C795F
0x4C7247: test    byte ptr [esi+1Ch], 1
0x4C724B: jz      loc_4C795F
0x4C7251: mov     ecx, [esp+15A8h+a1.member.refID]; a1
0x4C7255: push    0; a4
0x4C7257: lea     eax, [esp+15ACh+var_1554+4]
0x4C725B: push    eax; Dst
0x4C725C: call    TESFile_GetChunkData
0x4C7261: xor     ebp, ebp
0x4C7263: mov     eax, ebp
0x4C7265: cdq
0x4C7266: sub     eax, edx
0x4C7268: sar     eax, 1
0x4C726A: mov     ecx, eax
0x4C726C: shl     ecx, 5
0x4C726F: mov     edx, ebp
0x4C7271: add     ecx, eax
0x4C7273: and     edx, 80000001h
0x4C7279: jns     short loc_4C7280
0x4C727B: dec     edx
0x4C727C: or      edx, 0FFFFFFFEh
0x4C727F: inc     edx
0x4C7280: add     ecx, edx
0x4C7282: shl     ecx, 4
0x4C7285: xor     ebx, ebx
0x4C7287: mov     [esp+15A8h+a1.vtbl], ecx
0x4C728B: xor     edi, edi
0x4C728D: lea     ecx, [ecx+0]
0x4C7290: mov     eax, 78787879h
0x4C7295: imul    ebx
0x4C7297: sar     edx, 3
0x4C729A: mov     eax, edx
0x4C729C: shr     eax, 1Fh
0x4C729F: add     eax, edx
0x4C72A1: shl     eax, 4
0x4C72A4: add     eax, [esp+15A8h+a1.vtbl]
0x4C72A8: mov     edx, [esi+24h]
0x4C72AB: add     eax, ebx
0x4C72AD: lea     eax, [eax+eax*2]
0x4C72B0: movsx   ecx, byte ptr [esp+eax+15A8h+var_1554+4]
0x4C72B5: mov     [esp+15A8h+var_1594], ecx
0x4C72B9: mov     ecx, [edx+8]
0x4C72BC: mov     edx, [ecx+ebp*4]
0x4C72BF: fild    [esp+15A8h+var_1594]
0x4C72C3: fld     qword ptr ds:0A46298h
0x4C72C9: fdiv    st(1), st
0x4C72CB: fxch    st(1)
0x4C72CD: fstp    [esp+15A8h+var_1594]
0x4C72D1: fld     [esp+15A8h+var_1594]
0x4C72D5: fstp    dword ptr [edi+edx]
0x4C72D8: movsx   ecx, byte ptr [esp+eax+15A8h+var_1554+5]
0x4C72DD: mov     [esp+15A8h+var_1594], ecx
0x4C72E1: mov     edx, [esi+24h]
0x4C72E4: mov     ecx, [edx+8]
0x4C72E7: fild    [esp+15A8h+var_1594]
0x4C72EB: mov     edx, [ecx+ebp*4]
0x4C72EE: fdiv    st, st(1)
0x4C72F0: fstp    [esp+15A8h+var_1594]
0x4C72F4: fld     [esp+15A8h+var_1594]
0x4C72F8: fstp    dword ptr [edx+edi+4]
0x4C72FC: movsx   eax, byte ptr [esp+eax+15A8h+var_1554+6]
0x4C7301: mov     [esp+15A8h+var_1594], eax
0x4C7305: mov     ecx, [esi+24h]
0x4C7308: mov     edx, [ecx+8]
0x4C730B: fidivr  [esp+15A8h+var_1594]
0x4C730F: mov     eax, [edx+ebp*4]
0x4C7312: fstp    [esp+15A8h+var_1594]
0x4C7316: fld     [esp+15A8h+var_1594]
0x4C731A: fstp    dword ptr [eax+edi+8]
0x4C731E: mov     ecx, [esi+24h]
0x4C7321: mov     edx, [ecx+8]
0x4C7324: mov     ecx, [edx+ebp*4]
0x4C7327: add     ecx, edi
0x4C7329: call    sub_43F350
0x4C732E: fstp    st
0x4C7330: add     edi, 0Ch
0x4C7333: add     ebx, 1
0x4C7336: cmp     edi, 0D8Ch
0x4C733C: jl      loc_4C7290
0x4C7342: add     ebp, 1
0x4C7345: cmp     ebp, 4
0x4C7348: jl      loc_4C7263
0x4C734E: mov     ebp, [esp+15A8h+a1.member.refID]
0x4C7352: jmp     loc_4C795F
0x4C7357: cmp     eax, 524C4356h
0x4C735C: jnz     loc_4C795F
0x4C7362: cmp     [esp+15A8h+var_1595], 0
0x4C7367: jz      loc_4C795F
0x4C736D: test    byte ptr [esi+1Ch], 2
0x4C7371: jz      loc_4C795F
0x4C7377: push    0; a4
0x4C7379: lea     eax, [esp+15ACh+var_1554+4]
0x4C737D: push    eax; Dst
0x4C737E: mov     ecx, ebp; a1
0x4C7380: call    TESFile_GetChunkData
0x4C7385: fld1
0x4C7387: fstp    [esp+15A8h+var_155C]
0x4C738B: xor     ebx, ebx
0x4C738D: fld     qword ptr ds:0A3DDD8h
0x4C7393: mov     eax, ebx
0x4C7395: cdq
0x4C7396: sub     eax, edx
0x4C7398: sar     eax, 1
0x4C739A: mov     ebp, eax
0x4C739C: shl     ebp, 5
0x4C739F: mov     ecx, ebx
0x4C73A1: add     ebp, eax
0x4C73A3: and     ecx, 80000001h
0x4C73A9: jns     short loc_4C73B0
0x4C73AB: dec     ecx
0x4C73AC: or      ecx, 0FFFFFFFEh
0x4C73AF: inc     ecx
0x4C73B0: add     ebp, ecx
0x4C73B2: shl     ebp, 4
0x4C73B5: xor     ecx, ecx
0x4C73B7: xor     edi, edi
0x4C73B9: mov     eax, 78787879h
0x4C73BE: imul    ecx
0x4C73C0: sar     edx, 3
0x4C73C3: mov     eax, edx
0x4C73C5: shr     eax, 1Fh
0x4C73C8: add     eax, edx
0x4C73CA: shl     eax, 4
0x4C73CD: add     eax, ebp
0x4C73CF: add     eax, ecx
0x4C73D1: lea     eax, [eax+eax*2]
0x4C73D4: movzx   edx, byte ptr [esp+eax+15A8h+var_1554+4]
0x4C73D9: mov     [esp+15A8h+var_1594], edx
0x4C73DD: movzx   edx, byte ptr [esp+eax+15A8h+var_1554+5]
0x4C73E2: fild    [esp+15A8h+var_1594]
0x4C73E6: mov     [esp+15A8h+var_1594], edx
0x4C73EA: movzx   eax, byte ptr [esp+eax+15A8h+var_1554+6]
0x4C73EF: fdiv    st, st(1)
0x4C73F1: mov     edx, [esi+24h]
0x4C73F4: add     ecx, 1
0x4C73F7: fstp    [esp+15A8h+var_1568]
0x4C73FB: fild    [esp+15A8h+var_1594]
0x4C73FF: mov     [esp+15A8h+var_1594], eax
0x4C7403: mov     eax, [edx+0Ch]
0x4C7406: mov     eax, [eax+ebx*4]
0x4C7409: fdiv    st, st(1)
0x4C740B: mov     edx, [esp+15A8h+var_1568]
0x4C740F: add     eax, edi
0x4C7411: mov     [eax], edx
0x4C7413: add     edi, 10h
0x4C7416: cmp     edi, 1210h
0x4C741C: fstp    [esp+15A8h+var_1564]
0x4C7420: fild    [esp+15A8h+var_1594]
0x4C7424: mov     edx, [esp+15A8h+var_1564]
0x4C7428: mov     [eax+4], edx
0x4C742B: fdiv    st, st(1)
0x4C742D: fstp    [esp+15A8h+var_1560]
0x4C7431: mov     edx, [esp+15A8h+var_1560]
0x4C7435: mov     [eax+8], edx
0x4C7438: mov     edx, [esp+15A8h+var_155C]
0x4C743C: mov     [eax+0Ch], edx
0x4C743F: jl      loc_4C73B9
0x4C7445: add     ebx, 1
0x4C7448: cmp     ebx, 4
0x4C744B: jl      loc_4C7393
0x4C7451: mov     ebp, [esp+15A8h+a1.member.refID]
0x4C7455: fstp    st
0x4C7457: jmp     loc_4C795F
0x4C745C: cmp     [esp+15A8h+var_1595], 0
0x4C7461: jz      loc_4C795F
0x4C7467: test    byte ptr [esi+1Ch], 1
0x4C746B: jz      loc_4C795F
0x4C7471: push    0; a4
0x4C7473: lea     eax, [esp+15ACh+var_44C]
0x4C747A: push    eax; Dst
0x4C747B: mov     ecx, ebp; a1
0x4C747D: call    TESFile_GetChunkData
0x4C7482: fld     dword ptr ds:0A32048h
0x4C7488: mov     eax, [esi+24h]
0x4C748B: fstp    [esp+15A8h+var_1558]
0x4C748F: fld     dword ptr ds:0A3B888h
0x4C7495: mov     ecx, [esp+15A8h+var_1558]
0x4C7499: fstp    [esp+15A8h+var_1554]
0x4C749D: mov     edx, [esp+15A8h+var_1554]
0x4C74A1: mov     [eax+18h], ecx
0x4C74A4: mov     [eax+1Ch], edx
0x4C74A7: fld     dword ptr [esp+15A8h+var_44C]
0x4C74AE: fstp    [esp+15A8h+a1.vtbl]
0x4C74B2: mov     ecx, 1
0x4C74B7: lea     edi, [esp+15A8h+var_1554+4]
0x4C74BB: jmp     short loc_4C74C0
0x4C74BD: align 10h
0x4C74C0: movsx   eax, [esp+ecx+15A8h+var_44C+3]
0x4C74C8: mov     [esp+15A8h+var_1594], eax
0x4C74CC: mov     eax, ecx
0x4C74CE: cdq
0x4C74CF: fild    [esp+15A8h+var_1594]
0x4C74D3: mov     ebx, 21h ; '!'
0x4C74D8: idiv    ebx
0x4C74DA: fadd    [esp+15A8h+a1.vtbl]
0x4C74DE: fstp    [esp+15A8h+var_1594]
0x4C74E2: fld     [esp+15A8h+var_1594]
0x4C74E6: fst     dword ptr [edi]
0x4C74E8: test    edx, edx
0x4C74EA: jnz     short loc_4C74F1
0x4C74EC: fstp    st
0x4C74EE: fld     dword ptr [edi-80h]
0x4C74F1: add     ecx, 1
0x4C74F4: fstp    [esp+15A8h+a1.vtbl]
0x4C74F8: add     edi, 4
0x4C74FB: cmp     ecx, 442h
0x4C7501: jl      short loc_4C74C0
0x4C7503: xor     edi, edi
0x4C7505: mov     eax, edi
0x4C7507: cdq
0x4C7508: sub     eax, edx
0x4C750A: sar     eax, 1
0x4C750C: mov     ecx, eax
0x4C750E: shl     ecx, 5
0x4C7511: mov     edx, edi
0x4C7513: add     ecx, eax
0x4C7515: and     edx, 80000001h
0x4C751B: jns     short loc_4C7522
0x4C751D: dec     edx
0x4C751E: or      edx, 0FFFFFFFEh
0x4C7521: inc     edx
0x4C7522: add     ecx, edx
0x4C7524: shl     ecx, 4
0x4C7527: xor     ebx, ebx
0x4C7529: mov     [esp+15A8h+var_1594], ecx
0x4C752D: xor     ebp, ebp
0x4C752F: nop
0x4C7530: mov     eax, 78787879h
0x4C7535: imul    ebx
0x4C7537: sar     edx, 3
0x4C753A: mov     eax, edx
0x4C753C: shr     eax, 1Fh
0x4C753F: add     eax, edx
0x4C7541: mov     ecx, eax
0x4C7543: shl     ecx, 4
0x4C7546: add     ecx, eax
0x4C7548: mov     edx, ecx
0x4C754A: mov     ecx, ebx
0x4C754C: sub     ecx, edx
0x4C754E: mov     edx, eax
0x4C7550: shl     edx, 5
0x4C7553: add     edx, ecx
0x4C7555: add     edx, eax
0x4C7557: add     edx, [esp+15A8h+var_1594]
0x4C755B: fld     [esp+edx*4+15A8h+var_1554+4]
0x4C755F: fstp    [esp+15A8h+a1.vtbl]
0x4C7563: fld     [esp+15A8h+a1.vtbl]
0x4C7567: fistp   dword ptr [esp+15A8h+var_1570]
0x4C756B: mov     edx, dword ptr [esp+15A8h+var_1570]
0x4C756F: add     edx, edx
0x4C7571: add     edx, edx
0x4C7573: add     edx, edx
0x4C7575: mov     [esp+15A8h+a1.vtbl], edx
0x4C7579: fild    [esp+15A8h+a1.vtbl]
0x4C757D: shl     ecx, 7
0x4C7580: mov     [esp+15A8h+a1.vtbl], ecx
0x4C7584: mov     ecx, [esi+24h]
0x4C7587: fstp    [esp+15A8h+var_156C]
0x4C758B: fild    [esp+15A8h+a1.vtbl]
0x4C758F: mov     edx, [ecx+4]
0x4C7592: mov     ecx, [edx+edi*4]
0x4C7595: shl     eax, 7
0x4C7598: fadd    dword ptr ds:0B35BA8h[edi*4]
0x4C759F: fstp    [esp+15A8h+a1.vtbl]
0x4C75A3: fld     [esp+15A8h+a1.vtbl]
0x4C75A7: mov     [esp+15A8h+a1.vtbl], eax
0x4C75AB: fstp    dword ptr [ecx+ebp]
0x4C75AE: mov     edx, [esi+24h]
0x4C75B1: fild    [esp+15A8h+a1.vtbl]
0x4C75B5: mov     eax, [edx+4]
0x4C75B8: mov     ecx, [eax+edi*4]
0x4C75BB: fadd    dword ptr ds:0B35B98h[edi*4]
0x4C75C2: fstp    [esp+15A8h+a1.vtbl]
0x4C75C6: fld     [esp+15A8h+a1.vtbl]
0x4C75CA: fstp    dword ptr [ecx+ebp+4]
0x4C75CE: mov     edx, [esi+24h]
0x4C75D1: mov     eax, [edx+4]
0x4C75D4: fld     [esp+15A8h+var_156C]
0x4C75D8: mov     ecx, [eax+edi*4]
0x4C75DB: fst     dword ptr [ecx+ebp+8]
0x4C75DF: mov     ecx, [esi+24h]
0x4C75E2: fld     dword ptr [ecx+18h]
0x4C75E5: fcomp   st(1)
0x4C75E7: fnstsw  ax
0x4C75E9: test    ah, 41h
0x4C75EC: jnz     short loc_4C75F3
0x4C75EE: fstp    dword ptr [ecx+18h]
0x4C75F1: jmp     short loc_4C7606
0x4C75F3: fld     dword ptr [ecx+1Ch]
0x4C75F6: fcomp   st(1)
0x4C75F8: fnstsw  ax
0x4C75FA: test    ah, 5
0x4C75FD: jp      short loc_4C7604
0x4C75FF: fstp    dword ptr [ecx+1Ch]
0x4C7602: jmp     short loc_4C7606
0x4C7604: fstp    st
0x4C7606: add     ebp, 0Ch
0x4C7609: add     ebx, 1
0x4C760C: cmp     ebp, 0D8Ch
0x4C7612: jl      loc_4C7530
0x4C7618: add     edi, 1
0x4C761B: cmp     edi, 4
0x4C761E: jl      loc_4C7505
0x4C7624: mov     ebp, [esp+15A8h+a1.member.refID]
0x4C7628: jmp     loc_4C795F
0x4C762D: sub     eax, 54585441h
0x4C7632: jz      loc_4C77FF
0x4C7638: sub     eax, 1
0x4C763B: jz      loc_4C7725
0x4C7641: sub     eax, 14h
0x4C7644: jnz     loc_4C795F
0x4C764A: cmp     [esp+15A8h+var_1595], 0
0x4C764F: jz      loc_4C795F
0x4C7655: cmp     [esp+15A8h+a1.member.modlist.next], 0
0x4C765A: jl      loc_4C7715
0x4C7660: cmp     [esp+15A8h+a1.member.modlist.data], 0
0x4C7665: jl      loc_4C7715
0x4C766B: mov     eax, [esp+15A8h+a1.member.refID]
0x4C766F: mov     ebx, [eax+254h]
0x4C7675: test    bl, 7
0x4C7678: jnz     short loc_4C76F4
0x4C767A: push    1
0x4C767C: push    ebx
0x4C767D: mov     ecx, offset FormHeap
0x4C7682: call    j_MemoryHeap_Alloc
0x4C7687: mov     ecx, [esp+15A8h+a1.member.refID]; a1
0x4C768B: mov     ebp, eax
0x4C768D: push    ebx; a4
0x4C768E: push    ebp; Dst
0x4C768F: call    TESFile_GetChunkData
0x4C7694: shr     ebx, 3
0x4C7697: jz      short loc_4C76D9
0x4C7699: lea     edi, [ebp+4]
0x4C769C: lea     esp, [esp+0]
0x4C76A0: fld1
0x4C76A2: fcomp   dword ptr [edi]
0x4C76A4: fnstsw  ax
0x4C76A6: test    ah, 5
0x4C76A9: jp      short loc_4C76B5
0x4C76AB: fld     dword ptr [edi]
0x4C76AD: fdiv    qword ptr ds:0A309F0h
0x4C76B3: fstp    dword ptr [edi]
0x4C76B5: fld     dword ptr [edi]
0x4C76B7: mov     edx, [esp+15A8h+a1.member.modlist.data]
0x4C76BB: movzx   eax, word ptr [edi-4]
0x4C76BF: push    ecx
0x4C76C0: mov     ecx, [esp+15ACh+a1.member.modlist.next]
0x4C76C4: fstp    [esp+15ACh+var_15AC]; float
0x4C76C7: push    edx; __int16
0x4C76C8: push    eax; __int16
0x4C76C9: push    ecx; char
0x4C76CA: mov     ecx, esi
0x4C76CC: call    sub_4BF270
0x4C76D1: add     edi, 8
0x4C76D4: sub     ebx, 1
0x4C76D7: jnz     short loc_4C76A0
0x4C76D9: push    ebp; void *
0x4C76DA: mov     ecx, offset FormHeap
0x4C76DF: call    MemoryHeap_Free_checked
0x4C76E4: mov     ebp, [esp+15A8h+a1.member.refID]
0x4C76E8: or      eax, 0FFFFFFFFh
0x4C76EB: mov     [esp+15A8h+a1.member.modlist.data], eax
0x4C76EF: jmp     loc_4C795B
0x4C76F4: add     eax, 1Ch
0x4C76F7: push    eax
0x4C76F8: mov     ecx, esi
0x4C76FA: call    sub_4BF040
0x4C76FF: push    eax
0x4C7700: mov     ecx, esi
0x4C7702: call    sub_4BF020
0x4C7707: push    eax; ArgList
0x4C7708: push    offset aLandIIFoundUnr; "Land (%i, %i) found unrecognized vertex"...
0x4C770D: call    PrintError
0x4C7712: add     esp, 10h
0x4C7715: mov     ebp, [esp+15A8h+a1.member.refID]
0x4C7719: or      eax, 0FFFFFFFFh
0x4C771C: mov     [esp+15A8h+a1.member.modlist.data], eax
0x4C7720: jmp     loc_4C795B
0x4C7725: cmp     [esp+15A8h+var_1595], 0
0x4C772A: jz      loc_4C795F
0x4C7730: xor     eax, eax
0x4C7732: push    8; a4
0x4C7734: lea     edx, [esp+15ACh+anonymous_2]
0x4C7738: push    edx; Dst
0x4C7739: mov     ecx, ebp; a1
0x4C773B: mov     [esp+15B0h+anonymous_2], eax
0x4C773F: mov     [esp+15B0h+var_1574], eax
0x4C7743: call    TESFile_GetChunkData
0x4C7748: lea     eax, [esp+15A8h+anonymous_2]
0x4C774C: push    ebp; a2
0x4C774D: push    eax; a1
0x4C774E: call    TESForm_ResolveFormID
0x4C7753: mov     ecx, [esp+15B0h+anonymous_2]
0x4C7757: add     esp, 8
0x4C775A: push    0; int
0x4C775C: push    offset ??_R0?AVTESLandTexture@@@8; struct TypeDescriptor *
0x4C7761: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4C7766: push    0; int
0x4C7768: push    ecx; a1
0x4C7769: call    TESForm_LookupByFormID
0x4C776E: add     esp, 4
0x4C7771: push    eax; void *
0x4C7772: call    OblivionDynamicCast
0x4C7777: movzx   edx, byte ptr [esp+15BCh+var_1574]
0x4C777C: mov     ecx, [esi+24h]
0x4C777F: mov     [ecx+edx*4+20h], eax
0x4C7783: movzx   edx, byte ptr [esp+15BCh+var_1574]
0x4C7788: mov     eax, [esi+24h]
0x4C778B: lea     ecx, [eax+edx*4+20h]
0x4C778F: add     esp, 14h
0x4C7792: cmp     dword ptr [ecx], 0
0x4C7795: jnz     short loc_4C77F3
0x4C7797: test    eax, eax
0x4C7799: jz      short loc_4C77A3
0x4C779B: mov     edi, [eax+9Ch]
0x4C77A1: jmp     short loc_4C77B5
0x4C77A3: mov     ecx, [esi+20h]; this
0x4C77A6: test    ecx, ecx
0x4C77A8: jz      short loc_4C77B3
0x4C77AA: call    TESObjectCELL_GetYCoordinate
0x4C77AF: mov     edi, eax
0x4C77B1: jmp     short loc_4C77B5
0x4C77B3: xor     edi, edi
0x4C77B5: mov     eax, [esi+24h]
0x4C77B8: test    eax, eax
0x4C77BA: jz      short loc_4C77C4
0x4C77BC: mov     eax, [eax+98h]
0x4C77C2: jmp     short loc_4C77D4
0x4C77C4: mov     ecx, [esi+20h]; this
0x4C77C7: test    ecx, ecx
0x4C77C9: jz      short loc_4C77D2
0x4C77CB: call    TESObjectCELL_GetXCoordinate
0x4C77D0: jmp     short loc_4C77D4
0x4C77D2: xor     eax, eax
0x4C77D4: movzx   ecx, byte ptr [esp+15A8h+var_1574]
0x4C77D9: mov     edx, [esp+15A8h+anonymous_2]
0x4C77DD: push    ecx
0x4C77DE: push    edx
0x4C77DF: push    edi
0x4C77E0: push    eax; ArgList
0x4C77E1: push    offset aLandIIUnableTo; "Land (%i, %i) unable to find base textu"...
0x4C77E6: call    PrintError
0x4C77EB: add     esp, 14h
0x4C77EE: jmp     loc_4C795F
0x4C77F3: mov     ecx, [ecx]
0x4C77F5: call    sub_4C9530
0x4C77FA: jmp     loc_4C795F
0x4C77FF: cmp     [esp+15A8h+var_1595], 0
0x4C7804: jz      loc_4C795F
0x4C780A: xor     eax, eax
0x4C780C: mov     dword ptr [esp+15A8h+a1.member.type], eax
0x4C7810: mov     [esp+15A8h+a1.member.flags], eax
0x4C7814: push    8; a4
0x4C7816: lea     eax, [esp+15ACh+a1.member]
0x4C781A: push    eax; Dst
0x4C781B: mov     ecx, ebp; a1
0x4C781D: call    TESFile_GetChunkData
0x4C7822: cmp     word ptr [esp+15A8h+a1.member.flags+2], bx
0x4C7827: jbe     short loc_4C7889
0x4C7829: mov     eax, [esi+24h]
0x4C782C: test    eax, eax
0x4C782E: jz      short loc_4C7838
0x4C7830: mov     edi, [eax+9Ch]
0x4C7836: jmp     short loc_4C784A
0x4C7838: mov     ecx, [esi+20h]; this
0x4C783B: test    ecx, ecx
0x4C783D: jz      short loc_4C7848
0x4C783F: call    TESObjectCELL_GetYCoordinate
0x4C7844: mov     edi, eax
0x4C7846: jmp     short loc_4C784A
0x4C7848: xor     edi, edi
0x4C784A: mov     eax, [esi+24h]
0x4C784D: test    eax, eax
0x4C784F: jz      short loc_4C7859
0x4C7851: mov     eax, [eax+98h]
0x4C7857: jmp     short loc_4C7869
0x4C7859: mov     ecx, [esi+20h]; this
0x4C785C: test    ecx, ecx
0x4C785E: jz      short loc_4C7867
0x4C7860: call    TESObjectCELL_GetXCoordinate
0x4C7865: jmp     short loc_4C7869
0x4C7867: xor     eax, eax
0x4C7869: movzx   ecx, byte ptr [esp+15A8h+a1.member.flags]
0x4C786E: movzx   edx, word ptr [esp+15A8h+a1.member.flags+2]
0x4C7873: push    ecx
0x4C7874: push    edx
0x4C7875: push    edi
0x4C7876: push    eax; ArgList
0x4C7877: push    offset aLandIIClamping; "Land (%i, %i) clamping invalid index %i"...
0x4C787C: call    PrintError
0x4C7881: add     esp, 14h
0x4C7884: mov     word ptr [esp+15A8h+a1.member.flags+2], bx
0x4C7889: cmp     dword ptr [esp+15A8h+a1.member.type], 0
0x4C788E: jz      loc_4C7928
0x4C7894: lea     eax, [esp+15A8h+a1.member]
0x4C7898: push    ebp; a2
0x4C7899: push    eax; a1
0x4C789A: call    TESForm_ResolveFormID
0x4C789F: mov     ecx, dword ptr [esp+15B0h+a1.member.type]
0x4C78A3: add     esp, 8
0x4C78A6: push    0; int
0x4C78A8: push    offset ??_R0?AVTESLandTexture@@@8; struct TypeDescriptor *
0x4C78AD: push    offset ??_R0?AVTESForm@@@8; struct _s_RTTICompleteObjectLocator *
0x4C78B2: push    0; int
0x4C78B4: push    ecx; a1
0x4C78B5: call    TESForm_LookupByFormID
0x4C78BA: add     esp, 4
0x4C78BD: push    eax; void *
0x4C78BE: call    OblivionDynamicCast
0x4C78C3: mov     edi, eax
0x4C78C5: add     esp, 14h
0x4C78C8: test    edi, edi
0x4C78CA: jnz     short loc_4C792E
0x4C78CC: mov     eax, [esi+24h]
0x4C78CF: test    eax, eax
0x4C78D1: jz      short loc_4C78DB
0x4C78D3: mov     ebx, [eax+9Ch]
0x4C78D9: jmp     short loc_4C78ED
0x4C78DB: mov     ecx, [esi+20h]; this
0x4C78DE: test    ecx, ecx
0x4C78E0: jz      short loc_4C78EB
0x4C78E2: call    TESObjectCELL_GetYCoordinate
0x4C78E7: mov     ebx, eax
0x4C78E9: jmp     short loc_4C78ED
0x4C78EB: xor     ebx, ebx
0x4C78ED: mov     eax, [esi+24h]
0x4C78F0: test    eax, eax
0x4C78F2: jz      short loc_4C78FC
0x4C78F4: mov     eax, [eax+98h]
0x4C78FA: jmp     short loc_4C790C
0x4C78FC: mov     ecx, [esi+20h]; this
0x4C78FF: test    ecx, ecx
0x4C7901: jz      short loc_4C790A
0x4C7903: call    TESObjectCELL_GetXCoordinate
0x4C7908: jmp     short loc_4C790C
0x4C790A: xor     eax, eax
0x4C790C: movzx   edx, byte ptr [esp+15A8h+a1.member.flags]
0x4C7911: mov     ecx, dword ptr [esp+15A8h+a1.member.type]
0x4C7915: push    edx
0x4C7916: push    ecx
0x4C7917: push    ebx
0x4C7918: push    eax; ArgList
0x4C7919: push    offset aLandIIUnable_0; "Land (%i, %i) unable to find additional"...
0x4C791E: call    PrintError
0x4C7923: add     esp, 14h
0x4C7926: jmp     short loc_4C792E
0x4C7928: mov     edi, ds:0B35BE4h
0x4C792E: test    edi, edi
0x4C7930: movzx   edx, byte ptr [esp+15A8h+a1.member.flags]
0x4C7935: mov     eax, [esi+24h]
0x4C7938: movzx   ecx, word ptr [esp+15A8h+a1.member.flags+2]
0x4C793D: mov     edx, [eax+edx*4+30h]
0x4C7941: mov     [edx+ecx*4], edi
0x4C7944: jz      short loc_4C794D
0x4C7946: mov     ecx, edi
0x4C7948: call    sub_4C9530
0x4C794D: movzx   ecx, word ptr [esp+15A8h+a1.member.flags+2]
0x4C7952: movzx   eax, byte ptr [esp+15A8h+a1.member.flags]
0x4C7957: mov     [esp+15A8h+a1.member.modlist.data], ecx
0x4C795B: mov     [esp+15A8h+a1.member.modlist.next], eax
0x4C795F: mov     ecx, ebp
0x4C7961: call    TESFile_GetNextChunk
0x4C7966: test    al, al
0x4C7968: jnz     loc_4C7130
0x4C796E: cmp     [esp+15A8h+var_1595], al
0x4C7972: pop     edi
0x4C7973: pop     ebx
0x4C7974: jz      short loc_4C797C
0x4C7976: or      dword ptr [esi+1Ch], 8
0x4C797A: jmp     short loc_4C7980
0x4C797C: and     dword ptr [esi+1Ch], 0FFFFFFF7h
0x4C7980: mov     al, 1
0x4C7982: mov     ecx, [esp+15A0h+var_4]
0x4C7989: pop     esi
0x4C798A: pop     ebp
0x4C798B: xor     ecx, esp
0x4C798D: call    @__security_check_cookie@4; __security_check_cookie(x)
0x4C7992: add     esp, 1598h
0x4C7998: retn    4
