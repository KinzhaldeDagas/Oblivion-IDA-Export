0x915AE0: push    ebp
0x915AE1: mov     ebp, esp
0x915AE3: and     esp, 0FFFFFFF0h
0x915AE6: sub     esp, 234h
0x915AEC: mov     eax, ds:0B30AACh
0x915AF1: mov     edx, ds:0BA9DE4h
0x915AF7: push    ebx
0x915AF8: push    esi
0x915AF9: mov     esi, ecx
0x915AFB: mov     ecx, large fs:2Ch
0x915B02: mov     [esp+23Ch+var_4], eax
0x915B09: mov     eax, [ecx+edx*4]
0x915B0C: mov     ebx, [eax+1A8h]
0x915B12: push    edi
0x915B13: mov     edi, [eax+1A4h]
0x915B19: cmp     edi, ebx
0x915B1B: jnb     short loc_915B41
0x915B1D: mov     edi, eax
0x915B1F: mov     ecx, [edi+1A4h]
0x915B25: mov     dword ptr [ecx], offset aTtrcshpcollect; "TtrcShpCollect"
0x915B2B: rdtsc
0x915B2D: mov     [esp+240h+var_228], eax
0x915B31: mov     eax, [esp+240h+var_228]
0x915B35: mov     [ecx+4], eax
0x915B38: add     ecx, 0Ch
0x915B3B: mov     [edi+1A4h], ecx
0x915B41: mov     ebx, [ebp+arg_0]
0x915B44: mov     eax, [ebx+24h]
0x915B47: test    eax, eax
0x915B49: mov     ecx, esi
0x915B4B: jnz     short loc_915BA5
0x915B4D: mov     edx, [esi]
0x915B4F: call    dword ptr [edx+20h]
0x915B52: mov     edi, eax
0x915B54: cmp     edi, 0FFFFFFFFh
0x915B57: jz      loc_915C08
0x915B5D: lea     ecx, [ecx+0]
0x915B60: mov     eax, [esi]
0x915B62: lea     ecx, [esp+240h+var_210]
0x915B66: push    ecx
0x915B67: push    edi
0x915B68: mov     ecx, esi
0x915B6A: call    dword ptr [eax+28h]
0x915B6D: mov     ecx, [ebp+arg_4]
0x915B70: mov     edx, [ecx+8]
0x915B73: mov     [esp+240h+var_214], ecx
0x915B77: mov     ecx, [ebp+arg_8]
0x915B7A: push    ecx
0x915B7B: lea     ecx, [esp+244h+var_220]
0x915B7F: push    ecx
0x915B80: mov     [esp+248h+var_218], edx
0x915B84: mov     [esp+248h+var_220], eax
0x915B88: mov     [esp+248h+var_21C], edi
0x915B8C: mov     edx, [eax]
0x915B8E: push    ebx
0x915B8F: mov     ecx, eax
0x915B91: call    dword ptr [edx+18h]
0x915B94: mov     edx, [esi]
0x915B96: push    edi
0x915B97: mov     ecx, esi
0x915B99: call    dword ptr [edx+24h]
0x915B9C: mov     edi, eax
0x915B9E: cmp     edi, 0FFFFFFFFh
0x915BA1: jnz     short loc_915B60
0x915BA3: jmp     short loc_915C08
0x915BA5: mov     eax, [esi]
0x915BA7: call    dword ptr [eax+20h]
0x915BAA: mov     edi, eax
0x915BAC: cmp     edi, 0FFFFFFFFh
0x915BAF: jz      short loc_915C08
0x915BB1: mov     ecx, [ebx+24h]
0x915BB4: mov     edx, [ecx]
0x915BB6: push    edi
0x915BB7: push    esi
0x915BB8: push    ebx
0x915BB9: lea     eax, [esp+24Ch+var_224+3]
0x915BBD: push    eax
0x915BBE: call    dword ptr [edx]
0x915BC0: cmp     byte ptr [eax], 0
0x915BC3: jz      short loc_915BF9
0x915BC5: mov     edx, [esi]
0x915BC7: lea     eax, [esp+240h+var_210]
0x915BCB: push    eax
0x915BCC: push    edi
0x915BCD: mov     ecx, esi
0x915BCF: call    dword ptr [edx+28h]
0x915BD2: mov     ecx, [ebp+arg_4]
0x915BD5: mov     [esp+240h+var_214], ecx
0x915BD9: mov     ecx, [ecx+8]
0x915BDC: mov     [esp+240h+var_218], ecx
0x915BE0: mov     ecx, [ebp+arg_8]
0x915BE3: push    ecx
0x915BE4: lea     ecx, [esp+244h+var_220]
0x915BE8: push    ecx
0x915BE9: mov     [esp+248h+var_220], eax
0x915BED: mov     [esp+248h+var_21C], edi
0x915BF1: mov     edx, [eax]
0x915BF3: push    ebx
0x915BF4: mov     ecx, eax
0x915BF6: call    dword ptr [edx+18h]
0x915BF9: mov     edx, [esi]
0x915BFB: push    edi
0x915BFC: mov     ecx, esi
0x915BFE: call    dword ptr [edx+24h]
0x915C01: mov     edi, eax
0x915C03: cmp     edi, 0FFFFFFFFh
0x915C06: jnz     short loc_915BB1
0x915C08: mov     ecx, large fs:2Ch
0x915C0F: mov     edx, ds:0BA9DE4h
0x915C15: mov     eax, [ecx+edx*4]
0x915C18: mov     esi, [eax+1A4h]
0x915C1E: cmp     esi, [eax+1A8h]
0x915C24: jnb     short loc_915C4A
0x915C26: mov     esi, eax
0x915C28: mov     ecx, [esi+1A4h]
0x915C2E: mov     dword ptr [ecx], offset aEt; "Et"
0x915C34: rdtsc
0x915C36: mov     [esp+240h+var_228], eax
0x915C3A: mov     eax, [esp+240h+var_228]
0x915C3E: mov     [ecx+4], eax
0x915C41: add     ecx, 0Ch
0x915C44: mov     [esi+1A4h], ecx
0x915C4A: mov     ecx, [esp+240h+var_4]
0x915C51: call    @__security_check_cookie@4; __security_check_cookie(x)
0x915C56: pop     edi
0x915C57: pop     esi
0x915C58: pop     ebx
0x915C59: mov     esp, ebp
0x915C5B: pop     ebp
0x915C5C: retn    0Ch
