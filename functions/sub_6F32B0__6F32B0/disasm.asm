0x6F32B0: sub     esp, 8
0x6F32B3: mov     edx, [esp+8+arg_8]
0x6F32B7: push    ebx
0x6F32B8: mov     ebx, [esp+0Ch+arg_0]
0x6F32BC: push    esi
0x6F32BD: mov     esi, [esp+10h+arg_4]
0x6F32C1: push    edi
0x6F32C2: mov     edi, [esp+14h+arg_8]
0x6F32C6: xor     al, al
0x6F32C8: mov     byte ptr [esp+14h+var_4], al
0x6F32CC: mov     ecx, [esp+14h+var_4]
0x6F32D0: mov     byte ptr [esp+14h+var_8], al
0x6F32D4: mov     eax, [esp+14h+var_8]
0x6F32D8: push    eax
0x6F32D9: push    ecx
0x6F32DA: push    edx
0x6F32DB: push    edi
0x6F32DC: push    esi
0x6F32DD: push    ebx
0x6F32DE: call    sub_6F2F80
0x6F32E3: sub     esi, ebx
0x6F32E5: mov     eax, 2AAAAAABh
0x6F32EA: imul    esi
0x6F32EC: sar     edx, 3
0x6F32EF: mov     eax, edx
0x6F32F1: shr     eax, 1Fh
0x6F32F4: add     eax, edx
0x6F32F6: lea     eax, [eax+eax*2]
0x6F32F9: shl     eax, 4
0x6F32FC: add     esp, 18h
0x6F32FF: mov     ecx, eax
0x6F3301: mov     eax, edi
0x6F3303: pop     edi
0x6F3304: pop     esi
0x6F3305: sub     eax, ecx
0x6F3307: pop     ebx
0x6F3308: add     esp, 8
0x6F330B: retn
