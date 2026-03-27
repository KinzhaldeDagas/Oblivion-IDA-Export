0x401260: sub     esp, 40h
0x401263: push    ebx
0x401264: push    esi
0x401265: push    edi
0x401266: lea     eax, [esp+4Ch+Buffer]
0x40126A: mov     esi, ecx
0x40126C: xor     ebx, ebx
0x40126E: push    eax; lpBuffer
0x40126F: mov     [esi+16Dh], bl
0x401275: call    ds:GlobalMemoryStatus
0x40127B: mov     ecx, [esp+4Ch+Buffer.dwTotalPhys]
0x40127F: sub     ecx, [esp+4Ch+Buffer.dwAvailPhys]
0x401283: mov     eax, [esp+4Ch+arg_0]
0x401287: mov     edx, [esi]
0x401289: mov     [esi+168h], ecx
0x40128F: mov     [esi+0Ch], eax
0x401292: push    eax
0x401293: mov     eax, [edx+4]
0x401296: mov     edi, 4
0x40129B: mov     ecx, esi
0x40129D: mov     [esi+4], edi
0x4012A0: mov     [esi+164h], ebx
0x4012A6: mov     dword ptr [esi+8], 10h
0x4012AD: mov     [esi+5Ch], ebx
0x4012B0: mov     [esi+58h], ebx
0x4012B3: call    eax
0x4012B5: cmp     eax, ebx
0x4012B7: mov     [esi+18h], eax
0x4012BA: jnz     short loc_4012C2
0x4012BC: push    ebx
0x4012BD: call    $LN26
0x4012C2: mov     edx, [esi]
0x4012C4: mov     eax, [edx+0Ch]
0x4012C7: push    ebp
0x4012C8: push    2000h
0x4012CD: mov     ecx, esi
0x4012CF: mov     dword ptr [esi+30h], 400h
0x4012D6: call    eax
0x4012D8: mov     ecx, [esi+30h]
0x4012DB: lea     edx, [eax+ecx*8-8]
0x4012DF: mov     [esi+34h], eax
0x4012E2: mov     eax, [esi]
0x4012E4: mov     [esi+38h], edx
0x4012E7: mov     edx, [eax+0Ch]
0x4012EA: push    80h ; '€'
0x4012EF: mov     ecx, esi
0x4012F1: call    edx
0x4012F3: mov     [esi+44h], eax
0x4012F6: xor     ecx, ecx
0x4012F8: mov     ebp, 2
0x4012FD: mov     [esp+50h+arg_0], edi
0x401301: mov     eax, [esi+44h]
0x401304: mov     [ecx+eax], ebx
0x401307: mov     edi, [esi+4]
0x40130A: mov     eax, edi
0x40130C: shl     eax, 0Ah
0x40130F: cdq
0x401310: and     edx, 0Fh
0x401313: add     eax, edx
0x401315: sar     eax, 4
0x401318: lea     edx, [ebp-2]
0x40131B: imul    eax, edx
0x40131E: add     eax, edi
0x401320: xor     edx, edx
0x401322: div     edi
0x401324: sub     eax, 1
0x401327: cmp     eax, [esi+30h]
0x40132A: jl      short loc_401331
0x40132C: lea     eax, [esi+3Ch]
0x40132F: jmp     short loc_401337
0x401331: mov     edx, [esi+34h]
0x401334: lea     eax, [edx+eax*8]
0x401337: mov     edx, [esi+44h]
0x40133A: mov     [ecx+edx+4], eax
0x40133E: mov     eax, [esi+44h]
0x401341: mov     [ecx+eax+8], ebx
0x401345: mov     edi, [esi+4]
0x401348: mov     eax, edi
0x40134A: shl     eax, 0Ah
0x40134D: cdq
0x40134E: and     edx, 0Fh
0x401351: add     eax, edx
0x401353: sar     eax, 4
0x401356: lea     edx, [ebp-1]
0x401359: imul    eax, edx
0x40135C: add     eax, edi
0x40135E: xor     edx, edx
0x401360: div     edi
0x401362: sub     eax, 1
0x401365: cmp     eax, [esi+30h]
0x401368: jl      short loc_40136F
0x40136A: lea     eax, [esi+3Ch]
0x40136D: jmp     short loc_401375
0x40136F: mov     edx, [esi+34h]
0x401372: lea     eax, [edx+eax*8]
0x401375: mov     edx, [esi+44h]
0x401378: mov     [ecx+edx+0Ch], eax
0x40137C: mov     eax, [esi+44h]
0x40137F: mov     [ecx+eax+10h], ebx
0x401383: mov     edi, [esi+4]
0x401386: mov     eax, edi
0x401388: shl     eax, 0Ah
0x40138B: cdq
0x40138C: and     edx, 0Fh
0x40138F: add     eax, edx
0x401391: sar     eax, 4
0x401394: imul    eax, ebp
0x401397: add     eax, edi
0x401399: xor     edx, edx
0x40139B: div     edi
0x40139D: sub     eax, 1
0x4013A0: cmp     eax, [esi+30h]
0x4013A3: jl      short loc_4013AA
0x4013A5: lea     eax, [esi+3Ch]
0x4013A8: jmp     short loc_4013B0
0x4013AA: mov     edx, [esi+34h]
0x4013AD: lea     eax, [edx+eax*8]
0x4013B0: mov     edx, [esi+44h]
0x4013B3: mov     [ecx+edx+14h], eax
0x4013B7: mov     eax, [esi+44h]
0x4013BA: mov     [ecx+eax+18h], ebx
0x4013BE: mov     edi, [esi+4]
0x4013C1: mov     eax, edi
0x4013C3: shl     eax, 0Ah
0x4013C6: cdq
0x4013C7: and     edx, 0Fh
0x4013CA: add     eax, edx
0x4013CC: sar     eax, 4
0x4013CF: lea     edx, [ebp+1]
0x4013D2: imul    eax, edx
0x4013D5: add     eax, edi
0x4013D7: xor     edx, edx
0x4013D9: div     edi
0x4013DB: sub     eax, 1
0x4013DE: cmp     eax, [esi+30h]
0x4013E1: jl      short loc_4013E8
0x4013E3: lea     eax, [esi+3Ch]
0x4013E6: jmp     short loc_4013EE
0x4013E8: mov     edx, [esi+34h]
0x4013EB: lea     eax, [edx+eax*8]
0x4013EE: mov     edx, [esi+44h]
0x4013F1: mov     [ecx+edx+1Ch], eax
0x4013F5: add     ebp, 4
0x4013F8: add     ecx, 20h ; ' '
0x4013FB: sub     [esp+50h+arg_0], 1
0x401400: jnz     loc_401301
0x401406: mov     eax, [esi+30h]
0x401409: mov     ecx, [esi+34h]
0x40140C: add     eax, eax
0x40140E: add     eax, eax
0x401410: add     eax, eax
0x401412: push    eax
0x401413: push    ebx
0x401414: push    ecx
0x401415: call    __memset
0x40141A: xor     eax, eax
0x40141C: add     esp, 0Ch
0x40141F: lea     edx, [esp+50h+var_20]
0x401423: mov     [esi+3Ch], eax
0x401426: push    edx; lpBuffer
0x401427: mov     [esi+40h], eax
0x40142A: call    ds:GlobalMemoryStatus
0x401430: mov     eax, [esp+50h+var_20.dwAvailPhys]
0x401434: mov     [esi+54h], eax
0x401437: mov     al, [esp+50h+arg_4]
0x40143B: cmp     al, bl
0x40143D: mov     [esi+10h], ebx
0x401440: mov     [esi+14h], ebx
0x401443: mov     [esi+48h], ebx
0x401446: mov     [esi+4Ch], ebx
0x401449: mov     [esi+50h], ebx
0x40144C: mov     [esi+1Ch], ebx
0x40144F: mov     [esi+20h], ebx
0x401452: mov     [esi+24h], ebx
0x401455: mov     [esi+28h], ebx
0x401458: mov     [esi+2Ch], ebx
0x40145B: mov     [esi+60h], ebx
0x40145E: mov     [esi+64h], bl
0x401461: mov     [esi+16Ch], al
0x401467: pop     ebp
0x401468: jnz     short loc_40146F
0x40146A: call    sub_402170
0x40146F: pop     edi
0x401470: pop     esi
0x401471: pop     ebx
0x401472: add     esp, 40h
0x401475: retn    8
