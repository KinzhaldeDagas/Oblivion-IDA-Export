0x71D960: push    ecx
0x71D961: mov     eax, [esp+4+arg_4]
0x71D965: test    eax, eax
0x71D967: push    esi
0x71D968: mov     esi, [esp+8+arg_C]
0x71D96C: jbe     loc_71DA1D
0x71D972: mov     ecx, [esp+8+arg_0]
0x71D976: mov     edx, [esp+8+arg_18]
0x71D97A: push    ebx
0x71D97B: push    ebp
0x71D97C: push    edi
0x71D97D: mov     [esp+14h+var_4], eax
0x71D981: mov     eax, [esp+14h+arg_14]
0x71D985: mov     edi, 1
0x71D98A: lea     ebx, [ebx+0]
0x71D990: test    ecx, ecx
0x71D992: jbe     short loc_71DA10
0x71D994: mov     [esp+14h+arg_4], ecx
0x71D998: mov     cl, [edx]
0x71D99A: movzx   ebx, byte ptr [edx+edi]
0x71D99E: add     edx, edi
0x71D9A0: add     edx, edi
0x71D9A2: mov     byte ptr [esp+14h+arg_C], bl
0x71D9A6: mov     bl, [edx]
0x71D9A8: movzx   ebp, byte ptr [esp+14h+arg_C]
0x71D9AD: add     edx, edi
0x71D9AF: movzx   edi, cl
0x71D9B2: movzx   ecx, byte ptr [eax+14h]
0x71D9B6: shr     edi, cl
0x71D9B8: movzx   ecx, byte ptr [eax+10h]
0x71D9BC: shl     edi, cl
0x71D9BE: movzx   ecx, byte ptr [eax+15h]
0x71D9C2: and     edi, [eax]
0x71D9C4: shr     ebp, cl
0x71D9C6: movzx   ecx, byte ptr [eax+11h]
0x71D9CA: shl     ebp, cl
0x71D9CC: movzx   ecx, byte ptr [eax+16h]
0x71D9D0: and     ebp, [eax+4]
0x71D9D3: movzx   ebx, bl
0x71D9D6: shr     ebx, cl
0x71D9D8: movzx   ecx, byte ptr [eax+12h]
0x71D9DC: shl     ebx, cl
0x71D9DE: movzx   ecx, byte ptr [eax+17h]
0x71D9E2: and     ebx, [eax+8]
0x71D9E5: or      edi, ebp
0x71D9E7: or      edi, ebx
0x71D9E9: mov     ebx, 0FFh
0x71D9EE: shr     ebx, cl
0x71D9F0: movzx   ecx, byte ptr [eax+13h]
0x71D9F4: shl     ebx, cl
0x71D9F6: add     esi, 4
0x71D9F9: and     ebx, [eax+0Ch]
0x71D9FC: or      edi, ebx
0x71D9FE: mov     [esi-4], edi
0x71DA01: mov     edi, 1
0x71DA06: sub     [esp+14h+arg_4], edi
0x71DA0A: jnz     short loc_71D998
0x71DA0C: mov     ecx, [esp+14h+arg_0]
0x71DA10: sub     [esp+14h+var_4], edi
0x71DA14: jnz     loc_71D990
0x71DA1A: pop     edi
0x71DA1B: pop     ebp
0x71DA1C: pop     ebx
0x71DA1D: pop     esi
0x71DA1E: pop     ecx
0x71DA1F: retn
