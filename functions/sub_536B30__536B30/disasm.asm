0x536B30: push    ebp
0x536B31: mov     ebp, esp
0x536B33: and     esp, 0FFFFFFF0h
0x536B36: sub     esp, 8
0x536B39: push    esi
0x536B3A: mov     esi, ecx
0x536B3C: mov     eax, [esi+10h]
0x536B3F: test    eax, eax
0x536B41: push    edi
0x536B42: mov     edi, [ebp+arg_0]
0x536B45: jz      short loc_536B57
0x536B47: cmp     [eax+0Ch], edi
0x536B4A: jz      short loc_536B53
0x536B4C: mov     eax, [eax+4]
0x536B4F: test    eax, eax
0x536B51: jnz     short loc_536B47
0x536B53: test    eax, eax
0x536B55: jnz     short loc_536BAC
0x536B57: push    1
0x536B59: push    50h ; 'P'
0x536B5B: mov     ecx, offset FormHeap
0x536B60: call    j_MemoryHeap_Alloc
0x536B65: mov     dl, al
0x536B67: and     dl, 0Fh
0x536B6A: mov     cl, 10h
0x536B6C: sub     cl, dl
0x536B6E: movzx   edx, cl
0x536B71: add     eax, edx
0x536B73: mov     edx, [ebp+arg_8]
0x536B76: mov     [eax-1], cl
0x536B79: mov     ecx, [ebp+arg_4]
0x536B7C: mov     dword ptr [eax], 0
0x536B82: mov     dword ptr [eax+4], 0
0x536B89: mov     [eax+8], ecx
0x536B8C: mov     [eax+0Ch], edi
0x536B8F: mov     dword ptr [eax+30h], 1Fh
0x536B96: xorps   xmm0, xmm0
0x536B99: movaps  xmmword ptr [eax+10h], xmm0
0x536B9D: movaps  xmmword ptr [eax+20h], xmm0
0x536BA1: or      [eax], edx
0x536BA3: mov     ecx, [esi+10h]
0x536BA6: mov     [eax+4], ecx
0x536BA9: mov     [esi+10h], eax
0x536BAC: pop     edi
0x536BAD: pop     esi
0x536BAE: mov     esp, ebp
0x536BB0: pop     ebp
0x536BB1: retn    0Ch
