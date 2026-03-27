0x85C250: push    0FFFFFFFFh
0x85C252: push    offset SEH_85E160
0x85C257: mov     eax, large fs:0
0x85C25D: push    eax
0x85C25E: push    ebx
0x85C25F: push    ebp
0x85C260: push    esi
0x85C261: push    edi
0x85C262: mov     eax, ds:0B30AACh
0x85C267: xor     eax, esp
0x85C269: push    eax
0x85C26A: lea     eax, [esp+20h+var_C]
0x85C26E: mov     large fs:0, eax
0x85C274: mov     edi, ecx
0x85C276: mov     eax, ds:0B46538h
0x85C27B: mov     ecx, ds:0B4653Ch
0x85C281: mov     edx, ds:0B46540h
0x85C287: mov     esi, ds:0B4779Ch
0x85C28D: mov     ds:0B46528h, eax
0x85C292: mov     eax, ds:0B46544h
0x85C297: mov     ds:0B4652Ch, ecx
0x85C29D: mov     ecx, [esp+20h+arg_8]
0x85C2A1: mov     ds:0B46530h, edx
0x85C2A7: mov     ds:0B46534h, eax
0x85C2AC: mov     eax, [ecx+0Ch]
0x85C2AF: push    eax
0x85C2B0: mov     ecx, edi
0x85C2B2: call    sub_848E50
0x85C2B7: mov     edx, [esi+24h]
0x85C2BA: mov     eax, [esp+20h+arg_C]
0x85C2BE: mov     ebx, [edx]
0x85C2C0: push    0
0x85C2C2: push    eax
0x85C2C3: mov     ecx, edi
0x85C2C5: mov     [esp+28h+arg_8], ebx
0x85C2C9: call    sub_848FD0
0x85C2CE: mov     ebx, [ebx+4]
0x85C2D1: mov     ebp, eax
0x85C2D3: cmp     ebx, ebp
0x85C2D5: jz      short loc_85C30C
0x85C2D7: test    ebx, ebx
0x85C2D9: jz      short loc_85C2F7
0x85C2DB: lea     ecx, [ebx+4]
0x85C2DE: push    ecx; lpAddend
0x85C2DF: call    dword ptr ds:0A2807Ch
0x85C2E5: test    eax, eax
0x85C2E7: jnz     short loc_85C2F7
0x85C2E9: test    ebx, ebx
0x85C2EB: jz      short loc_85C2F7
0x85C2ED: mov     edx, [ebx]
0x85C2EF: mov     eax, [edx]
0x85C2F1: push    1
0x85C2F3: mov     ecx, ebx
0x85C2F5: call    eax
0x85C2F7: test    ebp, ebp
0x85C2F9: mov     ecx, [esp+20h+arg_8]
0x85C2FD: mov     [ecx+4], ebp
0x85C300: jz      short loc_85C30C
0x85C302: add     ebp, 4
0x85C305: push    ebp; lpAddend
0x85C306: call    dword ptr ds:0A28078h
0x85C30C: cmp     byte ptr [esp+20h+arg_10], 0
0x85C311: jnz     short loc_85C34E
0x85C313: mov     ebx, 1
0x85C318: add     [esi+60h], ebx
0x85C31B: mov     [esp+20h+arg_10], esi
0x85C31F: mov     eax, [edi+38h]
0x85C322: lea     edx, [esp+20h+arg_10]
0x85C326: push    edx
0x85C327: push    eax
0x85C328: lea     ecx, [edi+40h]
0x85C32B: mov     [esp+28h+var_4], 0
0x85C333: call    sub_76CE40
0x85C338: or      eax, 0FFFFFFFFh
0x85C33B: add     [esi+60h], eax
0x85C33E: mov     [esp+20h+var_4], eax
0x85C342: jnz     short loc_85C34B
0x85C344: mov     ecx, esi
0x85C346: call    sub_7604D0
0x85C34B: add     [edi+38h], ebx
0x85C34E: mov     ecx, dword ptr [esp+20h+var_C]
0x85C352: mov     large fs:0, ecx
0x85C359: pop     ecx
0x85C35A: pop     edi
0x85C35B: pop     esi
0x85C35C: pop     ebp
0x85C35D: pop     ebx
0x85C35E: add     esp, 0Ch
0x85C361: retn    14h
