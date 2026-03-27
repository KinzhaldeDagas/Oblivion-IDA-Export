0x68C280: push    0FFFFFFFFh
0x68C282: push    offset SEH_68C280
0x68C287: mov     eax, large fs:0
0x68C28D: push    eax
0x68C28E: push    ebx
0x68C28F: push    esi
0x68C290: push    edi
0x68C291: mov     eax, ds:0B30AACh
0x68C296: xor     eax, esp
0x68C298: push    eax
0x68C299: lea     eax, [esp+1Ch+var_C]
0x68C29D: mov     large fs:0, eax
0x68C2A3: mov     edi, ecx
0x68C2A5: mov     ebx, [esp+1Ch+arg_4]
0x68C2A9: test    ebx, ebx
0x68C2AB: jz      loc_68C335
0x68C2B1: lea     eax, [esp+1Ch+arg_4]
0x68C2B5: push    eax
0x68C2B6: push    ebx
0x68C2B7: call    sub_68BF60
0x68C2BC: test    al, al
0x68C2BE: jz      short loc_68C314
0x68C2C0: push    14h; Size
0x68C2C2: call    FormHeapAlloc
0x68C2C7: add     esp, 4
0x68C2CA: mov     [esp+1Ch+arg_4], eax
0x68C2CE: test    eax, eax
0x68C2D0: mov     [esp+1Ch+var_4], 0
0x68C2D8: jz      short loc_68C2E5
0x68C2DA: mov     ecx, eax
0x68C2DC: call    sub_68CB30
0x68C2E1: mov     esi, eax
0x68C2E3: jmp     short loc_68C2E7
0x68C2E5: xor     esi, esi
0x68C2E7: mov     ecx, [esp+1Ch+arg_0]
0x68C2EB: push    ecx
0x68C2EC: mov     ecx, esi
0x68C2EE: mov     [esp+20h+var_4], 0FFFFFFFFh
0x68C2F6: call    TeleportData__SetTeleportPosition
0x68C2FB: mov     ecx, ebx
0x68C2FD: call    NiDX92DBufferData__GetSurfaceData
0x68C302: push    eax
0x68C303: mov     ecx, esi
0x68C305: call    sub_6A2FD0
0x68C30A: push    esi
0x68C30B: mov     ecx, ebx
0x68C30D: call    sub_6A2FD0
0x68C312: jmp     short loc_68C385
0x68C314: mov     edx, [esp+1Ch+arg_0]
0x68C318: push    edx
0x68C319: mov     ecx, edi
0x68C31B: call    sub_68BED0
0x68C320: mov     ecx, [esp+1Ch+var_C]
0x68C324: mov     large fs:0, ecx
0x68C32B: pop     ecx
0x68C32C: pop     edi
0x68C32D: pop     esi
0x68C32E: pop     ebx
0x68C32F: add     esp, 0Ch
0x68C332: retn    8
0x68C335: push    14h; Size
0x68C337: call    FormHeapAlloc
0x68C33C: add     esp, 4
0x68C33F: mov     [esp+1Ch+arg_4], eax
0x68C343: test    eax, eax
0x68C345: mov     [esp+1Ch+var_4], 1
0x68C34D: jz      short loc_68C35A
0x68C34F: mov     ecx, eax
0x68C351: call    sub_68CB30
0x68C356: mov     esi, eax
0x68C358: jmp     short loc_68C35C
0x68C35A: xor     esi, esi
0x68C35C: mov     eax, [esp+1Ch+arg_0]
0x68C360: push    eax
0x68C361: mov     ecx, esi
0x68C363: mov     [esp+20h+var_4], 0FFFFFFFFh
0x68C36B: call    TeleportData__SetTeleportPosition
0x68C370: mov     eax, [edi]
0x68C372: test    eax, eax
0x68C374: jz      short loc_68C380
0x68C376: push    eax
0x68C377: mov     ecx, esi
0x68C379: call    sub_6A2FD0
0x68C37E: jmp     short loc_68C383
0x68C380: mov     [edi+4], esi
0x68C383: mov     [edi], esi
0x68C385: mov     eax, esi
0x68C387: mov     ecx, [esp+1Ch+var_C]
0x68C38B: mov     large fs:0, ecx
0x68C392: pop     ecx
0x68C393: pop     edi
0x68C394: pop     esi
0x68C395: pop     ebx
0x68C396: add     esp, 0Ch
0x68C399: retn    8
