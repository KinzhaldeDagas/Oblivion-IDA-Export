0x88AEB0: push    ebp
0x88AEB1: mov     ebp, esp
0x88AEB3: and     esp, 0FFFFFFF0h
0x88AEB6: push    0FFFFFFFFh
0x88AEB8: push    offset ??0bhkWorld@@QAE@XZ_SEH
0x88AEBD: mov     eax, large fs:0
0x88AEC3: push    eax
0x88AEC4: sub     esp, 18h
0x88AEC7: push    ebx
0x88AEC8: push    esi
0x88AEC9: push    edi
0x88AECA: mov     eax, ds:0B30AACh
0x88AECF: xor     eax, esp
0x88AED1: push    eax
0x88AED2: lea     eax, [esp+34h+var_C]
0x88AED6: mov     large fs:0, eax
0x88AEDC: mov     edi, [ebp+arg_0]
0x88AEDF: mov     esi, ecx
0x88AEE1: mov     [esp+34h+var_18], esi
0x88AEE5: call    ??0bhkRefObject@@QAE@XZ; bhkRefObject::bhkRefObject(void)
0x88AEEA: xor     ebx, ebx
0x88AEEC: mov     [esi+0Ch], ebx
0x88AEEF: mov     dword ptr [esi], offset ??_7bhkWorld@@6B@; const bhkWorld::`vftable'
0x88AEF5: mov     [esi+10h], ebx
0x88AEF8: mov     eax, 80000000h
0x88AEFD: mov     [esp+34h+var_4], ebx
0x88AF01: mov     [esi+60h], ebx
0x88AF04: mov     [esi+64h], ebx
0x88AF07: mov     [esi+68h], eax
0x88AF0A: mov     [esi+6Ch], ebx
0x88AF0D: mov     [esi+70h], ebx
0x88AF10: mov     [esi+74h], eax
0x88AF13: add     dword ptr ds:0BA7900h, 1
0x88AF1A: push    2EE0h; Size
0x88AF1F: mov     byte ptr [esp+38h+var_4], 2
0x88AF24: mov     [esi+18h], bl
0x88AF27: mov     [esi+14h], ebx
0x88AF2A: mov     [esi+19h], bl
0x88AF2D: mov     [esi+1Ah], bl
0x88AF30: mov     [esi+24h], ebx
0x88AF33: mov     [esi+1Ch], ebx
0x88AF36: mov     [esi+20h], ebx
0x88AF39: mov     [esi+2Ch], ebx
0x88AF3C: call    FormHeapAlloc
0x88AF41: push    2EE0h
0x88AF46: push    ebx
0x88AF47: push    eax
0x88AF48: mov     [esi+28h], eax
0x88AF4B: call    __memset
0x88AF50: push    320h; Size
0x88AF55: mov     [esi+34h], ebx
0x88AF58: call    FormHeapAlloc
0x88AF5D: push    320h
0x88AF62: push    ebx
0x88AF63: push    eax
0x88AF64: mov     [esi+30h], eax
0x88AF67: call    __memset
0x88AF6C: push    190h; Size
0x88AF71: mov     [esi+3Ch], ebx
0x88AF74: call    FormHeapAlloc
0x88AF79: push    190h
0x88AF7E: push    ebx
0x88AF7F: push    eax
0x88AF80: mov     [esi+38h], eax
0x88AF83: call    __memset
0x88AF88: push    320h; Size
0x88AF8D: mov     [esi+44h], ebx
0x88AF90: call    FormHeapAlloc
0x88AF95: push    320h
0x88AF9A: push    ebx
0x88AF9B: push    eax
0x88AF9C: mov     [esi+40h], eax
0x88AF9F: call    __memset
0x88AFA4: add     esp, 40h
0x88AFA7: push    2EE0h; Size
0x88AFAC: mov     [esi+4Ch], ebx
0x88AFAF: call    FormHeapAlloc
0x88AFB4: push    2EE0h
0x88AFB9: push    ebx
0x88AFBA: push    eax
0x88AFBB: mov     [esi+48h], eax
0x88AFBE: call    __memset
0x88AFC3: add     esp, 10h
0x88AFC6: cmp     edi, ebx
0x88AFC8: xorps   xmm0, xmm0
0x88AFCB: movaps  xmmword ptr [esi+50h], xmm0
0x88AFCF: jz      short loc_88AFD9
0x88AFD1: lea     eax, [edi+0A0h]
0x88AFD7: jmp     short loc_88AFDB
0x88AFD9: xor     eax, eax
0x88AFDB: push    eax; a2
0x88AFDC: mov     ecx, esi; this
0x88AFDE: call    sub_889A70
0x88AFE3: mov     eax, [esi]
0x88AFE5: mov     edx, [eax+58h]
0x88AFE8: mov     ecx, esi
0x88AFEA: call    edx
0x88AFEC: mov     edi, eax
0x88AFEE: mov     eax, [esi]
0x88AFF0: mov     edx, [eax+58h]
0x88AFF3: mov     ecx, esi
0x88AFF5: call    edx
0x88AFF7: cmp     dword ptr [eax+0B4h], 9
0x88AFFE: jnz     short loc_88B030
0x88B000: push    108h; Size
0x88B005: call    FormHeapAlloc
0x88B00A: add     esp, 4
0x88B00D: mov     [esp+34h+var_14], eax
0x88B011: cmp     eax, ebx
0x88B013: mov     byte ptr [esp+34h+var_4], 3
0x88B018: jz      short loc_88B02B
0x88B01A: mov     ecx, ds:0B2E2D4h
0x88B020: push    ecx; havokThreadNum
0x88B021: push    edi; a2
0x88B022: mov     ecx, eax; this
0x88B024: call    bhkWorldSubUnk__InitAndCreateThreads
0x88B029: jmp     short loc_88B02D
0x88B02B: xor     eax, eax
0x88B02D: mov     [esi+10h], eax
0x88B030: mov     eax, esi
0x88B032: mov     ecx, [esp+34h+var_C]
0x88B036: mov     large fs:0, ecx
0x88B03D: pop     ecx
0x88B03E: pop     edi
0x88B03F: pop     esi
0x88B040: pop     ebx
0x88B041: mov     esp, ebp
0x88B043: pop     ebp
0x88B044: retn    4
