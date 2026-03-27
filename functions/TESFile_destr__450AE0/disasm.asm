0x450AE0: push    0FFFFFFFFh
0x450AE2: push    offset TESFile_destr_SEH
0x450AE7: mov     eax, large fs:0
0x450AED: push    eax
0x450AEE: push    ecx
0x450AEF: push    ebx
0x450AF0: push    ebp
0x450AF1: push    esi
0x450AF2: push    edi
0x450AF3: mov     eax, ds:0B30AACh
0x450AF8: xor     eax, esp
0x450AFA: push    eax
0x450AFB: lea     eax, [esp+24h+var_C]
0x450AFF: mov     large fs:0, eax
0x450B05: mov     esi, ecx
0x450B07: mov     [esp+24h+var_10], esi
0x450B0B: mov     [esp+24h+var_4], 1
0x450B13: call    TESFile_Close
0x450B18: lea     edi, [esi+3E0h]
0x450B1E: mov     ebx, edi
0x450B20: xor     ebp, ebp
0x450B22: cmp     ebx, ebp
0x450B24: jz      short loc_450B3C
0x450B26: mov     eax, [ebx]
0x450B28: cmp     eax, ebp
0x450B2A: jz      short loc_450B35
0x450B2C: push    eax
0x450B2D: call    FormHeapFree
0x450B32: add     esp, 4
0x450B35: mov     ebx, [ebx+4]
0x450B38: cmp     ebx, ebp
0x450B3A: jnz     short loc_450B26
0x450B3C: cmp     [edi+4], ebp
0x450B3F: jz      short loc_450B57
0x450B41: mov     eax, [edi+4]
0x450B44: mov     ebx, [eax+4]
0x450B47: push    eax
0x450B48: call    FormHeapFree
0x450B4D: add     esp, 4
0x450B50: cmp     ebx, ebp
0x450B52: mov     [edi+4], ebx
0x450B55: jnz     short loc_450B41
0x450B57: mov     [edi], ebp
0x450B59: lea     edi, [esi+3E8h]
0x450B5F: mov     ebx, edi
0x450B61: cmp     ebx, ebp
0x450B63: jz      short loc_450B7B
0x450B65: mov     eax, [ebx]
0x450B67: cmp     eax, ebp
0x450B69: jz      short loc_450B74
0x450B6B: push    eax
0x450B6C: call    FormHeapFree
0x450B71: add     esp, 4
0x450B74: mov     ebx, [ebx+4]
0x450B77: cmp     ebx, ebp
0x450B79: jnz     short loc_450B65
0x450B7B: cmp     [edi+4], ebp
0x450B7E: jz      short loc_450B96
0x450B80: mov     eax, [edi+4]
0x450B83: mov     ebx, [eax+4]
0x450B86: push    eax
0x450B87: call    FormHeapFree
0x450B8C: add     esp, 4
0x450B8F: cmp     ebx, ebp
0x450B91: mov     [edi+4], ebx
0x450B94: jnz     short loc_450B80
0x450B96: mov     [edi], ebp
0x450B98: mov     eax, [esi+224h]
0x450B9E: push    eax
0x450B9F: call    FormHeapFree
0x450BA4: mov     eax, [esi+3F4h]
0x450BAA: push    eax
0x450BAB: call    FormHeapFree
0x450BB0: add     esp, 8
0x450BB3: mov     ecx, esi
0x450BB5: mov     [esi+3F4h], ebp
0x450BBB: call    sub_451000
0x450BC0: mov     eax, [esi+40Ch]
0x450BC6: push    eax
0x450BC7: call    FormHeapFree
0x450BCC: mov     [esi+40Ch], ebp
0x450BD2: mov     [esi+412h], bp
0x450BD9: mov     [esi+410h], bp
0x450BE0: mov     eax, [esi+404h]
0x450BE6: push    eax
0x450BE7: call    FormHeapFree
0x450BEC: add     esp, 8
0x450BEF: mov     [esi+404h], ebp
0x450BF5: mov     [esi+40Ah], bp
0x450BFC: mov     [esi+408h], bp
0x450C03: mov     ecx, [esp+24h+var_C]
0x450C07: mov     large fs:0, ecx
0x450C0E: pop     ecx
0x450C0F: pop     edi
0x450C10: pop     esi
0x450C11: pop     ebp
0x450C12: pop     ebx
0x450C13: add     esp, 10h
0x450C16: retn
