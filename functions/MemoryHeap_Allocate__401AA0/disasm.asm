0x401AA0: push    esi
0x401AA1: mov     esi, ecx
0x401AA3: cmp     dword ptr [esi+0Ch], 0
0x401AA7: jnz     short loc_401ABA
0x401AA9: mov     eax, [esp+4+Size]
0x401AAD: push    eax; Size
0x401AAE: call    _malloc
0x401AB3: add     esp, 4
0x401AB6: pop     esi
0x401AB7: retn    8
0x401ABA: push    ebx
0x401ABB: mov     ebx, [esp+8+Size]
0x401ABF: cmp     ebx, 8
0x401AC2: jnb     short loc_401AD0
0x401AC4: mov     [esp+8+Size], 8
0x401ACC: mov     ebx, [esp+8+Size]
0x401AD0: mov     ecx, [esi+4]
0x401AD3: lea     eax, [ecx-1]
0x401AD6: test    ebx, eax
0x401AD8: jz      short loc_401AE6
0x401ADA: add     ecx, ebx
0x401ADC: not     eax
0x401ADE: and     ecx, eax
0x401AE0: mov     [esp+8+Size], ecx
0x401AE4: mov     ebx, ecx
0x401AE6: push    edi
0x401AE7: push    offset aMemoryheapAllo; lpCriticalSection
0x401AEC: mov     ecx, offset HeapCriticalSection
0x401AF1: call    NiEnterCriticalSection
0x401AF6: cmp     byte ptr [esi+16Ch], 0
0x401AFD: jnz     short loc_401B34
0x401AFF: cmp     ebx, 200h
0x401B05: ja      short loc_401B34
0x401B07: mov     ecx, ebx
0x401B09: shr     ecx, 2
0x401B0C: mov     ecx, g_HeapPoolsBySize[ecx*4]
0x401B13: test    ecx, ecx
0x401B15: jz      short loc_401B34
0x401B17: call    MemoryPool_Allocate
0x401B1C: mov     edi, eax
0x401B1E: test    edi, edi
0x401B20: jz      short loc_401B34
0x401B22: mov     ecx, offset HeapCriticalSection; lpCriticalSection
0x401B27: call    NiLeaveCriticalSection_0
0x401B2C: mov     eax, edi
0x401B2E: pop     edi
0x401B2F: pop     ebx
0x401B30: pop     esi
0x401B31: retn    8
0x401B34: mov     edi, [esi+4]
0x401B37: xor     edx, edx
0x401B39: mov     eax, ebx
0x401B3B: div     edi
0x401B3D: push    ebp; lpCriticalSection
0x401B3E: sub     eax, 1
0x401B41: cmp     eax, [esi+30h]
0x401B44: jl      short loc_401B4B
0x401B46: lea     ebp, [esi+3Ch]
0x401B49: jmp     short loc_401B51
0x401B4B: mov     edx, [esi+34h]
0x401B4E: lea     ebp, [edx+eax*8]
0x401B51: cmp     dword ptr [ebp+4], 0
0x401B55: jnz     loc_401C0F
0x401B5B: lea     eax, [esi+3Ch]
0x401B5E: cmp     ebp, eax
0x401B60: jz      loc_401C09
0x401B66: mov     ecx, [esi+8]
0x401B69: xor     edx, edx
0x401B6B: mov     eax, ecx
0x401B6D: div     edi
0x401B6F: mov     edi, [esi+38h]
0x401B72: lea     ebp, [ebp+eax*8+0]
0x401B76: cmp     ebp, edi
0x401B78: ja      loc_401C06
0x401B7E: add     ecx, ebx
0x401B80: push    ecx
0x401B81: mov     ecx, esi
0x401B83: call    sub_401230
0x401B88: cmp     eax, 10h
0x401B8B: jge     short loc_401BB2
0x401B8D: mov     edx, [esi+44h]
0x401B90: lea     ecx, [edx+eax*8]
0x401B93: cmp     dword ptr [ecx], 0
0x401B96: jnz     short loc_401BA5
0x401B98: add     eax, 1
0x401B9B: add     ecx, 8
0x401B9E: cmp     eax, 10h
0x401BA1: jl      short loc_401B93
0x401BA3: jmp     short loc_401BAF
0x401BA5: mov     ecx, [edx+eax*8+4]
0x401BA9: cmp     ecx, ebp
0x401BAB: jbe     short loc_401BAF
0x401BAD: mov     ebp, ecx
0x401BAF: cmp     eax, 10h
0x401BB2: jnz     short loc_401BB7
0x401BB4: lea     ebp, [esi+3Ch]
0x401BB7: lea     ecx, [esi+3Ch]
0x401BBA: cmp     ebp, ecx
0x401BBC: jz      short loc_401C09
0x401BBE: cmp     dword ptr [ebp+4], 0
0x401BC2: jnz     short loc_401C0F
0x401BC4: cmp     ebp, edi
0x401BC6: jz      short loc_401C06
0x401BC8: cmp     eax, 0Fh
0x401BCB: jge     short loc_401BFB
0x401BCD: mov     edx, [esi+44h]
0x401BD0: cmp     ebp, [edx+eax*8+0Ch]
0x401BD4: jnz     short loc_401BFB
0x401BD6: add     eax, 1
0x401BD9: cmp     eax, 10h
0x401BDC: mov     ebp, edi
0x401BDE: jge     short loc_401BFE
0x401BE0: lea     ecx, [edx+eax*8]
0x401BE3: cmp     dword ptr [ecx], 0
0x401BE6: jnz     short loc_401BF5
0x401BE8: add     eax, 1
0x401BEB: add     ecx, 8
0x401BEE: cmp     eax, 10h
0x401BF1: jl      short loc_401BE3
0x401BF3: jmp     short loc_401BFE
0x401BF5: mov     ebp, [edx+eax*8+4]
0x401BF9: jmp     short loc_401BFE
0x401BFB: add     ebp, 8
0x401BFE: cmp     dword ptr [ebp+4], 0
0x401C02: jz      short loc_401BC4
0x401C04: jmp     short loc_401C09
0x401C06: lea     ebp, [esi+3Ch]
0x401C09: cmp     dword ptr [ebp+4], 0
0x401C0D: jz      short loc_401C41
0x401C0F: mov     edi, [ebp+0]
0x401C12: test    edi, edi
0x401C14: jz      short loc_401C41
0x401C16: jmp     short loc_401C20
0x401C18: align 10h
0x401C20: mov     ebx, [edi+4]
0x401C23: and     ebx, 0FFFFFFFh
0x401C29: mov     eax, ebx
0x401C2B: sub     eax, [esp+10h+Size]
0x401C2F: jz      short loc_401C75
0x401C31: cmp     eax, [esi+8]
0x401C34: jge     short loc_401C75
0x401C36: mov     edi, [edi+0Ch]
0x401C39: test    edi, edi
0x401C3B: jnz     short loc_401C20
0x401C3D: mov     ebx, [esp+10h+Size]
0x401C41: mov     eax, [esi+10h]
0x401C44: lea     edx, [eax+ebx+8]
0x401C48: cmp     edx, [esi+0Ch]
0x401C4B: jbe     loc_401CE9
0x401C51: mov     eax, [esp+10h+arg_4]
0x401C55: push    eax
0x401C56: push    0
0x401C58: push    ebx
0x401C59: mov     ecx, esi
0x401C5B: call    sub_401830
0x401C60: mov     ecx, offset HeapCriticalSection; lpCriticalSection
0x401C65: mov     esi, eax
0x401C67: call    NiLeaveCriticalSection_0
0x401C6C: pop     ebp
0x401C6D: pop     edi
0x401C6E: pop     ebx
0x401C6F: mov     eax, esi
0x401C71: pop     esi
0x401C72: retn    8
0x401C75: push    edi
0x401C76: push    ebp
0x401C77: mov     ecx, esi
0x401C79: call    sub_401690
0x401C7E: mov     eax, ebx
0x401C80: mov     ebx, [esp+10h+Size]
0x401C84: sub     eax, ebx
0x401C86: jz      short loc_401CC7
0x401C88: lea     ebp, [edi+ebx+8]
0x401C8C: xor     ecx, ecx
0x401C8E: add     eax, 0FFFFFFF8h
0x401C91: mov     [ebp+8], ecx
0x401C94: mov     [ebp+0Ch], ecx
0x401C97: mov     [ebp+4], eax
0x401C9A: mov     [ebp+0], edi
0x401C9D: cmp     edi, [esi+24h]
0x401CA0: jnz     short loc_401CA7
0x401CA2: mov     [esi+24h], ebp
0x401CA5: jmp     short loc_401CB3
0x401CA7: mov     eax, [edi+4]
0x401CAA: and     eax, 0FFFFFFFh
0x401CAF: mov     [eax+edi+8], ebp
0x401CB3: add     dword ptr [esi+1Ch], 1
0x401CB7: push    ebp
0x401CB8: mov     ecx, esi
0x401CBA: call    sub_4015F0
0x401CBF: push    ebp
0x401CC0: mov     ecx, esi
0x401CC2: call    sub_401A30
0x401CC7: mov     ecx, [edi+4]
0x401CCA: and     ecx, 0F0000000h
0x401CD0: or      ecx, ebx
0x401CD2: mov     [edi+4], ecx
0x401CD5: mov     ecx, offset HeapCriticalSection; lpCriticalSection
0x401CDA: call    NiLeaveCriticalSection_0
0x401CDF: pop     ebp
0x401CE0: lea     eax, [edi+8]
0x401CE3: pop     edi
0x401CE4: pop     ebx
0x401CE5: pop     esi
0x401CE6: retn    8
0x401CE9: mov     edi, [esi+18h]
0x401CEC: add     edi, eax
0x401CEE: mov     [edi+4], ebx
0x401CF1: mov     dword ptr [edi], 0
0x401CF7: mov     eax, [esi+24h]
0x401CFA: test    eax, eax
0x401CFC: jz      short loc_401D02
0x401CFE: mov     [edi], eax
0x401D00: jmp     short loc_401D05
0x401D02: mov     [esi+20h], edi
0x401D05: add     dword ptr [esi+1Ch], 1
0x401D09: add     ebx, 8
0x401D0C: add     [esi+10h], ebx
0x401D0F: mov     eax, [esi+10h]
0x401D12: cmp     eax, [esi+14h]
0x401D15: mov     [esi+24h], edi
0x401D18: jle     short loc_401D1D
0x401D1A: mov     [esi+14h], eax
0x401D1D: mov     ecx, offset HeapCriticalSection; lpCriticalSection
0x401D22: call    NiLeaveCriticalSection_0
0x401D27: pop     ebp
0x401D28: lea     eax, [edi+8]
0x401D2B: pop     edi
0x401D2C: pop     ebx
0x401D2D: pop     esi
0x401D2E: retn    8
