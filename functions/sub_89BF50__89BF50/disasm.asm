0x89BF50: sub     esp, 0ACh
0x89BF56: push    ebp
0x89BF57: mov     ebp, ecx
0x89BF59: mov     eax, [ebp+88h]
0x89BF5F: test    eax, eax
0x89BF61: jz      short loc_89BF98
0x89BF63: mov     cl, byte ptr [esp+0B0h+arg_4]
0x89BF6A: mov     al, byte ptr [esp+0B0h+arg_0]
0x89BF71: lea     edx, [esp+0B0h+var_A8]
0x89BF75: mov     byte ptr [esp+0B0h+var_A8+2], cl
0x89BF79: mov     ecx, [ebp+80h]
0x89BF7F: push    edx
0x89BF80: mov     byte ptr [esp+0B4h+var_A8], 14h
0x89BF85: mov     byte ptr [esp+0B4h+var_A8+1], al
0x89BF89: call    sub_8D8830
0x89BF8E: pop     ebp
0x89BF8F: add     esp, 0ACh
0x89BF95: retn    8
0x89BF98: mov     ecx, large fs:2Ch
0x89BF9F: mov     edx, ds:0BA9DE4h
0x89BFA5: mov     eax, [ecx+edx*4]
0x89BFA8: push    esi
0x89BFA9: mov     byte ptr [ebp+90h], 1
0x89BFB0: mov     esi, [eax+1A4h]
0x89BFB6: push    edi
0x89BFB7: cmp     esi, [eax+1A8h]
0x89BFBD: jnb     short loc_89BFE3
0x89BFBF: mov     esi, eax
0x89BFC1: mov     ecx, [esi+1A4h]
0x89BFC7: mov     dword ptr [ecx], offset aTtupdatefilter; "TtUpdateFilterOnWorld"
0x89BFCD: rdtsc
0x89BFCF: mov     [esp+0B8h+var_A0], eax
0x89BFD3: mov     eax, [esp+0B8h+var_A0]
0x89BFD7: mov     [ecx+4], eax
0x89BFDA: add     ecx, 0Ch
0x89BFDD: mov     [esi+1A4h], ecx
0x89BFE3: mov     eax, [esp+0B8h+arg_0]
0x89BFEA: test    eax, eax
0x89BFEC: push    ebx
0x89BFED: jnz     loc_89C12E
0x89BFF3: mov     ecx, [ebp+3Ch]
0x89BFF6: mov     ebx, [esp+0BCh+arg_4]
0x89BFFD: xor     eax, eax
0x89BFFF: test    ecx, ecx
0x89C001: mov     [esp+0BCh+var_AC], eax
0x89C005: jle     short loc_89C048
0x89C007: mov     ecx, [ebp+38h]
0x89C00A: mov     esi, [ecx+eax*4]
0x89C00D: mov     ecx, [esi+38h]
0x89C010: add     esi, 34h ; '4'
0x89C013: xor     edi, edi
0x89C015: test    ecx, ecx
0x89C017: jle     short loc_89C03C
0x89C019: lea     esp, [esp+0]
0x89C020: mov     edx, [esi]
0x89C022: mov     eax, [edx+edi*4]
0x89C025: push    ebx
0x89C026: push    0
0x89C028: push    eax
0x89C029: mov     ecx, ebp
0x89C02B: call    sub_89B630
0x89C030: mov     eax, [esi+4]
0x89C033: inc     edi
0x89C034: cmp     edi, eax
0x89C036: jl      short loc_89C020
0x89C038: mov     eax, [esp+0BCh+var_AC]
0x89C03C: mov     ecx, [ebp+3Ch]
0x89C03F: inc     eax
0x89C040: cmp     eax, ecx
0x89C042: mov     [esp+0BCh+var_AC], eax
0x89C046: jl      short loc_89C007
0x89C048: mov     ecx, [ebp+48h]
0x89C04B: xor     eax, eax
0x89C04D: test    ecx, ecx
0x89C04F: mov     [esp+0BCh+var_AC], eax
0x89C053: jle     short loc_89C08F
0x89C055: mov     ecx, [ebp+44h]
0x89C058: mov     esi, [ecx+eax*4]
0x89C05B: mov     ecx, [esi+38h]
0x89C05E: add     esi, 34h ; '4'
0x89C061: xor     edi, edi
0x89C063: test    ecx, ecx
0x89C065: jle     short loc_89C083
0x89C067: mov     edx, [esi]
0x89C069: mov     eax, [edx+edi*4]
0x89C06C: push    ebx
0x89C06D: push    0
0x89C06F: push    eax
0x89C070: mov     ecx, ebp
0x89C072: call    sub_89B630
0x89C077: mov     eax, [esi+4]
0x89C07A: inc     edi
0x89C07B: cmp     edi, eax
0x89C07D: jl      short loc_89C067
0x89C07F: mov     eax, [esp+0BCh+var_AC]
0x89C083: mov     ecx, [ebp+48h]
0x89C086: inc     eax
0x89C087: cmp     eax, ecx
0x89C089: mov     [esp+0BCh+var_AC], eax
0x89C08D: jl      short loc_89C055
0x89C08F: mov     eax, [ebp+0BCh]
0x89C095: xor     esi, esi
0x89C097: test    eax, eax
0x89C099: jle     short loc_89C0BD
0x89C09B: jmp     short loc_89C0A0
0x89C09D: align 10h
0x89C0A0: mov     edx, [ebp+0B8h]
0x89C0A6: mov     eax, [edx+esi*4]
0x89C0A9: push    ebx
0x89C0AA: push    eax
0x89C0AB: mov     ecx, ebp
0x89C0AD: call    sub_89B390
0x89C0B2: mov     eax, [ebp+0BCh]
0x89C0B8: inc     esi
0x89C0B9: cmp     esi, eax
0x89C0BB: jl      short loc_89C0A0
0x89C0BD: mov     eax, [ebp+88h]
0x89C0C3: test    eax, eax
0x89C0C5: mov     byte ptr [ebp+90h], 0
0x89C0CC: pop     ebx
0x89C0CD: jnz     short loc_89C0E0
0x89C0CF: mov     eax, [ebp+84h]
0x89C0D5: test    eax, eax
0x89C0D7: jz      short loc_89C0E0
0x89C0D9: mov     ecx, ebp
0x89C0DB: call    sub_899210
0x89C0E0: mov     ecx, large fs:2Ch
0x89C0E7: mov     edx, ds:0BA9DE4h
0x89C0ED: mov     eax, [ecx+edx*4]
0x89C0F0: mov     esi, [eax+1A4h]
0x89C0F6: cmp     esi, [eax+1A8h]
0x89C0FC: jnb     short loc_89C122
0x89C0FE: mov     esi, eax
0x89C100: mov     ecx, [esi+1A4h]
0x89C106: mov     dword ptr [ecx], offset aEt; "Et"
0x89C10C: rdtsc
0x89C10E: mov     [esp+0B8h+var_A8], eax
0x89C112: mov     edx, [esp+0B8h+var_A8]
0x89C116: mov     [ecx+4], edx
0x89C119: add     ecx, 0Ch
0x89C11C: mov     [esi+1A4h], ecx
0x89C122: pop     edi
0x89C123: pop     esi
0x89C124: pop     ebp
0x89C125: add     esp, 0ACh
0x89C12B: retn    8
0x89C12E: mov     eax, [ebp+88h]
0x89C134: inc     eax
0x89C135: lea     ecx, [ebp+38h]
0x89C138: lea     edx, [ebp+44h]
0x89C13B: xor     edi, edi
0x89C13D: mov     [ebp+88h], eax
0x89C143: mov     [esp+0BCh+var_94], ecx
0x89C147: mov     [esp+0BCh+var_90], edx
0x89C14B: mov     [esp+0BCh+var_A0], edi
0x89C14F: nop
0x89C150: mov     esi, [esp+edi*4+0BCh+var_94]
0x89C154: lea     eax, [esp+0BCh+var_80]
0x89C158: mov     [esp+0BCh+var_8C], eax
0x89C15C: xor     eax, eax
0x89C15E: mov     ebx, 80000020h
0x89C163: mov     [esp+0BCh+var_88], eax
0x89C167: mov     [esp+0BCh+var_84], ebx
0x89C16B: cmp     [esi+4], eax
0x89C16E: mov     [esp+0BCh+var_AC], eax
0x89C172: mov     [esp+0BCh+var_98], esi
0x89C176: jle     loc_89C2AE
0x89C17C: lea     esp, [esp+0]
0x89C180: mov     ecx, [esi]
0x89C182: mov     edx, [esp+0BCh+var_AC]
0x89C186: mov     edi, [ecx+edx*4]
0x89C189: xor     ecx, ecx
0x89C18B: mov     [esp+0BCh+var_88], ecx
0x89C18F: mov     eax, [edi+48h]
0x89C192: xor     edx, edx
0x89C194: test    eax, eax
0x89C196: jle     loc_89C296
0x89C19C: lea     esp, [esp+0]
0x89C1A0: mov     esi, [edi+44h]
0x89C1A3: mov     esi, [esi+edx*4]
0x89C1A6: inc     edx
0x89C1A7: cmp     edx, eax
0x89C1A9: mov     [esp+0BCh+var_A8], edx
0x89C1AD: jnz     short loc_89C1B4
0x89C1AF: mov     ebx, [edi+54h]
0x89C1B2: jmp     short loc_89C1B8
0x89C1B4: movzx   ebx, word ptr [edi+5Ah]
0x89C1B8: add     ebx, esi
0x89C1BA: cmp     esi, ebx
0x89C1BC: jnb     loc_89C25F
0x89C1C2: mov     edx, [esi+18h]
0x89C1C5: mov     eax, [ebp+78h]
0x89C1C8: push    edx
0x89C1C9: mov     edx, [esi+14h]
0x89C1CC: push    edx
0x89C1CD: lea     ecx, [eax+8]
0x89C1D0: mov     eax, [ecx]
0x89C1D2: lea     edx, [esp+0C4h+var_99]
0x89C1D6: push    edx
0x89C1D7: call    dword ptr [eax]
0x89C1D9: cmp     byte ptr [eax], 0
0x89C1DC: jz      short loc_89C1FD
0x89C1DE: mov     eax, [esi+14h]
0x89C1E1: movzx   ecx, word ptr [eax+1Ah]
0x89C1E5: mov     edx, [esi+18h]
0x89C1E8: movzx   eax, word ptr [edx+1Ah]
0x89C1EC: mov     edx, [ebp+7Ch]
0x89C1EF: lea     ecx, [eax+ecx*8]
0x89C1F2: mov     al, [ecx+edx+19D4h]
0x89C1F9: test    al, al
0x89C1FB: jnz     short loc_89C232
0x89C1FD: mov     eax, [esp+0BCh+var_84]
0x89C201: mov     ecx, [esp+0BCh+var_88]
0x89C205: and     eax, 3FFFFFFFh
0x89C20A: cmp     ecx, eax
0x89C20C: jnz     short loc_89C21D
0x89C20E: lea     ecx, [esp+0BCh+var_8C]
0x89C212: push    4
0x89C214: push    ecx
0x89C215: call    sub_8A6EE0
0x89C21A: add     esp, 8
0x89C21D: mov     eax, [esp+0BCh+var_88]
0x89C221: mov     edx, [esp+0BCh+var_8C]
0x89C225: mov     [edx+eax*4], esi
0x89C228: inc     [esp+0BCh+var_88]
0x89C22C: mov     byte ptr [edi+26h], 1
0x89C230: jmp     short loc_89C249
0x89C232: cmp     [esp+0BCh+arg_4], 1
0x89C23A: jnz     short loc_89C249
0x89C23C: mov     ecx, [ebp+74h]
0x89C23F: push    ecx
0x89C240: push    esi
0x89C241: call    sub_8E6560
0x89C246: add     esp, 8
0x89C249: movzx   edx, byte ptr [esi+3]
0x89C24D: add     esi, edx
0x89C24F: cmp     esi, ebx
0x89C251: jb      loc_89C1C2
0x89C257: mov     ecx, [esp+0BCh+var_88]
0x89C25B: mov     edx, [esp+0BCh+var_A8]
0x89C25F: mov     eax, [edi+48h]
0x89C262: cmp     edx, eax
0x89C264: jl      loc_89C1A0
0x89C26A: test    ecx, ecx
0x89C26C: jz      short loc_89C28E
0x89C26E: mov     edi, edi
0x89C270: mov     eax, [esp+0BCh+var_8C]
0x89C274: mov     eax, [eax+ecx*4-4]
0x89C278: dec     ecx
0x89C279: push    eax
0x89C27A: mov     [esp+0C0h+var_88], ecx
0x89C27E: call    sub_8E7920
0x89C283: mov     ecx, [esp+0C0h+var_88]
0x89C287: add     esp, 4
0x89C28A: test    ecx, ecx
0x89C28C: jnz     short loc_89C270
0x89C28E: mov     ebx, [esp+0BCh+var_84]
0x89C292: mov     esi, [esp+0BCh+var_98]
0x89C296: mov     eax, [esp+0BCh+var_AC]
0x89C29A: mov     ecx, [esi+4]
0x89C29D: inc     eax
0x89C29E: cmp     eax, ecx
0x89C2A0: mov     [esp+0BCh+var_AC], eax
0x89C2A4: jl      loc_89C180
0x89C2AA: mov     edi, [esp+0BCh+var_A0]
0x89C2AE: test    ebx, ebx
0x89C2B0: js      short loc_89C2E9
0x89C2B2: mov     ecx, large fs:2Ch
0x89C2B9: mov     edx, ds:0BA9DE4h
0x89C2BF: mov     eax, [ecx+edx*4]
0x89C2C2: mov     eax, [eax+19Ch]
0x89C2C8: test    eax, eax
0x89C2CA: jnz     short loc_89C2D1
0x89C2CC: mov     eax, ds:0BA7D9Ch
0x89C2D1: mov     ecx, [esp+0BCh+var_8C]
0x89C2D5: and     ebx, 3FFFFFFFh
0x89C2DB: push    14h
0x89C2DD: shl     ebx, 2
0x89C2E0: push    ebx
0x89C2E1: push    ecx
0x89C2E2: mov     ecx, eax
0x89C2E4: call    sub_8A75D0
0x89C2E9: inc     edi
0x89C2EA: cmp     edi, 2
0x89C2ED: mov     [esp+0BCh+var_A0], edi
0x89C2F1: jl      loc_89C150
0x89C2F7: dec     dword ptr [ebp+88h]
0x89C2FD: jmp     loc_89C0BD
