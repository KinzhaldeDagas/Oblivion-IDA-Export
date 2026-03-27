0x850A40: push    0FFFFFFFFh
0x850A42: push    offset SEH_880560
0x850A47: mov     eax, large fs:0
0x850A4D: push    eax
0x850A4E: push    ebx
0x850A4F: push    ebp
0x850A50: push    esi
0x850A51: push    edi
0x850A52: mov     eax, ds:0B30AACh
0x850A57: xor     eax, esp
0x850A59: push    eax
0x850A5A: lea     eax, [esp+20h+var_C]
0x850A5E: mov     large fs:0, eax
0x850A64: mov     edi, ecx
0x850A66: mov     eax, [esp+20h+arg_8]
0x850A6A: mov     eax, [eax+10h]
0x850A6D: mov     esi, ds:0B45C1Ch
0x850A73: push    eax
0x850A74: call    sub_848DA0
0x850A79: mov     ecx, [esi+24h]
0x850A7C: mov     ebx, [ecx]
0x850A7E: mov     ecx, [esp+20h+arg_C]
0x850A82: mov     edx, [ecx]
0x850A84: mov     eax, [edx+90h]
0x850A8A: push    0
0x850A8C: mov     [esp+24h+arg_8], ebx
0x850A90: call    eax
0x850A92: mov     ebx, [ebx+4]
0x850A95: mov     ebp, eax
0x850A97: cmp     ebx, ebp
0x850A99: jz      short loc_850AD2
0x850A9B: test    ebx, ebx
0x850A9D: jz      short loc_850ABB
0x850A9F: lea     ecx, [ebx+4]
0x850AA2: push    ecx; lpAddend
0x850AA3: call    dword ptr ds:0A2807Ch
0x850AA9: test    eax, eax
0x850AAB: jnz     short loc_850ABB
0x850AAD: test    ebx, ebx
0x850AAF: jz      short loc_850ABB
0x850AB1: mov     edx, [ebx]
0x850AB3: mov     eax, [edx]
0x850AB5: push    1
0x850AB7: mov     ecx, ebx
0x850AB9: call    eax
0x850ABB: test    ebp, ebp
0x850ABD: mov     ebx, [esp+20h+arg_8]
0x850AC1: mov     [ebx+4], ebp
0x850AC4: jz      short loc_850AD6
0x850AC6: add     ebp, 4
0x850AC9: push    ebp; lpAddend
0x850ACA: call    dword ptr ds:0A28078h
0x850AD0: jmp     short loc_850AD6
0x850AD2: mov     ebx, [esp+20h+arg_8]
0x850AD6: test    ebx, ebx
0x850AD8: jz      short loc_850AF6
0x850ADA: cmp     byte ptr ds:0B42CDDh, 0
0x850AE1: jz      short loc_850AF6
0x850AE3: mov     ecx, [esp+20h+arg_C]
0x850AE7: mov     edx, [ecx]
0x850AE9: mov     eax, [edx+78h]
0x850AEC: call    eax
0x850AEE: push    eax
0x850AEF: mov     ecx, ebx
0x850AF1: call    sub_7715E0
0x850AF6: mov     ebx, 1
0x850AFB: add     [esi+60h], ebx
0x850AFE: mov     [esp+20h+arg_C], esi
0x850B02: mov     edx, [edi+38h]
0x850B05: lea     ecx, [esp+20h+arg_C]
0x850B09: push    ecx
0x850B0A: push    edx
0x850B0B: lea     ecx, [edi+40h]
0x850B0E: mov     [esp+28h+var_4], 0
0x850B16: call    sub_76CE40
0x850B1B: or      eax, 0FFFFFFFFh
0x850B1E: add     [esi+60h], eax
0x850B21: mov     [esp+20h+var_4], eax
0x850B25: jnz     short loc_850B2E
0x850B27: mov     ecx, esi
0x850B29: call    sub_7604D0
0x850B2E: add     [edi+38h], ebx
0x850B31: mov     ecx, dword ptr [esp+20h+var_C]
0x850B35: mov     large fs:0, ecx
0x850B3C: pop     ecx
0x850B3D: pop     edi
0x850B3E: pop     esi
0x850B3F: pop     ebp
0x850B40: pop     ebx
0x850B41: add     esp, 0Ch
0x850B44: retn    10h
