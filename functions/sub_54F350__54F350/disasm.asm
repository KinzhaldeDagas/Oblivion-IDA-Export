0x54F350: push    0FFFFFFFFh
0x54F352: push    offset SEH_787830
0x54F357: mov     eax, large fs:0
0x54F35D: push    eax
0x54F35E: push    ebx
0x54F35F: push    esi
0x54F360: push    edi
0x54F361: mov     eax, ds:0B30AACh
0x54F366: xor     eax, esp
0x54F368: push    eax
0x54F369: lea     eax, [esp+1Ch+var_C]
0x54F36D: mov     large fs:0, eax
0x54F373: mov     edi, ecx
0x54F375: mov     ebx, [esp+1Ch+arg_0]
0x54F379: test    ebx, ebx
0x54F37B: jnz     short loc_54F394
0x54F37D: xor     al, al
0x54F37F: mov     ecx, [esp+1Ch+var_C]
0x54F383: mov     large fs:0, ecx
0x54F38A: pop     ecx
0x54F38B: pop     edi
0x54F38C: pop     esi
0x54F38D: pop     ebx
0x54F38E: add     esp, 0Ch
0x54F391: retn    4
0x54F394: mov     eax, [edi]
0x54F396: mov     edx, [eax+0Ch]
0x54F399: call    edx
0x54F39B: fcomp   dword ptr ds:0A2FAA8h
0x54F3A1: fnstsw  ax
0x54F3A3: test    ah, 5
0x54F3A6: jnp     short loc_54F37D
0x54F3A8: cmp     dword ptr [ebx+0Ch], 0
0x54F3AC: jz      short loc_54F3DD
0x54F3AE: mov     eax, [ebx+8]
0x54F3B1: mov     esi, [eax+8]
0x54F3B4: test    esi, esi
0x54F3B6: jz      short loc_54F37D
0x54F3B8: mov     edx, [esi]
0x54F3BA: mov     eax, [edx+40h]
0x54F3BD: mov     ecx, esi
0x54F3BF: call    eax
0x54F3C1: test    al, al
0x54F3C3: jz      short loc_54F37D
0x54F3C5: mov     edx, [esi]
0x54F3C7: mov     eax, [edx+4]
0x54F3CA: mov     ecx, esi
0x54F3CC: call    eax
0x54F3CE: mov     edx, [edi]
0x54F3D0: mov     esi, eax
0x54F3D2: mov     eax, [edx+4]
0x54F3D5: mov     ecx, edi
0x54F3D7: call    eax
0x54F3D9: cmp     esi, eax
0x54F3DB: jnz     short loc_54F37D
0x54F3DD: push    14h; Size
0x54F3DF: call    FormHeapAlloc
0x54F3E4: add     esp, 4
0x54F3E7: mov     [esp+1Ch+arg_0], eax
0x54F3EB: test    eax, eax
0x54F3ED: mov     [esp+1Ch+var_4], 0
0x54F3F5: jz      short loc_54F401
0x54F3F7: push    edi
0x54F3F8: mov     ecx, eax
0x54F3FA: call    sub_54EAA0
0x54F3FF: jmp     short loc_54F403
0x54F401: xor     eax, eax
0x54F403: lea     ecx, [esp+1Ch+arg_0]
0x54F407: push    ecx
0x54F408: mov     ecx, ebx
0x54F40A: mov     [esp+20h+var_4], 0FFFFFFFFh
0x54F412: mov     [esp+20h+arg_0], eax
0x54F416: call    sub_5B1E20
0x54F41B: mov     al, 1
0x54F41D: mov     ecx, [esp+1Ch+var_C]
0x54F421: mov     large fs:0, ecx
0x54F428: pop     ecx
0x54F429: pop     edi
0x54F42A: pop     esi
0x54F42B: pop     ebx
0x54F42C: add     esp, 0Ch
0x54F42F: retn    4
