0x8D5EB0: push    ebp
0x8D5EB1: mov     ebp, esp
0x8D5EB3: and     esp, 0FFFFFFF0h
0x8D5EB6: mov     eax, 3374h
0x8D5EBB: call    __alloca_probe
0x8D5EC0: mov     al, ds:0BA8180h
0x8D5EC5: test    al, al
0x8D5EC7: push    ebx
0x8D5EC8: push    esi
0x8D5EC9: mov     ebx, ecx
0x8D5ECB: push    edi
0x8D5ECC: mov     [esp+3380h+var_3354], ebx
0x8D5ED0: jnz     short loc_8D5EE9
0x8D5ED2: push    3
0x8D5ED4: call    sub_9246E0
0x8D5ED9: add     esp, 4
0x8D5EDC: test    al, al
0x8D5EDE: mov     ds:0BA8180h, al
0x8D5EE3: jz      loc_8D66DA
0x8D5EE9: mov     ecx, [ebx+20h]
0x8D5EEC: mov     edi, [ebp+arg_4]
0x8D5EEF: mov     eax, 3E8h
0x8D5EF4: mov     [esp+3380h+var_3330], eax
0x8D5EF8: mov     [esp+3380h+var_332C], eax
0x8D5EFC: mov     [esp+3380h+var_3328], eax
0x8D5F00: mov     eax, 4
0x8D5F05: lea     edx, [esp+3380h+var_3334]
0x8D5F09: mov     [esp+3380h+var_3324], eax
0x8D5F0D: mov     [esp+3380h+var_3320], eax
0x8D5F11: xor     eax, eax
0x8D5F13: push    edx
0x8D5F14: add     ebx, 14h
0x8D5F17: push    ebx
0x8D5F18: mov     [esp+3388h+var_3334], 2
0x8D5F20: mov     [esp+3388h+var_331C], eax
0x8D5F24: mov     [esp+3388h+var_3318], eax
0x8D5F28: mov     eax, [ecx]
0x8D5F2A: push    edi
0x8D5F2B: mov     [esp+338Ch+var_334C], ebx
0x8D5F2F: call    dword ptr [eax+0Ch]
0x8D5F32: cmp     eax, 1
0x8D5F35: jz      loc_8D66DA
0x8D5F3B: mov     esi, [ebp+arg_0]
0x8D5F3E: inc     dword ptr [esi+88h]
0x8D5F44: mov     ecx, [esi+18h]
0x8D5F47: mov     eax, [edi]
0x8D5F49: mov     [esp+3380h+var_3340], ecx
0x8D5F4D: fld     [esp+3380h+var_3340]
0x8D5F51: mov     [esp+3380h+var_3344], eax
0x8D5F55: fsub    [esp+3380h+var_3344]
0x8D5F59: lea     edx, [esi+170h]
0x8D5F5F: push    edx
0x8D5F60: fstp    [esp+3384h+var_333C]
0x8D5F64: lea     ecx, [esp+3384h+var_3270]
0x8D5F6B: fld     dword ptr ds:0A2F948h
0x8D5F71: fdiv    [esp+3384h+var_333C]
0x8D5F75: fstp    [esp+3384h+var_3338]
0x8D5F79: call    sub_8D2E10
0x8D5F7E: fld     dword ptr ds:0A2F948h
0x8D5F84: fdiv    [ebp+arg_8]
0x8D5F87: mov     eax, [ebp+arg_8]
0x8D5F8A: mov     edx, [esp+3380h+var_333C]
0x8D5F8E: mov     ecx, eax
0x8D5F90: mov     [esp+3380h+var_317C], eax
0x8D5F97: mov     eax, [esp+3380h+var_3338]
0x8D5F9B: mov     [esp+3380h+var_32EC], ecx
0x8D5FA2: mov     [esp+3380h+var_32E4], edx
0x8D5FA9: mov     edx, [esp+3380h+var_3318]
0x8D5FAD: lea     ecx, [esp+3380h+var_32C0]
0x8D5FB4: push    ecx
0x8D5FB5: push    edx
0x8D5FB6: mov     [esp+3388h+var_32E0], eax
0x8D5FBD: mov     eax, [esp+3388h+var_331C]
0x8D5FC1: push    eax
0x8D5FC2: lea     ecx, [esp+338Ch+var_32EC]
0x8D5FC9: push    ecx
0x8D5FCA: lea     edx, [esp+3390h+var_3270]
0x8D5FD1: push    edx
0x8D5FD2: lea     eax, [esp+3394h+var_3344]
0x8D5FD6: xorps   xmm0, xmm0
0x8D5FD9: push    eax
0x8D5FDA: mov     [esp+3398h+var_3174], 1
0x8D5FE5: mov     [esp+3398h+var_3170], 3F800000h
0x8D5FF0: movaps  xmmword ptr [esp+3398h+var_326C+0Ch], xmm0
0x8D5FF8: movaps  [esp+3398h+anonymous_0], xmm0
0x8D6000: mov     dword ptr [esp+3398h+var_326C+4], 3FB33333h
0x8D600B: mov     dword ptr [esp+3398h+var_326C], 3F000000h
0x8D6016: mov     dword ptr [esp+3398h+var_326C+8], 0
0x8D6021: mov     [esp+3398h+var_32DC], 3F800000h
0x8D602C: fst     [esp+3398h+var_3178]
0x8D6033: fstp    [esp+3398h+var_32E8]
0x8D603A: call    sub_923B10
0x8D603F: mov     edx, ds:0BA9DE4h
0x8D6045: mov     ecx, large fs:2Ch
0x8D604C: mov     eax, [ecx+edx*4]
0x8D604F: mov     edx, [eax+1A4h]
0x8D6055: add     esp, 18h
0x8D6058: cmp     edx, [eax+1A8h]
0x8D605E: jnb     short loc_8D609C
0x8D6060: mov     eax, ds:0BA9DE4h
0x8D6065: mov     eax, [ecx+eax*4]
0x8D6068: mov     edi, [eax+1A4h]
0x8D606E: mov     dword ptr [edi], offset aLttoi; "LtTOI"
0x8D6074: mov     dword ptr [edi+0Ch], offset aSolvetoi; "SolveToi"
0x8D607B: rdtsc
0x8D607D: mov     [esp+3380h+var_3364], eax
0x8D6081: mov     edx, [esp+3380h+var_3364]
0x8D6085: mov     eax, ds:0BA9DE4h
0x8D608A: mov     eax, [ecx+eax*4]
0x8D608D: mov     [edi+4], edx
0x8D6090: add     edi, 10h
0x8D6093: mov     [eax+1A4h], edi
0x8D6099: mov     edi, [ebp+arg_4]
0x8D609C: mov     eax, [edi+4]
0x8D609F: mov     dl, [eax+91h]
0x8D60A5: test    dl, dl
0x8D60A7: jz      short loc_8D60AC
0x8D60A9: mov     eax, [edi+8]
0x8D60AC: mov     edx, [eax+54h]
0x8D60AF: mov     eax, edx
0x8D60B1: mov     edi, [eax+38h]
0x8D60B4: mov     [esp+3380h+var_336C], edx
0x8D60B8: mov     edx, ds:0BA9DE4h
0x8D60BE: mov     eax, [ecx+edx*4]
0x8D60C1: mov     ecx, [eax+19Ch]
0x8D60C7: mov     edx, [ecx+20h]
0x8D60CA: mov     [esp+3380h+var_3368], eax
0x8D60CE: lea     eax, [edi+10h]
0x8D60D1: and     eax, 0FFFFFFF0h
0x8D60D4: mov     [esp+3380h+var_3364], edx
0x8D60D8: add     edx, eax
0x8D60DA: cmp     edx, [ecx+2Ch]
0x8D60DD: ja      short loc_8D60EC
0x8D60DF: mov     eax, [esp+3380h+var_3364]
0x8D60E3: mov     [ecx+20h], edx
0x8D60E6: mov     [esp+3380h+var_335C], eax
0x8D60EA: jmp     short loc_8D60F6
0x8D60EC: mov     edx, [ecx]
0x8D60EE: push    eax
0x8D60EF: call    dword ptr [edx+0Ch]
0x8D60F2: mov     [esp+3380h+var_335C], eax
0x8D60F6: push    edi
0x8D60F7: push    0
0x8D60F9: push    eax
0x8D60FA: mov     [esp+338Ch+var_3314], eax
0x8D60FE: call    sub_8B18C0
0x8D6103: lea     ecx, [esp+338Ch+var_3314]
0x8D6107: push    ecx
0x8D6108: lea     eax, [esp+3390h+var_3154]
0x8D610F: mov     [esp+3390h+var_3160], eax
0x8D6116: mov     eax, [esp+3390h+var_3354]
0x8D611A: mov     ecx, [eax+20h]
0x8D611D: lea     edx, [esp+3390h+var_3160]
0x8D6124: push    edx
0x8D6125: mov     edx, [ebp+arg_4]
0x8D6128: push    esi
0x8D6129: push    ecx
0x8D612A: push    edx
0x8D612B: lea     eax, [esp+33A0h+var_32C0]
0x8D6132: push    eax
0x8D6133: lea     ecx, [esp+33A4h+var_3334]
0x8D6137: push    ecx
0x8D6138: mov     [esp+33A8h+var_315C], 0
0x8D6143: mov     [esp+33A8h+var_3158], 80000040h
0x8D614E: call    sub_8D4AF0
0x8D6153: lea     edx, [esp+33A8h+var_32C0]
0x8D615A: push    edx
0x8D615B: call    nullsub_5
0x8D6160: mov     ecx, ds:0BA9DE4h
0x8D6166: mov     eax, large fs:2Ch
0x8D616C: mov     eax, [eax+ecx*4]
0x8D616F: mov     edx, [eax+1A4h]
0x8D6175: mov     ecx, [eax+1A8h]
0x8D617B: mov     edi, [esp+33ACh+var_3368]
0x8D617F: add     esp, 2Ch
0x8D6182: cmp     edx, ecx
0x8D6184: jnb     short loc_8D61A8
0x8D6186: mov     ecx, [edi+1A4h]
0x8D618C: mov     dword ptr [ecx], offset aStevtcleanup; "StEvtCleanup"
0x8D6192: rdtsc
0x8D6194: mov     [esp+3380h+var_3364], eax
0x8D6198: mov     eax, [esp+3380h+var_3364]
0x8D619C: mov     [ecx+4], eax
0x8D619F: add     ecx, 0Ch
0x8D61A2: mov     [edi+1A4h], ecx
0x8D61A8: mov     eax, [ebx+4]
0x8D61AB: dec     eax
0x8D61AC: js      loc_8D62F8
0x8D61B2: mov     edi, eax
0x8D61B4: shl     edi, 6
0x8D61B7: inc     eax
0x8D61B8: mov     [esp+3380h+var_3360], edi
0x8D61BC: mov     [esp+3380h+var_3358], eax
0x8D61C0: mov     ecx, [ebx]
0x8D61C2: mov     eax, [edi+ecx+4]
0x8D61C6: mov     edx, [eax+54h]
0x8D61C9: lea     esi, [edi+ecx]
0x8D61CC: mov     ecx, [esp+3380h+var_336C]
0x8D61D0: cmp     edx, ecx
0x8D61D2: jnz     short loc_8D61E5
0x8D61D4: movzx   edx, word ptr [eax+8Ch]
0x8D61DB: mov     eax, [esp+3380h+var_335C]
0x8D61DF: cmp     byte ptr [edx+eax], 8
0x8D61E3: jz      short loc_8D6206
0x8D61E5: mov     eax, [esi+8]
0x8D61E8: cmp     [eax+54h], ecx
0x8D61EB: jnz     loc_8D62DB
0x8D61F1: movzx   ecx, word ptr [eax+8Ch]
0x8D61F8: mov     edx, [esp+3380h+var_335C]
0x8D61FC: cmp     byte ptr [ecx+edx], 8
0x8D6200: jnz     loc_8D62DB
0x8D6206: mov     ecx, [esi+8]
0x8D6209: mov     eax, [esi+4]
0x8D620C: mov     edx, [esi+18h]
0x8D620F: mov     [esp+3380h+var_32F8], ecx
0x8D6216: lea     ecx, [esp+3380h+var_3304]
0x8D621A: mov     [esp+3380h+var_3304], 0FFFFh
0x8D6221: mov     [esp+3380h+var_3300], 0
0x8D622C: mov     [esp+3380h+var_32FC], eax
0x8D6233: mov     [esp+3380h+var_32F0], edx
0x8D623A: mov     edx, [eax+8]
0x8D623D: push    ecx
0x8D623E: push    edx
0x8D623F: call    sub_8DC920
0x8D6244: mov     eax, [esi+4]
0x8D6247: mov     ecx, [eax+98h]
0x8D624D: add     esp, 8
0x8D6250: test    ecx, ecx
0x8D6252: jz      short loc_8D6262
0x8D6254: lea     ecx, [esp+3380h+var_3304]
0x8D6258: push    ecx
0x8D6259: push    eax
0x8D625A: call    sub_8DC0A0
0x8D625F: add     esp, 8
0x8D6262: mov     esi, [esi+8]
0x8D6265: mov     eax, [esi+98h]
0x8D626B: test    eax, eax
0x8D626D: jz      short loc_8D627D
0x8D626F: lea     edx, [esp+3380h+var_3304]
0x8D6273: push    edx
0x8D6274: push    esi
0x8D6275: call    sub_8DC0A0
0x8D627A: add     esp, 8
0x8D627D: mov     esi, [ebx+4]
0x8D6280: mov     ecx, [ebx]
0x8D6282: dec     esi
0x8D6283: mov     eax, esi
0x8D6285: shl     eax, 6
0x8D6288: add     eax, ecx
0x8D628A: mov     [ebx+4], esi
0x8D628D: mov     edx, [eax]
0x8D628F: add     ecx, edi
0x8D6291: mov     esi, eax
0x8D6293: mov     [ecx], edx
0x8D6295: lea     edx, [ecx+4]
0x8D6298: sub     esi, ecx
0x8D629A: mov     edi, 2
0x8D629F: nop
0x8D62A0: mov     ebx, [esi+edx]
0x8D62A3: mov     [edx], ebx
0x8D62A5: add     edx, 4
0x8D62A8: dec     edi
0x8D62A9: jnz     short loc_8D62A0
0x8D62AB: mov     edx, [eax+0Ch]
0x8D62AE: mov     edi, [esp+3380h+var_3360]
0x8D62B2: mov     ebx, [esp+3380h+var_334C]
0x8D62B6: mov     [ecx+0Ch], edx
0x8D62B9: mov     edx, [eax+10h]
0x8D62BC: mov     [ecx+10h], edx
0x8D62BF: mov     edx, [eax+14h]
0x8D62C2: mov     [ecx+14h], edx
0x8D62C5: mov     edx, [eax+18h]
0x8D62C8: mov     [ecx+18h], edx
0x8D62CB: movaps  xmm0, xmmword ptr [eax+20h]
0x8D62CF: movaps  xmmword ptr [ecx+20h], xmm0
0x8D62D3: movaps  xmm0, xmmword ptr [eax+30h]
0x8D62D7: movaps  xmmword ptr [ecx+30h], xmm0
0x8D62DB: mov     eax, [esp+3380h+var_3358]
0x8D62DF: sub     edi, 40h ; '@'
0x8D62E2: dec     eax
0x8D62E3: mov     [esp+3380h+var_3360], edi
0x8D62E7: mov     [esp+3380h+var_3358], eax
0x8D62EB: jnz     loc_8D61C0
0x8D62F1: mov     esi, [ebp+arg_0]
0x8D62F4: mov     edi, [esp+3380h+var_3368]
0x8D62F8: mov     ecx, ds:0BA9DE4h
0x8D62FE: mov     eax, large fs:2Ch
0x8D6304: mov     eax, [eax+ecx*4]
0x8D6307: mov     edx, [eax+1A4h]
0x8D630D: cmp     edx, [eax+1A8h]
0x8D6313: jnb     short loc_8D6337
0x8D6315: mov     ecx, [edi+1A4h]
0x8D631B: mov     dword ptr [ecx], offset aStcollide; "StCollide"
0x8D6321: rdtsc
0x8D6323: mov     [esp+3380h+var_3364], eax
0x8D6327: mov     eax, [esp+3380h+var_3364]
0x8D632B: mov     [ecx+4], eax
0x8D632E: add     ecx, 0Ch
0x8D6331: mov     [edi+1A4h], ecx
0x8D6337: mov     ecx, [esi+18h]
0x8D633A: mov     edx, [ebp+arg_4]
0x8D633D: mov     eax, [edx]
0x8D633F: push    ecx; float
0x8D6340: push    eax; int
0x8D6341: lea     ecx, [esp+3388h+var_3314]
0x8D6345: call    sub_8D2C90
0x8D634A: mov     ecx, [esi+74h]
0x8D634D: mov     edx, [esp+3380h+var_3314]
0x8D6351: mov     eax, [esp+3380h+var_3310]
0x8D6355: add     ecx, 10h
0x8D6358: mov     [ecx], edx
0x8D635A: mov     edx, [esp+3380h+var_330C]
0x8D635E: mov     [ecx+4], eax
0x8D6361: mov     eax, [esp+3380h+var_3308]
0x8D6365: mov     [ecx+8], edx
0x8D6368: mov     [ecx+0Ch], eax
0x8D636B: mov     eax, [esp+3380h+var_315C]
0x8D6372: test    eax, eax
0x8D6374: mov     ecx, [esp+3380h+var_3160]
0x8D637B: mov     edi, [esi+74h]
0x8D637E: mov     [esp+3380h+var_3364], eax
0x8D6382: mov     [esp+3380h+var_3358], ecx
0x8D6386: jz      loc_8D661C
0x8D638C: push    0; lpCriticalSection
0x8D638E: push    esi; int
0x8D638F: push    eax; int
0x8D6390: push    ecx; int
0x8D6391: mov     ecx, [esp+3390h+var_3354]
0x8D6395: call    sub_8D4590
0x8D639A: mov     ecx, ds:0BA7D98h
0x8D63A0: cmp     dword ptr [ecx+4], 1
0x8D63A4: jz      loc_8D661C
0x8D63AA: mov     edx, [esp+3380h+var_3358]
0x8D63AE: mov     eax, [edx]
0x8D63B0: mov     eax, [eax+54h]
0x8D63B3: mov     ecx, [esp+3380h+var_3368]
0x8D63B7: mov     ecx, [ecx+19Ch]
0x8D63BD: mov     edx, [ecx+20h]
0x8D63C0: mov     [esp+3380h+var_3348], eax
0x8D63C4: mov     eax, [eax+38h]
0x8D63C7: mov     [esp+3380h+var_3360], eax
0x8D63CB: add     eax, 10h
0x8D63CE: and     eax, 0FFFFFFF0h
0x8D63D1: mov     [esp+3380h+var_3350], edx
0x8D63D5: add     edx, eax
0x8D63D7: cmp     edx, [ecx+2Ch]
0x8D63DA: ja      short loc_8D63E9
0x8D63DC: mov     [ecx+20h], edx
0x8D63DF: mov     edx, [esp+3380h+var_3350]
0x8D63E3: mov     [esp+3380h+var_336C], edx
0x8D63E7: jmp     short loc_8D63F3
0x8D63E9: mov     edx, [ecx]
0x8D63EB: push    eax
0x8D63EC: call    dword ptr [edx+0Ch]
0x8D63EF: mov     [esp+3380h+var_336C], eax
0x8D63F3: mov     ecx, [esp+3380h+var_3360]
0x8D63F7: mov     eax, ecx
0x8D63F9: or      eax, 80000000h
0x8D63FE: push    ecx
0x8D63FF: mov     [esp+3384h+var_32FC], eax
0x8D6406: mov     eax, [esp+3384h+var_336C]
0x8D640A: push    0
0x8D640C: push    eax
0x8D640D: call    sub_8B18C0
0x8D6412: mov     ecx, [esp+338Ch+var_3364]
0x8D6416: xor     eax, eax
0x8D6418: add     esp, 0Ch
0x8D641B: test    ecx, ecx
0x8D641D: mov     [esp+3380h+var_1C], 7F7FFFFFh
0x8D6428: mov     [esp+3380h+var_3350], eax
0x8D642C: jle     loc_8D6595
0x8D6432: mov     ecx, [esp+3380h+var_3358]
0x8D6436: mov     ebx, [ecx+eax*4]
0x8D6439: movzx   edx, word ptr [ebx+8Ch]
0x8D6440: mov     ecx, [esp+3380h+var_336C]
0x8D6444: mov     byte ptr [edx+ecx], 1
0x8D6448: mov     edx, [ebx+3Ch]
0x8D644B: xor     ecx, ecx
0x8D644D: test    edx, edx
0x8D644F: mov     [esp+3380h+var_3360], ecx
0x8D6453: jle     loc_8D657D
0x8D6459: lea     esp, [esp+0]
0x8D6460: mov     edx, [ebx+38h]
0x8D6463: lea     ecx, [edx+ecx*8]
0x8D6466: mov     edx, [ecx+4]
0x8D6469: mov     eax, [edx+10h]
0x8D646C: mov     esi, [eax+edx+54h]
0x8D6470: add     eax, edx
0x8D6472: mov     edx, [esp+3380h+var_3348]
0x8D6476: cmp     esi, edx
0x8D6478: jnz     short loc_8D648F
0x8D647A: movzx   eax, word ptr [eax+8Ch]
0x8D6481: mov     edx, [esp+3380h+var_336C]
0x8D6485: cmp     byte ptr [eax+edx], 0
0x8D6489: jnz     loc_8D6565
0x8D648F: mov     esi, [ecx]
0x8D6491: mov     edx, [edi]
0x8D6493: lea     eax, [esp+3380h+var_3020]
0x8D649A: mov     [esp+3380h+var_3050], eax
0x8D64A1: mov     [esp+3380h+var_1C], 7F7FFFFFh
0x8D64AC: mov     [esp+3380h+var_10], 0
0x8D64B7: movsx   ecx, byte ptr [esi+8]
0x8D64BB: imul    ecx, 3Ch ; '<'
0x8D64BE: lea     eax, [ecx+edx+1A14h]
0x8D64C5: lea     ecx, [esp+3380h+var_3050]
0x8D64CC: push    ecx
0x8D64CD: mov     [edi+28h], eax
0x8D64D0: mov     al, [eax+10h]
0x8D64D3: push    edi
0x8D64D4: push    esi
0x8D64D5: mov     [edi+0Ch], al
0x8D64D8: call    sub_8E6D10
0x8D64DD: mov     ecx, ds:0BA7D98h
0x8D64E3: mov     edx, [ecx+14h]
0x8D64E6: mov     eax, [ecx+28h]
0x8D64E9: add     eax, edx
0x8D64EB: mov     edx, [ecx+8]
0x8D64EE: add     esp, 0Ch
0x8D64F1: cmp     edx, eax
0x8D64F3: jle     short loc_8D64FD
0x8D64F5: sub     edx, eax
0x8D64F7: mov     [esp+3380h+var_3314], edx
0x8D64FB: jnz     short loc_8D650A
0x8D64FD: mov     dword ptr [ecx+4], 1
0x8D6504: mov     ecx, ds:0BA7D98h
0x8D650A: cmp     dword ptr [ecx+4], 1
0x8D650E: jz      loc_8D65D6
0x8D6514: mov     eax, [esp+3380h+var_3050]
0x8D651B: lea     edx, [esp+3380h+var_3020]
0x8D6522: cmp     eax, edx
0x8D6524: jz      short loc_8D653F
0x8D6526: mov     ecx, [esi+10h]
0x8D6529: mov     eax, [ecx]
0x8D652B: lea     edx, [esp+3380h+var_3050]
0x8D6532: push    edx
0x8D6533: mov     edx, [esi+18h]
0x8D6536: push    edi
0x8D6537: push    edx
0x8D6538: mov     edx, [esi+14h]
0x8D653B: push    edx
0x8D653C: call    dword ptr [eax+14h]
0x8D653F: fld     [esp+3380h+var_1C]
0x8D6546: fcomp   dword ptr ds:0A9A020h
0x8D654C: fnstsw  ax
0x8D654E: test    ah, 5
0x8D6551: jp      short loc_8D6565
0x8D6553: mov     ecx, [esp+3380h+var_3354]
0x8D6557: push    esi
0x8D6558: lea     eax, [esp+3384h+var_3050]
0x8D655F: push    eax
0x8D6560: call    sub_8D3600
0x8D6565: mov     ecx, [esp+3380h+var_3360]
0x8D6569: mov     eax, [ebx+3Ch]
0x8D656C: inc     ecx
0x8D656D: cmp     ecx, eax
0x8D656F: mov     [esp+3380h+var_3360], ecx
0x8D6573: jl      loc_8D6460
0x8D6579: mov     eax, [esp+3380h+var_3350]
0x8D657D: mov     ecx, [esp+3380h+var_3364]
0x8D6581: inc     eax
0x8D6582: cmp     eax, ecx
0x8D6584: mov     [esp+3380h+var_3350], eax
0x8D6588: jl      loc_8D6432
0x8D658E: mov     ebx, [esp+3380h+var_334C]
0x8D6592: mov     esi, [ebp+arg_0]
0x8D6595: mov     edi, [esp+3380h+var_3368]
0x8D6599: mov     ecx, [edi+19Ch]
0x8D659F: mov     eax, [esp+3380h+var_336C]
0x8D65A3: cmp     eax, [ecx+28h]
0x8D65A6: mov     [ecx+20h], eax
0x8D65A9: jnz     short loc_8D65B1
0x8D65AB: mov     edx, [ecx]
0x8D65AD: push    eax
0x8D65AE: call    dword ptr [edx+10h]
0x8D65B1: mov     eax, [esp+3380h+var_32FC]
0x8D65B8: test    eax, eax
0x8D65BA: js      short loc_8D6620
0x8D65BC: mov     ecx, [edi+19Ch]
0x8D65C2: push    14h
0x8D65C4: and     eax, 3FFFFFFFh
0x8D65C9: push    eax
0x8D65CA: mov     eax, [esp+3388h+var_336C]
0x8D65CE: push    eax
0x8D65CF: call    sub_8A75D0
0x8D65D4: jmp     short loc_8D6620
0x8D65D6: mov     ecx, [esp+3380h+var_3368]
0x8D65DA: mov     ecx, [ecx+19Ch]
0x8D65E0: mov     esi, [esp+3380h+var_336C]
0x8D65E4: cmp     esi, [ecx+28h]
0x8D65E7: mov     [ecx+20h], esi
0x8D65EA: jnz     short loc_8D65F2
0x8D65EC: mov     edx, [ecx]
0x8D65EE: push    esi
0x8D65EF: call    dword ptr [edx+10h]
0x8D65F2: mov     eax, [esp+3380h+var_32FC]
0x8D65F9: test    eax, eax
0x8D65FB: js      short loc_8D6615
0x8D65FD: push    14h
0x8D65FF: and     eax, 3FFFFFFFh
0x8D6604: push    eax
0x8D6605: mov     eax, [esp+3388h+var_3368]
0x8D6609: mov     ecx, [eax+19Ch]
0x8D660F: push    esi
0x8D6610: call    sub_8A75D0
0x8D6615: mov     ebx, [esp+3380h+var_334C]
0x8D6619: mov     esi, [ebp+arg_0]
0x8D661C: mov     edi, [esp+3380h+var_3368]
0x8D6620: mov     eax, [esp+3380h+var_3158]
0x8D6627: test    eax, eax
0x8D6629: js      short loc_8D6649
0x8D662B: mov     ecx, [esp+3380h+var_3160]
0x8D6632: and     eax, 3FFFFFFFh
0x8D6637: push    14h
0x8D6639: shl     eax, 2
0x8D663C: push    eax
0x8D663D: push    ecx
0x8D663E: mov     ecx, [edi+19Ch]
0x8D6644: call    sub_8A75D0
0x8D6649: mov     ecx, [edi+19Ch]
0x8D664F: mov     eax, [esp+3380h+var_335C]
0x8D6653: cmp     eax, [ecx+28h]
0x8D6656: mov     [ecx+20h], eax
0x8D6659: jnz     short loc_8D6661
0x8D665B: mov     edx, [ecx]
0x8D665D: push    eax
0x8D665E: call    dword ptr [edx+10h]
0x8D6661: mov     eax, [esp+3380h+var_3354]
0x8D6665: mov     ecx, [eax+20h]
0x8D6668: mov     edx, [ecx]
0x8D666A: lea     eax, [esp+3380h+var_3334]
0x8D666E: push    eax
0x8D666F: mov     eax, [ebp+arg_4]
0x8D6672: push    ebx
0x8D6673: push    eax
0x8D6674: call    dword ptr [edx+18h]
0x8D6677: dec     dword ptr [esi+88h]
0x8D667D: jnz     short loc_8D669A
0x8D667F: mov     eax, [esi+84h]
0x8D6685: test    eax, eax
0x8D6687: jz      short loc_8D669A
0x8D6689: mov     al, [esi+90h]
0x8D668F: test    al, al
0x8D6691: jnz     short loc_8D669A
0x8D6693: mov     ecx, esi
0x8D6695: call    sub_899210
0x8D669A: mov     ecx, large fs:2Ch
0x8D66A1: mov     edx, ds:0BA9DE4h
0x8D66A7: mov     eax, [ecx+edx*4]
0x8D66AA: mov     ecx, [eax+1A4h]
0x8D66B0: cmp     ecx, [eax+1A8h]
0x8D66B6: jnb     short loc_8D66DA
0x8D66B8: mov     ecx, [edi+1A4h]
0x8D66BE: mov     dword ptr [ecx], offset aLt_0; "lt"
0x8D66C4: rdtsc
0x8D66C6: mov     [esp+3380h+var_3348], eax
0x8D66CA: mov     edx, [esp+3380h+var_3348]
0x8D66CE: mov     [ecx+4], edx
0x8D66D1: add     ecx, 0Ch
0x8D66D4: mov     [edi+1A4h], ecx
0x8D66DA: pop     edi
0x8D66DB: pop     esi
0x8D66DC: pop     ebx
0x8D66DD: mov     esp, ebp
0x8D66DF: pop     ebp
0x8D66E0: retn    0Ch
