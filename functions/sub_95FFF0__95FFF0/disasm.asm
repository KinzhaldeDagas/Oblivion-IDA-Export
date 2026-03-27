0x95FFF0: push    ebx
0x95FFF1: push    ebp
0x95FFF2: push    esi
0x95FFF3: push    edi
0x95FFF4: mov     edi, dword ptr [esp+10h+ArgList]
0x95FFF8: mov     eax, edi
0x95FFFA: mov     ebp, ecx
0x95FFFC: lea     edx, [eax+1]
0x95FFFF: nop
0x960000: mov     cl, [eax]
0x960002: add     eax, 1
0x960005: test    cl, cl
0x960007: jnz     short loc_960000
0x960009: sub     eax, edx
0x96000B: lea     esi, [eax+0Ch]
0x96000E: push    esi; Size
0x96000F: call    FormHeapAlloc
0x960014: push    edi; ArgList
0x960015: push    offset aSUnion_bv; "%s = UNION_BV"
0x96001A: push    esi; SizeInBytes
0x96001B: push    eax; DstBuf
0x96001C: mov     dword ptr [esp+24h+ArgList], eax
0x960020: call    sub_6C5D40
0x960025: mov     ebx, [esp+24h+arg_4]
0x960029: movzx   esi, word ptr [ebx+0Ah]
0x96002D: movzx   eax, word ptr [ebx+8]
0x960031: add     esp, 14h
0x960034: cmp     esi, eax
0x960036: jb      short loc_960046
0x960038: movzx   ecx, word ptr [ebx+0Eh]
0x96003C: add     ecx, esi
0x96003E: push    ecx
0x96003F: mov     ecx, ebx
0x960041: call    NiTArray_SetSize
0x960046: lea     edx, [esp+10h+ArgList]
0x96004A: push    edx
0x96004B: push    esi
0x96004C: mov     ecx, ebx
0x96004E: call    NiTArray_SetAt; Actually first arg is a generic NiTArray
0x960053: xor     esi, esi
0x960055: cmp     [ebp+0Eh], si
0x960059: jbe     short loc_9600A0
0x96005B: jmp     short loc_960060
0x96005D: align 10h
0x960060: push    0Dh; Size
0x960062: call    FormHeapAlloc
0x960067: push    esi; ArgList
0x960068: push    offset aChildI; "   child %i"
0x96006D: mov     edi, eax
0x96006F: push    0Dh; SizeInBytes
0x960071: push    edi; DstBuf
0x960072: call    sub_6C5D40
0x960077: movzx   eax, word ptr [ebp+0Eh]
0x96007B: add     esp, 14h
0x96007E: cmp     esi, eax
0x960080: jnb     short loc_96008A
0x960082: mov     ecx, [ebp+8]
0x960085: mov     ecx, [ecx+esi*4]
0x960088: jmp     short loc_96008C
0x96008A: xor     ecx, ecx
0x96008C: mov     edx, [ecx]
0x96008E: mov     eax, [edx+2Ch]
0x960091: push    ebx
0x960092: push    edi
0x960093: call    eax
0x960095: movzx   ecx, word ptr [ebp+0Eh]
0x960099: add     esi, 1
0x96009C: cmp     esi, ecx
0x96009E: jb      short loc_960060
0x9600A0: pop     edi
0x9600A1: pop     esi
0x9600A2: pop     ebp
0x9600A3: pop     ebx
0x9600A4: retn    8
