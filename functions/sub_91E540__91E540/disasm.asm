0x91E540: sub     esp, 8
0x91E543: push    ebx
0x91E544: mov     ebx, large fs:2Ch
0x91E54B: push    ebp
0x91E54C: mov     ebp, ecx
0x91E54E: mov     ecx, ds:0BA9DE4h
0x91E554: mov     eax, [ebx+ecx*4]
0x91E557: mov     edx, [eax+1A4h]
0x91E55D: push    esi
0x91E55E: cmp     edx, [eax+1A8h]
0x91E564: jnb     short loc_91E58A
0x91E566: mov     esi, eax
0x91E568: mov     ecx, [esi+1A4h]
0x91E56E: mov     dword ptr [ecx], offset aTthkconstraint; "TthkConstraintViewer"
0x91E574: rdtsc
0x91E576: mov     [esp+14h+var_4], eax
0x91E57A: mov     eax, [esp+14h+var_4]
0x91E57E: mov     [ecx+4], eax
0x91E581: add     ecx, 0Ch
0x91E584: mov     [esi+1A4h], ecx
0x91E58A: mov     edx, [esp+14h+arg_0]
0x91E58E: mov     eax, [edx+3Ch]
0x91E591: push    edi
0x91E592: xor     edi, edi
0x91E594: test    eax, eax
0x91E596: mov     [esp+18h+var_4], edi
0x91E59A: jle     loc_91E622
0x91E5A0: mov     eax, [edx+38h]
0x91E5A3: mov     esi, [eax+edi*4]
0x91E5A6: mov     ebx, [esi+38h]
0x91E5A9: lea     eax, [eax+edi*4]
0x91E5AC: xor     ecx, ecx
0x91E5AE: test    ebx, ebx
0x91E5B0: mov     [esp+18h+var_8], ecx
0x91E5B4: jle     short loc_91E60F
0x91E5B6: mov     eax, [eax]
0x91E5B8: mov     eax, [eax+34h]
0x91E5BB: mov     esi, [eax+ecx*4]
0x91E5BE: mov     eax, [esi+6Ch]
0x91E5C1: xor     ebx, ebx
0x91E5C3: test    eax, eax
0x91E5C5: jle     short loc_91E5FA
0x91E5C7: xor     edi, edi
0x91E5C9: lea     esp, [esp+0]
0x91E5D0: mov     ecx, [ebp-10h]
0x91E5D3: mov     edx, [esi+68h]
0x91E5D6: mov     eax, [edi+edx]
0x91E5D9: push    ecx
0x91E5DA: push    eax
0x91E5DB: lea     ecx, [ebp-28h]
0x91E5DE: call    sub_91E120
0x91E5E3: mov     eax, [esi+6Ch]
0x91E5E6: inc     ebx
0x91E5E7: add     edi, 1Ch
0x91E5EA: cmp     ebx, eax
0x91E5EC: jl      short loc_91E5D0
0x91E5EE: mov     ecx, [esp+18h+var_8]
0x91E5F2: mov     edi, [esp+18h+var_4]
0x91E5F6: mov     edx, [esp+18h+arg_0]
0x91E5FA: mov     eax, [edx+38h]
0x91E5FD: mov     esi, [eax+edi*4]
0x91E600: mov     ebx, [esi+38h]
0x91E603: lea     eax, [eax+edi*4]
0x91E606: inc     ecx
0x91E607: cmp     ecx, ebx
0x91E609: mov     [esp+18h+var_8], ecx
0x91E60D: jl      short loc_91E5B6
0x91E60F: mov     eax, [edx+3Ch]
0x91E612: inc     edi
0x91E613: cmp     edi, eax
0x91E615: mov     [esp+18h+var_4], edi
0x91E619: jl      short loc_91E5A0
0x91E61B: mov     ebx, large fs:2Ch
0x91E622: mov     eax, [edx+48h]
0x91E625: xor     edi, edi
0x91E627: test    eax, eax
0x91E629: mov     [esp+18h+var_8], edi
0x91E62D: jle     loc_91E6B5
0x91E633: mov     eax, [edx+44h]
0x91E636: mov     esi, [eax+edi*4]
0x91E639: mov     ebx, [esi+38h]
0x91E63C: lea     eax, [eax+edi*4]
0x91E63F: xor     ecx, ecx
0x91E641: test    ebx, ebx
0x91E643: mov     [esp+18h+var_4], ecx
0x91E647: jle     short loc_91E6A2
0x91E649: lea     esp, [esp+0]
0x91E650: mov     eax, [eax]
0x91E652: mov     eax, [eax+34h]
0x91E655: mov     esi, [eax+ecx*4]
0x91E658: mov     eax, [esi+6Ch]
0x91E65B: xor     ebx, ebx
0x91E65D: test    eax, eax
0x91E65F: jle     short loc_91E68D
0x91E661: xor     edi, edi
0x91E663: mov     ecx, [ebp-10h]
0x91E666: mov     edx, [esi+68h]
0x91E669: mov     eax, [edi+edx]
0x91E66C: push    ecx
0x91E66D: push    eax
0x91E66E: lea     ecx, [ebp-28h]
0x91E671: call    sub_91E120
0x91E676: mov     eax, [esi+6Ch]
0x91E679: inc     ebx
0x91E67A: add     edi, 1Ch
0x91E67D: cmp     ebx, eax
0x91E67F: jl      short loc_91E663
0x91E681: mov     ecx, [esp+18h+var_4]
0x91E685: mov     edi, [esp+18h+var_8]
0x91E689: mov     edx, [esp+18h+arg_0]
0x91E68D: mov     eax, [edx+44h]
0x91E690: mov     esi, [eax+edi*4]
0x91E693: mov     ebx, [esi+38h]
0x91E696: lea     eax, [eax+edi*4]
0x91E699: inc     ecx
0x91E69A: cmp     ecx, ebx
0x91E69C: mov     [esp+18h+var_4], ecx
0x91E6A0: jl      short loc_91E650
0x91E6A2: mov     eax, [edx+48h]
0x91E6A5: inc     edi
0x91E6A6: cmp     edi, eax
0x91E6A8: mov     [esp+18h+var_8], edi
0x91E6AC: jl      short loc_91E633
0x91E6AE: mov     ebx, large fs:2Ch
0x91E6B5: mov     ecx, ds:0BA9DE4h
0x91E6BB: mov     eax, [ebx+ecx*4]
0x91E6BE: mov     edx, [eax+1A4h]
0x91E6C4: cmp     edx, [eax+1A8h]
0x91E6CA: pop     edi
0x91E6CB: jnb     short loc_91E6F1
0x91E6CD: mov     esi, eax
0x91E6CF: mov     ecx, [esi+1A4h]
0x91E6D5: mov     dword ptr [ecx], offset aEt; "Et"
0x91E6DB: rdtsc
0x91E6DD: mov     [esp+14h+arg_0], eax
0x91E6E1: mov     eax, [esp+14h+arg_0]
0x91E6E5: mov     [ecx+4], eax
0x91E6E8: add     ecx, 0Ch
0x91E6EB: mov     [esi+1A4h], ecx
0x91E6F1: pop     esi
0x91E6F2: pop     ebp
0x91E6F3: pop     ebx
0x91E6F4: add     esp, 8
0x91E6F7: retn    8
